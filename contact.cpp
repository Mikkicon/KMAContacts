#include "contact.h"


QString Contact::getName() const
{
    return _Name;
}

void Contact::setName(const QString &Name)
{
    _Name = Name;
}

void Contact::addNumber(const QString &num)
{
    _numbers.append(num);
}

QVector<QString> Contact::getNumbers() const
{
    return _numbers;
}

void Contact::setNumbers(const QVector<QString> &numbers)
{
    _numbers = numbers;
}
QString Contact::getNumberAt(unsigned int i) const{
    return _numbers.at(i);
}
