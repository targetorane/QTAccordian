#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "accordian.h"

#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Accordian *accordian = new Accordian();
    accordian->setContentTitle("Global");
    accordian->setPaneContent(1);
    Accordian *accordian2 = new Accordian();
    accordian2->setContentTitle("Diffuse");
    accordian2->setPaneContent(2);
    Accordian *accordian3 = new Accordian();
    accordian3->setContentTitle("Roughness");
    accordian3->setPaneContent(3);
    Accordian *accordian4 = new Accordian();
    accordian4->setContentTitle("Grunge");
    accordian4->setPaneContent(4);

    QVBoxLayout *mainLay = new QVBoxLayout(this);
    mainLay->addWidget(accordian);
    mainLay->addWidget(accordian2);
    mainLay->addWidget(accordian3);
    mainLay->addWidget(accordian4);
    mainLay->addStretch();
    mainLay->setMargin(0);

    ui->contentpane->setLayout(mainLay);
    //accordian->mainLay = mainLay;
    //accordian2->mainLay = mainLay;
}
