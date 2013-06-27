#include "Reports/report1.h"
#include "ui_report1.h"

Report1::Report1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dailog)
{
    ui->setupUi(this);
}

Report1::~Report1()
{
    delete ui;
}
