#ifndef __INCLUDE_MAINWINDOW_HH__
#define __INCLUDE_MAINWINDOW_HH__

#include <QtWidgets/QWidget>

namespace MainWindow {
    class ClassWindow : public QWidget {
        public:
            ClassWindow(QWidget *window = nullptr);

            // auto textOutput(char const* txt) -> void;

    };
} // namespace MainWindow


#endif // __INCLUDE_MAINWINDOW_HH__
