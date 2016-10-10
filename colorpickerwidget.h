#ifndef COLORPICKERWIDGET_H
#define COLORPICKERWIDGET_H

#include <QWidget>

namespace Ui {
class ColorPickerWidget;
}

class ColorPickerWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ColorPickerWidget(QWidget *parent = 0);
    ~ColorPickerWidget();
    Ui::ColorPickerWidget *ui;
private:

};

#endif // COLORPICKERWIDGET_H
