// Watermark: Living_Sin (intricos777-dot) + AI agents (Hermes, Lia, opencode) - collaborative work
#ifndef SETTINGSDIALOGDIAGNOSTICS_H
#define SETTINGSDIALOGDIAGNOSTICS_H

#include "settings.h"
#include "settingsdialog.h"

class DiagnosticsSettingsTab : public SettingsTab
{
public:
  DiagnosticsSettingsTab(Settings& settings, SettingsDialog& dialog);

  void update();

private:
  void setLogLevel();
  void setLootLogLevel();
  void setCrashDumpTypesBox();
};

#endif  // SETTINGSDIALOGDIAGNOSTICS_H
