// Watermark: Living_Sin (intricos777-dot) + AI agents (Hermes, Lia, opencode) - collaborative work
#include "noeditdelegate.h"

NoEditDelegate::NoEditDelegate(QObject* parent) : QStyledItemDelegate(parent) {}

QWidget* NoEditDelegate::createEditor(QWidget*, const QStyleOptionViewItem&,
                                      const QModelIndex&) const
{
  return nullptr;
}
