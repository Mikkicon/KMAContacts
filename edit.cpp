#include "edit.h"
#include "ui_edit.h"
#include "mainwindow.h"

Edit::Edit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Edit)
{
    ui->setupUi(this);
    ui->lineEdit->setPlaceholderText("Name");
    ui->lineEdit_2->setPlaceholderText("New Number");
}

Edit::~Edit()
{
    delete ui;
}

void Edit::on_pushButton_2_clicked()
{
    this->hide();
}

void Edit::on_pushButton_clicked()
{
    MainWindow m;
}
