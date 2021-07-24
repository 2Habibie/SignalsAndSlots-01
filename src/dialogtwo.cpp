#include "dialogtwo.h"
#include "ui_dialogtwo.h"

DialogTwo::DialogTwo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogTwo)
{
    ui->setupUi(this);
}

DialogTwo::~DialogTwo()
{
    delete ui;
}

void DialogTwo::on_okButton_clicked()
{
    close();
}

void DialogTwo::outputToLineEdit(int index)
{
    ui->lineEdit->setText(QString::number(index));
}
