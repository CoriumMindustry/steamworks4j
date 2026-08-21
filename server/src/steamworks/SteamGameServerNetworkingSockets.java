package steamworks;

public class SteamGameServerNetworkingSockets extends SteamNetworkingSockets{

    public SteamGameServerNetworkingSockets(SteamNetworkingSocketsCallback callback){
        super(SteamGameServerAPINative.getSteamGameServerNetworkingSocketsPointer(),
        SteamGameServerNetworkingSocketsNative.createCallback(new SteamNetworkingSocketsCallbackAdapter(callback)));
    }

}
