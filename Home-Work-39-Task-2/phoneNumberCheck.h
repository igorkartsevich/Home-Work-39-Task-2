#pragma once

#include <QWidget>
#include <QRegularExpression>
#include "ui_phoneNumberCheck.h"

class phoneNumberCheck : public QWidget
{
    Q_OBJECT

public:
    phoneNumberCheck(QWidget *parent = Q_NULLPTR);


public slots:
    void setOkLabel();
    void setNOkLabel();

private:
    Ui::phoneNumberCheckClass ui;
};
