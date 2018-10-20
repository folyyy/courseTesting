#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <string>
#include <QLabel>
#include <QDebug>
#include <QTextStream>
#include <QFile>
#include <iterator>
#include <QStringList>
#include <QRegExp>
#include <iostream>
#include <QFileDialog>
using namespace std;

class slovar
{
    public:
    QString filename;
    QMap<QString,int> dictionary;
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

    void on_browseButton_clicked(); // Выбор файла

    void on_buildDictionary_clicked(); // Создание словаря

    void on_putDictionaryInFile_clicked(); // Запись в файл

    void on_outputDictionary_clicked(); // Вывод словаря на экран

    void on_addElement_clicked(); // Добавление элемента в словарь

    void on_findWord_clicked(); // Поиск элемента

    void on_increaseCounter_clicked(); // Увеличение счетчика слова


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
