#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd;
    QAction *actionEdit;
    QAction *actionRemove;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *listPage;
    QGridLayout *gridLayout_2;
    QListWidget *listWidget;
    QWidget *detailPage;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLineEdit *nameEdit;
    QLabel *label_2;
    QDateEdit *birthdayEdit;
    QLabel *label_3;
    QPlainTextEdit *addressEdit;
    QLabel *label_4;
    QPlainTextEdit *phoneNumbersEdit;
    QLabel *label_5;
    QLineEdit *referenceEdit;
    QLabel *label_6;
    QLineEdit *occupationEdit;
    QLabel *label_7;
    QLineEdit *countryEdit;
    QLabel *label_8;
    QLineEdit *cityEdit;
    QLabel *label_9;
    QCheckBox *vaccineCheck;
    QDialogButtonBox *buttonBox;
    QMenuBar *menubar;
    QMenu *menuEntries;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(382, 669);
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QString::fromUtf8("actionAdd"));
        actionEdit = new QAction(MainWindow);
        actionEdit->setObjectName(QString::fromUtf8("actionEdit"));
        actionRemove = new QAction(MainWindow);
        actionRemove->setObjectName(QString::fromUtf8("actionRemove"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        listPage = new QWidget();
        listPage->setObjectName(QString::fromUtf8("listPage"));
        gridLayout_2 = new QGridLayout(listPage);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        listWidget = new QListWidget(listPage);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout_2->addWidget(listWidget, 0, 0, 1, 1);

        stackedWidget->addWidget(listPage);
        detailPage = new QWidget();
        detailPage->setObjectName(QString::fromUtf8("detailPage"));
        gridLayout_3 = new QGridLayout(detailPage);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(detailPage);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        nameEdit = new QLineEdit(detailPage);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        gridLayout_3->addWidget(nameEdit, 0, 1, 1, 1);

        label_2 = new QLabel(detailPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        birthdayEdit = new QDateEdit(detailPage);
        birthdayEdit->setObjectName(QString::fromUtf8("birthdayEdit"));

        gridLayout_3->addWidget(birthdayEdit, 1, 1, 1, 1);

        label_3 = new QLabel(detailPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        addressEdit = new QPlainTextEdit(detailPage);
        addressEdit->setObjectName(QString::fromUtf8("addressEdit"));

        gridLayout_3->addWidget(addressEdit, 2, 1, 1, 1);

        label_4 = new QLabel(detailPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 3, 0, 1, 1);

        phoneNumbersEdit = new QPlainTextEdit(detailPage);
        phoneNumbersEdit->setObjectName(QString::fromUtf8("phoneNumbersEdit"));

        gridLayout_3->addWidget(phoneNumbersEdit, 3, 1, 1, 1);

        label_5 = new QLabel(detailPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 4, 0, 1, 1);

        referenceEdit = new QLineEdit(detailPage);
        referenceEdit->setObjectName(QString::fromUtf8("referenceEdit"));

        gridLayout_3->addWidget(referenceEdit, 4, 1, 1, 1);

        label_6 = new QLabel(detailPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 5, 0, 1, 1);

        occupationEdit = new QLineEdit(detailPage);
        occupationEdit->setObjectName(QString::fromUtf8("occupationEdit"));

        gridLayout_3->addWidget(occupationEdit, 5, 1, 1, 1);

        label_7 = new QLabel(detailPage);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 6, 0, 1, 1);

        countryEdit = new QLineEdit(detailPage);
        countryEdit->setObjectName(QString::fromUtf8("countryEdit"));

        gridLayout_3->addWidget(countryEdit, 6, 1, 1, 1);

        label_8 = new QLabel(detailPage);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 7, 0, 1, 1);

        cityEdit = new QLineEdit(detailPage);
        cityEdit->setObjectName(QString::fromUtf8("cityEdit"));

        gridLayout_3->addWidget(cityEdit, 7, 1, 1, 1);

        label_9 = new QLabel(detailPage);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 8, 0, 1, 1);

        vaccineCheck = new QCheckBox(detailPage);
        vaccineCheck->setObjectName(QString::fromUtf8("vaccineCheck"));
        vaccineCheck->setEnabled(true);
        vaccineCheck->setLayoutDirection(Qt::LeftToRight);
        vaccineCheck->setCheckable(true);
        vaccineCheck->setChecked(false);
        vaccineCheck->setTristate(false);

        gridLayout_3->addWidget(vaccineCheck, 8, 1, 1, 1);

        buttonBox = new QDialogButtonBox(detailPage);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Discard|QDialogButtonBox::Reset|QDialogButtonBox::Save);

        gridLayout_3->addWidget(buttonBox, 9, 1, 1, 1);

        stackedWidget->addWidget(detailPage);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 382, 20));
        menuEntries = new QMenu(menubar);
        menuEntries->setObjectName(QString::fromUtf8("menuEntries"));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuEntries->menuAction());
        menuEntries->addAction(actionAdd);
        menuEntries->addAction(actionEdit);
        menuEntries->addAction(actionRemove);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAdd->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        actionEdit->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        actionRemove->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Birthday:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Address:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Phone Numbers:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Reference:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Occupation:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Country:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "City:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Vaccination:", nullptr));
        vaccineCheck->setText(QString());
        menuEntries->setTitle(QCoreApplication::translate("MainWindow", "Entries", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
