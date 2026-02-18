#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <QPushButton>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculator;
}
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT //makro joka katsoo kaikki luokat/esim private slots

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private slots:
    void handleNumber(QPushButton *);
    void handleClear();
    void handleEnter();

public slots :

private:
    Ui::Calculator *ui; //pointteri viittaa käyttöliittymään
    int state = 0;    //ododtetaan ensimmäistä numeroa
    float result;   //tulos
    short operand;  //operaatio/operand nappi
    void addSubMulDivClickHandler(); //+-*:merkit
    void resetLineEdits(); //resettaa kaikki lineEditit
};
#endif // CALCULATOR_H
