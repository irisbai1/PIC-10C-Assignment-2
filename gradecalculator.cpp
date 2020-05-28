#include "gradecalculator.h"
#include <algorithm>

GradeCalculator::GradeCalculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GradeCalculator)
{
    ui->setupUi(this);
    connect(ui->calculateButton,SIGNAL(clicked()),
                    this,SLOT(update_overall()));
}

GradeCalculator::~GradeCalculator()
{
    delete ui;
}

void GradeCalculator::update_overall(){

    ui->score_label->setText(QString::number(compute_overall()));
    ui->score_label->repaint();
    return;
}

double GradeCalculator:: compute_overall()
{   int hw1 = ui->hw1_spinbox->value();
    int hw2 = ui->hw2_spinbox->value();
    int hw3 = ui->hw3_spinbox->value();
    int hw4 = ui->hw4_spinbox->value();
    int hw5 = ui->hw5_spinbox->value();
    int hw6 = ui->hw6_spinbox->value();
    int hw7 = ui->hw7_spinbox->value();
    int hw8 = ui->hw8_spinbox->value();
    int mt1 = ui->mt1_spinbox->value();
    int mt2 = ui->mt2_spinbox->value();
    int fe = ui->fe_spinbox->value();
    int mt = std::max(mt1,mt2);
    double grade = 0;


    if((ui->sA_radiobutton)->isChecked()) {
        grade = (((hw1 + hw2 + hw3 + hw4 + hw5 + hw6  + hw7 + hw8)/8.0 * 0.25) + (mt1 * 0.2) + (mt2 *0.2) + (fe * 0.35));
    }
    else if((ui->sB_radiobutton)->isChecked()) {
        grade = (((hw1 + hw2 + hw3 + hw4 + hw5 + hw6  + hw7 + hw8)/8.0 * 0.25) + (mt * 0.3) + (fe * 0.44));
    }

    return grade;
}
