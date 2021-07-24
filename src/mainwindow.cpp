#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    D1 = new DialogOne(this);
    D2 = new DialogTwo(this);

    // Using string-based QObject::connect syntax.
//    connect(D1, SIGNAL(indexChanged(int)), this, SLOT(outputToLineEdit(int)));
//    connect(D1, SIGNAL(indexChanged(int)), D2, SLOT(outputToLineEdit(int)));

    // Using functor-based QObject::connect syntax
    connect(D1, &DialogOne::indexChanged, this, &MainWindow::outputToLineEdit);
    connect(D1, &DialogOne::indexChanged, D2, &DialogTwo::outputToLineEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionDialogOne_triggered()
{
    D1->show();
}

void MainWindow::on_actionDialogTwo_triggered()
{
    D2->show();
}

void MainWindow::on_actionExit_triggered()
{
    qApp->quit();
}

void MainWindow::on_exitButton_clicked()
{
    on_actionExit_triggered();
}

void MainWindow::outputToLineEdit(int index)
{
    ui->lineEdit->setText(QString::number(index));
}
