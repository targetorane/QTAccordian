#include "accordian.h"
#include "ui_accordian.h"
#include <QLineEdit>

Accordian::Accordian(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Accordian)
{
    ui->setupUi(this);
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

void Accordian::setPaneContent( int content_choice ){

    switch( content_choice ){
        case 1:
              QLabel *lblFirstName = new QLabel("First Name");
              QLabel *lblLastName = new QLabel("Last Name");

              QLineEdit *txtFirstName = new QLineEdit();
              QLineEdit *txtLastName = new QLineEdit();

              QPushButton *btnOk = new QPushButton("OK");
              QPushButton *btnCancel = new QPushButton("Cancel");

              QHBoxLayout *top = new QHBoxLayout;
              QHBoxLayout *bottom = new QHBoxLayout;
              QHBoxLayout *btnLayout = new QHBoxLayout;

              top->addWidget(lblFirstName);
              top->addWidget(txtFirstName);

              bottom->addWidget(lblLastName);
              bottom->addWidget(txtLastName);

              btnLayout->addStretch();
              btnLayout->addWidget(btnOk);
              btnLayout->addWidget(btnCancel);

              QVBoxLayout *mainLayout = new QVBoxLayout(this);
              mainLayout->addLayout(top);
              mainLayout->addLayout(bottom);
              mainLayout->addLayout(btnLayout);
              mainLayout->addStretch();

              ui->contentpane->setLayout(mainLayout);

            break;
              /*
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
            */

    }

}
