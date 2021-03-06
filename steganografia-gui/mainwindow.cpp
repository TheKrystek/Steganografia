#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include "../src/image.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_horizontalSlider_sliderMoved(int position)
{
    ui->r->setText(QString::number(position));
    int a = ui->r->text().toInt();
    int b = ui->g->text().toInt();
    int c = ui->b->text().toInt();
    ui->OK->setEnabled(isCorrect(a,b,c) && !filename.isEmpty());
    ui->wczytaj->setEnabled(isCorrect(a,b,c) && !filename.isEmpty());

}

void MainWindow::on_horizontalSlider_2_sliderMoved(int position)
{
    ui->g->setText(QString::number(position));
    int a = ui->r->text().toInt();
    int b = ui->g->text().toInt();
    int c = ui->b->text().toInt();
    ui->OK->setEnabled(isCorrect(a,b,c) && !filename.isEmpty());
    ui->wczytaj->setEnabled(isCorrect(a,b,c) && !filename.isEmpty());

}

void MainWindow::on_horizontalSlider_3_sliderMoved(int position)
{
    ui->b->setText(QString::number(position));
    int a = ui->r->text().toInt();
    int b = ui->g->text().toInt();
    int c = ui->b->text().toInt();
    ui->OK->setEnabled(isCorrect(a,b,c) && !filename.isEmpty());
    ui->wczytaj->setEnabled(isCorrect(a,b,c) && !filename.isEmpty());

}

void MainWindow::on_actionOtw_rz_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                       "/home/kris/",
                       tr("Files (*.*)"));
    this->filename = fileName;
    QPixmap image(fileName);
    ui->im_in->setPixmap(image);

    int a = ui->r->text().toInt();
    int b = ui->g->text().toInt();
    int c = ui->b->text().toInt();
    ui->OK->setEnabled(isCorrect(a,b,c) && !filename.isEmpty());
}

void MainWindow::on_OK_clicked()
{
    QImage myImage;
    myImage.load(this->filename);

    int a = ui->r->text().toInt();
    int b = ui->g->text().toInt();
    int c = ui->b->text().toInt();

    string napis = ui->in->toPlainText().toStdString();
    int suma = a + b + c;
    int pixeli = ceilOfDivision(napis.length() * 8, suma);
    Image image(pixeli);
    image.setNumberOfUsedBits(a,b,c);

    for (int p = 0, y =0, x =0; p < pixeli; ++p,++x) {
        QRgb rgb = myImage.pixel(x,y);
        int red = qRed(rgb);
        int green = qGreen(rgb);
        int blue = qBlue(rgb);
        image.pixels.push_back(new Pixel(red,green,blue));

        // Przejdz do nowej linii
        if (x == myImage.width()) {
            x = 0;
            y++;
        }
    }
    image.encode(napis);
    ui->out->setText(QString::fromStdString(image.decode(napis.length())));
    for (int p = 0, y =0, x =0; p < pixeli; ++p,++x) {
        Pixel *pix = image.pixels[p];
        myImage.setPixel(x, y, qRgb(pix->red(), pix->green(), pix->blue()));

        // Przejdz do nowej linii
        if (x == myImage.width()) {
            x = 0;
            y++;
        }
    }
    ui->im_out->setPixmap(QPixmap::fromImage(myImage));
}

void MainWindow::on_actionZapisz_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                       "/home/kris/",tr("Files (*.*)"));

    QFile file(fileName);
    file.open(QIODevice::WriteOnly);
    int quality = ui->q->text().toInt();
    ui->im_out->pixmap()->save(&file,"png",100);
}

void MainWindow::on_wczytaj_clicked()
{
    QImage myImage;
    myImage.load(this->filename);

    int a = ui->r->text().toInt();
    int b = ui->g->text().toInt();
    int c = ui->b->text().toInt();

    int znakow = ui->znakow->toPlainText().toInt();
    int suma = a + b + c;
    int pixeli = ceilOfDivision(znakow * 8, suma);
    Image image(pixeli);
    image.setNumberOfUsedBits(a,b,c);

    for (int p = 0, y =0, x =0; p < pixeli; ++p,++x) {
        QRgb rgb = myImage.pixel(x,y);
        int red = qRed(rgb);
        int green = qGreen(rgb);
        int blue = qBlue(rgb);
        image.pixels.push_back(new Pixel(red,green,blue));

        // Przejdz do nowej linii
        if (x == myImage.width()) {
            x = 0;
            y++;
        }
    }
    ui->out->setText(QString::fromStdString(image.decode(znakow)));
    for (int p = 0, y =0, x =0; p < pixeli; ++p,++x) {
        Pixel *pix = image.pixels[p];
        myImage.setPixel(x, y, qRgb(pix->red(), pix->green(), pix->blue()));

        // Przejdz do nowej linii
        if (x == myImage.width()) {
            x = 0;
            y++;
        }
    }
    ui->im_out->setPixmap(QPixmap::fromImage(myImage));
}

void MainWindow::on_horizontalSlider_4_sliderMoved(int position)
{
    ui->q->setText(QString::number(position));
}
