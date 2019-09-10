#include "main.h"
#include "ui_main.h"

Main::Main(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Main)
{ int S=0;
    ui->setupUi(this);
}

Main::~Main()
{
    delete ui;
}
