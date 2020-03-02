#ifndef SECONDPAGE_H
#define SECONDPAGE_H

#include <QMainWindow>
//#include "mainwindow.h"

namespace Ui {
class Secondpage;
}

class Secondpage : public QMainWindow
{
    Q_OBJECT

public:
    explicit Secondpage(QWidget *parent = nullptr);
    ~Secondpage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Secondpage *ui;
   // MainWindow page1 ;
};

#endif // SECONDPAGE_H
