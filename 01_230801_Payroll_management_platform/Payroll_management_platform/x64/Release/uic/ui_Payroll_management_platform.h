/********************************************************************************
** Form generated from reading UI file 'Payroll_management_platform.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYROLL_MANAGEMENT_PLATFORM_H
#define UI_PAYROLL_MANAGEMENT_PLATFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Payroll_management_platformClass
{
public:
    QWidget *widget;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *benjin_value;
    QLineEdit *c_s_value;
    QLineEdit *r_value;
    QLineEdit *f_e_value;
    QLineEdit *s_i_f_value;
    QLineEdit *c_m_value;
    QWidget *verticalWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QWidget *verticalWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *benjin;
    QLineEdit *c_s;
    QLineEdit *r;
    QLineEdit *f_e;
    QLineEdit *s_i_f;
    QLineEdit *c_m;
    QLabel *label_8;
    QWidget *verticalWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_16;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_18;
    QPushButton *submit;

    void setupUi(QWidget *Payroll_management_platformClass)
    {
        if (Payroll_management_platformClass->objectName().isEmpty())
            Payroll_management_platformClass->setObjectName(QString::fromUtf8("Payroll_management_platformClass"));
        Payroll_management_platformClass->resize(730, 850);
        Payroll_management_platformClass->setContextMenuPolicy(Qt::PreventContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Payroll_management_platform/Resources/money.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Payroll_management_platformClass->setWindowIcon(icon);
        widget = new QWidget(Payroll_management_platformClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 730, 850));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setStyleSheet(QString::fromUtf8("border-image: url(:/Payroll_management_platform/Resources/\350\256\276\347\275\256\347\225\214\351\235\242\350\203\214\346\231\257\345\233\276 .jpg);"));
        verticalWidget = new QWidget(widget);
        verticalWidget->setObjectName(QString::fromUtf8("verticalWidget"));
        verticalWidget->setGeometry(QRect(380, 125, 291, 611));
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        benjin_value = new QLineEdit(verticalWidget);
        benjin_value->setObjectName(QString::fromUtf8("benjin_value"));
        benjin_value->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(benjin_value->sizePolicy().hasHeightForWidth());
        benjin_value->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font.setPointSize(20);
        benjin_value->setFont(font);
        benjin_value->setLayoutDirection(Qt::LeftToRight);
        benjin_value->setAlignment(Qt::AlignCenter);
        benjin_value->setReadOnly(false);

        verticalLayout->addWidget(benjin_value);

        c_s_value = new QLineEdit(verticalWidget);
        c_s_value->setObjectName(QString::fromUtf8("c_s_value"));
        sizePolicy1.setHeightForWidth(c_s_value->sizePolicy().hasHeightForWidth());
        c_s_value->setSizePolicy(sizePolicy1);
        c_s_value->setFont(font);
        c_s_value->setLayoutDirection(Qt::LeftToRight);
        c_s_value->setAlignment(Qt::AlignCenter);
        c_s_value->setReadOnly(true);

        verticalLayout->addWidget(c_s_value);

        r_value = new QLineEdit(verticalWidget);
        r_value->setObjectName(QString::fromUtf8("r_value"));
        sizePolicy1.setHeightForWidth(r_value->sizePolicy().hasHeightForWidth());
        r_value->setSizePolicy(sizePolicy1);
        r_value->setFont(font);
        r_value->setLayoutDirection(Qt::LeftToRight);
        r_value->setAlignment(Qt::AlignCenter);
        r_value->setReadOnly(true);

        verticalLayout->addWidget(r_value);

        f_e_value = new QLineEdit(verticalWidget);
        f_e_value->setObjectName(QString::fromUtf8("f_e_value"));
        sizePolicy1.setHeightForWidth(f_e_value->sizePolicy().hasHeightForWidth());
        f_e_value->setSizePolicy(sizePolicy1);
        f_e_value->setFont(font);
        f_e_value->setLayoutDirection(Qt::LeftToRight);
        f_e_value->setAlignment(Qt::AlignCenter);
        f_e_value->setReadOnly(true);

        verticalLayout->addWidget(f_e_value);

        s_i_f_value = new QLineEdit(verticalWidget);
        s_i_f_value->setObjectName(QString::fromUtf8("s_i_f_value"));
        sizePolicy1.setHeightForWidth(s_i_f_value->sizePolicy().hasHeightForWidth());
        s_i_f_value->setSizePolicy(sizePolicy1);
        s_i_f_value->setFont(font);
        s_i_f_value->setLayoutDirection(Qt::LeftToRight);
        s_i_f_value->setAlignment(Qt::AlignCenter);
        s_i_f_value->setReadOnly(true);

        verticalLayout->addWidget(s_i_f_value);

        c_m_value = new QLineEdit(verticalWidget);
        c_m_value->setObjectName(QString::fromUtf8("c_m_value"));
        sizePolicy1.setHeightForWidth(c_m_value->sizePolicy().hasHeightForWidth());
        c_m_value->setSizePolicy(sizePolicy1);
        c_m_value->setFont(font);
        c_m_value->setLayoutDirection(Qt::LeftToRight);
        c_m_value->setAlignment(Qt::AlignCenter);
        c_m_value->setReadOnly(true);

        verticalLayout->addWidget(c_m_value);

        verticalWidget_2 = new QWidget(widget);
        verticalWidget_2->setObjectName(QString::fromUtf8("verticalWidget_2"));
        verticalWidget_2->setGeometry(QRect(60, 125, 151, 611));
        QFont font1;
        font1.setPointSize(16);
        verticalWidget_2->setFont(font1);
        verticalLayout_2 = new QVBoxLayout(verticalWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(verticalWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font2.setPointSize(16);
        label_3->setFont(font2);

        verticalLayout_2->addWidget(label_3);

        label_2 = new QLabel(verticalWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font2);

        verticalLayout_2->addWidget(label_2);

        label = new QLabel(verticalWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setFont(font2);

        verticalLayout_2->addWidget(label);

        label_4 = new QLabel(verticalWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font2);

        verticalLayout_2->addWidget(label_4);

        label_6 = new QLabel(verticalWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setFont(font2);

        verticalLayout_2->addWidget(label_6);

        label_5 = new QLabel(verticalWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setFont(font2);

        verticalLayout_2->addWidget(label_5);

        verticalWidget_3 = new QWidget(widget);
        verticalWidget_3->setObjectName(QString::fromUtf8("verticalWidget_3"));
        verticalWidget_3->setGeometry(QRect(230, 125, 71, 611));
        verticalLayout_3 = new QVBoxLayout(verticalWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(9, 9, 0, 9);
        benjin = new QLineEdit(verticalWidget_3);
        benjin->setObjectName(QString::fromUtf8("benjin"));
        sizePolicy1.setHeightForWidth(benjin->sizePolicy().hasHeightForWidth());
        benjin->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font3.setPointSize(14);
        benjin->setFont(font3);
        benjin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        benjin->setReadOnly(false);

        verticalLayout_3->addWidget(benjin);

        c_s = new QLineEdit(verticalWidget_3);
        c_s->setObjectName(QString::fromUtf8("c_s"));
        sizePolicy1.setHeightForWidth(c_s->sizePolicy().hasHeightForWidth());
        c_s->setSizePolicy(sizePolicy1);
        c_s->setFont(font3);
        c_s->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(c_s);

        r = new QLineEdit(verticalWidget_3);
        r->setObjectName(QString::fromUtf8("r"));
        sizePolicy1.setHeightForWidth(r->sizePolicy().hasHeightForWidth());
        r->setSizePolicy(sizePolicy1);
        r->setFont(font3);
        r->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(r);

        f_e = new QLineEdit(verticalWidget_3);
        f_e->setObjectName(QString::fromUtf8("f_e"));
        sizePolicy1.setHeightForWidth(f_e->sizePolicy().hasHeightForWidth());
        f_e->setSizePolicy(sizePolicy1);
        f_e->setFont(font3);
        f_e->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(f_e);

        s_i_f = new QLineEdit(verticalWidget_3);
        s_i_f->setObjectName(QString::fromUtf8("s_i_f"));
        sizePolicy1.setHeightForWidth(s_i_f->sizePolicy().hasHeightForWidth());
        s_i_f->setSizePolicy(sizePolicy1);
        s_i_f->setFont(font3);
        s_i_f->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(s_i_f);

        c_m = new QLineEdit(verticalWidget_3);
        c_m->setObjectName(QString::fromUtf8("c_m"));
        sizePolicy1.setHeightForWidth(c_m->sizePolicy().hasHeightForWidth());
        c_m->setSizePolicy(sizePolicy1);
        c_m->setFont(font3);
        c_m->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(c_m);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(100, 30, 540, 50));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(36);
        font4.setBold(false);
        font4.setWeight(50);
        label_8->setFont(font4);
        label_8->setAlignment(Qt::AlignCenter);
        verticalWidget_4 = new QWidget(widget);
        verticalWidget_4->setObjectName(QString::fromUtf8("verticalWidget_4"));
        verticalWidget_4->setGeometry(QRect(300, 125, 71, 611));
        verticalLayout_4 = new QVBoxLayout(verticalWidget_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 9, 9, 9);
        lineEdit_13 = new QLineEdit(verticalWidget_4);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        sizePolicy1.setHeightForWidth(lineEdit_13->sizePolicy().hasHeightForWidth());
        lineEdit_13->setSizePolicy(sizePolicy1);
        lineEdit_13->setFont(font3);
        lineEdit_13->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_13->setReadOnly(true);

        verticalLayout_4->addWidget(lineEdit_13);

        lineEdit_14 = new QLineEdit(verticalWidget_4);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));
        sizePolicy1.setHeightForWidth(lineEdit_14->sizePolicy().hasHeightForWidth());
        lineEdit_14->setSizePolicy(sizePolicy1);
        lineEdit_14->setFont(font3);
        lineEdit_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_14->setReadOnly(true);

        verticalLayout_4->addWidget(lineEdit_14);

        lineEdit_15 = new QLineEdit(verticalWidget_4);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        sizePolicy1.setHeightForWidth(lineEdit_15->sizePolicy().hasHeightForWidth());
        lineEdit_15->setSizePolicy(sizePolicy1);
        lineEdit_15->setFont(font3);
        lineEdit_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_15->setReadOnly(true);

        verticalLayout_4->addWidget(lineEdit_15);

        lineEdit_16 = new QLineEdit(verticalWidget_4);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));
        sizePolicy1.setHeightForWidth(lineEdit_16->sizePolicy().hasHeightForWidth());
        lineEdit_16->setSizePolicy(sizePolicy1);
        lineEdit_16->setFont(font3);
        lineEdit_16->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_16->setReadOnly(true);

        verticalLayout_4->addWidget(lineEdit_16);

        lineEdit_17 = new QLineEdit(verticalWidget_4);
        lineEdit_17->setObjectName(QString::fromUtf8("lineEdit_17"));
        sizePolicy1.setHeightForWidth(lineEdit_17->sizePolicy().hasHeightForWidth());
        lineEdit_17->setSizePolicy(sizePolicy1);
        lineEdit_17->setFont(font3);
        lineEdit_17->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_17->setReadOnly(true);

        verticalLayout_4->addWidget(lineEdit_17);

        lineEdit_18 = new QLineEdit(verticalWidget_4);
        lineEdit_18->setObjectName(QString::fromUtf8("lineEdit_18"));
        sizePolicy1.setHeightForWidth(lineEdit_18->sizePolicy().hasHeightForWidth());
        lineEdit_18->setSizePolicy(sizePolicy1);
        lineEdit_18->setFont(font3);
        lineEdit_18->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_18->setReadOnly(true);

        verticalLayout_4->addWidget(lineEdit_18);

        submit = new QPushButton(widget);
        submit->setObjectName(QString::fromUtf8("submit"));
        submit->setGeometry(QRect(230, 750, 301, 41));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font5.setPointSize(18);
        submit->setFont(font5);
        submit->setStyleSheet(QString::fromUtf8(""));
        submit->setFlat(true);

        retranslateUi(Payroll_management_platformClass);

        QMetaObject::connectSlotsByName(Payroll_management_platformClass);
    } // setupUi

    void retranslateUi(QWidget *Payroll_management_platformClass)
    {
        Payroll_management_platformClass->setWindowTitle(QCoreApplication::translate("Payroll_management_platformClass", "Payroll_management_platform", nullptr));
        benjin_value->setText(QString());
        benjin_value->setPlaceholderText(QCoreApplication::translate("Payroll_management_platformClass", "\350\257\267\350\276\223\345\205\245\346\234\254\351\207\221", nullptr));
        c_s_value->setText(QString());
        r_value->setText(QString());
        f_e_value->setText(QString());
        s_i_f_value->setText(QString());
        c_m_value->setText(QString());
        label_3->setText(QCoreApplication::translate("Payroll_management_platformClass", "\346\202\250\347\232\204\346\234\254\346\234\210\350\265\204\351\207\221\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Payroll_management_platformClass", "\345\274\272\345\210\266\345\202\250\350\223\204\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("Payroll_management_platformClass", "\347\264\247\346\200\245\345\244\207\347\224\250\351\207\221\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Payroll_management_platformClass", "\345\233\272\345\256\232\346\224\257\345\207\272\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("Payroll_management_platformClass", "\350\207\252\346\210\221\345\237\271\345\205\273\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("Payroll_management_platformClass", "\346\266\210\350\264\271\357\274\232", nullptr));
        benjin->setText(QCoreApplication::translate("Payroll_management_platformClass", "100", nullptr));
        c_s->setText(QString());
        r->setText(QString());
        f_e->setText(QString());
        s_i_f->setText(QString());
        c_m->setText(QString());
        label_8->setText(QCoreApplication::translate("Payroll_management_platformClass", "\350\265\204 \351\207\221 \347\256\241 \347\220\206 \345\210\206 \351\205\215 \347\263\273 \347\273\237", nullptr));
        lineEdit_13->setText(QCoreApplication::translate("Payroll_management_platformClass", "%", nullptr));
        lineEdit_14->setText(QCoreApplication::translate("Payroll_management_platformClass", "%", nullptr));
        lineEdit_15->setText(QCoreApplication::translate("Payroll_management_platformClass", "%", nullptr));
        lineEdit_16->setText(QCoreApplication::translate("Payroll_management_platformClass", "%", nullptr));
        lineEdit_17->setText(QCoreApplication::translate("Payroll_management_platformClass", "%", nullptr));
        lineEdit_18->setText(QCoreApplication::translate("Payroll_management_platformClass", "%", nullptr));
        submit->setText(QCoreApplication::translate("Payroll_management_platformClass", "\346\217\220\344\272\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Payroll_management_platformClass: public Ui_Payroll_management_platformClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYROLL_MANAGEMENT_PLATFORM_H
