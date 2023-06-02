#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AddressBook addressBook;
    AddressBookController controller(&addressBook);
    MainWindow w(&controller);
    if (QFile(QDir::currentPath().append("/data.txt")).exists())
    {
        if (QFile(QDir::currentPath().append("/data.txt")).size() != 0)
        {
             w.loadData();
        }

    }
    w.show();
    return a.exec();
}
