#ifndef TRANSFORMVIEW_H
#define TRANSFORMVIEW_H

#include <QWidget>

namespace Ui {
class TransformView;
}

class TransformView : public QWidget
{
    Q_OBJECT

public:
    explicit TransformView(QWidget *parent = 0);
    ~TransformView();

private:
    Ui::TransformView *ui;
};

#endif // TRANSFORMVIEW_H
