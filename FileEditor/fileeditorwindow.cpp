#include "fileeditorwindow.h"
#include "./ui_fileeditorwindow.h"

FileEditorWindow::FileEditorWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FileEditorWindow)
{
    ui->setupUi(this);
}

FileEditorWindow::~FileEditorWindow()
{
    delete ui;
}

void FileEditorWindow::on_actionBold_triggered()
{
    ui->actionBold->isChecked() ? ui->textEdit->setFontWeight(QFont::Bold) : ui->textEdit->setFontWeight(QFont::Normal);
}


void FileEditorWindow::on_actionItalics_triggered()
{
    ui->actionItalics->isChecked() ? ui->textEdit->setFontItalic(true) : ui->textEdit->setFontItalic(false);
}


void FileEditorWindow::on_actionUnderline_triggered()
{
    ui->actionUnderline->isChecked() ? ui->textEdit->setFontUnderline(true) : ui->textEdit->setFontUnderline(false);
}

