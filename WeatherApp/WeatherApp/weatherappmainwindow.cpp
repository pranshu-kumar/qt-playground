#include "weatherappmainwindow.h"
#include "./ui_weatherappmainwindow.h"
#include <QUrl>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include<QJsonDocument>
#include<QJsonObject>
#include<QJsonArray>
#include<QLabel>
#include<QFrame>
#include <QDebug>

using namespace std;
WeatherAppMainWindow::WeatherAppMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WeatherAppMainWindow)
{
    ui->setupUi(this);
}

WeatherAppMainWindow::~WeatherAppMainWindow()
{
    delete ui;
}


void WeatherAppMainWindow::on_getData_clicked()
{
//    string apiKey = "ddea79cc410e8b4f02c88169b197d59e";
    qDebug() << "Button clicked!" << "\n";
    QNetworkAccessManager networkManager;
    QUrl apiUrl("https://jsonplaceholder.typicode.com/users");

    QNetworkRequest request(apiUrl);

    QNetworkReply *reply = networkManager.get(request);
    QEventLoop loop;
    QObject::connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec();

    if(reply->error() == QNetworkReply::NoError) {
        qDebug() << "no error found";
        QByteArray responseData = reply->readAll();
        QJsonDocument parsedJson = QJsonDocument::fromJson(responseData);

        if (!parsedJson.isNull() && parsedJson.isArray()) {
            QJsonArray usersArray = parsedJson.array();
            qDebug() << usersArray << "\n";
            WeatherAppMainWindow::fillLabels(usersArray);
        }
//        qDebug() << "Person name: " << parsedJson["name"].toString();

    } else {
        qDebug() << "error found!";
    }

    reply->deleteLater();

}

void WeatherAppMainWindow::fillLabels(QJsonArray usersArray) {
    foreach (const QJsonValue &userValue, usersArray) {
        if(userValue.isObject()) {
            QJsonObject userObject = userValue.toObject();
            qDebug() << userObject["name"].toString() << "\n";
            QLabel *nameLabel = new QLabel(QString("Name: %1").arg(userObject["name"].toString()));
            QLabel *usernameLabel = new QLabel(QString("Username: %1").arg(userObject["username"].toString()));
            QLabel *EmailLabel = new QLabel(QString("Email: %1").arg(userObject["email"].toString()));
            ui->verticalLayout_2->addWidget(nameLabel);
            ui->verticalLayout_2->addWidget(usernameLabel);
            ui->verticalLayout_2->addWidget(EmailLabel);

            QFrame *line = new QFrame;
            line->setFrameShape(QFrame::HLine);
            ui->verticalLayout_2->addWidget(line);
        }
    }
}

