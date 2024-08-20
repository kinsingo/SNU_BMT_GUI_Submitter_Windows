#ifndef OPTIONMANAGER_H
#define OPTIONMANAGER_H

#pragma once
#include "bmt_enums.h"
#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QGroupBox>
#include <QRadioButton>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>
#include <QList>
#include <QDebug>

using namespace std;

class OptionManager
{
private:
    QGroupBox*  groupBox_Datasets;
    QGroupBox*  groupBox_Scenarios;
    QVBoxLayout* datasetLayout;
    QVBoxLayout* scenarioLayout;

    //Dataset RadioButtons
    QRadioButton* rb_dataSet_imagenet2012;
    QRadioButton* rb_dataSet_openimages_resized_to_800x800;
    QRadioButton* rb_dataSet_squad_1_1;
    QRadioButton* rb_dataSet_KiTS19;

    //Scenario RadioButtons
    QRadioButton* rb_scenario_SingleStream;
    QRadioButton* rb_scenario_Offline;

    //Container
    QList<QRadioButton*> radiobuttons;

public:
    explicit OptionManager(QGroupBox* groupBox_Datasets,QGroupBox* groupBox_Scenarios,QVBoxLayout* verticalLayout_Datasets,QVBoxLayout* verticalLayout_Scenarios);
    virtual ~OptionManager();
    void updateOptions(const SNU_BMT_Task& task);

private:
    void addRadioButtonToLayout(QVBoxLayout* layout, QRadioButton* rb, bool IsChecked = false);
    void clearLayout();
    void updateLayout(const SNU_BMT_Task &task);
    void updateGroupbox();
    void ShowRadioButtonStatus();
};



#endif // OPTIONMANAGER_H
