#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //void MainWindow::makePlot();

private slots:
    //void makePlot();
    void on_pushButtonParabol_clicked();

private:
    Ui::MainWindow *ui;


};

#endif // MAINWINDOW_H
