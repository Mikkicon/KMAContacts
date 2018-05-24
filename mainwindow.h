#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAbstractListModel>
#include "edit.h"
#include <QMessageBox>
#include "contact.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_Edit_clicked();

    void on_AddContact_clicked();

    void on_Delete_clicked();

    void on_Submit_clicked();

    void on_AddNumber_clicked();

    void on_pushButton_clicked();

    void on_SearchB_clicked();

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
