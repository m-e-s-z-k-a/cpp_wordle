#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QMainWindow>
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{

    ui->setupUi(this);
    connect(this->ui->word1_1, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_1);
    connect(this->ui->word1_2, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_1);
    connect(this->ui->word1_3, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_1);
    connect(this->ui->word1_4, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_1);
    connect(this->ui->word1_5, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_1);

    connect(this->ui->word2_1, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_2);
    connect(this->ui->word2_2, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_2);
    connect(this->ui->word2_3, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_2);
    connect(this->ui->word2_4, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_2);
    connect(this->ui->word2_5, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_2);

    connect(this->ui->word3_1, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_3);
    connect(this->ui->word3_2, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_3);
    connect(this->ui->word3_3, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_3);
    connect(this->ui->word3_4, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_3);
    connect(this->ui->word3_5, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_3);

    connect(this->ui->word4_1, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_4);
    connect(this->ui->word4_2, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_4);
    connect(this->ui->word4_3, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_4);
    connect(this->ui->word4_4, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_4);
    connect(this->ui->word4_5, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_4);

    connect(this->ui->word5_1, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_5);
    connect(this->ui->word5_2, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_5);
    connect(this->ui->word5_3, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_5);
    connect(this->ui->word5_4, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_5);
    connect(this->ui->word5_5, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_5);

    connect(this->ui->word6_1, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_6);
    connect(this->ui->word6_2, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_6);
    connect(this->ui->word6_3, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_6);
    connect(this->ui->word6_4, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_6);
    connect(this->ui->word6_5, &QLineEdit::textEdited, this, &MainWindow::check_if_clickable_6);






}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::disable_1()
{
    ui->word1_1->setEnabled(false);
    ui->word1_2->setEnabled(false);
    ui->word1_3->setEnabled(false);
    ui->word1_4->setEnabled(false);
    ui->word1_5->setEnabled(false);
}


void MainWindow::disable_2()
{
    ui->word2_1->setEnabled(false);
    ui->word2_2->setEnabled(false);
    ui->word2_3->setEnabled(false);
    ui->word2_4->setEnabled(false);
    ui->word2_5->setEnabled(false);
}

void MainWindow::disable_3()
{
    ui->word3_1->setEnabled(false);
    ui->word3_2->setEnabled(false);
    ui->word3_3->setEnabled(false);
    ui->word3_4->setEnabled(false);
    ui->word3_5->setEnabled(false);
}

void MainWindow::disable_4()
{
    ui->word4_1->setEnabled(false);
    ui->word4_2->setEnabled(false);
    ui->word4_3->setEnabled(false);
    ui->word4_4->setEnabled(false);
    ui->word4_5->setEnabled(false);
}

void MainWindow::disable_5()
{
    ui->word5_1->setEnabled(false);
    ui->word5_2->setEnabled(false);
    ui->word5_3->setEnabled(false);
    ui->word5_4->setEnabled(false);
    ui->word5_5->setEnabled(false);
}

void MainWindow::disable_6()
{
    ui->word6_1->setEnabled(false);
    ui->word6_2->setEnabled(false);
    ui->word6_3->setEnabled(false);
    ui->word6_4->setEnabled(false);
    ui->word6_5->setEnabled(false);
}





