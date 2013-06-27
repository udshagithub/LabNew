#ifndef REPORT1_H
#define REPORT1_H

#include <QDialog>

namespace Ui {
class Dailog;
}

class Report1 : public QDialog
{
    Q_OBJECT
    
public:
    explicit Report1(QWidget *parent = 0);
    ~Report1();
    
private:
    Ui::Dailog *ui;
};

#endif // REPORT1_H
