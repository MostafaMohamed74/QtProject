#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "studentmainwindow.h"
#include "windowselector.h"
#include "authenticator.h"
#include "db.h"
extern DB db;
 Person * p;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_pressed()
{
    QString username = ui->lineEdit_9->text();
    QString password = ui->lineEdit_10->text();
    Authenticator a (username.toStdString() ,password.toStdString());


        //StudentMainWindow * studentWindow = new StudentMainWindow();
        //studentWindow->show();

        WindowSelector *w = a.checkValidty(&p);
        ui->stackedWidget->setCurrentIndex(w->showWindow());
}


void MainWindow::on_pushButton_clicked()
{

}


void MainWindow::on_pushButton_4_pressed()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_5_pressed()
{
    Student * s = new Student(ui->UsernameLineEdit->text().toStdString() ,ui->PasswordLineEdit->text().toStdString() ,ui->StudentIdLineEdit->text().toInt() , ui->FirstNameLineEdit->text().toStdString() ,ui->LastNameLineEdit->text().toStdString() ,ui->EmailLineEdit->text().toStdString(), ui->GenderLineEdit->text().toStdString() , ui->AgeLineEdit->text().toInt());
    db.addStudent(s);
}


void MainWindow::on_pushButton_3_pressed()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_6_pressed()
{
    //Teacher * t = new Teacher(ui->TeacherUsername->text().toStdString() ,ui->TeacherPass->text().toStdString() ,ui->TeacherIdLineEdit->text().toInt() , ui->TeacherFirstName ,ui->TeacherLastName->text().toStdString() ,ui->TeacherEmail->text().toStdString(), ui->TeacherGender->text().toStdString() , ui->TeacherAge->text().toStdString());
    //t->setAcademicBackground(ui->TeacherAca->text()->);
    //t->setAddress();
}

