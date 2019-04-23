#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    db.close();
    delete ui;
}

void MainWindow::on_actionConnect_triggered()
{
    QWidget *connect = new QWidget;
    QTextEdit *text1 = new QTextEdit;
    QTextEdit *text2 = new QTextEdit;
    QTextEdit *text3 = new QTextEdit;
    QTextEdit *text4 = new QTextEdit;
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(text1);
    layout->addWidget(text2);
    layout->addWidget(text3);
    layout->addWidget(text4);

    QPushButton *connectButton = new QPushButton;
    connectButton->setText(tr("Connect"));
    layout->addWidget(connectButton);

    connect->setLayout(layout);
    connect->show();

}
