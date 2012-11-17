#ifndef DIALOGMONEDA_H
#define DIALOGMONEDA_H

#include <QDialog>
#include <QIcon>
#include <QTimer>
#include <stdlib.h>
#include <time.h>

namespace Ui {
class DialogMoneda;
}

class DialogMoneda : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogMoneda(QWidget *parent = 0);
    ~DialogMoneda();
    
private slots:
    void on_pushButtonCara_clicked();
    void on_pushButtonSello_clicked();
    void auxAnimacion();

signals:
    void jugadorInicial(QString nombre);

private:

    void iniciarAnimacion();
    void animacionTerminada();

    Ui::DialogMoneda *ui;
    QIcon iconMonedaCara;
    QIcon iconMonedaSello;
    QString monedaActual;
    QString monedaSeleccionada;
    int cantidadIteraciones;
    QTimer *timerSimulacion;
};

#endif // DIALOGMONEDA_H
