#pragma once

#include <QDialog>

namespace Ui {
class DialogTwo;
}

class DialogTwo : public QDialog
{
    Q_OBJECT

public:
    explicit DialogTwo(QWidget *parent = nullptr);
    ~DialogTwo();

public slots:
    void on_okButton_clicked();
    void outputToLineEdit(int index);

private:
    Ui::DialogTwo *ui;
};
