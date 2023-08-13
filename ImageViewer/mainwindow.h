#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_openImage_clicked();

    void on_zoomOut_clicked();

    void on_zoomIn_clicked();

private:
    Ui::MainWindow *ui;
    QPixmap originalPixmap;
    void updateImage();
    double currentScalingFactor;
};
#endif // MAINWINDOW_H
