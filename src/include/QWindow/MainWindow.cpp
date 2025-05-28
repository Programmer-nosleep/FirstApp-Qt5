#include "MainWindow.hpp"

namespace MainWindow 
{
    ClassWindow::ClassWindow(QWidget *window) 
        : QWidget(window)
    {
        setWindowTitle("Myfirst Application");
        setMinimumSize(600,500);
        setMaximumSize(1200, 600);
    }

} // namespace MainWindow
