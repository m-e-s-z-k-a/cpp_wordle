#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCoreApplication>
#include <fstream>
#include <iostream>
#include <cstdio>
#include <string>
#include <random>
#include <QDebug>
#include <QApplication>
#include <QPushButton>
#include <QMessageBox>
#include <QtWidgets>
#include <QObject>
#include <QAbstractButton>
using namespace std;



char ans_let_1;
char ans_let_2;
char ans_let_3;
char ans_let_4;
char ans_let_5;
bool is_1_guessed = false;
bool is_2_guessed = false;
bool is_3_guessed = false;
bool is_4_guessed = false;
bool is_5_guessed = false;
std::vector<std::string> words_vec;





void MainWindow::check_if_clickable_6()
{
    if (!ui->word6_1->text().isEmpty() && !ui->word6_2->text().isEmpty() && !ui->word6_3->text().isEmpty() && !ui->word6_4->text().isEmpty() && !ui->word6_5->text().isEmpty())
    {
        int is_word_ = 0;
        QString my_word = ui->word6_1->text() + ui->word6_2->text() + ui->word6_3->text() + ui->word6_4->text() + ui->word6_5->text();
        for(auto i: words_vec)
        {
            if(my_word.toStdString() == i)
            {
                is_word_ = 1;
            }
        }
        if (is_word_ == 1)
        {
        ui->enter_6->setEnabled(true);
        }
        else
        {
            ui->enter_6->setEnabled(false);
        }
    }
    else
    {
    ui->enter_6->setEnabled(false);
    }
}






void MainWindow::check_if_clickable_5()
{
    if (!ui->word5_1->text().isEmpty() && !ui->word5_2->text().isEmpty() && !ui->word5_3->text().isEmpty() && !ui->word5_4->text().isEmpty() && !ui->word5_5->text().isEmpty())
    {
        int is_word_ = 0;
        QString my_word = ui->word5_1->text() + ui->word5_2->text() + ui->word5_3->text() + ui->word5_4->text() + ui->word5_5->text();
        for(auto i: words_vec)
        {
            if(my_word.toStdString() == i)
            {
                is_word_ = 1;
            }
        }
        if (is_word_ == 1)
        {
        ui->enter_5->setEnabled(true);
        }
        else
        {
            ui->enter_5->setEnabled(false);
        }
    }
    else
    {
    ui->enter_5->setEnabled(false);
    }
}




void MainWindow::check_if_clickable_4()
{
    if (!ui->word4_1->text().isEmpty() && !ui->word4_2->text().isEmpty() && !ui->word4_3->text().isEmpty() && !ui->word4_4->text().isEmpty() && !ui->word4_5->text().isEmpty())
    {
        int is_word_ = 0;
        QString my_word = ui->word4_1->text() + ui->word4_2->text() + ui->word4_3->text() + ui->word4_4->text() + ui->word4_5->text();
        for(auto i: words_vec)
        {
            if(my_word.toStdString() == i)
            {
                is_word_ = 1;
            }
        }
        if (is_word_ == 1)
        {
        ui->enter_4->setEnabled(true);
        }
        else
        {
            ui->enter_4->setEnabled(false);
        }
    }
    else
    {
    ui->enter_4->setEnabled(false);
    }


}



void MainWindow::check_if_clickable_3()
{
    if (!ui->word3_1->text().isEmpty() && !ui->word3_2->text().isEmpty() && !ui->word3_3->text().isEmpty() && !ui->word3_4->text().isEmpty() && !ui->word3_5->text().isEmpty())
    {
        int is_word_ = 0;
        QString my_word = ui->word3_1->text() + ui->word3_2->text() + ui->word3_3->text() + ui->word3_4->text() + ui->word3_5->text();
        for(auto i: words_vec)
        {
            if(my_word.toStdString() == i)
            {
                is_word_ = 1;
            }
        }
        if (is_word_ == 1)
        {
        ui->enter_3->setEnabled(true);
        }
        else
        {
            ui->enter_3->setEnabled(false);
        }
    }
    else
    {
    ui->enter_3->setEnabled(false);
    }
}




