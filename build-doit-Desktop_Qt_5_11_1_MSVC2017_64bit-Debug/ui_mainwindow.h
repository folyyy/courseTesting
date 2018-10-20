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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *browseButton;
    QPushButton *buildDictionary;
    QListWidget *listWidget;
    QGridLayout *gridLayout_3;
    QPushButton *findWord;
    QPushButton *addElement;
    QPushButton *increaseCounter;
    QPushButton *putDictionaryInFile;
    QPushButton *outputDictionary;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(745, 568);
        MainWindow->setStyleSheet(QStringLiteral("QTextEdit{background-color: white; }"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral("background-color: #FFF8DC;"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_3->addWidget(label);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_3->addWidget(lineEdit);

        browseButton = new QPushButton(centralWidget);
        browseButton->setObjectName(QStringLiteral("browseButton"));
        browseButton->setMinimumSize(QSize(460, 0));
        browseButton->setMaximumSize(QSize(500, 16777215));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        browseButton->setFont(font1);
        browseButton->setStyleSheet(QLatin1String("  display: inline-block;\n"
"  color: black;\n"
"  text-decoration: none;\n"
"  padding: .5em 2em;\n"
"   border-width: 1px ;\n"
"  border-style: solid ;\n"
"  border-color:  #000000 #000000 #000000;\n"
"  border-radius: 3px;\n"
"  background: #F5DEB3;\n"
"  transition: 0.2s;"));

        verticalLayout_3->addWidget(browseButton);

        buildDictionary = new QPushButton(centralWidget);
        buildDictionary->setObjectName(QStringLiteral("buildDictionary"));
        buildDictionary->setMinimumSize(QSize(460, 0));
        buildDictionary->setMaximumSize(QSize(500, 16777215));
        buildDictionary->setFont(font1);
        buildDictionary->setStyleSheet(QLatin1String("  display: inline-block;\n"
"  color: black;\n"
"  text-decoration: none;\n"
"  padding: .5em 2em;\n"
"   border-width: 1px ;\n"
"  border-style: solid ;\n"
"  border-color:  #000000 #000000 #000000;\n"
"  border-radius: 3px;\n"
"  background: #F5DEB3;\n"
"  transition: 0.2s;"));

        verticalLayout_3->addWidget(buildDictionary);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setMinimumSize(QSize(460, 400));
        listWidget->setMaximumSize(QSize(450, 400));
        listWidget->setAutoFillBackground(false);
        listWidget->setStyleSheet(QStringLiteral("background-color: white;"));

        verticalLayout_3->addWidget(listWidget);


        horizontalLayout_2->addLayout(verticalLayout_3);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        findWord = new QPushButton(centralWidget);
        findWord->setObjectName(QStringLiteral("findWord"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(200);
        sizePolicy.setVerticalStretch(50);
        sizePolicy.setHeightForWidth(findWord->sizePolicy().hasHeightForWidth());
        findWord->setSizePolicy(sizePolicy);
        findWord->setMinimumSize(QSize(250, 50));
        findWord->setMaximumSize(QSize(250, 50));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        findWord->setFont(font2);
        findWord->setStyleSheet(QLatin1String("  display: inline-block;\n"
"  color: black;\n"
"  text-decoration: none;\n"
"  padding: .5em 2em;\n"
"   border-width: 1px ;\n"
"  border-style: solid ;\n"
"  border-color:  #000000 #000000 #000000;\n"
"  border-radius: 3px;\n"
"  background: #F5DEB3;\n"
"  transition: 0.2s;"));

        gridLayout_3->addWidget(findWord, 3, 2, 1, 1);

        addElement = new QPushButton(centralWidget);
        addElement->setObjectName(QStringLiteral("addElement"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addElement->sizePolicy().hasHeightForWidth());
        addElement->setSizePolicy(sizePolicy1);
        addElement->setMinimumSize(QSize(250, 50));
        addElement->setMaximumSize(QSize(250, 50));
        addElement->setFont(font2);
        addElement->setStyleSheet(QLatin1String("  display: inline-block;\n"
"  color: black;\n"
"  text-decoration: none;\n"
"  padding: .5em 2em;\n"
"   border-width: 1px ;\n"
"  border-style: solid ;\n"
"  border-color:  #000000 #000000 #000000;\n"
"  border-radius: 3px;\n"
"  background: #F5DEB3;\n"
"  transition: 0.2s;"));

        gridLayout_3->addWidget(addElement, 1, 2, 1, 1);

        increaseCounter = new QPushButton(centralWidget);
        increaseCounter->setObjectName(QStringLiteral("increaseCounter"));
        sizePolicy1.setHeightForWidth(increaseCounter->sizePolicy().hasHeightForWidth());
        increaseCounter->setSizePolicy(sizePolicy1);
        increaseCounter->setMinimumSize(QSize(250, 50));
        increaseCounter->setMaximumSize(QSize(250, 50));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(8);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        increaseCounter->setFont(font3);
        increaseCounter->setStyleSheet(QLatin1String("  display: inline-block;\n"
"  color: black;\n"
"  text-decoration: none;\n"
"  padding: .5em 2em;\n"
"   border-width: 1px ;\n"
"  border-style: solid ;\n"
"  border-color:  #000000 #000000 #000000;\n"
"  border-radius: 3px;\n"
"  background: #F5DEB3;\n"
"  transition: 0.2s;"));

        gridLayout_3->addWidget(increaseCounter, 2, 2, 1, 1);

        putDictionaryInFile = new QPushButton(centralWidget);
        putDictionaryInFile->setObjectName(QStringLiteral("putDictionaryInFile"));
        sizePolicy1.setHeightForWidth(putDictionaryInFile->sizePolicy().hasHeightForWidth());
        putDictionaryInFile->setSizePolicy(sizePolicy1);
        putDictionaryInFile->setMinimumSize(QSize(250, 50));
        putDictionaryInFile->setMaximumSize(QSize(250, 50));
        putDictionaryInFile->setFont(font2);
        putDictionaryInFile->setStyleSheet(QLatin1String("  display: inline-block;\n"
"  color: black;\n"
"  text-decoration: none;\n"
"  padding: .5em 2em;\n"
"   border-width: 1px ;\n"
"  border-style: solid ;\n"
"  border-color:  #000000 #000000 #000000;\n"
"  border-radius: 3px;\n"
"  background: #F5DEB3;\n"
"  transition: 0.2s;"));

        gridLayout_3->addWidget(putDictionaryInFile, 4, 2, 1, 1);

        outputDictionary = new QPushButton(centralWidget);
        outputDictionary->setObjectName(QStringLiteral("outputDictionary"));
        sizePolicy1.setHeightForWidth(outputDictionary->sizePolicy().hasHeightForWidth());
        outputDictionary->setSizePolicy(sizePolicy1);
        outputDictionary->setMinimumSize(QSize(250, 50));
        outputDictionary->setMaximumSize(QSize(250, 50));
        outputDictionary->setFont(font2);
        outputDictionary->setStyleSheet(QLatin1String("  display: inline-block;\n"
"  color: black;\n"
"  text-decoration: none;\n"
"  padding: .5em 2em;\n"
"   border-width: 1px ;\n"
"  border-style: solid ;\n"
"  border-color:  #000000 #000000 #000000;\n"
"  border-radius: 3px;\n"
"  background: #F5DEB3;\n"
"  transition: 0.2s;"));

        gridLayout_3->addWidget(outputDictionary, 0, 2, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_3);


        gridLayout_4->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\247\320\260\321\201\321\202\320\276\321\202\320\275\321\213\320\271 \321\201\320\273\320\276\320\262\320\260\321\200\321\214", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\242\320\265\321\200\320\274\320\270\320\275\320\260\320\273", nullptr));
#ifndef QT_NO_TOOLTIP
        browseButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p/></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        browseButton->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>\320\232\320\273\320\270\320\272\320\275\320\270\321\202\320\265 \320\264\320\273\321\217 \320\262\321\213\320\261\320\276\321\200\320\260 \321\204\320\260\320\271\320\273\320\260.</p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        browseButton->setText(QApplication::translate("MainWindow", "\320\236\320\261\320\267\320\276\321\200", nullptr));
#ifndef QT_NO_WHATSTHIS
        buildDictionary->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>\320\232\320\273\320\270\320\272\320\275\320\270\321\202\320\265 \321\207\321\202\320\276\320\261\321\213 \321\201\320\276\320\267\320\264\320\260\321\202\321\214 \321\201\320\273\320\276\320\262\320\260\321\200\321\214.<br/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        buildDictionary->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \321\201\320\273\320\276\320\262\320\260\321\200\321\214", nullptr));
        findWord->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \320\267\320\260\320\264\320\260\320\275\320\275\320\276\320\263\320\276 \321\201\320\273\320\276\320\262\320\260", nullptr));
        addElement->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\201\320\273\320\276\320\262\320\260", nullptr));
        increaseCounter->setText(QApplication::translate("MainWindow", "\320\243\320\262\320\265\320\273\320\270\321\207\320\265\320\275\320\270\320\265 \321\201\321\207\320\265\321\202\321\207\320\270\320\272\320\260 \321\201\320\273\320\276\320\262\320\260", nullptr));
        putDictionaryInFile->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\321\214 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        outputDictionary->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\262\320\276\320\264 \321\201\320\273\320\276\320\262\320\260\321\200\321\217 \320\275\320\260 \321\215\320\272\321\200\320\260\320\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
