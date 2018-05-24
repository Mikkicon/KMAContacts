#ifndef CONTACT_H
#define CONTACT_H

#include <QObject>
#include <QWidget>

class Contact{
public:
    Contact(QString Name,QString number):_Name(Name), _condactid(_freeId++){
        _numbers.append(number);
    }
    Contact & get(unsigned int condactid);
    const Contact & search(QString Name)const;
    const Contact & search(unsigned int number)const;
    QString getName() const;
    void setName(const QString &Name);
    void addNumber(const QString &num);
    QVector<QString> getNumbers() const;
    QString getNumberAt(unsigned int i) const;
    void setNumbers(const QVector<QString> &numbers);

private:
    QString _Name;
    QVector<QString> _numbers;
    unsigned int _condactid;
    unsigned int _freeId=0;
};

#endif // CONTACT_H
