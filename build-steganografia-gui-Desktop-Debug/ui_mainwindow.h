/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOtw_rz;
    QAction *actionZapisz;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *im_in;
    QLabel *label;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *im_out;
    QLabel *label_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QSplitter *splitter_2;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *in;
    QTextEdit *out;
    QFrame *frame_6;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider_3;
    QLabel *r;
    QLabel *g;
    QLabel *b;
    QPushButton *OK;
    QTextEdit *znakow;
    QPushButton *wczytaj;
    QSlider *horizontalSlider_4;
    QLabel *q;
    QLabel *label_3;
    QMenuBar *menuBar;
    QMenu *menuPlik;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(818, 448);
        actionOtw_rz = new QAction(MainWindow);
        actionOtw_rz->setObjectName(QStringLiteral("actionOtw_rz"));
        actionZapisz = new QAction(MainWindow);
        actionZapisz->setObjectName(QStringLiteral("actionZapisz"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        frame = new QFrame(splitter);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(800, 300));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        im_in = new QLabel(frame_3);
        im_in->setObjectName(QStringLiteral("im_in"));

        verticalLayout_3->addWidget(im_in);

        label = new QLabel(frame_3);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(label);


        horizontalLayout->addWidget(frame_3);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_4);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        im_out = new QLabel(frame_4);
        im_out->setObjectName(QStringLiteral("im_out"));

        verticalLayout_2->addWidget(im_out);

        label_2 = new QLabel(frame_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(label_2);

        label_2->raise();
        im_out->raise();

        horizontalLayout->addWidget(frame_4);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        splitter->addWidget(frame);
        frame_2 = new QFrame(splitter);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setMinimumSize(QSize(400, 80));
        frame_2->setMaximumSize(QSize(16777215, 500));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        splitter_2 = new QSplitter(frame_2);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        frame_5 = new QFrame(splitter_2);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy2);
        frame_5->setMinimumSize(QSize(400, 0));
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_5);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        in = new QTextEdit(frame_5);
        in->setObjectName(QStringLiteral("in"));

        verticalLayout_4->addWidget(in);

        out = new QTextEdit(frame_5);
        out->setObjectName(QStringLiteral("out"));
        out->setReadOnly(true);

        verticalLayout_4->addWidget(out);

        splitter_2->addWidget(frame_5);
        frame_6 = new QFrame(splitter_2);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        sizePolicy.setHeightForWidth(frame_6->sizePolicy().hasHeightForWidth());
        frame_6->setSizePolicy(sizePolicy);
        frame_6->setMinimumSize(QSize(400, 0));
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalSlider = new QSlider(frame_6);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(10, 20, 121, 16));
        horizontalSlider->setStyleSheet(QLatin1String("\n"
"\n"
" QSlider::handle:horizontal {\n"
"     background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 darkred, stop:1 red);\n"
"     border: 1px solid #5c5c5c;\n"
"     width: 18px;\n"
"     margin: -2px 0;\n"
"     border-radius: 7px;\n"
" }\n"
"\n"
"\n"
""));
        horizontalSlider->setMaximum(8);
        horizontalSlider->setValue(0);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider_2 = new QSlider(frame_6);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(10, 40, 121, 16));
        horizontalSlider_2->setStyleSheet(QLatin1String("\n"
"\n"
" QSlider::handle:horizontal {\n"
"     background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 darkgreen, stop:1 green);\n"
"     border: 1px solid #5c5c5c;\n"
"     width: 18px;\n"
"     margin: -2px 0;\n"
"     border-radius: 7px;\n"
" }\n"
""));
        horizontalSlider_2->setMaximum(8);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        horizontalSlider_3 = new QSlider(frame_6);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(10, 60, 121, 16));
        horizontalSlider_3->setStyleSheet(QLatin1String("QSlider::handle:horizontal {\n"
"     background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 darkblue, stop:1 blue);\n"
"     border: 1px solid #5c5c5c;\n"
"     width: 18px;\n"
"     margin: -2px 0;\n"
"     border-radius: 7px;\n"
" }\n"
""));
        horizontalSlider_3->setMaximum(8);
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        r = new QLabel(frame_6);
        r->setObjectName(QStringLiteral("r"));
        r->setGeometry(QRect(140, 20, 57, 14));
        g = new QLabel(frame_6);
        g->setObjectName(QStringLiteral("g"));
        g->setGeometry(QRect(140, 40, 57, 14));
        b = new QLabel(frame_6);
        b->setObjectName(QStringLiteral("b"));
        b->setGeometry(QRect(140, 60, 57, 14));
        OK = new QPushButton(frame_6);
        OK->setObjectName(QStringLiteral("OK"));
        OK->setEnabled(false);
        OK->setGeometry(QRect(160, 20, 80, 25));
        znakow = new QTextEdit(frame_6);
        znakow->setObjectName(QStringLiteral("znakow"));
        znakow->setGeometry(QRect(250, 50, 81, 21));
        wczytaj = new QPushButton(frame_6);
        wczytaj->setObjectName(QStringLiteral("wczytaj"));
        wczytaj->setEnabled(false);
        wczytaj->setGeometry(QRect(160, 50, 80, 25));
        horizontalSlider_4 = new QSlider(frame_6);
        horizontalSlider_4->setObjectName(QStringLiteral("horizontalSlider_4"));
        horizontalSlider_4->setGeometry(QRect(250, 20, 81, 16));
        horizontalSlider_4->setMinimum(1);
        horizontalSlider_4->setMaximum(100);
        horizontalSlider_4->setValue(100);
        horizontalSlider_4->setOrientation(Qt::Horizontal);
        q = new QLabel(frame_6);
        q->setObjectName(QStringLiteral("q"));
        q->setGeometry(QRect(340, 20, 57, 14));
        label_3 = new QLabel(frame_6);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(340, 50, 57, 14));
        splitter_2->addWidget(frame_6);

        horizontalLayout_2->addWidget(splitter_2);

        splitter->addWidget(frame_2);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 818, 22));
        menuPlik = new QMenu(menuBar);
        menuPlik->setObjectName(QStringLiteral("menuPlik"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuPlik->menuAction());
        menuPlik->addSeparator();
        menuPlik->addAction(actionOtw_rz);
        menuPlik->addAction(actionZapisz);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QT Steganografia - Krystian \305\232widurski", 0));
        actionOtw_rz->setText(QApplication::translate("MainWindow", "Otw\303\263rz", 0));
        actionZapisz->setText(QApplication::translate("MainWindow", "Zapisz", 0));
        im_in->setText(QString());
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Obraz wej\305\233ciowy</p></body></html>", 0));
        im_out->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Obraz wynikowy</p></body></html>", 0));
        r->setText(QApplication::translate("MainWindow", "0", 0));
        g->setText(QApplication::translate("MainWindow", "0", 0));
        b->setText(QApplication::translate("MainWindow", "0", 0));
        OK->setText(QApplication::translate("MainWindow", "Szyfruj", 0));
        wczytaj->setText(QApplication::translate("MainWindow", "Deszyfruj", 0));
        q->setText(QApplication::translate("MainWindow", "100", 0));
        label_3->setText(QApplication::translate("MainWindow", "Znak\303\263w", 0));
        menuPlik->setTitle(QApplication::translate("MainWindow", "Plik", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
