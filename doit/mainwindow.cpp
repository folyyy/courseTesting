#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <fstream>
#include <sstream>
#include <iterator>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void slovar::show1(){

    for(auto e : dictionary.toStdMap())
    {
      qDebug() << e.first << ", " << e.second << '\n';
    }
}

void slovar::add(QString word) {
    ++dictionary[word];
    qDebug() << "Слово успешно записано в словарь!";
}

void slovar::find_word(QString word_to_search) {
    int tmp = 0;
    for (auto e : dictionary.toStdMap()) {
        if (e.first == word_to_search) {
            tmp++;
            qDebug() << "Слово найдено: " << e.first << "\t\t" << e.second << endl;
            break;
        }
    }
    if (tmp != 1) {
        qDebug() << "Слово не найдено";
    }
}

void slovar::counter_plus(QString word){
    for (auto e : dictionary.toStdMap()) {
        if (e.first == word) {
            ++dictionary[word];
            qDebug() << "Счетчик слова " << word << " увеличен";
            break;
        }
    }
}


void MainWindow::on_buildDictionary_clicked()
{
        QFile file("F://hey/wow.txt");
            // Проверка на открытие файла
            if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
                qDebug() << "File unable to open" ;
                return;
            }

        // Ввод данных с файла
        QTextStream in(&file);
        while (!in.atEnd()) { // ввод элементов из файла
        QString line = in.readLine();
        line.remove(QRegExp("[^a-zA-Z\\d\\s]")); // Убираем знаки препинания из строки
        line = line.toLower(); // Меняем заглавные буквы на строчные для правильной сортировки
        QStringList lineSplitter = line.split(" "); // Делит строку в отдельные слова
        for (int i = 0; i < lineSplitter.length(); i++) {
            ++dictionary[lineSplitter[i]];
        }
        file.close(); // закрытие файла
        show1(); // вывод словаря в debug консоль
        }

}


void MainWindow::on_putDictionaryInFile_clicked()
{
    QFile file1("F://hey/ogo.txt");
    if (file1.open(QIODevice::ReadWrite)) {
        QTextStream out(&file1);
        out.setCodec("UTF-8");
        for(auto e : dictionary.toStdMap())
        {
          out << e.first << ", " << e.second << '\n';
        }
    }
    qDebug() << "Dictionary has successfully been put in file";
    file1.close();
}

void MainWindow::on_outputDictionary_clicked()
{
    show1();
}

void MainWindow::on_addElement_clicked()
{
    QString word = ui->lineEdit->text();
    if (word == "") {
        qDebug() << "Введите слово в поле";
    }
    else {
    qDebug() << "Слово: " << word;
    add(word);
    ui->lineEdit->setText("");
    }
}

void MainWindow::on_findWord_clicked()
{
    QString word_to_search = ui->lineEdit->text();
    if (word_to_search == "") {
        qDebug() << "Введите слово в поле";
    }
    else {
    qDebug() << "Слово для поиска: " << word_to_search;
    find_word(word_to_search);
    ui->lineEdit->setText("");
    }
}

void MainWindow::on_increaseCounter_clicked()
{
    QString word = ui->lineEdit->text();
    if (word == "") {
        qDebug() << "Введите слово в поле";
    }
    else {
    counter_plus(word);
    ui->lineEdit->setText("");
    }
}

