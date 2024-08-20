/********************************************************************************
** Form generated from reading UI file 'snu_bmt_gui.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SNU_BMT_GUI_H
#define UI_SNU_BMT_GUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SNU_BMT_GUI
{
public:
    QAction *actionAbout_SNU_BMT;
    QAction *actionImage_Classificatiomn;
    QAction *actionObject_Detection;
    QAction *actionDark;
    QAction *actionLight;
    QAction *actionNPU;
    QAction *action3D_Image_Segmentation;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_Scenarios;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_Scenarios;
    QGroupBox *groupBox_Datasets;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_Datasets;
    QPushButton *btnBMTStart;
    QPushButton *btnSaveLog;
    QPushButton *btnClearLog;
    QTextEdit *textEdit;
    QProgressBar *progressBar;
    QMenuBar *menubar;
    QMenu *menuTask;
    QMenu *menuHelp;
    QMenu *menuTheme;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SNU_BMT_GUI)
    {
        if (SNU_BMT_GUI->objectName().isEmpty())
            SNU_BMT_GUI->setObjectName("SNU_BMT_GUI");
        SNU_BMT_GUI->resize(719, 510);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/AI_BMT_Middle_Icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SNU_BMT_GUI->setWindowIcon(icon);
        actionAbout_SNU_BMT = new QAction(SNU_BMT_GUI);
        actionAbout_SNU_BMT->setObjectName("actionAbout_SNU_BMT");
        actionImage_Classificatiomn = new QAction(SNU_BMT_GUI);
        actionImage_Classificatiomn->setObjectName("actionImage_Classificatiomn");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("Icons/ImageClassification.PNG"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionImage_Classificatiomn->setIcon(icon1);
        actionObject_Detection = new QAction(SNU_BMT_GUI);
        actionObject_Detection->setObjectName("actionObject_Detection");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("Icons/ObjectDetection.PNG"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionObject_Detection->setIcon(icon2);
        actionDark = new QAction(SNU_BMT_GUI);
        actionDark->setObjectName("actionDark");
        actionLight = new QAction(SNU_BMT_GUI);
        actionLight->setObjectName("actionLight");
        actionNPU = new QAction(SNU_BMT_GUI);
        actionNPU->setObjectName("actionNPU");
        action3D_Image_Segmentation = new QAction(SNU_BMT_GUI);
        action3D_Image_Segmentation->setObjectName("action3D_Image_Segmentation");
        centralwidget = new QWidget(SNU_BMT_GUI);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox_Scenarios = new QGroupBox(centralwidget);
        groupBox_Scenarios->setObjectName("groupBox_Scenarios");
        verticalLayout_6 = new QVBoxLayout(groupBox_Scenarios);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_Scenarios = new QVBoxLayout();
        verticalLayout_Scenarios->setObjectName("verticalLayout_Scenarios");

        verticalLayout_6->addLayout(verticalLayout_Scenarios);


        verticalLayout_2->addWidget(groupBox_Scenarios);

        groupBox_Datasets = new QGroupBox(centralwidget);
        groupBox_Datasets->setObjectName("groupBox_Datasets");
        verticalLayout_7 = new QVBoxLayout(groupBox_Datasets);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_Datasets = new QVBoxLayout();
        verticalLayout_Datasets->setObjectName("verticalLayout_Datasets");

        verticalLayout_7->addLayout(verticalLayout_Datasets);


        verticalLayout_2->addWidget(groupBox_Datasets);

        btnBMTStart = new QPushButton(centralwidget);
        btnBMTStart->setObjectName("btnBMTStart");

        verticalLayout_2->addWidget(btnBMTStart);

        btnSaveLog = new QPushButton(centralwidget);
        btnSaveLog->setObjectName("btnSaveLog");

        verticalLayout_2->addWidget(btnSaveLog);

        btnClearLog = new QPushButton(centralwidget);
        btnClearLog->setObjectName("btnClearLog");

        verticalLayout_2->addWidget(btnClearLog);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_2->addLayout(horizontalLayout);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        horizontalLayout_2->addWidget(textEdit);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 4);

        verticalLayout_3->addLayout(horizontalLayout_2);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(0);

        verticalLayout_3->addWidget(progressBar);

        SNU_BMT_GUI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SNU_BMT_GUI);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 719, 21));
        menuTask = new QMenu(menubar);
        menuTask->setObjectName("menuTask");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        menuTheme = new QMenu(menubar);
        menuTheme->setObjectName("menuTheme");
        SNU_BMT_GUI->setMenuBar(menubar);
        statusbar = new QStatusBar(SNU_BMT_GUI);
        statusbar->setObjectName("statusbar");
        SNU_BMT_GUI->setStatusBar(statusbar);

        menubar->addAction(menuTask->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menubar->addAction(menuTheme->menuAction());
        menuTask->addAction(actionImage_Classificatiomn);
        menuTask->addAction(actionObject_Detection);
        menuTask->addAction(actionNPU);
        menuTask->addAction(action3D_Image_Segmentation);
        menuHelp->addAction(actionAbout_SNU_BMT);
        menuTheme->addAction(actionDark);
        menuTheme->addAction(actionLight);

        retranslateUi(SNU_BMT_GUI);

        QMetaObject::connectSlotsByName(SNU_BMT_GUI);
    } // setupUi

    void retranslateUi(QMainWindow *SNU_BMT_GUI)
    {
        SNU_BMT_GUI->setWindowTitle(QCoreApplication::translate("SNU_BMT_GUI", "SNU BMT", nullptr));
        actionAbout_SNU_BMT->setText(QCoreApplication::translate("SNU_BMT_GUI", "About SNU-BMT", nullptr));
        actionImage_Classificatiomn->setText(QCoreApplication::translate("SNU_BMT_GUI", "Image Classification", nullptr));
        actionObject_Detection->setText(QCoreApplication::translate("SNU_BMT_GUI", "Object Detection", nullptr));
        actionDark->setText(QCoreApplication::translate("SNU_BMT_GUI", "Dark", nullptr));
        actionLight->setText(QCoreApplication::translate("SNU_BMT_GUI", "Light", nullptr));
        actionNPU->setText(QCoreApplication::translate("SNU_BMT_GUI", "NPU", nullptr));
        action3D_Image_Segmentation->setText(QCoreApplication::translate("SNU_BMT_GUI", "3D Image Segmentation", nullptr));
        groupBox_Scenarios->setTitle(QCoreApplication::translate("SNU_BMT_GUI", "Scenarios", nullptr));
        groupBox_Datasets->setTitle(QCoreApplication::translate("SNU_BMT_GUI", "Datasets", nullptr));
        btnBMTStart->setText(QCoreApplication::translate("SNU_BMT_GUI", "Start BMT", nullptr));
        btnSaveLog->setText(QCoreApplication::translate("SNU_BMT_GUI", "Save Log", nullptr));
        btnClearLog->setText(QCoreApplication::translate("SNU_BMT_GUI", "Clear Log", nullptr));
        menuTask->setTitle(QCoreApplication::translate("SNU_BMT_GUI", "AI Task", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("SNU_BMT_GUI", "Help", nullptr));
        menuTheme->setTitle(QCoreApplication::translate("SNU_BMT_GUI", "Theme", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SNU_BMT_GUI: public Ui_SNU_BMT_GUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SNU_BMT_GUI_H
