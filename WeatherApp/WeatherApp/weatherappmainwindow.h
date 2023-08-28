#ifndef WEATHERAPPMAINWINDOW_H
#define WEATHERAPPMAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class WeatherAppMainWindow; }
QT_END_NAMESPACE

class WeatherAppMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    WeatherAppMainWindow(QWidget *parent = nullptr);
    ~WeatherAppMainWindow();

private slots:
    void on_getData_clicked();
//    void finishReading();

private:
    Ui::WeatherAppMainWindow *ui;
    void fillLabels(QJsonArray parsedJson);
};
#endif // WEATHERAPPMAINWINDOW_H
