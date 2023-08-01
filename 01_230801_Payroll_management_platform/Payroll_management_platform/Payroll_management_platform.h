#pragma once

#include <QtWidgets/QWidget>
#include "ui_Payroll_management_platform.h"
#include "process.h"
#include <iostream>
#include <QFile>
#include <Qdir>
#include <QJsonParseError>
#include <QJsonObject>
#include <qdebug.h >
#include <QRegExpValidator>

class Payroll_management_platform : public QWidget
{
    Q_OBJECT

public:
    Payroll_management_platform(QWidget *parent = nullptr);
    ~Payroll_management_platform();
private slots:
    void init_json_data();
    int calculating(QLineEdit* q);
    void set_benjin();
    void submit();
    int get_QLineEdit(QLineEdit* q);
private:
    int benjin = 0;
    int compulsory_savings;
    int reserves;
    int fixed_expenses;
    int self_investment_funds;
    int consumption_money;
    QString str;
    Ui::Payroll_management_platformClass ui;

};
