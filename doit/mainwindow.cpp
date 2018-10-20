#include "mainwindow.h"
#include "ui_mainwindow.h"

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


/* Выбор файла */
void MainWindow::on_browseButton_clicked()
{
    filename = QFileDialog::getOpenFileName( this, tr("Open File"), "C://", "Txt files (*.txt);" );
    ui->listWidget->addItem(filename);
}

/* Создание словаря */
void MainWindow::on_buildDictionary_clicked()
{
        QFile file(filename);
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
        ui->listWidget->addItem("Словарь успешно создан");
        }

}

/* Запись в файл */
void MainWindow::on_putDictionaryInFile_clicked()
{
    filename = QFileDialog::getOpenFileName( this, tr("Open File"), "C://", "Txt files (*.txt);" ); // Выбор файла
    ui->listWidget->addItem(filename);
    QFile file1(filename);
    if (file1.open(QIODevice::ReadWrite)) { // Проверка на открытие
        QTextStream out(&file1);
        out.setCodec("UTF-8");
        for(auto e : dictionary.toStdMap())
        {
          out << e.first << ", " << e.second << '\n'; // Запись элементов в файл
        }
    }
    ui->listWidget->addItem("Словарь успешно добавлен в файл");
    file1.close();
}

/* Вывод словаря на экран */
void MainWindow::on_outputDictionary_clicked()
{
    ui->listWidget->clear();
    for(auto e : dictionary.toStdMap())
        {
            string tmp = to_string(e.second);
            QString tmp1 = QString::fromStdString(tmp);
            ui->listWidget->addItem(e.first + ", " + tmp1);
        }
}

/* Добавление элемента в словарь */
void MainWindow::on_addElement_clicked()
{
    ui->listWidget->clear();
    QString word = ui->lineEdit->text();
    if (word == "") { // Проверка на пустую строку
        ui->listWidget ->addItem("Введите слово в поле");
    }
    else {
    word.remove(QRegExp("[^a-zA-Z\\d\\s]")); // Убираем знаки препинания
    word = word.toLower(); // Убираем заглавные буквы
    ++dictionary[word];
    ui->listWidget->addItem("Слово успешно записано в словарь");
    ui->lineEdit->setText("");
    }
}

/* Поиск элемента */
void MainWindow::on_findWord_clicked()
{
    ui->listWidget->clear();
    QString word_to_search = ui->lineEdit->text();
    if (word_to_search == "") {
        ui->listWidget->addItem("Введите слово в поле");
    }
    else {
    int tmp = 0;
    for (auto e : dictionary.toStdMap()) {
        if (e.first == word_to_search) {
            tmp++;
            string tmp1 = to_string(e.second);
            QString tmp2 = QString::fromStdString(tmp1);

            ui->listWidget->addItem("Слово найдено: " +e.first +", " + tmp2);

            break;
        }
    }
    if (tmp != 1) {
        ui->listWidget->addItem("Слово не найдено");
    }
    ui->lineEdit->setText("");
    }
}


/* Увеличение счетчика слова */
void MainWindow::on_increaseCounter_clicked()
{
    ui->listWidget->clear();
    QString word = ui->lineEdit->text();
    if (word == "") {
        ui->listWidget->addItem("Введите слово в поле");
    }
    else {
        int tmp = 0;
        for (auto e : dictionary.toStdMap()) {
            if (e.first == word) {
                tmp++;
                ++dictionary[word];
                ui->listWidget->addItem("Счетчик слова " + word + " увеличен");
                break;
            }
        }
        if (tmp != 1) ui->listWidget->addItem("Слова " + word + " нет в словаре");
    }
    ui->lineEdit->setText("");
}

