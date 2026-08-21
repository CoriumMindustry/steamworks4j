#include "SteamGameServerNetworkingSocketsCallback.h"

SteamGameServerNetworkingSocketsCallback::SteamGameServerNetworkingSocketsCallback(JNIEnv* env, jobject callback)
	: SteamGameServerCallbackAdapter(env, callback)
	, m_CallbackConnectionStatusChanged(this, &SteamGameServerNetworkingSocketsCallback::onConnectionStatusChanged) {

}

SteamGameServerNetworkingSocketsCallback::~SteamGameServerNetworkingSocketsCallback() {

}

void SteamGameServerNetworkingSocketsCallback::onConnectionStatusChanged(SteamNetConnectionStatusChangedCallback_t* callback) {
	invokeCallback({
			callVoidMethod(env, "onConnectionStatusChanged", "(IJII)V",
				callback->m_hConn,
				callback->m_info.m_identityRemote.GetSteamID64(),
				callback->m_info.m_eState,
				callback->m_eOldState);
		});
}