void MainWindow::check_if_clickable_2()
{
    if (!ui->word2_1->text().isEmpty() && !ui->word2_2->text().isEmpty() && !ui->word2_3->text().isEmpty() && !ui->word2_4->text().isEmpty() && !ui->word2_5->text().isEmpty())
    {
        int is_word_ = 0;
        QString my_word = ui->word2_1->text() + ui->word2_2->text() + ui->word2_3->text() + ui->word2_4->text() + ui->word2_5->text();
        for(auto i: words_vec)
        {
            if(my_word.toStdString() == i)
            {
                is_word_ = 1;
            }
        }
        if (is_word_ == 1)
        {
        ui->enter_2->setEnabled(true);
        }
        else
        {
            ui->enter_2->setEnabled(false);
        }
    }
    else
    {
    ui->enter_2->setEnabled(false);
    }

}



void MainWindow::check_if_clickable_1()
{
    if (!ui->word1_1->text().isEmpty() && !ui->word1_2->text().isEmpty() && !ui->word1_3->text().isEmpty() && !ui->word1_4->text().isEmpty() && !ui->word1_5->text().isEmpty())
    {
        int is_word_ = 0;
        QString my_word = ui->word1_1->text() + ui->word1_2->text() + ui->word1_3->text() + ui->word1_4->text() + ui->word1_5->text();
        for(auto i: words_vec)
        {
            if(my_word.toStdString() == i)
            {
                is_word_ = 1;
            }
        }
        if (is_word_ == 1)
        {
        ui->enter_1->setEnabled(true);
        }
        else
        {
            ui->enter_1->setEnabled(false);
        }
    }
    else
    {
    ui->enter_1->setEnabled(false);
    }
}



void MainWindow::on_enter_6_clicked()
{
    this->disable_1();
    this->disable_2();
    this->disable_3();
    this->disable_4();
    this->disable_5();
    this->disable_6();
    char ans_1 = ui->word6_1->text().toStdString()[0];
    char ans_2 = ui->word6_2->text().toStdString()[0];
    char ans_3 = ui->word6_3->text().toStdString()[0];
    char ans_4 = ui->word6_4->text().toStdString()[0];
    char ans_5 = ui->word6_5->text().toStdString()[0];
    printf("%c %c %c %c %c", ans_1, ans_2, ans_3, ans_4, ans_5);
    if (ans_1 == ans_let_1)
    {
        QPalette palette_to_change = ui->word6_1->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word6_1->setPalette(palette_to_change);
        is_1_guessed = true;
    }
    else if ((ans_1 == ans_let_2 && is_2_guessed == false) || (ans_1 == ans_let_3 && is_3_guessed == false) || (ans_1 == ans_let_4 && is_4_guessed == false) || (ans_1 == ans_let_5 && is_5_guessed == false))
        {
        QPalette palette_to_change = ui->word6_1->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word6_1->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word6_1->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word6_1->setPalette(palette_to_change);
    }

    if (ans_2 == ans_let_2)
    {
        QPalette palette_to_change = ui->word6_2->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word6_2->setPalette(palette_to_change);
        is_2_guessed = true;
    }
    else if ((ans_2 == ans_let_1 && is_1_guessed == false) || (ans_2 == ans_let_3 && is_3_guessed == false) || (ans_2 == ans_let_4 && is_4_guessed == false) || (ans_2 == ans_let_5 && is_5_guessed == false))
        {
        QPalette palette_to_change = ui->word6_2->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word6_2->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word6_2->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word6_2->setPalette(palette_to_change);
    }
    if (ans_3 == ans_let_3)
    {
        QPalette palette_to_change = ui->word6_3->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word6_3->setPalette(palette_to_change);
        is_3_guessed = true;
    }
    else if ((ans_3 == ans_let_1 && is_1_guessed == false) || (ans_3 == ans_let_2 && is_2_guessed == false) || (ans_3 == ans_let_4 && is_4_guessed == false) || (ans_3 == ans_let_5 && is_5_guessed == false))
        {
        QPalette palette_to_change = ui->word6_3->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word6_3->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word6_3->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word6_3->setPalette(palette_to_change);
    }

    if (ans_4 == ans_let_4)
    {
        QPalette palette_to_change = ui->word6_4->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word6_4->setPalette(palette_to_change);
        is_4_guessed = true;
    }
    else if ((ans_4 == ans_let_1 && is_1_guessed == false) || (ans_4 == ans_let_2 && is_2_guessed == false) || (ans_4 == ans_let_3 && is_3_guessed == false) || (ans_4 == ans_let_5 && is_5_guessed == false))
       {
        QPalette palette_to_change = ui->word6_4->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word6_4->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word6_4->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word6_4->setPalette(palette_to_change);
    }

    if (ans_5 == ans_let_5)
    {
        QPalette palette_to_change = ui->word6_5->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word6_5->setPalette(palette_to_change);
        is_5_guessed = true;
    }
    else if ((ans_5 == ans_let_1 && is_1_guessed == false) || (ans_5 == ans_let_2 && is_2_guessed == false) || (ans_5 == ans_let_3 && is_3_guessed == false) || (ans_5 == ans_let_4 && is_4_guessed == false))
      {
        QPalette palette_to_change = ui->word6_5->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word6_5->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word6_5->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word6_5->setPalette(palette_to_change);
    }

    if (ans_1 == ans_let_1 && ans_2 == ans_let_2 && ans_3 == ans_let_3 && ans_4 == ans_let_4 && ans_5 == ans_let_5 )
    {
        this->u_won;
        u_won.about(this,  ":D", "YOU WON! :D");
        //QMessageBox::StandardButton close_button = QMessageBox::StandardButton();
        //u_lost.addButton(close_button);
        connect(this->u_won.clickedButton(), &QAbstractButton::clicked, this, &MainWindow::close);
}

    if (ans_1 != ans_let_1 || ans_2 != ans_let_2 || ans_3 != ans_let_3 || ans_4 != ans_let_4 || ans_5 != ans_let_5 )
    {
        this->u_lost;
        u_lost.about(this,  ":(", "you lost :(");
        //QMessageBox::StandardButton close_button = QMessageBox::StandardButton();
        //u_lost.addButton(close_button);
        connect(this->u_lost.clickedButton(), &QAbstractButton::clicked, this, &MainWindow::close);
}

}




