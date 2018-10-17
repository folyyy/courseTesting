#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <map>
#include <string>
#include <QLabel>
#include <QDebug>
#include <QTextStream>
#include <QFile>
#include <QTextCodec>
#include <QStringList>
#include <QList>
#include <QRegExp>
#include <iostream>
#include <QtGui>
#include <QtCore>
using namespace std;

class slovar
{
    public:
    QMap<QString,int> dictionary;

//    slovar(int type) {
//        if (type == 1)
//            qDebug() << "New empty dictionary was created" ;
//        else if (type == 2)
//            qDebug() << "Created a dictionary using a file";
//        else
//            qDebug() << "Something wrong\n";
//    }

//    void create_new();
//    void read_from_file();
    void find_word(QString word_to_search);
    void counter_plus(QString word);
    //void save(); указала наличие функции записи в файл для наглядности, возможно у не будет другое название
    void add(QString word);
    void show1();
};



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow, public slovar
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_buildDictionary_clicked();

    void on_putDictionaryInFile_clicked();

    void on_outputDictionary_clicked();

    void on_addElement_clicked();

    void on_findWord_clicked();

    void on_increaseCounter_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
