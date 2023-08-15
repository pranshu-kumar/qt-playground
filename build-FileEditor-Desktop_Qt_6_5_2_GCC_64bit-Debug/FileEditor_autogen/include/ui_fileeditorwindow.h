/********************************************************************************
** Form generated from reading UI file 'fileeditorwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEEDITORWINDOW_H
#define UI_FILEEDITORWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileEditorWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionBold;
    QAction *actionItalics;
    QAction *actionUnderline;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuText_Styles;
    QMenu *menuAbout;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *FileEditorWindow)
    {
        if (FileEditorWindow->objectName().isEmpty())
            FileEditorWindow->setObjectName("FileEditorWindow");
        FileEditorWindow->resize(800, 600);
        actionNew = new QAction(FileEditorWindow);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/assets/assets/new-document.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(FileEditorWindow);
        actionOpen->setObjectName("actionOpen");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/assets/assets/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(FileEditorWindow);
        actionSave->setObjectName("actionSave");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/assets/assets/icons8-save-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_As = new QAction(FileEditorWindow);
        actionSave_As->setObjectName("actionSave_As");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/assets/assets/icons8-save-as-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon3);
        actionBold = new QAction(FileEditorWindow);
        actionBold->setObjectName("actionBold");
        actionBold->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/assets/assets/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon4);
        actionItalics = new QAction(FileEditorWindow);
        actionItalics->setObjectName("actionItalics");
        actionItalics->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/assets/assets/italic-font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalics->setIcon(icon5);
        actionUnderline = new QAction(FileEditorWindow);
        actionUnderline->setObjectName("actionUnderline");
        actionUnderline->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/assets/assets/underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon6);
        actionCut = new QAction(FileEditorWindow);
        actionCut->setObjectName("actionCut");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/assets/assets/cut_1150985.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon7);
        actionCopy = new QAction(FileEditorWindow);
        actionCopy->setObjectName("actionCopy");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/assets/assets/copy_1834056.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon8);
        actionPaste = new QAction(FileEditorWindow);
        actionPaste->setObjectName("actionPaste");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/assets/assets/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon9);
        centralwidget = new QWidget(FileEditorWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        horizontalLayout->addWidget(textEdit);

        FileEditorWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FileEditorWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuText_Styles = new QMenu(menuEdit);
        menuText_Styles->setObjectName("menuText_Styles");
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName("menuAbout");
        FileEditorWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(FileEditorWindow);
        statusbar->setObjectName("statusbar");
        FileEditorWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(FileEditorWindow);
        toolBar->setObjectName("toolBar");
        FileEditorWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuEdit->addAction(menuText_Styles->menuAction());
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuText_Styles->addAction(actionBold);
        menuText_Styles->addAction(actionItalics);
        menuText_Styles->addAction(actionUnderline);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionSave_As);
        toolBar->addSeparator();
        toolBar->addAction(actionBold);
        toolBar->addAction(actionItalics);
        toolBar->addAction(actionUnderline);
        toolBar->addSeparator();
        toolBar->addAction(actionCut);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPaste);

        retranslateUi(FileEditorWindow);

        QMetaObject::connectSlotsByName(FileEditorWindow);
    } // setupUi

    void retranslateUi(QMainWindow *FileEditorWindow)
    {
        FileEditorWindow->setWindowTitle(QCoreApplication::translate("FileEditorWindow", "FileEditorWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("FileEditorWindow", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("FileEditorWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("FileEditorWindow", "Save", nullptr));
        actionSave_As->setText(QCoreApplication::translate("FileEditorWindow", "Save As...", nullptr));
        actionBold->setText(QCoreApplication::translate("FileEditorWindow", "Bold", nullptr));
        actionItalics->setText(QCoreApplication::translate("FileEditorWindow", "Italics", nullptr));
        actionUnderline->setText(QCoreApplication::translate("FileEditorWindow", "Underline", nullptr));
        actionCut->setText(QCoreApplication::translate("FileEditorWindow", "Cut", nullptr));
        actionCopy->setText(QCoreApplication::translate("FileEditorWindow", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("FileEditorWindow", "Paste", nullptr));
        menuFile->setTitle(QCoreApplication::translate("FileEditorWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("FileEditorWindow", "Edit", nullptr));
        menuText_Styles->setTitle(QCoreApplication::translate("FileEditorWindow", "Text Styles", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("FileEditorWindow", "About", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("FileEditorWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileEditorWindow: public Ui_FileEditorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEEDITORWINDOW_H