void MainWindow::on_enter_5_clicked()
{
    this->disable_1();
    this->disable_2();
    this->disable_3();
    this->disable_4();
    this->disable_5();
    char ans_1 = ui->word5_1->text().toStdString()[0];
    char ans_2 = ui->word5_2->text().toStdString()[0];
    char ans_3 = ui->word5_3->text().toStdString()[0];
    char ans_4 = ui->word5_4->text().toStdString()[0];
    char ans_5 = ui->word5_5->text().toStdString()[0];
    printf("%c %c %c %c %c", ans_1, ans_2, ans_3, ans_4, ans_5);
    if (ans_1 == ans_let_1)
    {
        QPalette palette_to_change = ui->word5_1->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word5_1->setPalette(palette_to_change);
        is_1_guessed = true;
    }
    else if ((ans_1 == ans_let_2 && is_2_guessed == false) || (ans_1 == ans_let_3 && is_3_guessed == false) || (ans_1 == ans_let_4 && is_4_guessed == false) || (ans_1 == ans_let_5 && is_5_guessed == false))
        {
        QPalette palette_to_change = ui->word5_1->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word5_1->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word5_1->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word5_1->setPalette(palette_to_change);
    }

    if (ans_2 == ans_let_2)
    {
        QPalette palette_to_change = ui->word5_2->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word5_2->setPalette(palette_to_change);
        is_2_guessed = true;
    }
    else if ((ans_2 == ans_let_1 && is_1_guessed == false) || (ans_2 == ans_let_3 && is_3_guessed == false) || (ans_2 == ans_let_4 && is_4_guessed == false) || (ans_2 == ans_let_5 && is_5_guessed == false))
        {
        QPalette palette_to_change = ui->word5_2->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word5_2->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word5_2->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word5_2->setPalette(palette_to_change);
    }
    if (ans_3 == ans_let_3)
    {
        QPalette palette_to_change = ui->word5_3->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word5_3->setPalette(palette_to_change);
        is_3_guessed = true;
    }
    else if ((ans_3 == ans_let_1 && is_1_guessed == false) || (ans_3 == ans_let_2 && is_2_guessed == false) || (ans_3 == ans_let_4 && is_4_guessed == false) || (ans_3 == ans_let_5 && is_5_guessed == false))
        {
        QPalette palette_to_change = ui->word5_3->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word5_3->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word5_3->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word5_3->setPalette(palette_to_change);
    }

    if (ans_4 == ans_let_4)
    {
        QPalette palette_to_change = ui->word5_4->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word5_4->setPalette(palette_to_change);
        is_4_guessed = true;
    }
    else if ((ans_4 == ans_let_1 && is_1_guessed == false) || (ans_4 == ans_let_2 && is_2_guessed == false) || (ans_4 == ans_let_3 && is_3_guessed == false) || (ans_4 == ans_let_5 && is_5_guessed == false))
        {
        QPalette palette_to_change = ui->word5_4->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word5_4->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word5_4->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word5_4->setPalette(palette_to_change);
    }

    if (ans_5 == ans_let_5)
    {
        QPalette palette_to_change = ui->word5_5->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word5_5->setPalette(palette_to_change);
        is_5_guessed = true;
    }
    else if ((ans_5 == ans_let_1 && is_1_guessed == false) || (ans_5 == ans_let_2 && is_2_guessed == false) || (ans_5 == ans_let_3 && is_3_guessed == false) || (ans_5 == ans_let_4 && is_4_guessed == false))
    {
        QPalette palette_to_change = ui->word5_5->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word5_5->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word5_5->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word5_5->setPalette(palette_to_change);
    }

}






