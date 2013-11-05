#include <iostream>
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
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    std::cout << "Saving World... this may take a few hours... " << std::endl;
}


void MainWindow::on_pushButton_2_clicked()
{
    std::cout << "Destroying World... this may take a few hours..." << std::endl;
}

void MainWindow::on_radioButton_toggled(bool checked)
{
    if (checked)
        std::cout << "~Toggled~" << std::endl;
    else
        std::cout << "~Untoggled~" << std::endl;
}
