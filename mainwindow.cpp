#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->mainMemoryUI->setRowCount(100);
    for(int i=0; i < 100; i++){
        std::cout << i << std::endl;
        ui->mainMemoryUI->setItem(i, 0, new QTableWidgetItem("NULL"));

    }


}
void MainWindow::test(){
    std::cout << "I'm in the test function" << std::endl;
    for(int i=0; i< 100; i++){
        QTableWidgetItem *temp = ui->mainMemoryUI->item(i,1);
        if(temp){
            int temp2 = temp->text().toInt();
            std::cout << temp2 << std::endl;
        }
    }

}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_inputIn_clicked()
{
    std::cout << "clicked" << std::endl;
    this->test();

}



