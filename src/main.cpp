#include <iostream>

#include <QApplication>
#include <QtWidgets/QWidget>

#include <include/QWindow/MainWindow.hpp>

int main(int argc, char *argv[]) 
{
    QApplication App = QApplication(argc, argv);
    
    MainWindow::ClassWindow w;
    w.show();

    std::cout << " My First App with Qt " << std::endl;

    return App.exec();
}
