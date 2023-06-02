#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "addressbookcontroller.h"
#include <QMainWindow>
#include <QPushButton>
#include <QHash>
#include <QDate>
#include <QFile>
#include <QDir>
#include <QTextStream>
#include <QCloseEvent>
#include <QListWidgetItem>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(AddressBookController *controller, QWidget *parent = nullptr);
    ~MainWindow();
    void loadData();
public slots:
    void createEntry();
    void deleteEntry();
    void editEntry();
    void saveEntry();
    void discardEntry();
    void resetEntry();

protected:
    void closeEvent(QCloseEvent *event) override;
private:
    Ui::MainWindow *ui;
    AddressBookController *m_controller;
    QHash<QListWidgetItem*,AddressBookEntry*> m_entryMap;
    void setupConnections();
};
#endif // MAINWINDOW_H
