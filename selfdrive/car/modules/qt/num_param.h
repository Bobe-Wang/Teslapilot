#pragma once

#include <QPushButton>

#include "selfdrive/hardware/hw.h"
#include "selfdrive/ui/qt/widgets/controls.h"

class NumParamControl : public ButtonControl {
  Q_OBJECT

public:
  NumParamControl(QString theLabel, QString theDescription, QString theWindowTitle, QString theWindowInfo, QString theUom, QString theParam, float theDefaultValue);

private:
  QString param_name;
  QString window_info;
  QString window_title;
  QLabel param_label;
  QString description_txt;
  QString label_txt;
  QString uom;

  float default_value;
  float value;

  void refresh();
};
