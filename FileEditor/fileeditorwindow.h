#ifndef FILEEDITORWINDOW_H
#define FILEEDITORWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class FileEditorWindow; }
QT_END_NAMESPACE

class FileEditorWindow : public QMainWindow
{
    Q_OBJECT

public:
    FileEditorWindow(QWidget *parent = nullptr);
    ~FileEditorWindow();

private slots:

    void on_actionBold_triggered();

    void on_actionItalics_triggered();

    void on_actionUnderline_triggered();

private:
    Ui::FileEditorWindow *ui;
};
#endif // FILEEDITORWINDOW_H
