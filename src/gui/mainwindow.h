#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include "gui/about.h"
#include "controlador/maincontroller.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:

    void on_actionAcerca_de_triggered();

private:

    Ui::MainWindow *ui;
    MainController *controlador;

    void conectarSignalsAndSlots();

};
#endif // MAINWINDOW_H
