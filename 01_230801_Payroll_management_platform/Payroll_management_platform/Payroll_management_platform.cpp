#include "Payroll_management_platform.h"

Payroll_management_platform::Payroll_management_platform(QWidget *parent)
    : QWidget(parent)
{
	ui.setupUi(this);
	//resetGrid(ui.send);
	QApplication::setAttribute(Qt::AA_UseOpenGLES);

	init_json_data();

	ui.c_s->setValidator(new QRegExpValidator(QRegExp("[0-9]+$")));
	ui.r->setValidator(new QRegExpValidator(QRegExp("[0-9]+$")));
	ui.f_e->setValidator(new QRegExpValidator(QRegExp("[0-9]+$")));
	ui.s_i_f->setValidator(new QRegExpValidator(QRegExp("[0-9]+$")));
	ui.c_m->setValidator(new QRegExpValidator(QRegExp("[0-9]+$")));
	ui.benjin_value->setValidator(new QRegExpValidator(QRegExp("[0-9]+$")));

	str = QString::number(compulsory_savings);
	ui.c_s->setText(str);
	str = QString::number(reserves);
	ui.r->setText(str);
	str = QString::number(fixed_expenses);
	ui.f_e->setText(str);
	str = QString::number(self_investment_funds);
	ui.s_i_f->setText(str);
	str = QString::number(consumption_money);
	ui.c_m->setText(str);

	//connect(ui.setting, SIGNAL(clicked()), this, SLOT(set()));
	connect(ui.benjin_value,SIGNAL(editingFinished()), this, SLOT(set_benjin()));
	connect(ui.submit,&QPushButton::clicked,this,[=]()
	{
	 QString outcome;
	 ui.c_s_value->setText(outcome.setNum(calculating(ui.c_s)));
	 ui.r_value->setText(outcome.setNum(calculating(ui.r)));
	 ui.f_e_value->setText(outcome.setNum(calculating(ui.f_e)));
	 ui.s_i_f_value->setText(outcome.setNum(calculating(ui.s_i_f)));
	 ui.c_m_value->setText(outcome.setNum(calculating(ui.c_m)));
	 ui.benjin->setText(outcome.setNum(get_QLineEdit(ui.c_m) 
		 + get_QLineEdit(ui.s_i_f) + get_QLineEdit(ui.f_e)
		 + get_QLineEdit(ui.r)+ get_QLineEdit(ui.c_s)));
	 submit();
	}
	);
}

Payroll_management_platform::~Payroll_management_platform()
{
	delete &ui;
}
void Payroll_management_platform::set_benjin()
{
	bool ok;
	QString temp;
	temp = ui.benjin_value->text();
	benjin = temp.toInt(&ok);
	/*qDebug() << benjin;*/
}

//获取比例

int Payroll_management_platform::calculating(QLineEdit* q)
{
	bool ok;
	QString temp;
	temp = q->text();
	int x = temp.toInt(&ok);
	int y = (benjin * x)/100;
	return y;
}

int  Payroll_management_platform::get_QLineEdit(QLineEdit* q)
{
	bool ok;
	QString temp;
	temp = q->text();
	return temp.toInt(&ok);
}



//初始化json数据
void Payroll_management_platform::init_json_data()
{
	QByteArray val;
	QFile file;
	QString path;
	QDir dir;
	path = dir.currentPath() + "/config.json";
	file.setFileName(path);//加载文件
	bool open = file.open(QIODevice::ReadOnly | QIODevice::Text);
	val = file.readAll();
	file.close();

	QJsonParseError jsoneror;
	QJsonDocument jsonDoc = QJsonDocument::fromJson(val, &jsoneror);
	if (!jsonDoc.isNull() && (jsoneror.error == QJsonParseError::NoError))
	{
		if (jsonDoc.isObject())
		{
			QJsonObject obj = jsonDoc.object();
			qDebug() << obj;

			if (obj.contains("compulsory_savings")) {
				QJsonValue value_compulsory_saving = obj.value("compulsory_savings");
				if (value_compulsory_saving.isDouble()) {
					compulsory_savings = value_compulsory_saving.toVariant().toInt();
					qDebug() << "compulsory_savings : " << compulsory_savings;
				}
			}
			if (obj.contains("reserves")) {
				QJsonValue value_reserves = obj.value("reserves");
				if (value_reserves.isDouble()) {
					reserves = value_reserves.toVariant().toInt();
					qDebug() << "reserves : " << reserves;
				}
			}
			if (obj.contains("fixed_expenses")) {
				QJsonValue value_fixed_expenses = obj.value("fixed_expenses");
				if (value_fixed_expenses.isDouble()) {
					fixed_expenses = value_fixed_expenses.toVariant().toInt();
					qDebug() << "fixed_expenses : " << fixed_expenses;
				}
			}
			if (obj.contains("self_investment_funds")) {
				QJsonValue value_self_investment_funds = obj.value("self_investment_funds");
				if (value_self_investment_funds.isDouble()) {
					self_investment_funds = value_self_investment_funds.toVariant().toInt();
					qDebug() << "self_investment_funds : " << self_investment_funds;
				}
			}
			if (obj.contains("consumption_money")) {
				QJsonValue value_consumption_money = obj.value("consumption_money");
				if (value_consumption_money.isDouble()) {
					consumption_money = value_consumption_money.toVariant().toInt();
					qDebug() << "consumption_money : " << consumption_money;
				}
			}


		}
	}

	


}

//保存json数据
void Payroll_management_platform::submit()
{
	QByteArray val;
	QFile file_1;
	QString path;
	QDir dir;
	path = dir.currentPath() + "/config.json";
	file_1.setFileName(path);
	bool open_1 = file_1.open(QIODevice::ReadWrite);
	val = file_1.readAll();
	file_1.close();

	// 删除当前文件

	if (QFile::exists("config.json"))
	{
		QFile::remove("config.json");
	}

	QJsonParseError jsoneror;
	QJsonDocument jsonDoc = QJsonDocument::fromJson(val, &jsoneror);

	if (!jsonDoc.isNull() && (jsoneror.error == QJsonParseError::NoError))
	{
		if (jsonDoc.isObject())
		{
			QFile newFile;
			newFile.setFileName(path);
			if (!newFile.open(QIODevice::WriteOnly)) {
				qCritical() << "jsonFile open error";
			}
			QJsonObject obj = jsonDoc.object();
			obj["compulsory_savings"] = compulsory_savings;//重新赋值
			obj["reserves"] = reserves;
			obj["fixed_expenses"] = fixed_expenses;
			obj["self_investment_funds"] = self_investment_funds;
			obj["consumption_money"] = consumption_money;
			jsonDoc.setObject(obj);
			newFile.write(jsonDoc.toJson());//写入文件
			newFile.close();
			qDebug() << "OK!" << "\n";
		}

	}
}