#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Contact Ya("Misha", "2284769");
    QListWidgetItem *i = new QListWidgetItem(QIcon(":/new/prefix1/icon.png"), Ya.getName()+"     "+ Ya.getNumbers().at(0));
    ui->listWidget->addItem(i);
    Contact Max("Max", "2284769");
    QListWidgetItem *i1 = new QListWidgetItem(QIcon(":/new/prefix1/icon.png"), Max.getName()+"     "+ Ya.getNumbers().at(0));
    ui->listWidget->addItem(i1);
    Contact Leha("Leha", "2284769");
    QListWidgetItem *i2 = new QListWidgetItem(QIcon(":/new/prefix1/icon.png"), Leha.getName()+"     "+ Ya.getNumbers().at(0));
    ui->listWidget->addItem(i2);
    Contact Igor("Igor", "2284769");
    QListWidgetItem *i3 = new QListWidgetItem(QIcon(":/new/prefix1/icon.png"), Igor.getName()+"     "+ Ya.getNumbers().at(0));
    ui->listWidget->addItem(i3);
    ui->Search->setPlaceholderText("Search");
    ui->EditName->setPlaceholderText("Name");
    ui->EditNumber->setPlaceholderText("Number");
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_Edit_clicked()
{
    QStringList s = ui->listWidget->currentItem()->text().split(QRegExp("\\s+"));
    Contact c(s.first(),s.last());
//    QList<QListWidgetItem*> s1 = ui->listWidget->selectedItems();
    ui->EditName->setText(c.getName());
    ui->EditNumber->setText(c.getNumberAt(0));
}

void MainWindow::on_AddContact_clicked()
{
    if(ui->EditName->text()==""){
    Contact c("Default", "2284769");
    QListWidgetItem *i1 = new QListWidgetItem(QIcon(":/new/prefix1/icon.png"), c.getName()+"     "+ c.getNumberAt(0));
    ui->listWidget->addItem(i1);
    }else{
    Contact c(ui->EditName->text(), ui->EditNumber->text());
    QListWidgetItem *i = new QListWidgetItem(QIcon(":/new/prefix1/icon.png"), c.getName()+"     "+ c.getNumberAt(0));
    ui->listWidget->addItem(i);
    }
    ui->EditName->setText("");
    ui->EditNumber->setText("");
}

void MainWindow::on_Delete_clicked()
{
    QMessageBox::StandardButton q = QMessageBox::question(this, "Confirmation", "Are you sure?", QMessageBox::Yes | QMessageBox::No);
    if(q==QMessageBox::Yes){
        qDeleteAll(ui->listWidget->selectedItems());
    }else{
//        q.close();
    }
}

void MainWindow::on_Submit_clicked()
{
    if(ui->listWidget->currentItem()!=nullptr && ui->EditName->text()!=""){
        Contact c(ui->EditName->text(), ui->EditNumber->text());
        ui->listWidget->currentItem()->setText(c.getName()+"     "+ c.getNumberAt(0));
        ui->EditName->setText("");
        ui->EditNumber->setText("");
    }else{
        QMessageBox::StandardButton q = QMessageBox::information(this, "Confirmation", "No selected Items, or name is emapty.", QMessageBox::Ok);
    }
    ui->EditName->setText("");
    ui->EditNumber->setText("");
}

void MainWindow::on_AddNumber_clicked()
{
    QStringList s = ui->listWidget->currentItem()->text().split(QRegExp("\\s+"));
    ui->EditName->setText(s.at(0));
}

void MainWindow::on_pushButton_clicked()
{
    QStringList s = ui->listWidget->currentItem()->text().split(QRegExp("\\s+"));
    Contact c(s.first(),s.last());
    c.addNumber(ui->EditNumber->text());
    ui->listWidget->currentItem()->setText(c.getName()+"    "+c.getNumberAt(0)+" "+c.getNumberAt(1));
    ui->EditName->setText("");
    ui->EditNumber->setText("");
}

void MainWindow::on_SearchB_clicked()
{
    QListWidgetItem *e;
    QString s = ui->Search->text();
    QStringList s1;
    for(int i =0; i<ui->listWidget->count();i++){
         e= ui->listWidget->item(i);
        qDebug()<<"Norm1";
        s1 = e->text().split(QRegExp("\\s+"));
        qDebug()<<"Norm2";
        if(s1.at(0)==s||s1.at(1)==s){
            qDebug()<<"Norm3 "<<s1.at(0);
            ui->listWidget->clear();
            qDebug()<<"Norm4";
            ui->listWidget->addItem(e);
            qDebug()<<"Norm5";
            break;
        }
    }
    qDebug()<<"Norm1"<<e;
    ui->listWidget->addItem(e);
}