void MainWindow::on_enter_4_clicked()
{

    this->disable_1();
    this->disable_2();
    this->disable_3();
    this->disable_4();
    char ans_1 = ui->word4_1->text().toStdString()[0];
    char ans_2 = ui->word4_2->text().toStdString()[0];
    char ans_3 = ui->word4_3->text().toStdString()[0];
    char ans_4 = ui->word4_4->text().toStdString()[0];
    char ans_5 = ui->word4_5->text().toStdString()[0];
    printf("%c %c %c %c %c", ans_1, ans_2, ans_3, ans_4, ans_5);
    if (ans_1 == ans_let_1)
    {
        QPalette palette_to_change = ui->word4_1->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word4_1->setPalette(palette_to_change);
        is_1_guessed = true;
    }
    else if ((ans_1 == ans_let_2 && is_2_guessed == false) || (ans_1 == ans_let_3 && is_3_guessed == false) || (ans_1 == ans_let_4 && is_4_guessed == false) || (ans_1 == ans_let_5 && is_5_guessed == false))
        {
        QPalette palette_to_change = ui->word4_1->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word4_1->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word4_1->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word4_1->setPalette(palette_to_change);
    }

    if (ans_2 == ans_let_2)
    {
        QPalette palette_to_change = ui->word4_2->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word4_2->setPalette(palette_to_change);
        is_2_guessed = true;
    }

    else if ((ans_2 == ans_let_1 && is_1_guessed == false) || (ans_2 == ans_let_3 && is_3_guessed == false) || (ans_2 == ans_let_4 && is_4_guessed == false) || (ans_2 == ans_let_5 && is_5_guessed == false))
     {
        QPalette palette_to_change = ui->word4_2->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word4_2->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word4_2->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word4_2->setPalette(palette_to_change);
    }
    if (ans_3 == ans_let_3)
    {
        QPalette palette_to_change = ui->word4_3->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word4_3->setPalette(palette_to_change);
        is_3_guessed = true;
    }
    else if ((ans_3 == ans_let_1 && is_1_guessed == false) || (ans_3 == ans_let_2 && is_2_guessed == false) || (ans_3 == ans_let_4 && is_4_guessed == false) || (ans_3 == ans_let_5 && is_5_guessed == false))
      {
        QPalette palette_to_change = ui->word4_3->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word4_3->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word4_3->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word4_3->setPalette(palette_to_change);
    }

    if (ans_4 == ans_let_4)
    {
        QPalette palette_to_change = ui->word4_4->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word4_4->setPalette(palette_to_change);
        is_4_guessed = true;
    }
    else if ((ans_4 == ans_let_1 && is_1_guessed == false) || (ans_4 == ans_let_2 && is_2_guessed == false) || (ans_4 == ans_let_3 && is_3_guessed == false) || (ans_4 == ans_let_5 && is_5_guessed == false))
     {
        QPalette palette_to_change = ui->word4_4->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word4_4->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word4_4->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word4_4->setPalette(palette_to_change);
    }

    if (ans_5 == ans_let_5)
    {
        QPalette palette_to_change = ui->word4_5->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word4_5->setPalette(palette_to_change);
        is_5_guessed = true;
    }
    else if ((ans_5 == ans_let_1 && is_1_guessed == false) || (ans_5 == ans_let_2 && is_2_guessed == false) || (ans_5 == ans_let_3 && is_3_guessed == false) || (ans_5 == ans_let_4 && is_4_guessed == false))
     {
        QPalette palette_to_change = ui->word4_5->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word4_5->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word4_5->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word4_5->setPalette(palette_to_change);
    }

}







