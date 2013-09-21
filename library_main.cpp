#include "library_main.h"
#include "ui_library_main.h"

Library_Main::Library_Main(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Library_Main)
{
    ui->setupUi(this);
}

Library_Main::~Library_Main()
{
    delete ui;
}
void Library_Main::sh()
{
setWindowOpacity(1);
}

void Library_Main::on_action_quit_triggered()
{
    exit(0);
}
