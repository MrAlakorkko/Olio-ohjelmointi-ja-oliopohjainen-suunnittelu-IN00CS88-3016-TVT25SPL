#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>
#include <QFont>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Count,&QPushButton::clicked,
    this,&MainWindow::handleCount);

    connect(ui->Reset,&QPushButton::clicked,
    this,&MainWindow::handleClear);

    QFont font = ui->lineEdit->font();
    font.setPointSize(16);
    ui->lineEdit->setFont(font);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleCount() //lue eka mitä lineEditissä on jo, incrementoi +1
{
    count++;
    ui->lineEdit->setText(QString::number(count));
}

void MainWindow::handleClear()
{
    count=0;
    ui->lineEdit->setText(QString::number(count));
}

