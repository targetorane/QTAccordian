#ifndef ACCORDIAN_H
#define ACCORDIAN_H

#include <QWidget>

namespace Ui {
class Accordian;
}

class Accordian : public QWidget
{
    Q_OBJECT

public:
    explicit Accordian(QWidget *parent = 0);
    ~Accordian();
    void setContentTitle( QString title );
    void setPaneContent( int content_choice );

private slots:
   void on_pushButton_clicked();

private:
    Ui::Accordian *ui;
};

#endif // ACCORDIAN_H
