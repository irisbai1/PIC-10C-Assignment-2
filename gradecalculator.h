#ifndef GRADECALCULATOR_H
#define GRADECALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class GradeCalculator; }
QT_END_NAMESPACE

class GradeCalculator : public QMainWindow
{
    Q_OBJECT

public:
    GradeCalculator(QWidget *parent = nullptr);
    ~GradeCalculator();

private:
    Ui::GradeCalculator *ui;
};
#endif // GRADECALCULATOR_H
