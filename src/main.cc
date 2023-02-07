#include "include/MainWindow.hh"
#include "utilities/logger.hh"

#include <QApplication>
#include <QtWidgets/QWidget>

int main(int argc, char *argv[]) {

    QApplication App = QApplication(argc, argv);
    
    MainWindow::ClassWindow w;
    w.show();
    Logs::Succses(" My First App with Qt ");

    return App.exec();
}