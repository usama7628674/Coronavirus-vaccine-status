#include "addressbookentry.h"

AddressBookEntry::AddressBookEntry(QObject *parent) : QObject(parent)
{

}

AddressBookEntry::~AddressBookEntry()
{

}

QString AddressBookEntry::name() const
{
    return m_name;
}

void AddressBookEntry::setName(const QString &name)
{
    if (m_name != name){
        m_name = name;
    }
}

QString AddressBookEntry::address() const
{
    return m_address;
}

void AddressBookEntry::setAddress(const QString &address)
{
    if (m_address != address){
        m_address = address;
    }

}

QString AddressBookEntry::birthday() const
{
    return m_birthday;
}

void AddressBookEntry::setBirthday(const QDate &birthday)
{
    if (m_birthday != birthday.toString()){
            m_birthday = birthday.toString();
    }

}

QStringList AddressBookEntry::phoneNumbers() const
{
    return m_phoneNumbers;
}

void AddressBookEntry::setPhoneNumbers(const QStringList &phoneNumbers)
{
    if (m_phoneNumbers != phoneNumbers){
        m_phoneNumbers = phoneNumbers;
    }

}

QString AddressBookEntry::reference() const
{
    return m_reference;
}

void AddressBookEntry::setReference(const QString &reference)
{
    if (m_reference != reference){
        m_reference = reference;
    }
}

QString AddressBookEntry::occupation() const
{
    return m_occupation;
}

void AddressBookEntry::setOccupation(const QString &occupation)
{
    if (m_occupation != occupation){
        m_occupation = occupation;
    }
}

QString AddressBookEntry::country() const
{
    return m_country;
}

void AddressBookEntry::setCountry(const QString &country)
{
    if (m_country != country){
        m_country = country;
    }
}

QString AddressBookEntry::city() const
{
    return m_city;
}

void AddressBookEntry::setCity(const QString &city)
{
    if (m_city != city){
        m_city = city;
    }
}

int AddressBookEntry::vaccination() const
{
    return isvaccinated;
}

void AddressBookEntry::setVaccination(const int &inoculate)
{
            isvaccinated = inoculate;
}
