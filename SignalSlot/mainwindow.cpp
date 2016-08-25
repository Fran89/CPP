#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->horizontalSlider->setValue(0);
    ui->progressBar->setValue(0);
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));


//    connect(ui-> horizontalSlider,SIGNAL(ValueChange(int)),
//                ui->progressBar_2,SLOT(SetValue(int)));





//    if(ui->radioButton->click() = true){

//       connect(ui-> horizontalSlider,SIGNAL(ValueChange(int)),ui->progressBar,SLOT(SetValue(int)));
//    }else {

//        connect(ui-> horizontalSlider,SIGNAL(ValueChange(int)),ui->progressBar,SLOT(SetValue(int)));
//    }






}

MainWindow::~MainWindow()
{
    delete ui;
}
