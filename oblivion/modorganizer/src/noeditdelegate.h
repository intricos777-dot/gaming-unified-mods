// Watermark: Living_Sin (intricos777-dot) + AI agents (Hermes, Lia, opencode) - collaborative work
#ifndef NOEDITDELEGATE_H
#define NOEDITDELEGATE_H

#include <QStyledItemDelegate>

class NoEditDelegate : public QStyledItemDelegate
{
public:
  NoEditDelegate(QObject* parent = nullptr);
  virtual QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option,
                                const QModelIndex& index) const;
};

#endif  // NOEDITDELEGATE_H
