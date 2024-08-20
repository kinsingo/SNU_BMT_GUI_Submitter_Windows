#ifndef LOGMANAGER_H
#define LOGMANAGER_H

#pragma once

#include <QTextEdit>
#include <QTextCursor>
#include <QColor>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QMessageBox>

class LogManager
{
private:
    QTextEdit* textEdit;
    QColor textColor;
public:
    void SetTextColor(QColor textColor);

public:
    explicit LogManager(QTextEdit* textEdit);
    void WriteLogMessage(QString message);
    void WriteLogMessage(QString message, QColor color);
    void clear();
    void saveLogAsFile();
};

#endif // LOGMANAGER_H
