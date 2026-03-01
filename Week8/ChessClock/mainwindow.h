#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    QTimer *pQTimer;
    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime;
    void setGameInfoText(QString,short);
    void updateProgressBar();

public slots:
    void timeout();

private slots:
    void handleclick(QPushButton *);
    void player1Button_Clicked(QPushButton *);
    void player2Button_Clicked(QPushButton *);




};
#endif // MAINWINDOW_H
