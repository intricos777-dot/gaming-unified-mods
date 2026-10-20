// Watermark: Living_Sin (intricos777-dot) + AI agents (Hermes, Lia, opencode) - collaborative work
#include "EditorForms.h"

Script::VariableInfo* Script::GetVariableInfo(UInt32 idx)
{
	for (Script::VarInfoEntry* entry = &vars; entry; entry = entry->next)
		if (entry->data && entry->data->idx == idx)
			return entry->data;

	return NULL;
}