#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void disable_1();
    void disable_2();
    void disable_3();
    void disable_4();
    void disable_5();
    void disable_6();
    void check_if_clickable_1();
    void check_if_clickable_2();
    void check_if_clickable_3();
    void check_if_clickable_4();
    void check_if_clickable_5();
    void check_if_clickable_6();
    void end_this();
    QMessageBox u_lost;
    QMessageBox u_won;


private slots:
    void on_enter_1_clicked();
    void on_enter_2_clicked();
    void on_enter_3_clicked();
    void on_enter_4_clicked();
    void on_enter_5_clicked();
    void on_enter_6_clicked();

signals:
    void signal_enter1();
    void signal_enter2();
    void signal_enter3();
    void signal_enter4();
    void signal_enter5();
    void signal_enter6();


private:
    Ui::MainWindow *ui;



};
#endif // MAINWINDOW_H