void MainWindow::on_enter_3_clicked()
{
    this->disable_1();
    this->disable_2();
    this->disable_3();
    char ans_1 = ui->word3_1->text().toStdString()[0];
    char ans_2 = ui->word3_2->text().toStdString()[0];
    char ans_3 = ui->word3_3->text().toStdString()[0];
    char ans_4 = ui->word3_4->text().toStdString()[0];
    char ans_5 = ui->word3_5->text().toStdString()[0];
    printf("%c %c %c %c %c", ans_1, ans_2, ans_3, ans_4, ans_5);
    if (ans_1 == ans_let_1)
    {
        QPalette palette_to_change = ui->word3_1->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word3_1->setPalette(palette_to_change);
        is_1_guessed = true;
    }
    else if ((ans_1 == ans_let_2 && is_2_guessed == false) || (ans_1 == ans_let_3 && is_3_guessed == false) || (ans_1 == ans_let_4 && is_4_guessed == false) || (ans_1 == ans_let_5 && is_5_guessed == false))
      {
        QPalette palette_to_change = ui->word3_1->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word3_1->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word3_1->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word3_1->setPalette(palette_to_change);
    }

    if (ans_2 == ans_let_2)
    {
        QPalette palette_to_change = ui->word3_2->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word3_2->setPalette(palette_to_change);
        is_2_guessed = true;
    }
    else if ((ans_2 == ans_let_1 && is_1_guessed == false) || (ans_2 == ans_let_3 && is_3_guessed == false) || (ans_2 == ans_let_4 && is_4_guessed == false) || (ans_2 == ans_let_5 && is_5_guessed == false))
      {
        QPalette palette_to_change = ui->word3_2->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word3_2->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word3_2->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word3_2->setPalette(palette_to_change);
    }
    if (ans_3 == ans_let_3)
    {
        QPalette palette_to_change = ui->word3_3->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word3_3->setPalette(palette_to_change);
        is_3_guessed = true;
    }
    else if ((ans_3 == ans_let_1 && is_1_guessed == false) || (ans_3 == ans_let_2 && is_2_guessed == false) || (ans_3 == ans_let_4 && is_4_guessed == false) || (ans_3 == ans_let_5 && is_5_guessed == false))
      {
        QPalette palette_to_change = ui->word3_3->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word3_3->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word3_3->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word3_3->setPalette(palette_to_change);
    }

    if (ans_4 == ans_let_4)
    {
        QPalette palette_to_change = ui->word3_4->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word3_4->setPalette(palette_to_change);
        is_4_guessed = true;
    }
    else if ((ans_4 == ans_let_1 && is_1_guessed == false) || (ans_4 == ans_let_2 && is_2_guessed == false) || (ans_4 == ans_let_3 && is_3_guessed == false) || (ans_4 == ans_let_5 && is_5_guessed == false))
     {
        QPalette palette_to_change = ui->word3_4->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word3_4->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word3_4->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word3_4->setPalette(palette_to_change);
    }

    if (ans_5 == ans_let_5)
    {
        QPalette palette_to_change = ui->word3_5->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word3_5->setPalette(palette_to_change);
        is_5_guessed = true;
    }
    else if ((ans_5 == ans_let_1 && is_1_guessed == false) || (ans_5 == ans_let_2 && is_2_guessed == false) || (ans_5 == ans_let_3 && is_3_guessed == false) || (ans_5 == ans_let_4 && is_4_guessed == false))
     {
        QPalette palette_to_change = ui->word3_5->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word3_5->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word3_5->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word3_5->setPalette(palette_to_change);
    }

}






