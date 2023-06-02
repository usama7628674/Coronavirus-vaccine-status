#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H

#include "addressbookentry.h"

#include <QObject>
#include <QList>

class AddressBook : public QObject
{
    Q_OBJECT
public:
    typedef QList<AddressBookEntry*> Entries;

    explicit AddressBook(QObject *parent = nullptr);

    Entries entries() const;
    AddressBookEntry* createEntry();
    bool deleteEntry(AddressBookEntry *entry);

private:
    Entries  m_entries;

};

#endif // ADDRESSBOOK_H
