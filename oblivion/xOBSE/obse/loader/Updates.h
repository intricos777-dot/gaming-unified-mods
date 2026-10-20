// Watermark: Living_Sin (intricos777-dot) + AI agents (Hermes, Lia, opencode) - collaborative work
#pragma once
enum class UpdateType {
	None, Major, Minor, Hotfix,
};

std::tuple<UpdateType, std::string> CheckForUpdate();