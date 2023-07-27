// Copyright 2015 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "common/archives.h"
#include "core/hle/service/frd/frd_a.h"

SERIALIZE_EXPORT_IMPL(Service::FRD::FRD_A)

namespace Service::FRD {

FRD_A::FRD_A(std::shared_ptr<Module> frd) : Module::Interface(std::move(frd), "frd:a", 8) {
    static const FunctionInfo functions[] = {
        {0x0001, &FRD_A::HasLoggedIn, "HasLoggedIn"},
        {0x0002, &FRD_A::IsOnline, "IsOnline"},
        {0x0003, &FRD_A::Login, "Login"},
        {0x0004, &FRD_A::Logout, "Logout"},
        {0x0005, &FRD_A::GetMyFriendKey, "GetMyFriendKey"},
        {0x0006, &FRD_A::GetMyPreference, "GetMyPreference"},
        {0x0007, &FRD_A::GetMyProfile, "GetMyProfile"},
        {0x0008, &FRD_A::GetMyPresence, "GetMyPresence"},
        {0x0009, &FRD_A::GetMyScreenName, "GetMyScreenName"},
        {0x000A, &FRD_A::GetMyMii, "GetMyMii"},
        {0x000B, &FRD_A::GetMyLocalAccountId, "GetMyLocalAccountId"},
        {0x000C, &FRD_A::GetMyPlayingGame, "GetMyPlayingGame"},
        {0x000D, &FRD_A::GetMyFavoriteGame, "GetMyFavoriteGame"},
        {0x000E, &FRD_A::GetMyNcPrincipalId, "GetMyNcPrincipalId"},
        {0x000F, &FRD_A::GetMyComment, "GetMyComment"},
        {0x0010, &FRD_A::GetMyPassword, "GetMyPassword"},
        {0x0011, &FRD_A::GetFriendKeyList, "GetFriendKeyList"},
        {0x0012, &FRD_A::GetFriendPresence, "GetFriendPresence"},
        {0x0013, &FRD_A::GetFriendScreenName, "GetFriendScreenName"},
        {0x0014, &FRD_A::GetFriendMii, "GetFriendMii"},
        {0x0015, &FRD_A::GetFriendProfile, "GetFriendProfile"},
        {0x0016, &FRD_A::GetFriendRelationship, "GetFriendRelationship"},
        {0x0017, &FRD_A::GetFriendAttributeFlags, "GetFriendAttributeFlags"},
        {0x0018, &FRD_A::GetFriendPlayingGame, "GetFriendPlayingGame"},
        {0x0019, &FRD_A::GetFriendFavoriteGame, "GetFriendFavoriteGame"},
        {0x001A, &FRD_A::GetFriendInfo, "GetFriendInfo"},
        {0x001B, &FRD_A::IsIncludedInFriendList, "IsIncludedInFriendList"},
        {0x001C, &FRD_A::UnscrambleLocalFriendCode, "UnscrambleLocalFriendCode"},
        {0x001D, &FRD_A::UpdateGameModeDescription, "UpdateGameModeDescription"},
        {0x001E, &FRD_A::UpdateGameMode, "UpdateGameMode"},
        {0x001F, nullptr, "SendInvitation"},
        {0x0020, &FRD_A::AttachToEventNotification, "AttachToEventNotification"},
        {0x0021, &FRD_A::SetNotificationMask, "SetNotificationMask"},
        {0x0022, &FRD_A::GetEventNotification, "GetEventNotification"},
        {0x0023, &FRD_A::GetLastResponseResult, "GetLastResponseResult"},
        {0x0024, nullptr, "PrincipalIdToFriendCode"},
        {0x0025, nullptr, "FriendCodeToPrincipalId"},
        {0x0026, nullptr, "IsValidFriendCode"},
        {0x0027, nullptr, "ResultToErrorCode"},
        {0x0028, &FRD_A::RequestGameAuthentication, "RequestGameAuthentication"},
        {0x0029, &FRD_A::GetGameAuthenticationData, "GetGameAuthenticationData"},
        {0x002A, nullptr, "RequestServiceLocator"},
        {0x002B, nullptr, "GetServiceLocatorData"},
        {0x002C, nullptr, "DetectNatProperties"},
        {0x002D, nullptr, "GetNatProperties"},
        {0x002E, nullptr, "GetServerTimeInterval"},
        {0x002F, nullptr, "AllowHalfAwake"},
        {0x0030, nullptr, "GetServerTypes"},
        {0x0031, nullptr, "GetFriendComment"},
        {0x0032, &FRD_A::SetClientSdkVersion, "SetClientSdkVersion"},
        {0x0033, nullptr, "GetMyApproachContext"},
        {0x0034, nullptr, "AddFriendWithApproach"},
        {0x0035, nullptr, "DecryptApproachContext"},
        // frd:a commands start here
        {0x0401, nullptr, "CreateLocalAccount"},
        {0x0402, nullptr, "DeleteConfig"},
        {0x0403, nullptr, "SetLocalAccountId"},
        {0x0404, nullptr, "ResetAccountConfig"},
        {0x0405, nullptr, "HasUserData"},
        {0x0406, nullptr, "AddFriendOnline"},
        {0x0407, nullptr, "AddFriendOffline"},
        {0x0408, nullptr, "SetFriendDisplayName"},
        {0x0409, nullptr, "RemoveFriend"},
        {0x040A, nullptr, "SetPresenseGameKey"},
        {0x040B, nullptr, "SetPrivacySettings"},
        {0x040C, nullptr, "SetMyData"},
        {0x040D, nullptr, "SetMyFavoriteGame"},
        {0x040E, nullptr, "SetMyNCPrincipalId"},
        {0x040F, nullptr, "SetPersonalComment"},
        {0x0410, nullptr, "DecryptApproachContext"},
    };
    RegisterHandlers(functions);
}

} // namespace Service::FRD
