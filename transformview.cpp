#include "transformview.h"
#include "ui_transformview.h"

TransformView::TransformView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TransformView)
{
    ui->setupUi(this);
}

TransformView::~TransformView()
{
    delete ui;
}
