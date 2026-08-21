package steamworks;

class SteamGameServerNetworkingSocketsNative{

    // @off

	/*JNI
		#include "SteamGameServerNetworkingSocketsCallback.h"
	*/

    static native long createCallback(SteamNetworkingSocketsCallbackAdapter javaCallback); /*
		return (intp) new SteamGameServerNetworkingSocketsCallback(env, javaCallback);
	*/

}
