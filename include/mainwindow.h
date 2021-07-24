#pragma once

#include <QComboBox>
#include <QMainWindow>

#include "dialogone.h"
#include "dialogtwo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionDialogOne_triggered();
    void on_actionDialogTwo_triggered();
    void on_actionExit_triggered();
    void on_exitButton_clicked();
    void outputToLineEdit(int index);

private:
    Ui::MainWindow *ui;
    DialogOne *D1;
    DialogTwo *D2;
};
