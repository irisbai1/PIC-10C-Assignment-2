#ifndef GRADECALCULATOR_H
#define GRADECALCULATOR_H
#include <QMainWindow>
#include "ui_gradecalculator.h"
#include <algorithm>


QT_BEGIN_NAMESPACE
namespace Ui { class GradeCalculator; }
QT_END_NAMESPACE

class GradeCalculator : public QMainWindow
{
    Q_OBJECT

public:
    GradeCalculator(QWidget *parent = nullptr);
    ~GradeCalculator();

    double compute_overall();

private slots:
        void update_overall();

private:
    Ui::GradeCalculator *ui;
};
#endif // GRADECALCULATOR_H
