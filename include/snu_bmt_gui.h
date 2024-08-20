#ifndef SNU_BMT_GUI_H
#define SNU_BMT_GUI_H

#pragma once
#include <QMainWindow>
#include <QMessageBox>
#include <QMenu>
#include <QAction>
#include <QMenuBar>
#include <QTimer>
#include <QThread>
#include <QtConcurrent/QtConcurrent>

#include "app_theme_manager.h"
#include "logmanager.h"
#include "optionmanager.h"
#include "snu_bmt_processmanager.h"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class SNU_BMT_GUI;
}
QT_END_NAMESPACE

class SNU_BMT_GUI : public QMainWindow
{
    Q_OBJECT

public:
    SNU_BMT_GUI(QApplication* app_ptr, shared_ptr<SNU_BMT_Interface> interface, QWidget *parent = nullptr);
    ~SNU_BMT_GUI();

private slots:
    void on_actionAbout_SNU_BMT_triggered();
    void on_actionImage_Classificatiomn_triggered();
    void on_actionObject_Detection_triggered();
    void on_actionDark_triggered();
    void on_actionLight_triggered();
    void on_actionHigh_Contrast_triggered();
    void on_btnBMTStart_clicked();

    void on_actionNPU_triggered();

    void on_action3D_Image_Segmentation_triggered();

    void on_btnSaveLog_clicked();

    void on_btnClearLog_clicked();

private:
    void SetStatusBarMessage(const QString& message,int timeout_ms = 5000);



private:
    Ui::SNU_BMT_GUI *ui;
    shared_ptr<AppThemeManager> themeManager;
    shared_ptr<LogManager> logManager;
    shared_ptr<OptionManager> optionManager;
    shared_ptr<SNU_BMT_ProcessManager> processManager;
};
#endif // SNU_BMT_GUI_H
