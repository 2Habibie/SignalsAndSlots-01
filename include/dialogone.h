#pragma once

#include <QDialog>

namespace Ui {
class DialogOne;
}

class DialogOne : public QDialog
{
    Q_OBJECT

public:
    explicit DialogOne(QWidget *parent = nullptr);
    ~DialogOne();

    void init();

signals:
    void indexChanged (int index);

private slots:
    void on_okButton_clicked();

private:
    Ui::DialogOne *ui;
};
