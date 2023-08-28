/********************************************************************************
** Form generated from reading UI file 'weatherappmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEATHERAPPMAINWINDOW_H
#define UI_WEATHERAPPMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WeatherAppMainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *getData;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WeatherAppMainWindow)
    {
        if (WeatherAppMainWindow->objectName().isEmpty())
            WeatherAppMainWindow->setObjectName("WeatherAppMainWindow");
        WeatherAppMainWindow->resize(800, 600);
        centralwidget = new QWidget(WeatherAppMainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 780, 502));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");

        horizontalLayout->addLayout(verticalLayout_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        getData = new QPushButton(centralwidget);
        getData->setObjectName("getData");

        verticalLayout->addWidget(getData);

        WeatherAppMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WeatherAppMainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 23));
        WeatherAppMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(WeatherAppMainWindow);
        statusbar->setObjectName("statusbar");
        WeatherAppMainWindow->setStatusBar(statusbar);

        retranslateUi(WeatherAppMainWindow);

        QMetaObject::connectSlotsByName(WeatherAppMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *WeatherAppMainWindow)
    {
        WeatherAppMainWindow->setWindowTitle(QCoreApplication::translate("WeatherAppMainWindow", "WeatherAppMainWindow", nullptr));
        getData->setText(QCoreApplication::translate("WeatherAppMainWindow", "Get Data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WeatherAppMainWindow: public Ui_WeatherAppMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEATHERAPPMAINWINDOW_H
