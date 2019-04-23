#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "qsqlquery.h"
#include "qsqlquerymodel.h"
#include "qmessagebox.h"
#include "qdebug.h"
#include "qsqlerror.h"
#include "QTextEdit"
#include "QPushButton"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionConnect_triggered();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
};

#endif
