#include "accordian.h"
#include "ui_accordian.h"
#include <QLineEdit>
#include <QSpinBox>
#include <hfloatslider.h>
#include "ui_hfloatslider.h"
#include <colorpickerwidget.h>
#include "ui_colorpickerwidget.h"

Accordian::Accordian(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Accordian)
{
    ui->setupUi(this);

    //setted layout reference to addslider function

    QVBoxLayout *layout = new QVBoxLayout();
    ui->contentpane->setLayout(layout);
}

Accordian::~Accordian()
{
    delete ui;
}

void Accordian::on_pushButton_clicked()
{
    bool state = ui->contentpane->isVisible();

    if( state == true )
    {
        ui->contentpane->setVisible(false);
    }
    else
    {
        ui->contentpane->setVisible(true);
    }

}

void Accordian::setContentTitle( QString title ){

    ui->content_title->setText(title);

}

void Accordian::addFloatValueSlider( QString name, float range_1 , float range_2 )
{
    /*
    QLabel *labelname = new QLabel(name);
    QSlider *floatslider = new QSlider();
    QSpinBox *spinbox = new QSpinBox();

    floatslider->setRange( range_1 , range_2 );
    spinbox->setRange(range_1 , range_2 );

    QHBoxLayout *hori_layout = new QHBoxLayout;
    hori_layout->addWidget(labelname);
    hori_layout->addWidget(floatslider);
    hori_layout->addWidget(spinbox);
    */

    HFloatSlider *slider = new HFloatSlider();
    slider->ui->label->setText(name);
    slider->ui->slider->setRange( range_1 , range_2 );
    slider->ui->spinbox->setRange( range_1 , range_2 );
/*
    QHBoxLayout *HLayout = new QHBoxLayout;
    HLayout->addWidget(slider);

    QVBoxLayout *layout = new QVBoxLayout();
    layout->addLayout(HLayout);
    layout->addStretch();

    ui->contentpane->setLayout();
*/
    ui->contentpane->layout()->addWidget(slider);
    //layout has ot be set prior to adding widgets to file
    //prevent overloading original files.
}

void Accordian::addColorPicker( QString name )
{

    ColorPickerWidget *colorpicker = new ColorPickerWidget();
    colorpicker->ui->label->setText(name);
    ui->contentpane->layout()->addWidget(colorpicker);
    //layout has ot be set prior to adding widgets to file
    //prevent overloading original files.
}

void Accordian::setPaneContent( QWidget* widget ){

    auto grid = new QGridLayout();
    grid->addWidget(widget);
    ui->contentpane->setLayout(grid);
}
