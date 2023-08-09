﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

struct Guid_t;
struct unitytls_errorstate_tC926EE4582920BE2C1DB1F3F65619B810D5AB902;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult
#pragma pack(push, tp, 8)
struct SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 
{
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult::TrustedRoot
	bool ___TrustedRoot_0;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult::Revoked
	bool ___Revoked_1;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult::Expired
	bool ___Expired_2;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult::WrongUsage
	bool ___WrongUsage_3;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult::RevocationCheckFailed
	bool ___RevocationCheckFailed_4;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult::InvalidCertOrChain
	bool ___InvalidCertOrChain_5;
	// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingNameValidationResult Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult::NameValidationResult
	int32_t ___NameValidationResult_6;
};
#pragma pack(pop, tp)
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult
#pragma pack(push, tp, 8)
struct SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_pinvoke
{
	int32_t ___TrustedRoot_0;
	int32_t ___Revoked_1;
	int32_t ___Expired_2;
	int32_t ___WrongUsage_3;
	int32_t ___RevocationCheckFailed_4;
	int32_t ___InvalidCertOrChain_5;
	int32_t ___NameValidationResult_6;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult
#pragma pack(push, tp, 8)
struct SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_com
{
	int32_t ___TrustedRoot_0;
	int32_t ___Revoked_1;
	int32_t ___Expired_2;
	int32_t ___WrongUsage_3;
	int32_t ___RevocationCheckFailed_4;
	int32_t ___InvalidCertOrChain_5;
	int32_t ___NameValidationResult_6;
};
#pragma pack(pop, tp)

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Mono.Unity.UnityTls/unitytls_x509_ref
struct unitytls_x509_ref_t9CEB17766B4144117333AB50379B21A357FA4333 
{
	// System.UInt64 Mono.Unity.UnityTls/unitytls_x509_ref::handle
	uint64_t ___handle_0;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_AppRemotingSubsystem_ImplementValidateAuthenticationToken_mFD455DE70BB982F47A6614CCF7EFFE952E11E9E0(char* ___authenticationTokenToCheck0);
extern "C" SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_pinvoke DEFAULT_CALL ReversePInvokeWrapper_AppRemotingSubsystem_ImplementValidateServerCertificate_m9BBEB3EB86689175C979D0386FD9FD65240270D5(char* ___hostName0, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_pinvoke ___systemValidationResult1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_CultureInfo_OnCultureInfoChangedInAppX_m407BCFC1029A4485B7B063BC2F3601968C3BE577(Il2CppChar* ___language0);
extern "C" uint32_t DEFAULT_CALL ReversePInvokeWrapper_Delegate_AddRef_mD98DF69C12609B6E08C419D0F8FC59EEFA5506E3(intptr_t ___thisPtr0);
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_Delegate_QueryInterface_mD5AB1EB8A8A38FCE479AFE27A77B443DF4415CF6(intptr_t ___thisPtr0, Guid_t* ___iid1, intptr_t* ___obj2);
extern "C" uint32_t DEFAULT_CALL ReversePInvokeWrapper_Delegate_Release_m220300670F20C22F3666B121E61E46B48567761C(intptr_t ___thisPtr0);
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_EventSource__invoke_m0C1EEA1EBB5008722C1E0A9A99ADC570938DF34E(intptr_t ___thisPtr0, intptr_t ___senderPtr1, intptr_t ___argsPtr2);
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_IAsyncOperation__OnCompleted_m1BA76E56DCB467FB2FF3057B15964CD8948DFA77(intptr_t ___thisPtr0, intptr_t ___operationPtr1, int32_t ___status2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MockRuntime_AfterFunctionCallback_mFBBF94D9868CA6870E3A6A78D831145376372D46(char* ___function0, int32_t ___result1);
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_MockRuntime_BeforeFunctionCallback_m70AB6148D0D9FCD315ACDB6B46131514D128380D(char* ___function0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MockRuntime_ReceiveScriptEvent_m4A8AAF0A455A02262E3B74CB3DB498A88C84AD14(int32_t ___evt0, uint64_t ___param1);
extern "C" int32_t CDECL ReversePInvokeWrapper_MonoBtlsX509LookupMono_OnGetBySubject_m85B0F4B20C12F67DE4CD9521EC58308C9A27BA24(intptr_t ___instance0, intptr_t ___name_ptr1, intptr_t* ___x509_ptr2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_mF93C3CF6DBEC86E377576D840CAF517CB6E4D7E3(intptr_t ___arg0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OpenXRLoaderBase_ReceiveNativeEvent_m521057A79D56E2995A93CEB8B66A60B4297896F0(int32_t ___e0, uint64_t ___payload1);
extern "C" uint32_t CDECL ReversePInvokeWrapper_UnityTlsProvider_x509verify_callback_mB2465D108005179B9873A37C418CD26A37194E3B(void* ___userData0, unitytls_x509_ref_t9CEB17766B4144117333AB50379B21A357FA4333 ___cert1, uint32_t ___result2, unitytls_errorstate_tC926EE4582920BE2C1DB1F3F65619B810D5AB902* ___errorState3);


IL2CPP_EXTERN_C const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[15] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AppRemotingSubsystem_ImplementValidateAuthenticationToken_mFD455DE70BB982F47A6614CCF7EFFE952E11E9E0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AppRemotingSubsystem_ImplementValidateServerCertificate_m9BBEB3EB86689175C979D0386FD9FD65240270D5),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_CultureInfo_OnCultureInfoChangedInAppX_m407BCFC1029A4485B7B063BC2F3601968C3BE577),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Delegate_AddRef_mD98DF69C12609B6E08C419D0F8FC59EEFA5506E3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Delegate_QueryInterface_mD5AB1EB8A8A38FCE479AFE27A77B443DF4415CF6),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Delegate_Release_m220300670F20C22F3666B121E61E46B48567761C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_EventSource__invoke_m0C1EEA1EBB5008722C1E0A9A99ADC570938DF34E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IAsyncOperation__OnCompleted_m1BA76E56DCB467FB2FF3057B15964CD8948DFA77),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MockRuntime_AfterFunctionCallback_mFBBF94D9868CA6870E3A6A78D831145376372D46),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MockRuntime_BeforeFunctionCallback_m70AB6148D0D9FCD315ACDB6B46131514D128380D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MockRuntime_ReceiveScriptEvent_m4A8AAF0A455A02262E3B74CB3DB498A88C84AD14),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MonoBtlsX509LookupMono_OnGetBySubject_m85B0F4B20C12F67DE4CD9521EC58308C9A27BA24),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_mF93C3CF6DBEC86E377576D840CAF517CB6E4D7E3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OpenXRLoaderBase_ReceiveNativeEvent_m521057A79D56E2995A93CEB8B66A60B4297896F0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsProvider_x509verify_callback_mB2465D108005179B9873A37C418CD26A37194E3B),
};
