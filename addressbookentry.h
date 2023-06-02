#ifndef ADDRESSBOOKENTRY_H
#define ADDRESSBOOKENTRY_H

#include <QObject>
#include <QString>
#include <QDate>
#include <QStringList>

class AddressBookEntry : public QObject
{
    Q_OBJECT

public:
    explicit AddressBookEntry(QObject *parent = nullptr);
    ~AddressBookEntry();

    QString name() const;
    void setName(const QString &name);

    QString address() const;
    void setAddress(const QString &address);

    QString birthday() const;
    void setBirthday(const QDate &birthday);

    QStringList phoneNumbers() const;
    void setPhoneNumbers(const QStringList &phoneNumbers);

    QString reference() const;
    void setReference(const QString& reference);

    QString occupation() const;
    void setOccupation(const QString& occupation);

    QString country() const;
    void setCountry(const QString& country);

    QString city() const;
    void setCity(const QString& city);

    int vaccination() const;
    void setVaccination(const int& inoculate);

    
private:
    QString m_name;
    QString m_address;
    QString m_birthday;
    QStringList m_phoneNumbers;
    QString m_reference;
    QString m_occupation;
    QString m_country;
    QString m_city;
    int isvaccinated;



};

#endif // ADDRESSBOOKENTRY_H
