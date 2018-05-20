#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListWidgetItem *i = new QListWidgetItem(QIcon(":/new/prefix1/icon.png"), "Misha");
    ui->listWidget->addItem(i);
    QListWidgetItem *i1 = new QListWidgetItem(QIcon(":/new/prefix1/icon.png"), "Max");
    ui->listWidget->addItem(i1);
    QListWidgetItem *i2 = new QListWidgetItem(QIcon(":/new/prefix1/icon.png"), "Leha");
    ui->listWidget->addItem(i2);
    QListWidgetItem *i3 = new QListWidgetItem(QIcon(":/new/prefix1/icon.png"), "Igor");
    ui->listWidget->addItem(i3);
}

MainWindow::~MainWindow()
{
    delete ui;
}
//void addContact(QString Name, QString number){
//    MainWindow::phoneBook.append(new MainWindow::Contact(Name, number));
//}
//MainWindow::Contact & get(unsigned int condactid){
//    MainWindow.phoneBook.indexOf(condactid);
//}
//void setContact(QString Name, QString number, unsigned int condactid){

//}
//void deleteContact(unsigned int condactid){

//}
//const MainWindow::Contact & search(QString Name){
//    return nullptr;
//}
//const MainWindow::Contact & search(QString number){
//    return nullptr;
//}

void MainWindow::on_pushButton_3_clicked()
{
     Edit *w = new Edit(this);
     w->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton q = QMessageBox::question(this, "Confirmation", "Are you sure?", QMessageBox::Yes | QMessageBox::No);
    if(q==QMessageBox::Yes){
        qDeleteAll(ui->listWidget->selectedItems());
    }else{
//        q.close();
    }
}
