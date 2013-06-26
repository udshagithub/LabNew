#ifndef REPORTS_H
#define REPORTS_H

#include <QDialog>

class QCheckBox;
class QLabel;
class QLineEdit;
class QPushButton;

class ReportsDialog : public QDialog
{
    Q_OBJECT

public:
    ReportsDialog(QWidget *parent = 0);

signals:

private slots:

private:

   QLabel *label;
   QLineEdit *lineEdit;
   QCheckBox *caseCheckBox;
   QCheckBox *backwardCheckBox;
   QPushButton *findButton;
   QPushButton *closeButton;
};

#endif // REPORTS_H
