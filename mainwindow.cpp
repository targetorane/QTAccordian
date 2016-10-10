#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "accordian.h"

#include <QVBoxLayout>
#include <transformview.h>

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
    accordian->addColorPicker("Glossy Shade");
    accordian->addColorPicker("Glossy Shade");
    accordian->addColorPicker("Glossy Shade");
    accordian->addColorPicker("Glossy Shade");
    accordian->addColorPicker("Glossy Shade");
    accordian->addColorPicker("Glossy Shade");
    accordian->addColorPicker("Glossy Shade");
    accordian->addColorPicker("Glossy Shade");
    accordian->addColorPicker("Glossy Shade");
    accordian->addColorPicker("Glossy Shade");
    accordian->addFloatValueSlider("Specular", 1, 100);

    Accordian *accordian2 = new Accordian();
    accordian2->setContentTitle("Something");
    accordian2->addColorPicker("Glossy Shade");
    accordian2->addColorPicker("Glossy Shade");
    accordian2->addFloatValueSlider("Specular", 1, 100);
    accordian2->addFloatValueSlider("Specular", 1, 100);
    accordian2->addFloatValueSlider("Specular", 1, 100);

    Accordian *accordian3 = new Accordian();
    accordian3->setContentTitle("Roughness");

    Accordian *accordian4 = new Accordian();
    accordian4->setContentTitle("Grunge");

    QVBoxLayout *mainLay = new QVBoxLayout(this);
    mainLay->addWidget(accordian);
    mainLay->addWidget(accordian2);
    mainLay->addWidget(accordian3);
    mainLay->addWidget(accordian4);
    mainLay->addStretch();
    mainLay->setMargin(0);

    ui->contentpane->setLayout(mainLay);
}
