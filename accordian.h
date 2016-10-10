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
    void addColorPicker( QString name );
    void setContentTitle( QString title );
    void setPaneContent( QWidget* widget );
    void addFloatValueSlider( QString name, float range_1 , float range_2 );

private slots:
   void on_pushButton_clicked();

private:
    Ui::Accordian *ui;
};

#endif // ACCORDIAN_H
