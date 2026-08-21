#pragma once

#include "SteamGameServerCallbackAdapter.h"
#include <steam_gameserver.h>

class SteamGameServerNetworkingSocketsCallback : public SteamGameServerCallbackAdapter {

public:
	SteamGameServerNetworkingSocketsCallback(JNIEnv* env, jobject callback);
	~SteamGameServerNetworkingSocketsCallback();

	STEAM_GAMESERVER_CALLBACK(SteamGameServerNetworkingSocketsCallback, onConnectionStatusChanged, SteamNetConnectionStatusChangedCallback_t, m_CallbackConnectionStatusChanged);
};
