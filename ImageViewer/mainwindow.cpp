#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include<QFileDialog>
#include<QDebug>
#include<QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    currentScalingFactor = 1.0;
    ui->zoomIn->hide();
    ui->zoomOut->hide();
    ui->imageLabel->setAlignment(Qt::AlignHCenter);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_openImage_clicked()
{
    QString imagePath = QFileDialog::getOpenFileName(this, "Open Image", "", "Images (*.jpg *.png *.jpeg *.bmp)");
    qDebug()<<"Path fetched: "<<imagePath<<"\n";

    if(!imagePath.isEmpty()) {
        QPixmap pixmap(imagePath);
        QPixmap scaledPixmap = pixmap.scaled(ui->imageLabel->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
        originalPixmap = scaledPixmap;
        ui->imageLabel->setPixmap(scaledPixmap);
        ui->zoomIn->setVisible(true);
        ui->zoomOut->setVisible(true);
    }
}

void MainWindow::on_zoomOut_clicked()
{
    currentScalingFactor /= 1.25;
    updateImage();
}


void MainWindow::on_zoomIn_clicked()
{
    currentScalingFactor *= 1.25;
    updateImage();
}

void MainWindow::updateImage() {
    QPixmap zoomedInPixmap = originalPixmap.scaled(ui->imageLabel->size() * currentScalingFactor, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->imageLabel->setPixmap(zoomedInPixmap);
}

