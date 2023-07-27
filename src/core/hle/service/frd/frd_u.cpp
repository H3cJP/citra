// Copyright 2014 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "common/archives.h"
#include "core/hle/service/frd/frd_u.h"

SERIALIZE_EXPORT_IMPL(Service::FRD::FRD_U)

namespace Service::FRD {

FRD_U::FRD_U(std::shared_ptr<Module> frd) : Module::Interface(std::move(frd), "frd:u", 8) {
    static const FunctionInfo functions[] = {
        {0x0001, &FRD_U::HasLoggedIn, "HasLoggedIn"},
        {0x0002, &FRD_U::IsOnline, "IsOnline"},
        {0x0003, &FRD_U::Login, "Login"},
        {0x0004, &FRD_U::Logout, "Logout"},
        {0x0005, &FRD_U::GetMyFriendKey, "GetMyFriendKey"},
        {0x0006, &FRD_U::GetMyPreference, "GetMyPreference"},
        {0x0007, &FRD_U::GetMyProfile, "GetMyProfile"},
        {0x0008, &FRD_U::GetMyPresence, "GetMyPresence"},
        {0x0009, &FRD_U::GetMyScreenName, "GetMyScreenName"},
        {0x000A, &FRD_U::GetMyMii, "GetMyMii"},
        {0x000B, &FRD_U::GetMyLocalAccountId, "GetMyLocalAccountId"},
        {0x000C, &FRD_U::GetMyPlayingGame, "GetMyPlayingGame"},
        {0x000D, &FRD_U::GetMyFavoriteGame, "GetMyFavoriteGame"},
        {0x000E, &FRD_U::GetMyNcPrincipalId, "GetMyNcPrincipalId"},
        {0x000F, &FRD_U::GetMyComment, "GetMyComment"},
        {0x0010, &FRD_U::GetMyPassword, "GetMyPassword"},
        {0x0011, &FRD_U::GetFriendKeyList, "GetFriendKeyList"},
        {0x0012, &FRD_U::GetFriendPresence, "GetFriendPresence"},
        {0x0013, &FRD_U::GetFriendScreenName, "GetFriendScreenName"},
        {0x0014, &FRD_U::GetFriendMii, "GetFriendMii"},
        {0x0015, &FRD_U::GetFriendProfile, "GetFriendProfile"},
        {0x0016, &FRD_U::GetFriendRelationship, "GetFriendRelationship"},
        {0x0017, &FRD_U::GetFriendAttributeFlags, "GetFriendAttributeFlags"},
        {0x0018, &FRD_U::GetFriendPlayingGame, "GetFriendPlayingGame"},
        {0x0019, &FRD_U::GetFriendFavoriteGame, "GetFriendFavoriteGame"},
        {0x001A, &FRD_U::GetFriendInfo, "GetFriendInfo"},
        {0x001B, &FRD_U::IsIncludedInFriendList, "IsIncludedInFriendList"},
        {0x001C, &FRD_U::UnscrambleLocalFriendCode, "UnscrambleLocalFriendCode"},
        {0x001D, &FRD_U::UpdateGameModeDescription, "UpdateGameModeDescription"},
        {0x001E, &FRD_U::UpdateGameMode, "UpdateGameMode"},
        {0x001F, nullptr, "SendInvitation"},
        {0x0020, &FRD_U::AttachToEventNotification, "AttachToEventNotification"},
        {0x0021, &FRD_U::SetNotificationMask, "SetNotificationMask"},
        {0x0022, &FRD_U::GetEventNotification, "GetEventNotification"},
        {0x0023, &FRD_U::GetLastResponseResult, "GetLastResponseResult"},
        {0x0024, nullptr, "PrincipalIdToFriendCode"},
        {0x0025, nullptr, "FriendCodeToPrincipalId"},
        {0x0026, nullptr, "IsValidFriendCode"},
        {0x0027, nullptr, "ResultToErrorCode"},
        {0x0028, &FRD_U::RequestGameAuthentication, "RequestGameAuthentication"},
        {0x0029, &FRD_U::GetGameAuthenticationData, "GetGameAuthenticationData"},
        {0x002A, nullptr, "RequestServiceLocator"},
        {0x002B, nullptr, "GetServiceLocatorData"},
        {0x002C, nullptr, "DetectNatProperties"},
        {0x002D, nullptr, "GetNatProperties"},
        {0x002E, nullptr, "GetServerTimeInterval"},
        {0x002F, nullptr, "AllowHalfAwake"},
        {0x0030, nullptr, "GetServerTypes"},
        {0x0031, nullptr, "GetFriendComment"},
        {0x0032, &FRD_U::SetClientSdkVersion, "SetClientSdkVersion"},
        {0x0033, nullptr, "GetMyApproachContext"},
        {0x0034, nullptr, "AddFriendWithApproach"},
        {0x0035, nullptr, "DecryptApproachContext"},
    };
    RegisterHandlers(functions);
}

} // namespace Service::FRD
