#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "secondpage.h"

#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap icon(":/icon/icons/logo.png");
    int wid = ui->label_logo->width();
    int heit=ui->label_logo->height();
    ui->label_logo->setPixmap(icon.scaled(wid,heit,Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString username = ui->lineEdit->text();
    QString pasword = ui->lineEdit_2->text();


//uncomment the condition and put your default username and password for verification
   // if (username=="username" && pasword=="password"){
        ui->statusBar->showMessage("thank you for the succesful login",5000);
        QMessageBox::information(this,"signin","log in succesful");

        hide();

        page2 = new Secondpage(this);
        page2 -> show();
    //}
   /* else {
         ui->statusBar->showMessage("that was awful please try to sign in again",5000);
        QMessageBox::warning(this,"signin","incorrect name or pasword");

    }*/
}
