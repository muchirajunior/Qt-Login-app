#include "secondpage.h"
#include "ui_secondpage.h"
#include "mainwindow.h"

Secondpage::Secondpage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Secondpage)
{
    ui->setupUi(this);
    ui->statusbar->addPermanentWidget(ui->label_2);
}

Secondpage::~Secondpage()
{
    delete ui;
}

void Secondpage::on_pushButton_clicked()
{
   // MainWindow page1;
    
            ui->statusbar->showMessage("where else do you want to go ",6000);
 
}
