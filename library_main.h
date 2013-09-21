#ifndef LIBRARY_MAIN_H
#define LIBRARY_MAIN_H

#include <QMainWindow>

namespace Ui {
class Library_Main;
}

class Library_Main : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Library_Main(QWidget *parent = 0);
    ~Library_Main();


    
private:
    Ui::Library_Main *ui;

public slots:
    void sh();
private slots:
    void on_action_quit_triggered();
};

#endif // LIBRARY_MAIN_H
