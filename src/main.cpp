#include <QtGui/QApplication>
#include <QDesktopWidget>
#include "gui/mainwindow.h"

void center(QWidget & widget)
{
    QRect windowSize = QApplication::desktop() -> frameGeometry();

    int x = (windowSize.width() - widget.frameGeometry().width()) / 2;
    int y = (windowSize.height() - widget.frameGeometry().height()) / 2;

    widget.move(x, y);
}

int main(int    argc, char * argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.show();
    center(w);

    return a.exec();
}
