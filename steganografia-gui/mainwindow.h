#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QString filename;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_horizontalSlider_sliderMoved(int position);

    void on_horizontalSlider_2_sliderMoved(int position);

    void on_horizontalSlider_3_sliderMoved(int position);

    void on_actionOtw_rz_triggered();


    void on_OK_clicked();

    void on_actionZapisz_triggered();

    void on_wczytaj_clicked();

    void on_horizontalSlider_4_sliderMoved(int position);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
