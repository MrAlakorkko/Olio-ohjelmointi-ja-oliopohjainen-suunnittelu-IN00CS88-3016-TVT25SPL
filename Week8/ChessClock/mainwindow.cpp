#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPushButton>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->starttinappi,&QPushButton::clicked,
    this,[this](){handleclick(ui->starttinappi);});

    connect(ui->stoppinappi,&QPushButton::clicked,
    this,[this](){handleclick(ui->stoppinappi);});

    connect(ui->p1swap,&QPushButton::clicked,
    this,[this](){player1Button_Clicked(ui->p1swap);});

    connect(ui->p2swap,&QPushButton::clicked,
    this,[this](){player2Button_Clicked(ui->p2swap);});

    connect(ui->time120,&QPushButton::clicked,
    this,[this](){handleclick(ui->time120);});

    connect(ui->time5min,&QPushButton::clicked,
    this,[this](){handleclick(ui->time5min);});

    pQTimer = new QTimer(this);

    connect(pQTimer, &QTimer::timeout,
    this, &MainWindow::timeout);

    gameTime = 100;
    player1Time=gameTime;
    player2Time=gameTime;
    currentPlayer = 1;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleclick(QPushButton *button) //Make sure buttons are pressed,
{                                                  //Make sure WHICH buttons are pressed
    qDebug()<<"Painettu nappia " << button->text();
    if (button == ui->time120)
    {
        gameTime=120;
        player1Time = gameTime;
        player2Time = gameTime;
        updateProgressBar();
    }
    if (button == ui->time5min)
    {
        gameTime=300;
        player1Time = gameTime;
        player2Time = gameTime;
        updateProgressBar();
    }
    if (button == ui->starttinappi)
    {
        pQTimer->start(1000);
        setGameInfoText("Game has started",12);
    }
    if (button == ui->stoppinappi)
    {
        pQTimer->stop();
        setGameInfoText("Game has been stopped",12);
    }
}

void MainWindow::updateProgressBar()
{
    ui->p1Clock->setMaximum(gameTime);
    ui->p2Clock->setMaximum(gameTime);

    ui->p1Clock->setValue(player1Time);
    ui->p2Clock->setValue(player2Time);

}
void MainWindow::player1Button_Clicked(QPushButton *button)
{
    currentPlayer = 2;
    qDebug()<<"Player 1 ended turn. Current Player =2";
}
void MainWindow::player2Button_Clicked(QPushButton *button)
{
    currentPlayer = 1;
    qDebug()<<"Player 2 ended turn. Current Player=1";
}


void MainWindow::timeout()
{
    if(currentPlayer == 1) {
        player1Time--;
    }
    else {
        player2Time--;
    }

    updateProgressBar();

    if(player1Time <= 0) {
        pQTimer->stop();
        setGameInfoText("Player 2 has won by timeout!",25);
    }
    else if(player2Time <= 0) {
        pQTimer->stop();
        setGameInfoText("Player 1 has by timeout!",25);
    }

}

void MainWindow::setGameInfoText(QString text,short fontSize) {
    QFont font;
    font.setPointSize(fontSize);
    ui->GMenu->setFont(font);
    ui->GMenu->setText(text);
}
