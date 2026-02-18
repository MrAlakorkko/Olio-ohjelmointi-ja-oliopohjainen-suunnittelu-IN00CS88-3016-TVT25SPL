#include "calculator.h"
#include "./ui_calculator.h"

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{   //numeronapit alaspäin 1-0
    ui->setupUi(this);

    QFont font;
    font.setPointSize(12);
    ui->nro1->setFont(font);
    ui->nro2->setFont(font);
    ui->tulos->setFont(font);

    connect(ui->yksi,&QPushButton::clicked,
            this,[this](){handleNumber(ui->yksi);});

    connect(ui->kaksi,&QPushButton::clicked,
            this,[this](){handleNumber(ui->kaksi);});

    connect(ui->kolme,&QPushButton::clicked,
            this,[this](){handleNumber(ui->kolme);});

    connect(ui->nelja,&QPushButton::clicked,
            this,[this](){handleNumber(ui->nelja);});

    connect(ui->viisi,&QPushButton::clicked,
            this,[this](){handleNumber(ui->viisi);});

    connect(ui->kuusi,&QPushButton::clicked,
            this,[this](){handleNumber(ui->kuusi);});

    connect(ui->seiska,&QPushButton::clicked,
            this,[this](){handleNumber(ui->seiska);});

    connect(ui->kasi,&QPushButton::clicked,
            this,[this](){handleNumber(ui->kasi);});

    connect(ui->ysi,&QPushButton::clicked,
            this,[this](){handleNumber(ui->ysi);});

    connect(ui->nollanappi,&QPushButton::clicked,
            this,[this](){handleNumber(ui->nollanappi);});

    connect(ui->tyhjenna,&QPushButton::clicked,
            this,&Calculator::handleClear);

    connect(ui->deserotin,&QPushButton::clicked,
            this,[this](){handleNumber(ui->deserotin);});

    connect(ui->kerro,&QPushButton::clicked,
            this,&Calculator::addSubMulDivClickHandler);

    connect(ui->jaa,&QPushButton::clicked,
            this,&Calculator::addSubMulDivClickHandler);

    connect(ui->lisaa,&QPushButton::clicked,
            this,&Calculator::addSubMulDivClickHandler);
    connect(ui->vahenna,&QPushButton::clicked,
            this,&Calculator::addSubMulDivClickHandler);
    connect(ui->Enter,&QPushButton::clicked,
            this,&Calculator::handleEnter);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::handleNumber(QPushButton *ptr)
{
    if (state == 0) //nro1
    {
        QString luku = ui->nro1->text();
        luku = luku + ptr->text();
        ui->nro1->setText(luku);
        qDebug() << "Nro1 input" << Qt::endl;
    }
    else //nro2
    {
        QString luku = ui->nro2->text();
        luku = luku + ptr->text();
        ui->nro2->setText(luku);
        qDebug() << "Nro2 input" << Qt::endl;
    }
}

void Calculator::handleClear()
{
    ui->nro1->setText("");
    ui->nro2->setText("");
    ui->tulos->setText("");
    state = 0;
    qDebug() << "Clear painettu";
}

void Calculator::handleEnter()
{
    state=3;
    float n1 = ui->nro1->text().toFloat();
    float n2 = ui->nro2->text().toFloat();
    switch(operand)
    {
        case 0 : result = n1+n2;
            break;
        case 1: result = n1-n2;
            break;
        case 2: result = n1 * n2;
            break;
        case 3:
            if (n2 != 0) result = n1 / n2;
            else
            {
            ui->tulos->setText("Error, Can't divide by zero !");
            return;
            }
            break;
        default:
            ui->tulos->setText("Operand is missing");
        }
    qDebug() << "Number1 = " << n1 << " And number 2 = "<< n2 << Qt::endl;
    ui->tulos->setText(QString::number(result,'f',2)); //2 desimaalia 'f',2 käyttäen
    qDebug() << "= painettu";
    state=3;
}

void Calculator::addSubMulDivClickHandler()
{
    QPushButton * nappi = qobject_cast<QPushButton*>(sender());
    if (!nappi) return;
    QString op = nappi->text();

    qDebug() << "Operandia painettu";
    if (op == "+") operand = 0;
    else if (op == "-") operand = 1;
    else if (op == "*") operand = 2;
    else if (op == "/") operand = 3;
    state=2;
}