void MainWindow::on_enter_2_clicked()
{
    this->disable_1();
    this->disable_2();
    char ans_1 = ui->word2_1->text().toStdString()[0];
    char ans_2 = ui->word2_2->text().toStdString()[0];
    char ans_3 = ui->word2_3->text().toStdString()[0];
    char ans_4 = ui->word2_4->text().toStdString()[0];
    char ans_5 = ui->word2_5->text().toStdString()[0];
    printf("%c %c %c %c %c", ans_1, ans_2, ans_3, ans_4, ans_5);
    if (ans_1 == ans_let_1)
    {
        QPalette palette_to_change = ui->word2_1->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word2_1->setPalette(palette_to_change);
        is_1_guessed = true;
    }
    else if (ans_1 == ans_let_2 || ans_1 == ans_let_3 || ans_1 == ans_let_4 || ans_1 == ans_let_5)
     {
        QPalette palette_to_change = ui->word2_1->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word2_1->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word2_1->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word2_1->setPalette(palette_to_change);
    }

    if (ans_2 == ans_let_2)
    {
        QPalette palette_to_change = ui->word2_2->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word2_2->setPalette(palette_to_change);
        is_2_guessed = true;
    }
    else if ((ans_2 == ans_let_1 && is_1_guessed == false) || (ans_2 == ans_let_3 && is_3_guessed == false) || (ans_2 == ans_let_4 && is_4_guessed == false) || (ans_2 == ans_let_5 && is_5_guessed == false))
     {
        QPalette palette_to_change = ui->word2_2->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word2_2->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word2_2->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word2_2->setPalette(palette_to_change);
    }
    if (ans_3 == ans_let_3)
    {
        QPalette palette_to_change = ui->word2_3->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word2_3->setPalette(palette_to_change);
        is_3_guessed = true;
    }
    else if ((ans_3 == ans_let_1 && is_1_guessed == false) || (ans_3 == ans_let_2 && is_2_guessed == false) || (ans_3 == ans_let_4 && is_4_guessed == false) || (ans_3 == ans_let_5 && is_5_guessed == false))
    {
        QPalette palette_to_change = ui->word2_3->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word2_3->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word2_3->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word2_3->setPalette(palette_to_change);
    }

    if (ans_4 == ans_let_4)
    {
        QPalette palette_to_change = ui->word2_4->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word2_4->setPalette(palette_to_change);
        is_4_guessed = true;
    }
    else if ((ans_4 == ans_let_1 && is_1_guessed == false) || (ans_4 == ans_let_2 && is_2_guessed == false) || (ans_4 == ans_let_3 && is_3_guessed == false) || (ans_4 == ans_let_5 && is_5_guessed == false))
    {
        QPalette palette_to_change = ui->word2_4->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word2_4->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word2_4->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word2_4->setPalette(palette_to_change);
    }

    if (ans_5 == ans_let_5)
    {
        QPalette palette_to_change = ui->word2_5->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word2_5->setPalette(palette_to_change);
        is_5_guessed = true;
    }

    else if ((ans_5 == ans_let_1 && is_1_guessed == false) || (ans_5 == ans_let_2 && is_2_guessed == false) || (ans_5 == ans_let_3 && is_3_guessed == false) || (ans_5 == ans_let_4 && is_4_guessed == false))
    {
        QPalette palette_to_change = ui->word2_5->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word2_5->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word2_5->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word2_5->setPalette(palette_to_change);
    }

}




