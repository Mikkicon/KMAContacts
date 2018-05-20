#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAbstractListModel>
#include "edit.h"
#include <QMessageBox>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
//    class Contact{
//    public:
//        Contact(QString Name, unsigned int number):_Name(Name), _condactid(_freeId++){
//            _numbers.append(number);
//        }
//    private:
//      QString _Name;
//      QVector<unsigned int> _numbers;
//      unsigned int _condactid;
//      unsigned int _freeId=0;
//    };
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

//   Contact & get(unsigned int condactid);
//   void setContact(QString Name, unsigned int number, unsigned int condactid);
//   void addContact(QString Name = "Misha Petrneko",unsigned int n=0, unsigned int number=044044044);
//   void deleteContact(unsigned int condactid);
//   const Contact & search(QString Name)const;
//   const Contact & search(unsigned int number)const;

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;

//    QHash<Contact> phoneBook;
};
/*Реалізувати «телефонну книгу», що підтримує
можливість задання 
-декількох телефонних номерів для однієї людини, 
та набір методів для
роботи з нею (
-додати, 
-видалити, 
-пошук зa іменем та 
-телефоном).*/

#endif // MAINWINDOW_H
