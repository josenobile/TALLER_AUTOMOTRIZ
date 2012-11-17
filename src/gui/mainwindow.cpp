#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // GUI
    this->controlador = new MainController();
    conectarSignalsAndSlots();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::conectarSignalsAndSlots()
{
//    QObject::connect(controlador, SIGNAL(animacionButtonUno(QString)),
//                     this,SLOT(animacionButtonUno(QString)));
}

void MainWindow::on_actionAcerca_de_triggered()
{
    About about (this);
    about.exec();
}
