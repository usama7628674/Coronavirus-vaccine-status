#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(AddressBookController *controller, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      m_controller(controller)
{
    ui->setupUi(this);
    this->setWindowTitle("RecordBook");
    this->setWindowIcon(QIcon("book.ico"));
    setupConnections();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadData()
{

    QString filename = QDir::currentPath();
    filename.append("/data.txt");
    QFile file( filename );
    if (file.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&file);
        int counter = stream.readLine(0).toInt();
        for(int i=0; i<counter; i++)
        {
            QString line = stream.readLine();
            QStringList linelst = line.split(";");
            auto entry = m_controller->createEntry();
            ui->listWidget->addItem(linelst.at(0));
            auto listItems = ui->listWidget->item(ui->listWidget->count()-1);
            m_entryMap.insert(listItems,entry);
            ui->stackedWidget->setCurrentWidget(ui->detailPage);
            entry->setName(linelst.at(0));
            entry->setBirthday(QDate::fromString(linelst.at(1),"dd/MM/yyyy"));
            entry->setAddress(linelst.at(2));
            entry->setPhoneNumbers(linelst.at(3).split("\n"));
            entry->setReference(linelst.at(4));
            entry->setOccupation(linelst.at(5));
            entry->setCountry(linelst.at(6));
            entry->setCity(linelst.at(7));
            entry->setVaccination(linelst.at(8).toInt());
            ui->stackedWidget->setCurrentWidget(ui->listPage);
            }
        }
    file.close();
}

void MainWindow::createEntry()
{
    auto entry = m_controller->createEntry();
    if (entry){
        ui->listWidget->addItem(entry->name());
        auto listItem = ui->listWidget->item(ui->listWidget->count()-1);
        m_entryMap.insert(listItem,entry);
        ui->listWidget->setCurrentItem(listItem);
    }
}

void MainWindow::deleteEntry()
{
    auto listItem = ui->listWidget->currentItem();
    if (listItem){
        auto entry = m_entryMap.value(listItem);
        if (entry){
            if (m_controller->deleteEntry(entry)){
                m_entryMap.remove(listItem);
                delete listItem;
            }
        }
    }
}

void MainWindow::editEntry()
{
    auto listItem = ui->listWidget->currentItem();
    if (listItem){
        auto entry = m_entryMap.value(listItem);
        if (entry){
            ui->stackedWidget->setCurrentWidget(ui->detailPage);
            ui->nameEdit->setFocus();
            ui->menuEntries->setEnabled(false);
            resetEntry();

        }
    }
}

void MainWindow::saveEntry()
{
    auto listItem = ui->listWidget->currentItem();
    if (listItem){
        auto entry = m_entryMap.value(listItem);
        if (entry){
            entry->setName(ui->nameEdit->text());
            entry->setBirthday(ui->birthdayEdit->date());
            entry->setAddress(ui->addressEdit->toPlainText());
            entry->setPhoneNumbers(ui->phoneNumbersEdit->toPlainText().split("\n"));
            entry->setReference(ui->referenceEdit->text());
            entry->setOccupation(ui->occupationEdit->text());
            entry->setCountry(ui->countryEdit->text());
            entry->setCity(ui->cityEdit->text());
            entry->setVaccination(ui->vaccineCheck->checkState());

            if (entry->vaccination() == 2)
            {
                ui->vaccineCheck->setChecked(true);
            }
            else{
                ui->vaccineCheck->setChecked(false);
            }

            listItem->setText(entry->name());
            discardEntry();
        }
    }
}

void MainWindow::discardEntry()
{
    ui->stackedWidget->setCurrentWidget(ui->listPage);
    ui->menuEntries->setEnabled(true);
}

void MainWindow::resetEntry()
{
    auto listItem = ui->listWidget->currentItem();
    if (listItem){
        auto entry = m_entryMap.value(listItem);
        if (entry){
            ui->nameEdit->setText(entry->name());
            ui->birthdayEdit->setDate(QDate::fromString(entry->birthday()));
            ui->addressEdit->setPlainText(entry->address());
            ui->phoneNumbersEdit->setPlainText(entry->phoneNumbers().join("\n"));
            ui->referenceEdit->setText(entry->reference());
            ui->occupationEdit->setText(entry->occupation());
            ui->countryEdit->setText(entry->country());
            ui->cityEdit->setText(entry->city());

            if (entry->vaccination() == 2)
            {
                ui->vaccineCheck->setChecked(true);
            }
            else{
                ui->vaccineCheck->setChecked(false);
            }

        }
    }
}

void MainWindow::setupConnections()
{
    connect(ui->actionAdd,&QAction::triggered,
            this,&MainWindow::createEntry);
    connect(ui->actionRemove,&QAction::triggered,
            this,&MainWindow::deleteEntry);
    connect(ui->actionEdit,&QAction::triggered,
            this,&MainWindow::editEntry);
    connect(ui->buttonBox->button(QDialogButtonBox::Save),&QPushButton::clicked,this,&MainWindow::saveEntry);
    connect(ui->buttonBox->button(QDialogButtonBox::Reset),&QPushButton::clicked,this,&MainWindow::resetEntry);
    connect(ui->buttonBox->button(QDialogButtonBox::Discard),&QPushButton::clicked,this,&MainWindow::discardEntry);
}

void MainWindow::closeEvent(QCloseEvent* event)
{
    QString filename = QDir::currentPath();
    filename.append("/data.txt");
    QFile file( filename );
    if (file.open(QIODevice::WriteOnly))
    {
        QTextStream stream(&file);
        int counterlistWidget = ui->listWidget->count();
        stream << counterlistWidget << "\n";
        for (int i=0; i<counterlistWidget; i++){

            ui->listWidget->setCurrentRow(i);
            auto listItem = ui->listWidget->currentItem();

            if (listItem)
            {
                auto entry = m_entryMap.value(listItem);
                if (entry)
                {
                    stream << entry->name() << ";";
                    stream << QDate::fromString(entry->birthday()).toString("dd/MM/yyyy") << ";";
                    stream << entry->address() << ";";
                    stream << entry->phoneNumbers().join("\n") << ";";
                    stream << entry->reference() << ";";
                    stream << entry->occupation() << ";";
                    stream << entry->country() << ";";
                    stream << entry->city() << ";";
                    stream << entry->vaccination() << "\n";
                }
            }
        }
        file.close();
        event->accept();
    }
    else{
        event->ignore();
    }
}
