// Watermark: Living_Sin (intricos777-dot) + AI agents (Hermes, Lia, opencode) - collaborative work
#pragma once

#include "CommandTable.h"

void Hook_Memory_Init(void);
void Hook_Memory_DeInit(void);

UInt32 GetPoolAllocationSize(void * buf);

void Hook_Memory_CheckAllocs(void);

extern CommandInfo	kCommandInfo_DebugMemDump;
