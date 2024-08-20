#ifndef APP_THEME_MANAGER_H
#define APP_THEME_MANAGER_H

#pragma once
#include <QApplication>
#include <QPalette>
#include "logmanager.h"

using namespace std;

class AppThemeManager
{
private:
    QApplication* app_ptr;
    shared_ptr<LogManager> logManage;

public:
    explicit AppThemeManager(QApplication* app_ptr,shared_ptr<LogManager> logManage);
    void SetDarkTheme();
    void SetLightTheme();
    void SetHighContrastTheme();
};

#endif // APP_THEME_MANAGER_H
