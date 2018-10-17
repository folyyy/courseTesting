/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *buildDictionary;
    QPushButton *putDictionaryInFile;
    QPushButton *outputDictionary;
    QPushButton *addElement;
    QPushButton *findWord;
    QPushButton *increaseCounter;
    QLineEdit *lineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(560, 381);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        buildDictionary = new QPushButton(centralWidget);
        buildDictionary->setObjectName(QStringLiteral("buildDictionary"));
        buildDictionary->setGeometry(QRect(190, 10, 201, 31));
        putDictionaryInFile = new QPushButton(centralWidget);
        putDictionaryInFile->setObjectName(QStringLiteral("putDictionaryInFile"));
        putDictionaryInFile->setGeometry(QRect(190, 210, 201, 31));
        outputDictionary = new QPushButton(centralWidget);
        outputDictionary->setObjectName(QStringLiteral("outputDictionary"));
        outputDictionary->setGeometry(QRect(190, 50, 201, 31));
        addElement = new QPushButton(centralWidget);
        addElement->setObjectName(QStringLiteral("addElement"));
        addElement->setGeometry(QRect(190, 90, 201, 31));
        findWord = new QPushButton(centralWidget);
        findWord->setObjectName(QStringLiteral("findWord"));
        findWord->setGeometry(QRect(190, 130, 201, 31));
        increaseCounter = new QPushButton(centralWidget);
        increaseCounter->setObjectName(QStringLiteral("increaseCounter"));
        increaseCounter->setGeometry(QRect(190, 170, 201, 31));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(190, 250, 201, 22));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 560, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        buildDictionary->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \321\201\320\273\320\276\320\262\320\260\321\200\321\214 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        putDictionaryInFile->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \321\201\320\273\320\276\320\262\320\260\321\200\321\214 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        outputDictionary->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \321\201\320\273\320\276\320\262\320\260\321\200\321\214 \320\275\320\260 \321\215\320\272\321\200\320\260\320\275", nullptr));
        addElement->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\215\320\273\320\265\320\274\320\265\320\275\321\202 \320\262 \321\201\320\273\320\276\320\262\320\260\321\200\321\214", nullptr));
        findWord->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \321\201\320\273\320\276\320\262\320\276 \320\262 \321\201\320\273\320\276\320\262\320\260\321\200\320\265", nullptr));
        increaseCounter->setText(QApplication::translate("MainWindow", "\320\243\320\262\320\265\320\273\320\270\321\207\320\265\320\275\320\270\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \321\201\321\207\320\265\321\202\321\207\320\270\320\272\320\260 \321\201\320\273\320\276\320\262\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
