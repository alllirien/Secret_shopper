#include "mainwindow.h"
#include <QApplication>
#include <QStyleFactory>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    // Устанавливаем современный стиль Fusion
    a.setStyle(QStyleFactory::create("Fusion"));

    MainWindow w;
    w.showMaximized();

    return a.exec();
}
