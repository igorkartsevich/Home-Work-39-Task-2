#include "phoneNumberCheck.h"

phoneNumberCheck::phoneNumberCheck(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    connect(ui.lineEdit, &QLineEdit::textEdited, [this](QString text) {
        QRegularExpression exp("^\\+[0-9]{11}$");
        (exp.match(text).hasMatch()) ? setOkLabel() : setNOkLabel();
        });
}

void phoneNumberCheck::setOkLabel() {
    ui.label->setText("OK");
    ui.label->setStyleSheet("QLabel { color : green; }");
};

void phoneNumberCheck::setNOkLabel() {
    ui.label->setText("Not OK");
    ui.label->setStyleSheet("QLabel { color : red; }");
};