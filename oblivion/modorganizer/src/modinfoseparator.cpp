// Watermark: Living_Sin (intricos777-dot) + AI agents (Hermes, Lia, opencode) - collaborative work
#include "modinfoseparator.h"

bool ModInfoSeparator::setName(const QString& name)
{
  return ModInfoRegular::setName(name);
}

std::vector<ModInfo::EFlag> ModInfoSeparator::getFlags() const
{
  {
    auto result = ModInfoRegular::getFlags();
    result.push_back(FLAG_SEPARATOR);
    return result;
  }
}

int ModInfoSeparator::getHighlight() const
{
  return HIGHLIGHT_CENTER;
}

QString ModInfoSeparator::getDescription() const
{
  return tr("This is a Separator");
}

QString ModInfoSeparator::name() const
{
  return ModInfoRegular::name();
}

ModInfoSeparator::ModInfoSeparator(const QDir& path, OrganizerCore& core)
    : ModInfoRegular(path, core)
{}
