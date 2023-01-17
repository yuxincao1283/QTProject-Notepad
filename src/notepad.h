#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>

#include<QFile>
#include<QFileDialog>
#include<QTextSTream>
#include<QMessageBox>
#include<QPrinter>
#include<QPrintDialog>

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
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_as_triggered();

    void on_actionPrint_triggered();

    void on_actionExit_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionCut_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionSave_triggered();

private:
    Ui::MainWindow *ui;
    QString currentFile = "";
};
#endif // NOTEPAD_H