void MainWindow::on_enter_1_clicked()
{
    this->disable_1();
    char ans_1 = ui->word1_1->text().toStdString()[0];
    char ans_2 = ui->word1_2->text().toStdString()[0];
    char ans_3 = ui->word1_3->text().toStdString()[0];
    char ans_4 = ui->word1_4->text().toStdString()[0];
    char ans_5 = ui->word1_5->text().toStdString()[0];
    printf("%c %c %c %c %c", ans_1, ans_2, ans_3, ans_4, ans_5);
    if (ans_1 == ans_let_1)
    {
        QPalette palette_to_change = ui->word1_1->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word1_1->setPalette(palette_to_change);
        is_1_guessed = true;
    }
    else if ((ans_1 == ans_let_2 && is_2_guessed == false) || (ans_1 == ans_let_3 && is_3_guessed == false) || (ans_1 == ans_let_4 && is_4_guessed == false) || (ans_1 == ans_let_5 && is_5_guessed == false))
    {
        QPalette palette_to_change = ui->word1_1->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word1_1->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word1_1->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word1_1->setPalette(palette_to_change);
    }

    if (ans_2 == ans_let_2)
    {
        QPalette palette_to_change = ui->word1_2->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word1_2->setPalette(palette_to_change);
        is_2_guessed = true;
    }
    else if ((ans_2 == ans_let_1 && is_1_guessed == false) || (ans_2 == ans_let_3 && is_3_guessed == false) || (ans_2 == ans_let_4 && is_4_guessed == false) || (ans_2 == ans_let_5 && is_5_guessed == false))
    {
        QPalette palette_to_change = ui->word1_2->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word1_2->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word1_2->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word1_2->setPalette(palette_to_change);
    }
    if (ans_3 == ans_let_3)
    {
        QPalette palette_to_change = ui->word1_3->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word1_3->setPalette(palette_to_change);
        is_3_guessed = true;
    }
    else if ((ans_3 == ans_let_1 && is_1_guessed == false) || (ans_3 == ans_let_2 && is_2_guessed == false) || (ans_3 == ans_let_4 && is_4_guessed == false) || (ans_3 == ans_let_5 && is_5_guessed == false))
    {
        QPalette palette_to_change = ui->word1_3->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word1_3->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word1_3->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word1_3->setPalette(palette_to_change);
    }

    if (ans_4 == ans_let_4)
    {
        QPalette palette_to_change = ui->word1_4->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word1_4->setPalette(palette_to_change);
        is_4_guessed = true;
    }
    else if ((ans_4 == ans_let_1 && is_1_guessed == false) || (ans_4 == ans_let_2 && is_2_guessed == false) || (ans_4 == ans_let_3 && is_3_guessed == false) || (ans_4 == ans_let_5 && is_5_guessed == false))
    {
        QPalette palette_to_change = ui->word1_4->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word1_4->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word1_4->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word1_4->setPalette(palette_to_change);
    }

    if (ans_5 == ans_let_5)
    {
        QPalette palette_to_change = ui->word1_5->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: green);
        ui->word1_5->setPalette(palette_to_change);
        is_5_guessed = true;
    }
    else if ((ans_5 == ans_let_1 && is_1_guessed == false) || (ans_5 == ans_let_2 && is_2_guessed == false) || (ans_5 == ans_let_3 && is_3_guessed == false) || (ans_5 == ans_let_4 && is_4_guessed == false))
    {
        QPalette palette_to_change = ui->word1_5->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: yellow);
        ui->word1_5->setPalette(palette_to_change);
    }
    else
    {
        QPalette palette_to_change = ui->word1_5->palette();
        palette_to_change.setColor(QPalette:: Base, Qt:: gray);
        ui->word1_5->setPalette(palette_to_change);
    }

}




int main(int argc, char *argv[])
{

    std::ifstream file ("C:/Users/dorot/Documents/STUDIA_materialy/SEMESTR4/CPP/wordle/words.txt");
    int i = 0;
    if (file.is_open())
    {
        std::string line;
        while(std::getline(file, line))
        {
            words_vec.push_back(line);
            i++;
        }
    }
    file.close();
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(0, words_vec.size());
    std::string random = words_vec.at(distr(gen));
    printf("your random word: %s", random.c_str());
    ans_let_1 = random[0];
    ans_let_2 = random[1];
    ans_let_3 = random[2];
    ans_let_4 = random[3];
    ans_let_5 = random[4];

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
