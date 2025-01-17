﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// ExitGames.Client.Photon.Encryption.IPhotonEncryptor
struct IPhotonEncryptor_t4A160711851DB9BBFDDB18B2AECDF10336613E87;
// ExitGames.Client.Photon.EventData
struct EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_tDC907B98639311C4461981C7CCA42DCED60727C0;
// ExitGames.Client.Photon.ITrafficRecorder
struct ITrafficRecorder_tC25F9454C914FEA66E9F7C75E6F9D9606DE33D14;
// ExitGames.Client.Photon.NonAllocDictionary`2<System.Byte,System.Object>
struct NonAllocDictionary_2_t04FF5A5C0E2DAD18F7F02057F5703A3EE2A41A17;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B;
// ExitGames.Client.Photon.ParameterDictionary
struct ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t76CFBD88FAEF62D526C6AA35B7CCDF01D43D47EC;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B;
// ExitGames.Client.Photon.StructWrapping.StructWrapperPools
struct StructWrapperPools_tC9C60702676221FBE3748B2EEFC5B63693E9A213;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_tE20732ADD0030B8708535A2BB7CF1C683355D984;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t55A82B03E7B030983867D627BA22AFC5241E6B89;
// Photon.Chat.AuthenticationValues
struct AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78;
// Photon.Chat.ChannelCreationOptions
struct ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D;
// Photon.Chat.ChannelWellKnownProperties
struct ChannelWellKnownProperties_t885B8C39E6ADD0DADB0DAF772E2D7525AD057508;
// Photon.Chat.ChatAppSettings
struct ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356;
// Photon.Chat.ChatChannel
struct ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579;
// Photon.Chat.ChatClient
struct ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505;
// Photon.Chat.ChatEventCode
struct ChatEventCode_t69355728022C08E7435EBAAB0B0CC12A186AACAE;
// Photon.Chat.ChatOperationCode
struct ChatOperationCode_t2241AAA0BE1EE7E35D7FB4020009BC538267AF45;
// Photon.Chat.ChatParameterCode
struct ChatParameterCode_t04DD519C260927DA892F3046EFC437B00339AF56;
// Photon.Chat.ChatPeer
struct ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989;
// Photon.Chat.ErrorCode
struct ErrorCode_t49B1D3A0A84EAE4C66AA6E40237D6FB10E6A35E5;
// Photon.Chat.IChatClientListener
struct IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8;
// Photon.Chat.ParameterCode
struct ParameterCode_t7CAB0CED18EF18251341209C8FF74EBCB049AA91;
// System.Action`1<ExitGames.Client.Photon.DisconnectMessage>
struct Action_1_t559B363216C36C44D057947AE705B1DEFC791EAD;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>[]
struct EntryU5BU5D_t7BF0E2529597846E60716D3B91B6731D8DBE5F98;
// System.Collections.Generic.Dictionary`2/Entry<ExitGames.Client.Photon.ConnectionProtocol,System.Type>[]
struct EntryU5BU5D_t4192FB09C015F038E393B5926B26036DF9A5F1FC;
// System.Collections.Generic.Dictionary`2/Entry<System.Byte,System.Object>[]
struct EntryU5BU5D_t74A0A8220BFDCB9876DCD25A18A89EA44ACD719E;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_tDAD53056B3CDE7B3CCD3851C341DE8D219292C82;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Photon.Chat.ChatChannel>[]
struct EntryU5BU5D_t7875FEE6C0D1F7F93D40BBEBD135402E010B003A;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD;
// System.Collections.Generic.Dictionary`2/KeyCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct KeyCollection_tCA073DC9334F40037ADE5098F8E8B2383C9EA865;
// System.Collections.Generic.Dictionary`2/KeyCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct KeyCollection_tCE0AC796F2CB2BE33CE774128C8C7C38C994DC89;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>
struct KeyCollection_t1A234F64E6973E1840745B1556B6B91362608A23;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Photon.Chat.ChatChannel>
struct KeyCollection_t940CC51D5D6721C0BED534EB1FE2F49D1141F444;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970;
// System.Collections.Generic.Dictionary`2/ValueCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct ValueCollection_tCA7A88930A12AFAB4715C61921C412830AF7B437;
// System.Collections.Generic.Dictionary`2/ValueCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct ValueCollection_tBA2B1688FD70E734F764258F546FAD55E5AC9340;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Object>
struct ValueCollection_t250FAC2FB3859D9F38904E137C77EBF63350736D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Photon.Chat.ChatChannel>
struct ValueCollection_t2F555FDA95B4DE582D05DD80847753A37B0CEC36;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_tF9F37A139D3559F1151DDADAA520C7F397F42E41;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557;
// System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Int32>
struct Dictionary_2_t263DE5BBA10E31D93EC8805381ED7687AF2C3E64;
// System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>
struct Dictionary_2_t6E5D415C5F12580B49EC33FB78F5B1A3537193F9;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>
struct Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA;
// System.Collections.Generic.HashSet`1/Slot<System.Object>[]
struct SlotU5BU5D_t83FEB9D875895C5325CEBD4450ADC3B8E6FA8F4B;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t7D654D5D811EA1E18FB487C5E2E5081DEC5F9975;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t20C647F44B285CB7C061931B00ED43A230F311E5;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t31EF1520A3A805598500BB6033C14ABDA7116D5E;
// System.Collections.Generic.IEqualityComparer`1<ExitGames.Client.Photon.ConnectionProtocol>
struct IEqualityComparer_1_t251B8D145456F3DDE49FE836620B3DD87FA80F5B;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_tBCCD6A9500C35AEB0EB966AD9E7101A68F06AA97;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_tAE7A8756D8CF0882DD348DC328FB36FEE0FB7DD0;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_t5075A2805A51162E94A9CF2F2881DC51B78EA80D;
// System.Diagnostics.StackTrace
struct StackTrace_tD5D45826A379D8DF0CFB2CA206D992EE718C7E99;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Diagnostics.Stopwatch
struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4;
// System.Func`1<System.Boolean>
struct Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatState_tABA9DDB2C18934215ADACBF403DF9FD0A71D8B79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomAuthenticationType_t064351BB19FC77634577630CE69F3541F420CAB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPhotonPeerListener_tDC907B98639311C4461981C7CCA42DCED60727C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PeerStateValue_t6AB72DDE255D26E8BFE9D970B850A723EBF6F542_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackTrace_tD5D45826A379D8DF0CFB2CA206D992EE718C7E99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportClass_tA03F3769517B9BF8FCBDB4693B1FCB13C93FCCB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral054F15C3275CDCFDF4FC81DEF376F70DF3381D91;
IL2CPP_EXTERN_C String_t* _stringLiteral06D8FB7D57518A9D9AD12F37B1762D47BCFEBC34;
IL2CPP_EXTERN_C String_t* _stringLiteral0C9BC8A9EA08F5764E66418E04C783D7C5EA550E;
IL2CPP_EXTERN_C String_t* _stringLiteral0ED3124668F532717B0D69F6EAA15F42A8393B1D;
IL2CPP_EXTERN_C String_t* _stringLiteral103C55E7DFE64F67542769202574517D87109190;
IL2CPP_EXTERN_C String_t* _stringLiteral107307FBAF61C580C469AD7BCE2AE293E1C4A281;
IL2CPP_EXTERN_C String_t* _stringLiteral11B6F3557420C105118FCE7DD35DEC9F19E23C3D;
IL2CPP_EXTERN_C String_t* _stringLiteral187DB917BF8928E28C35D9C1A3ACCC7FFE7357D3;
IL2CPP_EXTERN_C String_t* _stringLiteral21D80703A6C8D4036492B5E5021EDB6DA533D41D;
IL2CPP_EXTERN_C String_t* _stringLiteral238CFA8C25F7535B52F025A6DC2373BE55C1578E;
IL2CPP_EXTERN_C String_t* _stringLiteral260B333133E8DC5F239195333A036B63C1EC62B9;
IL2CPP_EXTERN_C String_t* _stringLiteral29683C1799AE0C427BB58C8BF974A0FB8AA9BFC9;
IL2CPP_EXTERN_C String_t* _stringLiteral2C2487EA5D13B73C78A16D4C01B849CC868B9F66;
IL2CPP_EXTERN_C String_t* _stringLiteral2EAC14B3D351C8B6836D36173E0E34127AA6A058;
IL2CPP_EXTERN_C String_t* _stringLiteral3337A646329BB0605D15621CA34E1626248D408C;
IL2CPP_EXTERN_C String_t* _stringLiteral338B2B6C4BBAA566799E30C0FFE0EB3E1AD56F71;
IL2CPP_EXTERN_C String_t* _stringLiteral384A0C94086D36412431EB0508F6F2D1985B9A68;
IL2CPP_EXTERN_C String_t* _stringLiteral3D618361EC8C202858B123986AEA7B042531080B;
IL2CPP_EXTERN_C String_t* _stringLiteral427FC0E48C1D9A9A8FF6FF858C6B30F622D1F800;
IL2CPP_EXTERN_C String_t* _stringLiteral4D05D00A60529C7A57C13E385944654DD890D8DE;
IL2CPP_EXTERN_C String_t* _stringLiteral4D3C418A83DE54D710758569DF3FF8391356AFB7;
IL2CPP_EXTERN_C String_t* _stringLiteral551EBFB5CCD80CC20586837AC559715F59BC0147;
IL2CPP_EXTERN_C String_t* _stringLiteral5618474235217E524A45AD712574B23E84EED6AD;
IL2CPP_EXTERN_C String_t* _stringLiteral5729A153EC7FAE56800274A78531B43CC0A3112C;
IL2CPP_EXTERN_C String_t* _stringLiteral5742FE1BDA7AB1FC9AFE28EA777EE363C684E01E;
IL2CPP_EXTERN_C String_t* _stringLiteral638067AF521CCE283B94B0DF8899C179DCF25FB3;
IL2CPP_EXTERN_C String_t* _stringLiteral68E21592360E435244D8BD55506FC51CCA67E430;
IL2CPP_EXTERN_C String_t* _stringLiteral6A99D68EAA56E7B9EA40ED090FD2E0DDA1EB1E0F;
IL2CPP_EXTERN_C String_t* _stringLiteral6AFEA6BD492174EAD3729E74B21354F505CDDCF4;
IL2CPP_EXTERN_C String_t* _stringLiteral6FE4B9203298E5B74393E0818142DBF57DA03BB3;
IL2CPP_EXTERN_C String_t* _stringLiteral70E46A40252ADA773201ED2001C3B5E19AE0D5E2;
IL2CPP_EXTERN_C String_t* _stringLiteral71EBF5DA4A7DF5D098F0A1BC60250ECE10DBEC80;
IL2CPP_EXTERN_C String_t* _stringLiteral74E0537A883E3EB77F6D19BD02E970E3B8CAA800;
IL2CPP_EXTERN_C String_t* _stringLiteral7BEA53D7765CB5C320CAF9A0C3283A4E5AF00416;
IL2CPP_EXTERN_C String_t* _stringLiteral7C4D33785DAA5C2370201FFA236B427AA37C9996;
IL2CPP_EXTERN_C String_t* _stringLiteral7ECDE348FF9CDA2C3BA69A0C4543365039D0D65B;
IL2CPP_EXTERN_C String_t* _stringLiteral83FEBC0012B2BE602C85FC053159E9EF67600984;
IL2CPP_EXTERN_C String_t* _stringLiteral8CBF6943194FAE819E8AFA76DB6AA5FEDEF2323B;
IL2CPP_EXTERN_C String_t* _stringLiteral8F1AC3BB2037F1143E5E5853C9E7E3990ABDFDEE;
IL2CPP_EXTERN_C String_t* _stringLiteral94B1E34A1FC3B7B63B014BAD58E50115CFB5FC7D;
IL2CPP_EXTERN_C String_t* _stringLiteral9663A08052B2B050231926A22F7DC859D93D44FF;
IL2CPP_EXTERN_C String_t* _stringLiteral9ECB827BD6D80841068E0AE354CABBDE1FED45C0;
IL2CPP_EXTERN_C String_t* _stringLiteralA31D385B9DEE1897A2E6840A59DF969194B69490;
IL2CPP_EXTERN_C String_t* _stringLiteralA595791DAF8A7212368D5CC9A8886085257B5A0C;
IL2CPP_EXTERN_C String_t* _stringLiteralA8B9D506307E302D77308D7E4A5DB319E04C3EC0;
IL2CPP_EXTERN_C String_t* _stringLiteralAAC3759B75EBB121D5A5F793C49C6496CB466067;
IL2CPP_EXTERN_C String_t* _stringLiteralABB11E10EF4F1912CA124A43EDFCF7E4236BF4B3;
IL2CPP_EXTERN_C String_t* _stringLiteralABF28A6D84BA34B35ADF7EB356198FF5875435E5;
IL2CPP_EXTERN_C String_t* _stringLiteralB4992CF8FE071D46902C6E742001E921CD3995B5;
IL2CPP_EXTERN_C String_t* _stringLiteralB7A757A62D6F4547652BA320456CD72FF6D7093E;
IL2CPP_EXTERN_C String_t* _stringLiteralBA31FDB9D9DF30D820D828B03F9C4D72781B8C2E;
IL2CPP_EXTERN_C String_t* _stringLiteralBBF931E13EB6B570C5B5C36D816187F0398D40EA;
IL2CPP_EXTERN_C String_t* _stringLiteralBCB5C68DA61EECD91A7CBF61D41B0938CEDBCD34;
IL2CPP_EXTERN_C String_t* _stringLiteralBF11A57FF863BE16C3B8157656862961ACDA3725;
IL2CPP_EXTERN_C String_t* _stringLiteralC03619A6D8E3BC5B2795B980A17D5A6CBC187308;
IL2CPP_EXTERN_C String_t* _stringLiteralC0A6FD1C5CA8DBFF0C1D66394DA952F681078562;
IL2CPP_EXTERN_C String_t* _stringLiteralC82D1B09CF32291761D4D994CF71D150CBFAB21C;
IL2CPP_EXTERN_C String_t* _stringLiteralC82DBB40CF62E9201ED272DC15F939C724CD3E7D;
IL2CPP_EXTERN_C String_t* _stringLiteralCC8A9D016C6E2C07A8B03493514472F62C594C42;
IL2CPP_EXTERN_C String_t* _stringLiteralD1E3D9C1B922EB4D0834D565C074EDC474E4C8B1;
IL2CPP_EXTERN_C String_t* _stringLiteralD42D8F5361FEC807EFBD78D0B0154513FA3FDEA5;
IL2CPP_EXTERN_C String_t* _stringLiteralD6CA3F0561CBE6D60E45676F583A5694EA29884B;
IL2CPP_EXTERN_C String_t* _stringLiteralD964D9EDC3903803F850267B4FA83E4185A94ED7;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE23C1A7928CC6F82A21EE1A76448A0F81B07C4E9;
IL2CPP_EXTERN_C String_t* _stringLiteralE253B0891DF30C474657E7D3318961A841E3E960;
IL2CPP_EXTERN_C String_t* _stringLiteralE7B85E7369BA50B83804EBF39E9612010E5B9FCD;
IL2CPP_EXTERN_C String_t* _stringLiteralE92B7B36B6E384E44F7E0E2A7CDECA40F4F457DB;
IL2CPP_EXTERN_C String_t* _stringLiteralEF54001782F2548B67B67C09D2133F76EE73079C;
IL2CPP_EXTERN_C String_t* _stringLiteralFD0C5E59DABFA73FA3649F18601A967D032A1AD5;
IL2CPP_EXTERN_C const RuntimeMethod* ChatClient_SendOutgoingInBackground_m6DACEF4746C9018F9300FC55DB31F72459728CE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChatPeer_GetNameServerAddress_mEE174269D17B37F6B706229ADE9F5A070637A82A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m280FAF69EDEDDB0A613884354301DB4467BCAB64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB579D5185AC1EF2912F278C7DB76633544C91C5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m9350B48DE007190F546A199AA41BBC0B7DE68D59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mAB5703346A6A6369B91B8118882DE16CC17C10D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m509D1AC38FEE4D43B0FEF56F2A19329F08EF3138_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m23EFC611C71939B25F34AD6FB126FF0EBFAE216C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m7EC41F88DF244877D026C2F83474F908A60E7091_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2458A69C9E49DB6994E10B4FB3FD42203CB427D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2895EBB13AA7D9232058658A7DC404DC5F608923_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB6A7105EE88A811F75E9529C0230DE29BC579C6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC710CD24666429D51CA2317DAB94817AAC9FA092_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m0DAE02CE9FA04B987D0923005FEF7565EB9FB52D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m27A02DCA079D7CF48A46435831EB0AD3BAC00CCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE363888280B72ED50538416C060EF9FC94B3BB00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9B9FB07EC2C1D82E921C9316A4E0901C933BBF6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m513B0E5967A777E63476A8264B759B2BA052E8DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mD67974B4739A65BB7950DBB56C8B5CF83C01D4E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_m55ED25F18A656A9699E75E8DD895CF6AF871DF53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m5438C3AB78C9E97DAEE05557C9785D4FD71251E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_mE01EC306B6C73A065B00E9A954951FFAB6466DE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m08DB7073F20A7ED4862EF5F753C736E060472AEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_m998F5D9C44774DB10586898A1EAACF986E205287_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m424850F752D45D547D948278FA4D9C60EA06F3DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mB886C990CD1F0558809236CF1D28C977A3558306_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m1A4A6EE07C08AC3E4066DD0547C4FC6AA87324E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m89425146ABCF46BE030B6C4B3C85A8559550F983_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AuthenticationValues_AddAuthParameter_m5A2A8B1815CFD3CAE2A02CAC79DC38626DB0DA42_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AuthenticationValues_ToString_m61B34D3505FB9B8829ADCE870C0C56AA91919C87_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChannelCreationOptions__cctor_m0C802A2ED726B657BA62EAF7DD1717C77A42A6F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatChannel_AddSubscribers_m67F53F0F32C4061FB3870EE624D7481338F950EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatChannel_Add_m27C5E5A559983353AB0D695A3A82056B23B6853E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatChannel_Add_m40DB5A55A3C7DFD1195FBF16C50CBFBBECBA3DFA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatChannel_ClearMessages_m9EF1467E2BD5CB8CAE4DC2FFFAEF551327661E55_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatChannel_ReadChannelProperties_mE89FAD581BB56A388C0C11FF7387330711DF7A9D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatChannel_ToStringMessages_m72F03F0CBA803F8A6BA13C02D981EB23506B06B1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatChannel_TruncateMessages_m8BAAC468313ADAED4EC6C86B55EA068DE0A2268E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatChannel__ctor_mA5DF33529980160873130ACB6B51CC8D3CF23C83_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatChannel_get_MessageCount_m55833104CB82ADCAE20517D318E130365D54C835_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_AddFriends_mCC05D291C9509A0F4D776428BC69AFF28DD25AB7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_AuthenticateOnFrontEnd_mFA3F028897624959C21DBBEAFABC611E7D40D178_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_CanChatInChannel_m056F9E3199627DC00B9D30327069029F5601CF1C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_ConnectAndSetStatus_m3111CC36FB9C7871CD736E0C376BF0868859CC87_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_ConnectToFrontEnd_m11CB8643B389250359AC98B8B7D9E6405EA56B7C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_ConnectUsingSettings_mBBF62184730115FA8D8F972661D8C7DB90FF535B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_Connect_m6A720637091E96EB0559F3BEAF85B0415BB0D376_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_DebugReturn_m9AB2FF9E18EC7127670972E2DD50385BEC426F2E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnOperationResponse_m109C093F33E14C713FC52E875A2191284EFEBD18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnStatusChanged_m6F757ACCC6A3424F269CCA31163E7D3059C7B8CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_GetPrivateChannelNameByUser_mF71560A0FA905208F34FCA6331BD19051A598F2E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_HandleAuthResponse_m30E8C187D97C3173D742B17F21C1D72DD410D7A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_HandleChatMessagesEvent_mD1CC9854948A482BB52AD2D486BCB9092F904985_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_HandlePrivateMessageEvent_m67E34A791863D6F6AA6D8A7F0BE55D4F1A51398B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_HandleStatusUpdate_m3A1743092197AD3987F204CE0CE8F3CA9DA36275_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_HandleSubscribeEvent_mDA6A915E14078211D73AE270948D3CE2E80A26D6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_HandleUnsubscribeEvent_m399354AF8F49542D33F7D3B85664314CFCC382BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_HandleUserSubscribedEvent_m071B21F5D69AF0F828261CD283AF1342BCBB368F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_HandleUserUnsubscribedEvent_m96BD07F4D888BF64F839E0E5D6FE90A46CAF4CDA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_RemoveFriends_m55D5D9623A9B84C801016004A1E436F606417513_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_SendChannelOperation_m18D325052913A99B794CF2CC4B24D290344B97AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_SetOnlineStatus_mC9DBD5B31D8A48987B17A7E4C7A6D8CF6C299B85_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_Subscribe_m0391C33DF36612A52DE871DD0B1726EA62F99B2A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_Subscribe_m0DB2A59D3FAE36EB09B8F34839AD18A95D0E6A98_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_Subscribe_m162186BD32689824C32D27765C4418229ADE67F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_TryAuthenticateOnNameServer_m30CFD6A61727D21120AEC665856462326C7B526D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_TryGetChannel_m1353AC1501810593E12AD94C6B40A9DCA4272E5D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_TryGetChannel_m98591C6D7F4304FAC4F1FAE967DC8AD8B36C684B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_Unsubscribe_mF3824B5D3C47882442414123A2C48B31C62532CC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient__ctor_m6D7F40BC273FD57A79C03103BD73DF5912BA1DE5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_publishMessage_m112332E73165EF56FF7ED01EEF1EED95C417077D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_sendPrivateMessage_mCF7B7BD77EB7D22DFD1ED058A4235578551C0C02_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_set_TransportProtocol_m964A4B1AF240459FC7314F7DEE1FAFE9D54D1AC6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatClient_set_UserId_m5499473A68F5A0ADD366380F3135D9FC32A9EC6D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatPeer_AuthenticateOnNameServer_mEE9E9AC65A21D029BB21F0D3BFDDAFE0D79316BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatPeer_ConfigUnitySockets_m3CA9CA2B2B41E6CC69775F1112F8BDF897F6C2B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatPeer_Connect_m57D6143BBC1FFA33E40820A96611D098C8E2C9C2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatPeer_GetNameServerAddress_mEE174269D17B37F6B706229ADE9F5A070637A82A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatPeer__cctor_m22A7660C34602B8F951AC2CEBC56AA40DFEE7866_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ChatPeer__ctor_m7134BB0AAC3428BA6A777A1493D52764B8F5DDCC_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t87B1B8CD3395CCC432D52CD2F0E6D28F204AA14E 
{
public:

public:
};


// System.Object


// ExitGames.Client.Photon.EventData
struct  EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3  : public RuntimeObject
{
public:
	// System.Byte ExitGames.Client.Photon.EventData::Code
	uint8_t ___Code_0;
	// ExitGames.Client.Photon.ParameterDictionary ExitGames.Client.Photon.EventData::Parameters
	ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * ___Parameters_1;
	// System.Byte ExitGames.Client.Photon.EventData::SenderKey
	uint8_t ___SenderKey_2;
	// System.Int32 ExitGames.Client.Photon.EventData::sender
	int32_t ___sender_3;
	// System.Byte ExitGames.Client.Photon.EventData::CustomDataKey
	uint8_t ___CustomDataKey_4;
	// System.Object ExitGames.Client.Photon.EventData::customData
	RuntimeObject * ___customData_5;

public:
	inline static int32_t get_offset_of_Code_0() { return static_cast<int32_t>(offsetof(EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3, ___Code_0)); }
	inline uint8_t get_Code_0() const { return ___Code_0; }
	inline uint8_t* get_address_of_Code_0() { return &___Code_0; }
	inline void set_Code_0(uint8_t value)
	{
		___Code_0 = value;
	}

	inline static int32_t get_offset_of_Parameters_1() { return static_cast<int32_t>(offsetof(EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3, ___Parameters_1)); }
	inline ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * get_Parameters_1() const { return ___Parameters_1; }
	inline ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 ** get_address_of_Parameters_1() { return &___Parameters_1; }
	inline void set_Parameters_1(ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * value)
	{
		___Parameters_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Parameters_1), (void*)value);
	}

	inline static int32_t get_offset_of_SenderKey_2() { return static_cast<int32_t>(offsetof(EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3, ___SenderKey_2)); }
	inline uint8_t get_SenderKey_2() const { return ___SenderKey_2; }
	inline uint8_t* get_address_of_SenderKey_2() { return &___SenderKey_2; }
	inline void set_SenderKey_2(uint8_t value)
	{
		___SenderKey_2 = value;
	}

	inline static int32_t get_offset_of_sender_3() { return static_cast<int32_t>(offsetof(EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3, ___sender_3)); }
	inline int32_t get_sender_3() const { return ___sender_3; }
	inline int32_t* get_address_of_sender_3() { return &___sender_3; }
	inline void set_sender_3(int32_t value)
	{
		___sender_3 = value;
	}

	inline static int32_t get_offset_of_CustomDataKey_4() { return static_cast<int32_t>(offsetof(EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3, ___CustomDataKey_4)); }
	inline uint8_t get_CustomDataKey_4() const { return ___CustomDataKey_4; }
	inline uint8_t* get_address_of_CustomDataKey_4() { return &___CustomDataKey_4; }
	inline void set_CustomDataKey_4(uint8_t value)
	{
		___CustomDataKey_4 = value;
	}

	inline static int32_t get_offset_of_customData_5() { return static_cast<int32_t>(offsetof(EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3, ___customData_5)); }
	inline RuntimeObject * get_customData_5() const { return ___customData_5; }
	inline RuntimeObject ** get_address_of_customData_5() { return &___customData_5; }
	inline void set_customData_5(RuntimeObject * value)
	{
		___customData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customData_5), (void*)value);
	}
};


// ExitGames.Client.Photon.OperationResponse
struct  OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B  : public RuntimeObject
{
public:
	// System.Byte ExitGames.Client.Photon.OperationResponse::OperationCode
	uint8_t ___OperationCode_0;
	// System.Int16 ExitGames.Client.Photon.OperationResponse::ReturnCode
	int16_t ___ReturnCode_1;
	// System.String ExitGames.Client.Photon.OperationResponse::DebugMessage
	String_t* ___DebugMessage_2;
	// ExitGames.Client.Photon.ParameterDictionary ExitGames.Client.Photon.OperationResponse::Parameters
	ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * ___Parameters_3;

public:
	inline static int32_t get_offset_of_OperationCode_0() { return static_cast<int32_t>(offsetof(OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B, ___OperationCode_0)); }
	inline uint8_t get_OperationCode_0() const { return ___OperationCode_0; }
	inline uint8_t* get_address_of_OperationCode_0() { return &___OperationCode_0; }
	inline void set_OperationCode_0(uint8_t value)
	{
		___OperationCode_0 = value;
	}

	inline static int32_t get_offset_of_ReturnCode_1() { return static_cast<int32_t>(offsetof(OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B, ___ReturnCode_1)); }
	inline int16_t get_ReturnCode_1() const { return ___ReturnCode_1; }
	inline int16_t* get_address_of_ReturnCode_1() { return &___ReturnCode_1; }
	inline void set_ReturnCode_1(int16_t value)
	{
		___ReturnCode_1 = value;
	}

	inline static int32_t get_offset_of_DebugMessage_2() { return static_cast<int32_t>(offsetof(OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B, ___DebugMessage_2)); }
	inline String_t* get_DebugMessage_2() const { return ___DebugMessage_2; }
	inline String_t** get_address_of_DebugMessage_2() { return &___DebugMessage_2; }
	inline void set_DebugMessage_2(String_t* value)
	{
		___DebugMessage_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DebugMessage_2), (void*)value);
	}

	inline static int32_t get_offset_of_Parameters_3() { return static_cast<int32_t>(offsetof(OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B, ___Parameters_3)); }
	inline ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * get_Parameters_3() const { return ___Parameters_3; }
	inline ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 ** get_address_of_Parameters_3() { return &___Parameters_3; }
	inline void set_Parameters_3(ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * value)
	{
		___Parameters_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Parameters_3), (void*)value);
	}
};


// ExitGames.Client.Photon.ParameterDictionary
struct  ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.NonAllocDictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.ParameterDictionary::paramDict
	NonAllocDictionary_2_t04FF5A5C0E2DAD18F7F02057F5703A3EE2A41A17 * ___paramDict_0;
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPools ExitGames.Client.Photon.ParameterDictionary::wrapperPools
	StructWrapperPools_tC9C60702676221FBE3748B2EEFC5B63693E9A213 * ___wrapperPools_1;

public:
	inline static int32_t get_offset_of_paramDict_0() { return static_cast<int32_t>(offsetof(ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798, ___paramDict_0)); }
	inline NonAllocDictionary_2_t04FF5A5C0E2DAD18F7F02057F5703A3EE2A41A17 * get_paramDict_0() const { return ___paramDict_0; }
	inline NonAllocDictionary_2_t04FF5A5C0E2DAD18F7F02057F5703A3EE2A41A17 ** get_address_of_paramDict_0() { return &___paramDict_0; }
	inline void set_paramDict_0(NonAllocDictionary_2_t04FF5A5C0E2DAD18F7F02057F5703A3EE2A41A17 * value)
	{
		___paramDict_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paramDict_0), (void*)value);
	}

	inline static int32_t get_offset_of_wrapperPools_1() { return static_cast<int32_t>(offsetof(ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798, ___wrapperPools_1)); }
	inline StructWrapperPools_tC9C60702676221FBE3748B2EEFC5B63693E9A213 * get_wrapperPools_1() const { return ___wrapperPools_1; }
	inline StructWrapperPools_tC9C60702676221FBE3748B2EEFC5B63693E9A213 ** get_address_of_wrapperPools_1() { return &___wrapperPools_1; }
	inline void set_wrapperPools_1(StructWrapperPools_tC9C60702676221FBE3748B2EEFC5B63693E9A213 * value)
	{
		___wrapperPools_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wrapperPools_1), (void*)value);
	}
};


// Photon.Chat.ChannelCreationOptions
struct  ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D  : public RuntimeObject
{
public:
	// System.Boolean Photon.Chat.ChannelCreationOptions::<PublishSubscribers>k__BackingField
	bool ___U3CPublishSubscribersU3Ek__BackingField_1;
	// System.Int32 Photon.Chat.ChannelCreationOptions::<MaxSubscribers>k__BackingField
	int32_t ___U3CMaxSubscribersU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CPublishSubscribersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D, ___U3CPublishSubscribersU3Ek__BackingField_1)); }
	inline bool get_U3CPublishSubscribersU3Ek__BackingField_1() const { return ___U3CPublishSubscribersU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CPublishSubscribersU3Ek__BackingField_1() { return &___U3CPublishSubscribersU3Ek__BackingField_1; }
	inline void set_U3CPublishSubscribersU3Ek__BackingField_1(bool value)
	{
		___U3CPublishSubscribersU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CMaxSubscribersU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D, ___U3CMaxSubscribersU3Ek__BackingField_2)); }
	inline int32_t get_U3CMaxSubscribersU3Ek__BackingField_2() const { return ___U3CMaxSubscribersU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CMaxSubscribersU3Ek__BackingField_2() { return &___U3CMaxSubscribersU3Ek__BackingField_2; }
	inline void set_U3CMaxSubscribersU3Ek__BackingField_2(int32_t value)
	{
		___U3CMaxSubscribersU3Ek__BackingField_2 = value;
	}
};

struct ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D_StaticFields
{
public:
	// Photon.Chat.ChannelCreationOptions Photon.Chat.ChannelCreationOptions::Default
	ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D_StaticFields, ___Default_0)); }
	inline ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * get_Default_0() const { return ___Default_0; }
	inline ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_0), (void*)value);
	}
};


// Photon.Chat.ChannelWellKnownProperties
struct  ChannelWellKnownProperties_t885B8C39E6ADD0DADB0DAF772E2D7525AD057508  : public RuntimeObject
{
public:

public:
};


// Photon.Chat.ChatChannel
struct  ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579  : public RuntimeObject
{
public:
	// System.String Photon.Chat.ChatChannel::Name
	String_t* ___Name_0;
	// System.Collections.Generic.List`1<System.String> Photon.Chat.ChatChannel::Senders
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___Senders_1;
	// System.Collections.Generic.List`1<System.Object> Photon.Chat.ChatChannel::Messages
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___Messages_2;
	// System.Int32 Photon.Chat.ChatChannel::MessageLimit
	int32_t ___MessageLimit_3;
	// System.Int32 Photon.Chat.ChatChannel::ChannelID
	int32_t ___ChannelID_4;
	// System.Boolean Photon.Chat.ChatChannel::<IsPrivate>k__BackingField
	bool ___U3CIsPrivateU3Ek__BackingField_5;
	// System.Int32 Photon.Chat.ChatChannel::<LastMsgId>k__BackingField
	int32_t ___U3CLastMsgIdU3Ek__BackingField_6;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Object> Photon.Chat.ChatChannel::properties
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___properties_7;
	// System.Boolean Photon.Chat.ChatChannel::<PublishSubscribers>k__BackingField
	bool ___U3CPublishSubscribersU3Ek__BackingField_8;
	// System.Int32 Photon.Chat.ChatChannel::<MaxSubscribers>k__BackingField
	int32_t ___U3CMaxSubscribersU3Ek__BackingField_9;
	// System.Collections.Generic.HashSet`1<System.String> Photon.Chat.ChatChannel::Subscribers
	HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * ___Subscribers_10;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Senders_1() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___Senders_1)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_Senders_1() const { return ___Senders_1; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_Senders_1() { return &___Senders_1; }
	inline void set_Senders_1(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___Senders_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Senders_1), (void*)value);
	}

	inline static int32_t get_offset_of_Messages_2() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___Messages_2)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_Messages_2() const { return ___Messages_2; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_Messages_2() { return &___Messages_2; }
	inline void set_Messages_2(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___Messages_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Messages_2), (void*)value);
	}

	inline static int32_t get_offset_of_MessageLimit_3() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___MessageLimit_3)); }
	inline int32_t get_MessageLimit_3() const { return ___MessageLimit_3; }
	inline int32_t* get_address_of_MessageLimit_3() { return &___MessageLimit_3; }
	inline void set_MessageLimit_3(int32_t value)
	{
		___MessageLimit_3 = value;
	}

	inline static int32_t get_offset_of_ChannelID_4() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___ChannelID_4)); }
	inline int32_t get_ChannelID_4() const { return ___ChannelID_4; }
	inline int32_t* get_address_of_ChannelID_4() { return &___ChannelID_4; }
	inline void set_ChannelID_4(int32_t value)
	{
		___ChannelID_4 = value;
	}

	inline static int32_t get_offset_of_U3CIsPrivateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___U3CIsPrivateU3Ek__BackingField_5)); }
	inline bool get_U3CIsPrivateU3Ek__BackingField_5() const { return ___U3CIsPrivateU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsPrivateU3Ek__BackingField_5() { return &___U3CIsPrivateU3Ek__BackingField_5; }
	inline void set_U3CIsPrivateU3Ek__BackingField_5(bool value)
	{
		___U3CIsPrivateU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CLastMsgIdU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___U3CLastMsgIdU3Ek__BackingField_6)); }
	inline int32_t get_U3CLastMsgIdU3Ek__BackingField_6() const { return ___U3CLastMsgIdU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CLastMsgIdU3Ek__BackingField_6() { return &___U3CLastMsgIdU3Ek__BackingField_6; }
	inline void set_U3CLastMsgIdU3Ek__BackingField_6(int32_t value)
	{
		___U3CLastMsgIdU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_properties_7() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___properties_7)); }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * get_properties_7() const { return ___properties_7; }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA ** get_address_of_properties_7() { return &___properties_7; }
	inline void set_properties_7(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * value)
	{
		___properties_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___properties_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPublishSubscribersU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___U3CPublishSubscribersU3Ek__BackingField_8)); }
	inline bool get_U3CPublishSubscribersU3Ek__BackingField_8() const { return ___U3CPublishSubscribersU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CPublishSubscribersU3Ek__BackingField_8() { return &___U3CPublishSubscribersU3Ek__BackingField_8; }
	inline void set_U3CPublishSubscribersU3Ek__BackingField_8(bool value)
	{
		___U3CPublishSubscribersU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CMaxSubscribersU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___U3CMaxSubscribersU3Ek__BackingField_9)); }
	inline int32_t get_U3CMaxSubscribersU3Ek__BackingField_9() const { return ___U3CMaxSubscribersU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CMaxSubscribersU3Ek__BackingField_9() { return &___U3CMaxSubscribersU3Ek__BackingField_9; }
	inline void set_U3CMaxSubscribersU3Ek__BackingField_9(int32_t value)
	{
		___U3CMaxSubscribersU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_Subscribers_10() { return static_cast<int32_t>(offsetof(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579, ___Subscribers_10)); }
	inline HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * get_Subscribers_10() const { return ___Subscribers_10; }
	inline HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 ** get_address_of_Subscribers_10() { return &___Subscribers_10; }
	inline void set_Subscribers_10(HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * value)
	{
		___Subscribers_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Subscribers_10), (void*)value);
	}
};


// Photon.Chat.ChatEventCode
struct  ChatEventCode_t69355728022C08E7435EBAAB0B0CC12A186AACAE  : public RuntimeObject
{
public:

public:
};


// Photon.Chat.ChatOperationCode
struct  ChatOperationCode_t2241AAA0BE1EE7E35D7FB4020009BC538267AF45  : public RuntimeObject
{
public:

public:
};


// Photon.Chat.ChatParameterCode
struct  ChatParameterCode_t04DD519C260927DA892F3046EFC437B00339AF56  : public RuntimeObject
{
public:

public:
};


// Photon.Chat.ChatUserStatus
struct  ChatUserStatus_tBF26E11274B5B0FF5926B895F9070E056EB606D7  : public RuntimeObject
{
public:

public:
};


// Photon.Chat.ErrorCode
struct  ErrorCode_t49B1D3A0A84EAE4C66AA6E40237D6FB10E6A35E5  : public RuntimeObject
{
public:

public:
};


// Photon.Chat.ParameterCode
struct  ParameterCode_t7CAB0CED18EF18251341209C8FF74EBCB049AA91  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct  Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t7BF0E2529597846E60716D3B91B6731D8DBE5F98* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tCA073DC9334F40037ADE5098F8E8B2383C9EA865 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tCA7A88930A12AFAB4715C61921C412830AF7B437 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938, ___entries_1)); }
	inline EntryU5BU5D_t7BF0E2529597846E60716D3B91B6731D8DBE5F98* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t7BF0E2529597846E60716D3B91B6731D8DBE5F98** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t7BF0E2529597846E60716D3B91B6731D8DBE5F98* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938, ___keys_7)); }
	inline KeyCollection_tCA073DC9334F40037ADE5098F8E8B2383C9EA865 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tCA073DC9334F40037ADE5098F8E8B2383C9EA865 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tCA073DC9334F40037ADE5098F8E8B2383C9EA865 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938, ___values_8)); }
	inline ValueCollection_tCA7A88930A12AFAB4715C61921C412830AF7B437 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tCA7A88930A12AFAB4715C61921C412830AF7B437 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tCA7A88930A12AFAB4715C61921C412830AF7B437 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct  Dictionary_2_tF9F37A139D3559F1151DDADAA520C7F397F42E41  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t4192FB09C015F038E393B5926B26036DF9A5F1FC* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tCE0AC796F2CB2BE33CE774128C8C7C38C994DC89 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tBA2B1688FD70E734F764258F546FAD55E5AC9340 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9F37A139D3559F1151DDADAA520C7F397F42E41, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9F37A139D3559F1151DDADAA520C7F397F42E41, ___entries_1)); }
	inline EntryU5BU5D_t4192FB09C015F038E393B5926B26036DF9A5F1FC* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t4192FB09C015F038E393B5926B26036DF9A5F1FC** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t4192FB09C015F038E393B5926B26036DF9A5F1FC* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9F37A139D3559F1151DDADAA520C7F397F42E41, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9F37A139D3559F1151DDADAA520C7F397F42E41, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9F37A139D3559F1151DDADAA520C7F397F42E41, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9F37A139D3559F1151DDADAA520C7F397F42E41, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9F37A139D3559F1151DDADAA520C7F397F42E41, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9F37A139D3559F1151DDADAA520C7F397F42E41, ___keys_7)); }
	inline KeyCollection_tCE0AC796F2CB2BE33CE774128C8C7C38C994DC89 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tCE0AC796F2CB2BE33CE774128C8C7C38C994DC89 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tCE0AC796F2CB2BE33CE774128C8C7C38C994DC89 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9F37A139D3559F1151DDADAA520C7F397F42E41, ___values_8)); }
	inline ValueCollection_tBA2B1688FD70E734F764258F546FAD55E5AC9340 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tBA2B1688FD70E734F764258F546FAD55E5AC9340 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tBA2B1688FD70E734F764258F546FAD55E5AC9340 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9F37A139D3559F1151DDADAA520C7F397F42E41, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct  Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t74A0A8220BFDCB9876DCD25A18A89EA44ACD719E* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t1A234F64E6973E1840745B1556B6B91362608A23 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t250FAC2FB3859D9F38904E137C77EBF63350736D * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557, ___entries_1)); }
	inline EntryU5BU5D_t74A0A8220BFDCB9876DCD25A18A89EA44ACD719E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t74A0A8220BFDCB9876DCD25A18A89EA44ACD719E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t74A0A8220BFDCB9876DCD25A18A89EA44ACD719E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557, ___keys_7)); }
	inline KeyCollection_t1A234F64E6973E1840745B1556B6B91362608A23 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1A234F64E6973E1840745B1556B6B91362608A23 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1A234F64E6973E1840745B1556B6B91362608A23 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557, ___values_8)); }
	inline ValueCollection_t250FAC2FB3859D9F38904E137C77EBF63350736D * get_values_8() const { return ___values_8; }
	inline ValueCollection_t250FAC2FB3859D9F38904E137C77EBF63350736D ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t250FAC2FB3859D9F38904E137C77EBF63350736D * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct  Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDAD53056B3CDE7B3CCD3851C341DE8D219292C82* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___entries_1)); }
	inline EntryU5BU5D_tDAD53056B3CDE7B3CCD3851C341DE8D219292C82* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDAD53056B3CDE7B3CCD3851C341DE8D219292C82** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDAD53056B3CDE7B3CCD3851C341DE8D219292C82* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___keys_7)); }
	inline KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___values_8)); }
	inline ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>
struct  Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t7875FEE6C0D1F7F93D40BBEBD135402E010B003A* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t940CC51D5D6721C0BED534EB1FE2F49D1141F444 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2F555FDA95B4DE582D05DD80847753A37B0CEC36 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB, ___entries_1)); }
	inline EntryU5BU5D_t7875FEE6C0D1F7F93D40BBEBD135402E010B003A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t7875FEE6C0D1F7F93D40BBEBD135402E010B003A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t7875FEE6C0D1F7F93D40BBEBD135402E010B003A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB, ___keys_7)); }
	inline KeyCollection_t940CC51D5D6721C0BED534EB1FE2F49D1141F444 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t940CC51D5D6721C0BED534EB1FE2F49D1141F444 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t940CC51D5D6721C0BED534EB1FE2F49D1141F444 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB, ___values_8)); }
	inline ValueCollection_t2F555FDA95B4DE582D05DD80847753A37B0CEC36 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2F555FDA95B4DE582D05DD80847753A37B0CEC36 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2F555FDA95B4DE582D05DD80847753A37B0CEC36 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___entries_1)); }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___keys_7)); }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___values_8)); }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * get_values_8() const { return ___values_8; }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Object>
struct  HashSet_1_t20C647F44B285CB7C061931B00ED43A230F311E5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1_Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t83FEB9D875895C5325CEBD4450ADC3B8E6FA8F4B* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t20C647F44B285CB7C061931B00ED43A230F311E5, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t20C647F44B285CB7C061931B00ED43A230F311E5, ____slots_8)); }
	inline SlotU5BU5D_t83FEB9D875895C5325CEBD4450ADC3B8E6FA8F4B* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t83FEB9D875895C5325CEBD4450ADC3B8E6FA8F4B** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t83FEB9D875895C5325CEBD4450ADC3B8E6FA8F4B* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t20C647F44B285CB7C061931B00ED43A230F311E5, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t20C647F44B285CB7C061931B00ED43A230F311E5, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t20C647F44B285CB7C061931B00ED43A230F311E5, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t20C647F44B285CB7C061931B00ED43A230F311E5, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t20C647F44B285CB7C061931B00ED43A230F311E5, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t20C647F44B285CB7C061931B00ED43A230F311E5, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.String>
struct  HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1_Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t7D654D5D811EA1E18FB487C5E2E5081DEC5F9975* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61, ____slots_8)); }
	inline SlotU5BU5D_t7D654D5D811EA1E18FB487C5E2E5081DEC5F9975* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t7D654D5D811EA1E18FB487C5E2E5081DEC5F9975** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t7D654D5D811EA1E18FB487C5E2E5081DEC5F9975* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Diagnostics.StackTrace
struct  StackTrace_tD5D45826A379D8DF0CFB2CA206D992EE718C7E99  : public RuntimeObject
{
public:
	// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::frames
	StackFrameU5BU5D_t5075A2805A51162E94A9CF2F2881DC51B78EA80D* ___frames_1;
	// System.Diagnostics.StackTrace[] System.Diagnostics.StackTrace::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_2;
	// System.Boolean System.Diagnostics.StackTrace::debug_info
	bool ___debug_info_3;

public:
	inline static int32_t get_offset_of_frames_1() { return static_cast<int32_t>(offsetof(StackTrace_tD5D45826A379D8DF0CFB2CA206D992EE718C7E99, ___frames_1)); }
	inline StackFrameU5BU5D_t5075A2805A51162E94A9CF2F2881DC51B78EA80D* get_frames_1() const { return ___frames_1; }
	inline StackFrameU5BU5D_t5075A2805A51162E94A9CF2F2881DC51B78EA80D** get_address_of_frames_1() { return &___frames_1; }
	inline void set_frames_1(StackFrameU5BU5D_t5075A2805A51162E94A9CF2F2881DC51B78EA80D* value)
	{
		___frames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frames_1), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_2() { return static_cast<int32_t>(offsetof(StackTrace_tD5D45826A379D8DF0CFB2CA206D992EE718C7E99, ___captured_traces_2)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_2() const { return ___captured_traces_2; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_2() { return &___captured_traces_2; }
	inline void set_captured_traces_2(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_2), (void*)value);
	}

	inline static int32_t get_offset_of_debug_info_3() { return static_cast<int32_t>(offsetof(StackTrace_tD5D45826A379D8DF0CFB2CA206D992EE718C7E99, ___debug_info_3)); }
	inline bool get_debug_info_3() const { return ___debug_info_3; }
	inline bool* get_address_of_debug_info_3() { return &___debug_info_3; }
	inline void set_debug_info_3(bool value)
	{
		___debug_info_3 = value;
	}
};

struct StackTrace_tD5D45826A379D8DF0CFB2CA206D992EE718C7E99_StaticFields
{
public:
	// System.Boolean System.Diagnostics.StackTrace::isAotidSet
	bool ___isAotidSet_4;
	// System.String System.Diagnostics.StackTrace::aotid
	String_t* ___aotid_5;

public:
	inline static int32_t get_offset_of_isAotidSet_4() { return static_cast<int32_t>(offsetof(StackTrace_tD5D45826A379D8DF0CFB2CA206D992EE718C7E99_StaticFields, ___isAotidSet_4)); }
	inline bool get_isAotidSet_4() const { return ___isAotidSet_4; }
	inline bool* get_address_of_isAotidSet_4() { return &___isAotidSet_4; }
	inline void set_isAotidSet_4(bool value)
	{
		___isAotidSet_4 = value;
	}

	inline static int32_t get_offset_of_aotid_5() { return static_cast<int32_t>(offsetof(StackTrace_tD5D45826A379D8DF0CFB2CA206D992EE718C7E99_StaticFields, ___aotid_5)); }
	inline String_t* get_aotid_5() const { return ___aotid_5; }
	inline String_t** get_address_of_aotid_5() { return &___aotid_5; }
	inline void set_aotid_5(String_t* value)
	{
		___aotid_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aotid_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Nullable`1<System.Int32>
struct  Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// ExitGames.Client.Photon.ConnectionProtocol
struct  ConnectionProtocol_tDE31AD425A40798DFEF25F5BFD461CCBD99CE729 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionProtocol_tDE31AD425A40798DFEF25F5BFD461CCBD99CE729, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.DebugLevel
struct  DebugLevel_tEDD691FBC0AAD0A27A5AA9A38C768C14254A4741 
{
public:
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugLevel_tEDD691FBC0AAD0A27A5AA9A38C768C14254A4741, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.DeliveryMode
struct  DeliveryMode_tEF0C6C6B0BE79C214F1B4D3A66F0F9AF44DEF891 
{
public:
	// System.Int32 ExitGames.Client.Photon.DeliveryMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeliveryMode_tEF0C6C6B0BE79C214F1B4D3A66F0F9AF44DEF891, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.PeerStateValue
struct  PeerStateValue_t6AB72DDE255D26E8BFE9D970B850A723EBF6F542 
{
public:
	// System.Byte ExitGames.Client.Photon.PeerStateValue::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PeerStateValue_t6AB72DDE255D26E8BFE9D970B850A723EBF6F542, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.SerializationProtocol
struct  SerializationProtocol_tCAE8DECDAAC647A33D899C9CE0E998D0CAFDD841 
{
public:
	// System.Int32 ExitGames.Client.Photon.SerializationProtocol::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationProtocol_tCAE8DECDAAC647A33D899C9CE0E998D0CAFDD841, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.StatusCode
struct  StatusCode_t8742ADDFE3C7BDB0C0011099EFAA82D874147D19 
{
public:
	// System.Int32 ExitGames.Client.Photon.StatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusCode_t8742ADDFE3C7BDB0C0011099EFAA82D874147D19, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.TargetFrameworks
struct  TargetFrameworks_t699DD9FDFEDC00A42FFDFB9C51C5622A611D2A5B 
{
public:
	// System.Int32 ExitGames.Client.Photon.TargetFrameworks::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TargetFrameworks_t699DD9FDFEDC00A42FFDFB9C51C5622A611D2A5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Chat.ChatDisconnectCause
struct  ChatDisconnectCause_t7A5D48272BF2799FD2450F84DE7C26D030214832 
{
public:
	// System.Int32 Photon.Chat.ChatDisconnectCause::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ChatDisconnectCause_t7A5D48272BF2799FD2450F84DE7C26D030214832, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Chat.ChatState
struct  ChatState_tABA9DDB2C18934215ADACBF403DF9FD0A71D8B79 
{
public:
	// System.Int32 Photon.Chat.ChatState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ChatState_tABA9DDB2C18934215ADACBF403DF9FD0A71D8B79, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Chat.CustomAuthenticationType
struct  CustomAuthenticationType_t064351BB19FC77634577630CE69F3541F420CAB8 
{
public:
	// System.Byte Photon.Chat.CustomAuthenticationType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CustomAuthenticationType_t064351BB19FC77634577630CE69F3541F420CAB8, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.ByteEnum
struct  ByteEnum_t406C975039F6312CDE58A265A6ECFD861F8C06CD 
{
public:
	// System.Byte System.ByteEnum::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ByteEnum_t406C975039F6312CDE58A265A6ECFD861F8C06CD, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.Object,System.Object>
struct  Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___dictionary_0)); }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___current_3)); }
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// ExitGames.Client.Photon.PhotonPeer
struct  PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CommandBufferSize>k__BackingField
	int32_t ___U3CCommandBufferSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<LimitOfUnreliableCommands>k__BackingField
	int32_t ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::WarningSize
	int32_t ___WarningSize_2;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::CommandLogSize
	int32_t ___CommandLogSize_4;
	// ExitGames.Client.Photon.TargetFrameworks ExitGames.Client.Photon.PhotonPeer::TargetFramework
	int32_t ___TargetFramework_8;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RemoveAppIdFromWebSocketPath
	bool ___RemoveAppIdFromWebSocketPath_10;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ClientSdkId
	uint8_t ___ClientSdkId_11;
	// System.String ExitGames.Client.Photon.PhotonPeer::clientVersion
	String_t* ___clientVersion_12;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::UseInitV3
	bool ___UseInitV3_17;
	// ExitGames.Client.Photon.SerializationProtocol ExitGames.Client.Photon.PhotonPeer::<SerializationProtocolType>k__BackingField
	int32_t ___U3CSerializationProtocolTypeU3Ek__BackingField_18;
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> ExitGames.Client.Photon.PhotonPeer::SocketImplementationConfig
	Dictionary_2_tF9F37A139D3559F1151DDADAA520C7F397F42E41 * ___SocketImplementationConfig_19;
	// System.Type ExitGames.Client.Photon.PhotonPeer::<SocketImplementation>k__BackingField
	Type_t * ___U3CSocketImplementationU3Ek__BackingField_20;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::DebugOut
	uint8_t ___DebugOut_21;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_22;
	// System.Action`1<ExitGames.Client.Photon.DisconnectMessage> ExitGames.Client.Photon.PhotonPeer::OnDisconnectMessage
	Action_1_t559B363216C36C44D057947AE705B1DEFC791EAD * ___OnDisconnectMessage_23;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::reuseEventInstance
	bool ___reuseEventInstance_24;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useByteArraySlicePoolForEvents
	bool ___useByteArraySlicePoolForEvents_25;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::wrapIncomingStructs
	bool ___wrapIncomingStructs_26;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendInCreationOrder
	bool ___SendInCreationOrder_27;
	// ExitGames.Client.Photon.ITrafficRecorder ExitGames.Client.Photon.PhotonPeer::TrafficRecorder
	RuntimeObject* ___TrafficRecorder_28;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<EnableServerTracing>k__BackingField
	bool ___U3CEnableServerTracingU3Ek__BackingField_29;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::quickResendAttempts
	uint8_t ___quickResendAttempts_30;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ChannelCount
	uint8_t ___ChannelCount_31;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::EnableEncryptedFlag
	bool ___EnableEncryptedFlag_32;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::crcEnabled
	bool ___crcEnabled_33;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SentCountAllowance
	int32_t ___SentCountAllowance_34;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::InitialResendTimeMax
	int32_t ___InitialResendTimeMax_35;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::TimePingInterval
	int32_t ___TimePingInterval_36;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::disconnectTimeout
	int32_t ___disconnectTimeout_37;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::<TransportProtocol>k__BackingField
	uint8_t ___U3CTransportProtocolU3Ek__BackingField_38;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::mtu
	int32_t ___mtu_40;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_41;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RandomizeSequenceNumbers
	bool ___RandomizeSequenceNumbers_43;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::RandomizedSequenceNumbers
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___RandomizedSequenceNumbers_44;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::GcmDatagramEncryption
	bool ___GcmDatagramEncryption_45;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsIncoming>k__BackingField
	TrafficStats_tE20732ADD0030B8708535A2BB7CF1C683355D984 * ___U3CTrafficStatsIncomingU3Ek__BackingField_46;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsOutgoing>k__BackingField
	TrafficStats_tE20732ADD0030B8708535A2BB7CF1C683355D984 * ___U3CTrafficStatsOutgoingU3Ek__BackingField_47;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::<TrafficStatsGameLevel>k__BackingField
	TrafficStatsGameLevel_t55A82B03E7B030983867D627BA22AFC5241E6B89 * ___U3CTrafficStatsGameLevelU3Ek__BackingField_48;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PhotonPeer::trafficStatsStopwatch
	Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * ___trafficStatsStopwatch_49;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::trafficStatsEnabled
	bool ___trafficStatsEnabled_50;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_t76CFBD88FAEF62D526C6AA35B7CCDF01D43D47EC * ___peerBase_51;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	RuntimeObject * ___SendOutgoingLockObject_52;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	RuntimeObject * ___DispatchLockObject_53;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	RuntimeObject * ___EnqueueLock_54;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::PayloadEncryptionSecret
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___PayloadEncryptionSecret_55;
	// System.Type ExitGames.Client.Photon.PhotonPeer::encryptorType
	Type_t * ___encryptorType_56;
	// ExitGames.Client.Photon.Encryption.IPhotonEncryptor ExitGames.Client.Photon.PhotonPeer::Encryptor
	RuntimeObject* ___Encryptor_57;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CountDiscarded>k__BackingField
	int32_t ___U3CCountDiscardedU3Ek__BackingField_58;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<DeltaUnreliableNumber>k__BackingField
	int32_t ___U3CDeltaUnreliableNumberU3Ek__BackingField_59;

public:
	inline static int32_t get_offset_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___U3CCommandBufferSizeU3Ek__BackingField_0)); }
	inline int32_t get_U3CCommandBufferSizeU3Ek__BackingField_0() const { return ___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return &___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline void set_U3CCommandBufferSizeU3Ek__BackingField_0(int32_t value)
	{
		___U3CCommandBufferSizeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1)); }
	inline int32_t get_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() const { return ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return &___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline void set_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1(int32_t value)
	{
		___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_WarningSize_2() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___WarningSize_2)); }
	inline int32_t get_WarningSize_2() const { return ___WarningSize_2; }
	inline int32_t* get_address_of_WarningSize_2() { return &___WarningSize_2; }
	inline void set_WarningSize_2(int32_t value)
	{
		___WarningSize_2 = value;
	}

	inline static int32_t get_offset_of_CommandLogSize_4() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___CommandLogSize_4)); }
	inline int32_t get_CommandLogSize_4() const { return ___CommandLogSize_4; }
	inline int32_t* get_address_of_CommandLogSize_4() { return &___CommandLogSize_4; }
	inline void set_CommandLogSize_4(int32_t value)
	{
		___CommandLogSize_4 = value;
	}

	inline static int32_t get_offset_of_TargetFramework_8() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___TargetFramework_8)); }
	inline int32_t get_TargetFramework_8() const { return ___TargetFramework_8; }
	inline int32_t* get_address_of_TargetFramework_8() { return &___TargetFramework_8; }
	inline void set_TargetFramework_8(int32_t value)
	{
		___TargetFramework_8 = value;
	}

	inline static int32_t get_offset_of_RemoveAppIdFromWebSocketPath_10() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___RemoveAppIdFromWebSocketPath_10)); }
	inline bool get_RemoveAppIdFromWebSocketPath_10() const { return ___RemoveAppIdFromWebSocketPath_10; }
	inline bool* get_address_of_RemoveAppIdFromWebSocketPath_10() { return &___RemoveAppIdFromWebSocketPath_10; }
	inline void set_RemoveAppIdFromWebSocketPath_10(bool value)
	{
		___RemoveAppIdFromWebSocketPath_10 = value;
	}

	inline static int32_t get_offset_of_ClientSdkId_11() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___ClientSdkId_11)); }
	inline uint8_t get_ClientSdkId_11() const { return ___ClientSdkId_11; }
	inline uint8_t* get_address_of_ClientSdkId_11() { return &___ClientSdkId_11; }
	inline void set_ClientSdkId_11(uint8_t value)
	{
		___ClientSdkId_11 = value;
	}

	inline static int32_t get_offset_of_clientVersion_12() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___clientVersion_12)); }
	inline String_t* get_clientVersion_12() const { return ___clientVersion_12; }
	inline String_t** get_address_of_clientVersion_12() { return &___clientVersion_12; }
	inline void set_clientVersion_12(String_t* value)
	{
		___clientVersion_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientVersion_12), (void*)value);
	}

	inline static int32_t get_offset_of_UseInitV3_17() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___UseInitV3_17)); }
	inline bool get_UseInitV3_17() const { return ___UseInitV3_17; }
	inline bool* get_address_of_UseInitV3_17() { return &___UseInitV3_17; }
	inline void set_UseInitV3_17(bool value)
	{
		___UseInitV3_17 = value;
	}

	inline static int32_t get_offset_of_U3CSerializationProtocolTypeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___U3CSerializationProtocolTypeU3Ek__BackingField_18)); }
	inline int32_t get_U3CSerializationProtocolTypeU3Ek__BackingField_18() const { return ___U3CSerializationProtocolTypeU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CSerializationProtocolTypeU3Ek__BackingField_18() { return &___U3CSerializationProtocolTypeU3Ek__BackingField_18; }
	inline void set_U3CSerializationProtocolTypeU3Ek__BackingField_18(int32_t value)
	{
		___U3CSerializationProtocolTypeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_SocketImplementationConfig_19() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___SocketImplementationConfig_19)); }
	inline Dictionary_2_tF9F37A139D3559F1151DDADAA520C7F397F42E41 * get_SocketImplementationConfig_19() const { return ___SocketImplementationConfig_19; }
	inline Dictionary_2_tF9F37A139D3559F1151DDADAA520C7F397F42E41 ** get_address_of_SocketImplementationConfig_19() { return &___SocketImplementationConfig_19; }
	inline void set_SocketImplementationConfig_19(Dictionary_2_tF9F37A139D3559F1151DDADAA520C7F397F42E41 * value)
	{
		___SocketImplementationConfig_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SocketImplementationConfig_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSocketImplementationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___U3CSocketImplementationU3Ek__BackingField_20)); }
	inline Type_t * get_U3CSocketImplementationU3Ek__BackingField_20() const { return ___U3CSocketImplementationU3Ek__BackingField_20; }
	inline Type_t ** get_address_of_U3CSocketImplementationU3Ek__BackingField_20() { return &___U3CSocketImplementationU3Ek__BackingField_20; }
	inline void set_U3CSocketImplementationU3Ek__BackingField_20(Type_t * value)
	{
		___U3CSocketImplementationU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSocketImplementationU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_DebugOut_21() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___DebugOut_21)); }
	inline uint8_t get_DebugOut_21() const { return ___DebugOut_21; }
	inline uint8_t* get_address_of_DebugOut_21() { return &___DebugOut_21; }
	inline void set_DebugOut_21(uint8_t value)
	{
		___DebugOut_21 = value;
	}

	inline static int32_t get_offset_of_U3CListenerU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___U3CListenerU3Ek__BackingField_22)); }
	inline RuntimeObject* get_U3CListenerU3Ek__BackingField_22() const { return ___U3CListenerU3Ek__BackingField_22; }
	inline RuntimeObject** get_address_of_U3CListenerU3Ek__BackingField_22() { return &___U3CListenerU3Ek__BackingField_22; }
	inline void set_U3CListenerU3Ek__BackingField_22(RuntimeObject* value)
	{
		___U3CListenerU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CListenerU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisconnectMessage_23() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___OnDisconnectMessage_23)); }
	inline Action_1_t559B363216C36C44D057947AE705B1DEFC791EAD * get_OnDisconnectMessage_23() const { return ___OnDisconnectMessage_23; }
	inline Action_1_t559B363216C36C44D057947AE705B1DEFC791EAD ** get_address_of_OnDisconnectMessage_23() { return &___OnDisconnectMessage_23; }
	inline void set_OnDisconnectMessage_23(Action_1_t559B363216C36C44D057947AE705B1DEFC791EAD * value)
	{
		___OnDisconnectMessage_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisconnectMessage_23), (void*)value);
	}

	inline static int32_t get_offset_of_reuseEventInstance_24() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___reuseEventInstance_24)); }
	inline bool get_reuseEventInstance_24() const { return ___reuseEventInstance_24; }
	inline bool* get_address_of_reuseEventInstance_24() { return &___reuseEventInstance_24; }
	inline void set_reuseEventInstance_24(bool value)
	{
		___reuseEventInstance_24 = value;
	}

	inline static int32_t get_offset_of_useByteArraySlicePoolForEvents_25() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___useByteArraySlicePoolForEvents_25)); }
	inline bool get_useByteArraySlicePoolForEvents_25() const { return ___useByteArraySlicePoolForEvents_25; }
	inline bool* get_address_of_useByteArraySlicePoolForEvents_25() { return &___useByteArraySlicePoolForEvents_25; }
	inline void set_useByteArraySlicePoolForEvents_25(bool value)
	{
		___useByteArraySlicePoolForEvents_25 = value;
	}

	inline static int32_t get_offset_of_wrapIncomingStructs_26() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___wrapIncomingStructs_26)); }
	inline bool get_wrapIncomingStructs_26() const { return ___wrapIncomingStructs_26; }
	inline bool* get_address_of_wrapIncomingStructs_26() { return &___wrapIncomingStructs_26; }
	inline void set_wrapIncomingStructs_26(bool value)
	{
		___wrapIncomingStructs_26 = value;
	}

	inline static int32_t get_offset_of_SendInCreationOrder_27() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___SendInCreationOrder_27)); }
	inline bool get_SendInCreationOrder_27() const { return ___SendInCreationOrder_27; }
	inline bool* get_address_of_SendInCreationOrder_27() { return &___SendInCreationOrder_27; }
	inline void set_SendInCreationOrder_27(bool value)
	{
		___SendInCreationOrder_27 = value;
	}

	inline static int32_t get_offset_of_TrafficRecorder_28() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___TrafficRecorder_28)); }
	inline RuntimeObject* get_TrafficRecorder_28() const { return ___TrafficRecorder_28; }
	inline RuntimeObject** get_address_of_TrafficRecorder_28() { return &___TrafficRecorder_28; }
	inline void set_TrafficRecorder_28(RuntimeObject* value)
	{
		___TrafficRecorder_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrafficRecorder_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnableServerTracingU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___U3CEnableServerTracingU3Ek__BackingField_29)); }
	inline bool get_U3CEnableServerTracingU3Ek__BackingField_29() const { return ___U3CEnableServerTracingU3Ek__BackingField_29; }
	inline bool* get_address_of_U3CEnableServerTracingU3Ek__BackingField_29() { return &___U3CEnableServerTracingU3Ek__BackingField_29; }
	inline void set_U3CEnableServerTracingU3Ek__BackingField_29(bool value)
	{
		___U3CEnableServerTracingU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_quickResendAttempts_30() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___quickResendAttempts_30)); }
	inline uint8_t get_quickResendAttempts_30() const { return ___quickResendAttempts_30; }
	inline uint8_t* get_address_of_quickResendAttempts_30() { return &___quickResendAttempts_30; }
	inline void set_quickResendAttempts_30(uint8_t value)
	{
		___quickResendAttempts_30 = value;
	}

	inline static int32_t get_offset_of_ChannelCount_31() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___ChannelCount_31)); }
	inline uint8_t get_ChannelCount_31() const { return ___ChannelCount_31; }
	inline uint8_t* get_address_of_ChannelCount_31() { return &___ChannelCount_31; }
	inline void set_ChannelCount_31(uint8_t value)
	{
		___ChannelCount_31 = value;
	}

	inline static int32_t get_offset_of_EnableEncryptedFlag_32() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___EnableEncryptedFlag_32)); }
	inline bool get_EnableEncryptedFlag_32() const { return ___EnableEncryptedFlag_32; }
	inline bool* get_address_of_EnableEncryptedFlag_32() { return &___EnableEncryptedFlag_32; }
	inline void set_EnableEncryptedFlag_32(bool value)
	{
		___EnableEncryptedFlag_32 = value;
	}

	inline static int32_t get_offset_of_crcEnabled_33() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___crcEnabled_33)); }
	inline bool get_crcEnabled_33() const { return ___crcEnabled_33; }
	inline bool* get_address_of_crcEnabled_33() { return &___crcEnabled_33; }
	inline void set_crcEnabled_33(bool value)
	{
		___crcEnabled_33 = value;
	}

	inline static int32_t get_offset_of_SentCountAllowance_34() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___SentCountAllowance_34)); }
	inline int32_t get_SentCountAllowance_34() const { return ___SentCountAllowance_34; }
	inline int32_t* get_address_of_SentCountAllowance_34() { return &___SentCountAllowance_34; }
	inline void set_SentCountAllowance_34(int32_t value)
	{
		___SentCountAllowance_34 = value;
	}

	inline static int32_t get_offset_of_InitialResendTimeMax_35() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___InitialResendTimeMax_35)); }
	inline int32_t get_InitialResendTimeMax_35() const { return ___InitialResendTimeMax_35; }
	inline int32_t* get_address_of_InitialResendTimeMax_35() { return &___InitialResendTimeMax_35; }
	inline void set_InitialResendTimeMax_35(int32_t value)
	{
		___InitialResendTimeMax_35 = value;
	}

	inline static int32_t get_offset_of_TimePingInterval_36() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___TimePingInterval_36)); }
	inline int32_t get_TimePingInterval_36() const { return ___TimePingInterval_36; }
	inline int32_t* get_address_of_TimePingInterval_36() { return &___TimePingInterval_36; }
	inline void set_TimePingInterval_36(int32_t value)
	{
		___TimePingInterval_36 = value;
	}

	inline static int32_t get_offset_of_disconnectTimeout_37() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___disconnectTimeout_37)); }
	inline int32_t get_disconnectTimeout_37() const { return ___disconnectTimeout_37; }
	inline int32_t* get_address_of_disconnectTimeout_37() { return &___disconnectTimeout_37; }
	inline void set_disconnectTimeout_37(int32_t value)
	{
		___disconnectTimeout_37 = value;
	}

	inline static int32_t get_offset_of_U3CTransportProtocolU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___U3CTransportProtocolU3Ek__BackingField_38)); }
	inline uint8_t get_U3CTransportProtocolU3Ek__BackingField_38() const { return ___U3CTransportProtocolU3Ek__BackingField_38; }
	inline uint8_t* get_address_of_U3CTransportProtocolU3Ek__BackingField_38() { return &___U3CTransportProtocolU3Ek__BackingField_38; }
	inline void set_U3CTransportProtocolU3Ek__BackingField_38(uint8_t value)
	{
		___U3CTransportProtocolU3Ek__BackingField_38 = value;
	}

	inline static int32_t get_offset_of_mtu_40() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___mtu_40)); }
	inline int32_t get_mtu_40() const { return ___mtu_40; }
	inline int32_t* get_address_of_mtu_40() { return &___mtu_40; }
	inline void set_mtu_40(int32_t value)
	{
		___mtu_40 = value;
	}

	inline static int32_t get_offset_of_U3CIsSendingOnlyAcksU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___U3CIsSendingOnlyAcksU3Ek__BackingField_41)); }
	inline bool get_U3CIsSendingOnlyAcksU3Ek__BackingField_41() const { return ___U3CIsSendingOnlyAcksU3Ek__BackingField_41; }
	inline bool* get_address_of_U3CIsSendingOnlyAcksU3Ek__BackingField_41() { return &___U3CIsSendingOnlyAcksU3Ek__BackingField_41; }
	inline void set_U3CIsSendingOnlyAcksU3Ek__BackingField_41(bool value)
	{
		___U3CIsSendingOnlyAcksU3Ek__BackingField_41 = value;
	}

	inline static int32_t get_offset_of_RandomizeSequenceNumbers_43() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___RandomizeSequenceNumbers_43)); }
	inline bool get_RandomizeSequenceNumbers_43() const { return ___RandomizeSequenceNumbers_43; }
	inline bool* get_address_of_RandomizeSequenceNumbers_43() { return &___RandomizeSequenceNumbers_43; }
	inline void set_RandomizeSequenceNumbers_43(bool value)
	{
		___RandomizeSequenceNumbers_43 = value;
	}

	inline static int32_t get_offset_of_RandomizedSequenceNumbers_44() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___RandomizedSequenceNumbers_44)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_RandomizedSequenceNumbers_44() const { return ___RandomizedSequenceNumbers_44; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_RandomizedSequenceNumbers_44() { return &___RandomizedSequenceNumbers_44; }
	inline void set_RandomizedSequenceNumbers_44(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___RandomizedSequenceNumbers_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RandomizedSequenceNumbers_44), (void*)value);
	}

	inline static int32_t get_offset_of_GcmDatagramEncryption_45() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___GcmDatagramEncryption_45)); }
	inline bool get_GcmDatagramEncryption_45() const { return ___GcmDatagramEncryption_45; }
	inline bool* get_address_of_GcmDatagramEncryption_45() { return &___GcmDatagramEncryption_45; }
	inline void set_GcmDatagramEncryption_45(bool value)
	{
		___GcmDatagramEncryption_45 = value;
	}

	inline static int32_t get_offset_of_U3CTrafficStatsIncomingU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___U3CTrafficStatsIncomingU3Ek__BackingField_46)); }
	inline TrafficStats_tE20732ADD0030B8708535A2BB7CF1C683355D984 * get_U3CTrafficStatsIncomingU3Ek__BackingField_46() const { return ___U3CTrafficStatsIncomingU3Ek__BackingField_46; }
	inline TrafficStats_tE20732ADD0030B8708535A2BB7CF1C683355D984 ** get_address_of_U3CTrafficStatsIncomingU3Ek__BackingField_46() { return &___U3CTrafficStatsIncomingU3Ek__BackingField_46; }
	inline void set_U3CTrafficStatsIncomingU3Ek__BackingField_46(TrafficStats_tE20732ADD0030B8708535A2BB7CF1C683355D984 * value)
	{
		___U3CTrafficStatsIncomingU3Ek__BackingField_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsIncomingU3Ek__BackingField_46), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsOutgoingU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___U3CTrafficStatsOutgoingU3Ek__BackingField_47)); }
	inline TrafficStats_tE20732ADD0030B8708535A2BB7CF1C683355D984 * get_U3CTrafficStatsOutgoingU3Ek__BackingField_47() const { return ___U3CTrafficStatsOutgoingU3Ek__BackingField_47; }
	inline TrafficStats_tE20732ADD0030B8708535A2BB7CF1C683355D984 ** get_address_of_U3CTrafficStatsOutgoingU3Ek__BackingField_47() { return &___U3CTrafficStatsOutgoingU3Ek__BackingField_47; }
	inline void set_U3CTrafficStatsOutgoingU3Ek__BackingField_47(TrafficStats_tE20732ADD0030B8708535A2BB7CF1C683355D984 * value)
	{
		___U3CTrafficStatsOutgoingU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsOutgoingU3Ek__BackingField_47), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsGameLevelU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___U3CTrafficStatsGameLevelU3Ek__BackingField_48)); }
	inline TrafficStatsGameLevel_t55A82B03E7B030983867D627BA22AFC5241E6B89 * get_U3CTrafficStatsGameLevelU3Ek__BackingField_48() const { return ___U3CTrafficStatsGameLevelU3Ek__BackingField_48; }
	inline TrafficStatsGameLevel_t55A82B03E7B030983867D627BA22AFC5241E6B89 ** get_address_of_U3CTrafficStatsGameLevelU3Ek__BackingField_48() { return &___U3CTrafficStatsGameLevelU3Ek__BackingField_48; }
	inline void set_U3CTrafficStatsGameLevelU3Ek__BackingField_48(TrafficStatsGameLevel_t55A82B03E7B030983867D627BA22AFC5241E6B89 * value)
	{
		___U3CTrafficStatsGameLevelU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsGameLevelU3Ek__BackingField_48), (void*)value);
	}

	inline static int32_t get_offset_of_trafficStatsStopwatch_49() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___trafficStatsStopwatch_49)); }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * get_trafficStatsStopwatch_49() const { return ___trafficStatsStopwatch_49; }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 ** get_address_of_trafficStatsStopwatch_49() { return &___trafficStatsStopwatch_49; }
	inline void set_trafficStatsStopwatch_49(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * value)
	{
		___trafficStatsStopwatch_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trafficStatsStopwatch_49), (void*)value);
	}

	inline static int32_t get_offset_of_trafficStatsEnabled_50() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___trafficStatsEnabled_50)); }
	inline bool get_trafficStatsEnabled_50() const { return ___trafficStatsEnabled_50; }
	inline bool* get_address_of_trafficStatsEnabled_50() { return &___trafficStatsEnabled_50; }
	inline void set_trafficStatsEnabled_50(bool value)
	{
		___trafficStatsEnabled_50 = value;
	}

	inline static int32_t get_offset_of_peerBase_51() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___peerBase_51)); }
	inline PeerBase_t76CFBD88FAEF62D526C6AA35B7CCDF01D43D47EC * get_peerBase_51() const { return ___peerBase_51; }
	inline PeerBase_t76CFBD88FAEF62D526C6AA35B7CCDF01D43D47EC ** get_address_of_peerBase_51() { return &___peerBase_51; }
	inline void set_peerBase_51(PeerBase_t76CFBD88FAEF62D526C6AA35B7CCDF01D43D47EC * value)
	{
		___peerBase_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peerBase_51), (void*)value);
	}

	inline static int32_t get_offset_of_SendOutgoingLockObject_52() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___SendOutgoingLockObject_52)); }
	inline RuntimeObject * get_SendOutgoingLockObject_52() const { return ___SendOutgoingLockObject_52; }
	inline RuntimeObject ** get_address_of_SendOutgoingLockObject_52() { return &___SendOutgoingLockObject_52; }
	inline void set_SendOutgoingLockObject_52(RuntimeObject * value)
	{
		___SendOutgoingLockObject_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendOutgoingLockObject_52), (void*)value);
	}

	inline static int32_t get_offset_of_DispatchLockObject_53() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___DispatchLockObject_53)); }
	inline RuntimeObject * get_DispatchLockObject_53() const { return ___DispatchLockObject_53; }
	inline RuntimeObject ** get_address_of_DispatchLockObject_53() { return &___DispatchLockObject_53; }
	inline void set_DispatchLockObject_53(RuntimeObject * value)
	{
		___DispatchLockObject_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DispatchLockObject_53), (void*)value);
	}

	inline static int32_t get_offset_of_EnqueueLock_54() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___EnqueueLock_54)); }
	inline RuntimeObject * get_EnqueueLock_54() const { return ___EnqueueLock_54; }
	inline RuntimeObject ** get_address_of_EnqueueLock_54() { return &___EnqueueLock_54; }
	inline void set_EnqueueLock_54(RuntimeObject * value)
	{
		___EnqueueLock_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnqueueLock_54), (void*)value);
	}

	inline static int32_t get_offset_of_PayloadEncryptionSecret_55() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___PayloadEncryptionSecret_55)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_PayloadEncryptionSecret_55() const { return ___PayloadEncryptionSecret_55; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_PayloadEncryptionSecret_55() { return &___PayloadEncryptionSecret_55; }
	inline void set_PayloadEncryptionSecret_55(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___PayloadEncryptionSecret_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PayloadEncryptionSecret_55), (void*)value);
	}

	inline static int32_t get_offset_of_encryptorType_56() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___encryptorType_56)); }
	inline Type_t * get_encryptorType_56() const { return ___encryptorType_56; }
	inline Type_t ** get_address_of_encryptorType_56() { return &___encryptorType_56; }
	inline void set_encryptorType_56(Type_t * value)
	{
		___encryptorType_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encryptorType_56), (void*)value);
	}

	inline static int32_t get_offset_of_Encryptor_57() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___Encryptor_57)); }
	inline RuntimeObject* get_Encryptor_57() const { return ___Encryptor_57; }
	inline RuntimeObject** get_address_of_Encryptor_57() { return &___Encryptor_57; }
	inline void set_Encryptor_57(RuntimeObject* value)
	{
		___Encryptor_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Encryptor_57), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCountDiscardedU3Ek__BackingField_58() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___U3CCountDiscardedU3Ek__BackingField_58)); }
	inline int32_t get_U3CCountDiscardedU3Ek__BackingField_58() const { return ___U3CCountDiscardedU3Ek__BackingField_58; }
	inline int32_t* get_address_of_U3CCountDiscardedU3Ek__BackingField_58() { return &___U3CCountDiscardedU3Ek__BackingField_58; }
	inline void set_U3CCountDiscardedU3Ek__BackingField_58(int32_t value)
	{
		___U3CCountDiscardedU3Ek__BackingField_58 = value;
	}

	inline static int32_t get_offset_of_U3CDeltaUnreliableNumberU3Ek__BackingField_59() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B, ___U3CDeltaUnreliableNumberU3Ek__BackingField_59)); }
	inline int32_t get_U3CDeltaUnreliableNumberU3Ek__BackingField_59() const { return ___U3CDeltaUnreliableNumberU3Ek__BackingField_59; }
	inline int32_t* get_address_of_U3CDeltaUnreliableNumberU3Ek__BackingField_59() { return &___U3CDeltaUnreliableNumberU3Ek__BackingField_59; }
	inline void set_U3CDeltaUnreliableNumberU3Ek__BackingField_59(int32_t value)
	{
		___U3CDeltaUnreliableNumberU3Ek__BackingField_59 = value;
	}
};

struct PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B_StaticFields
{
public:
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NoNativeCallbacks
	bool ___NoNativeCallbacks_9;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::checkedNativeLibs
	bool ___checkedNativeLibs_13;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useSocketNative
	bool ___useSocketNative_14;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useDiffieHellmanCryptoProvider
	bool ___useDiffieHellmanCryptoProvider_15;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useEncryptorNative
	bool ___useEncryptorNative_16;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::OutgoingStreamBufferSize
	int32_t ___OutgoingStreamBufferSize_39;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::AsyncKeyExchange
	bool ___AsyncKeyExchange_42;

public:
	inline static int32_t get_offset_of_NoNativeCallbacks_9() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B_StaticFields, ___NoNativeCallbacks_9)); }
	inline bool get_NoNativeCallbacks_9() const { return ___NoNativeCallbacks_9; }
	inline bool* get_address_of_NoNativeCallbacks_9() { return &___NoNativeCallbacks_9; }
	inline void set_NoNativeCallbacks_9(bool value)
	{
		___NoNativeCallbacks_9 = value;
	}

	inline static int32_t get_offset_of_checkedNativeLibs_13() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B_StaticFields, ___checkedNativeLibs_13)); }
	inline bool get_checkedNativeLibs_13() const { return ___checkedNativeLibs_13; }
	inline bool* get_address_of_checkedNativeLibs_13() { return &___checkedNativeLibs_13; }
	inline void set_checkedNativeLibs_13(bool value)
	{
		___checkedNativeLibs_13 = value;
	}

	inline static int32_t get_offset_of_useSocketNative_14() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B_StaticFields, ___useSocketNative_14)); }
	inline bool get_useSocketNative_14() const { return ___useSocketNative_14; }
	inline bool* get_address_of_useSocketNative_14() { return &___useSocketNative_14; }
	inline void set_useSocketNative_14(bool value)
	{
		___useSocketNative_14 = value;
	}

	inline static int32_t get_offset_of_useDiffieHellmanCryptoProvider_15() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B_StaticFields, ___useDiffieHellmanCryptoProvider_15)); }
	inline bool get_useDiffieHellmanCryptoProvider_15() const { return ___useDiffieHellmanCryptoProvider_15; }
	inline bool* get_address_of_useDiffieHellmanCryptoProvider_15() { return &___useDiffieHellmanCryptoProvider_15; }
	inline void set_useDiffieHellmanCryptoProvider_15(bool value)
	{
		___useDiffieHellmanCryptoProvider_15 = value;
	}

	inline static int32_t get_offset_of_useEncryptorNative_16() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B_StaticFields, ___useEncryptorNative_16)); }
	inline bool get_useEncryptorNative_16() const { return ___useEncryptorNative_16; }
	inline bool* get_address_of_useEncryptorNative_16() { return &___useEncryptorNative_16; }
	inline void set_useEncryptorNative_16(bool value)
	{
		___useEncryptorNative_16 = value;
	}

	inline static int32_t get_offset_of_OutgoingStreamBufferSize_39() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B_StaticFields, ___OutgoingStreamBufferSize_39)); }
	inline int32_t get_OutgoingStreamBufferSize_39() const { return ___OutgoingStreamBufferSize_39; }
	inline int32_t* get_address_of_OutgoingStreamBufferSize_39() { return &___OutgoingStreamBufferSize_39; }
	inline void set_OutgoingStreamBufferSize_39(int32_t value)
	{
		___OutgoingStreamBufferSize_39 = value;
	}

	inline static int32_t get_offset_of_AsyncKeyExchange_42() { return static_cast<int32_t>(offsetof(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B_StaticFields, ___AsyncKeyExchange_42)); }
	inline bool get_AsyncKeyExchange_42() const { return ___AsyncKeyExchange_42; }
	inline bool* get_address_of_AsyncKeyExchange_42() { return &___AsyncKeyExchange_42; }
	inline void set_AsyncKeyExchange_42(bool value)
	{
		___AsyncKeyExchange_42 = value;
	}
};


// ExitGames.Client.Photon.SendOptions
struct  SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5 
{
public:
	// ExitGames.Client.Photon.DeliveryMode ExitGames.Client.Photon.SendOptions::DeliveryMode
	int32_t ___DeliveryMode_2;
	// System.Boolean ExitGames.Client.Photon.SendOptions::Encrypt
	bool ___Encrypt_3;
	// System.Byte ExitGames.Client.Photon.SendOptions::Channel
	uint8_t ___Channel_4;

public:
	inline static int32_t get_offset_of_DeliveryMode_2() { return static_cast<int32_t>(offsetof(SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5, ___DeliveryMode_2)); }
	inline int32_t get_DeliveryMode_2() const { return ___DeliveryMode_2; }
	inline int32_t* get_address_of_DeliveryMode_2() { return &___DeliveryMode_2; }
	inline void set_DeliveryMode_2(int32_t value)
	{
		___DeliveryMode_2 = value;
	}

	inline static int32_t get_offset_of_Encrypt_3() { return static_cast<int32_t>(offsetof(SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5, ___Encrypt_3)); }
	inline bool get_Encrypt_3() const { return ___Encrypt_3; }
	inline bool* get_address_of_Encrypt_3() { return &___Encrypt_3; }
	inline void set_Encrypt_3(bool value)
	{
		___Encrypt_3 = value;
	}

	inline static int32_t get_offset_of_Channel_4() { return static_cast<int32_t>(offsetof(SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5, ___Channel_4)); }
	inline uint8_t get_Channel_4() const { return ___Channel_4; }
	inline uint8_t* get_address_of_Channel_4() { return &___Channel_4; }
	inline void set_Channel_4(uint8_t value)
	{
		___Channel_4 = value;
	}
};

struct SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5_StaticFields
{
public:
	// ExitGames.Client.Photon.SendOptions ExitGames.Client.Photon.SendOptions::SendReliable
	SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  ___SendReliable_0;
	// ExitGames.Client.Photon.SendOptions ExitGames.Client.Photon.SendOptions::SendUnreliable
	SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  ___SendUnreliable_1;

public:
	inline static int32_t get_offset_of_SendReliable_0() { return static_cast<int32_t>(offsetof(SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5_StaticFields, ___SendReliable_0)); }
	inline SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  get_SendReliable_0() const { return ___SendReliable_0; }
	inline SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5 * get_address_of_SendReliable_0() { return &___SendReliable_0; }
	inline void set_SendReliable_0(SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  value)
	{
		___SendReliable_0 = value;
	}

	inline static int32_t get_offset_of_SendUnreliable_1() { return static_cast<int32_t>(offsetof(SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5_StaticFields, ___SendUnreliable_1)); }
	inline SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  get_SendUnreliable_1() const { return ___SendUnreliable_1; }
	inline SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5 * get_address_of_SendUnreliable_1() { return &___SendUnreliable_1; }
	inline void set_SendUnreliable_1(SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  value)
	{
		___SendUnreliable_1 = value;
	}
};

// Native definition for P/Invoke marshalling of ExitGames.Client.Photon.SendOptions
struct SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5_marshaled_pinvoke
{
	int32_t ___DeliveryMode_2;
	int32_t ___Encrypt_3;
	uint8_t ___Channel_4;
};
// Native definition for COM marshalling of ExitGames.Client.Photon.SendOptions
struct SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5_marshaled_com
{
	int32_t ___DeliveryMode_2;
	int32_t ___Encrypt_3;
	uint8_t ___Channel_4;
};

// Photon.Chat.AuthenticationValues
struct  AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78  : public RuntimeObject
{
public:
	// Photon.Chat.CustomAuthenticationType Photon.Chat.AuthenticationValues::authType
	uint8_t ___authType_0;
	// System.String Photon.Chat.AuthenticationValues::<AuthGetParameters>k__BackingField
	String_t* ___U3CAuthGetParametersU3Ek__BackingField_1;
	// System.Object Photon.Chat.AuthenticationValues::<AuthPostData>k__BackingField
	RuntimeObject * ___U3CAuthPostDataU3Ek__BackingField_2;
	// System.Object Photon.Chat.AuthenticationValues::<Token>k__BackingField
	RuntimeObject * ___U3CTokenU3Ek__BackingField_3;
	// System.String Photon.Chat.AuthenticationValues::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_authType_0() { return static_cast<int32_t>(offsetof(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78, ___authType_0)); }
	inline uint8_t get_authType_0() const { return ___authType_0; }
	inline uint8_t* get_address_of_authType_0() { return &___authType_0; }
	inline void set_authType_0(uint8_t value)
	{
		___authType_0 = value;
	}

	inline static int32_t get_offset_of_U3CAuthGetParametersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78, ___U3CAuthGetParametersU3Ek__BackingField_1)); }
	inline String_t* get_U3CAuthGetParametersU3Ek__BackingField_1() const { return ___U3CAuthGetParametersU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAuthGetParametersU3Ek__BackingField_1() { return &___U3CAuthGetParametersU3Ek__BackingField_1; }
	inline void set_U3CAuthGetParametersU3Ek__BackingField_1(String_t* value)
	{
		___U3CAuthGetParametersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthGetParametersU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAuthPostDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78, ___U3CAuthPostDataU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3CAuthPostDataU3Ek__BackingField_2() const { return ___U3CAuthPostDataU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3CAuthPostDataU3Ek__BackingField_2() { return &___U3CAuthPostDataU3Ek__BackingField_2; }
	inline void set_U3CAuthPostDataU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3CAuthPostDataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthPostDataU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78, ___U3CTokenU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CTokenU3Ek__BackingField_3() const { return ___U3CTokenU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CTokenU3Ek__BackingField_3() { return &___U3CTokenU3Ek__BackingField_3; }
	inline void set_U3CTokenU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CTokenU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTokenU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78, ___U3CUserIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_4() const { return ___U3CUserIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_4() { return &___U3CUserIdU3Ek__BackingField_4; }
	inline void set_U3CUserIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_4), (void*)value);
	}
};


// Photon.Chat.ChatAppSettings
struct  ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356  : public RuntimeObject
{
public:
	// System.String Photon.Chat.ChatAppSettings::AppIdChat
	String_t* ___AppIdChat_0;
	// System.String Photon.Chat.ChatAppSettings::AppVersion
	String_t* ___AppVersion_1;
	// System.String Photon.Chat.ChatAppSettings::FixedRegion
	String_t* ___FixedRegion_2;
	// System.String Photon.Chat.ChatAppSettings::Server
	String_t* ___Server_3;
	// System.UInt16 Photon.Chat.ChatAppSettings::Port
	uint16_t ___Port_4;
	// ExitGames.Client.Photon.ConnectionProtocol Photon.Chat.ChatAppSettings::Protocol
	uint8_t ___Protocol_5;
	// System.Boolean Photon.Chat.ChatAppSettings::EnableProtocolFallback
	bool ___EnableProtocolFallback_6;
	// ExitGames.Client.Photon.DebugLevel Photon.Chat.ChatAppSettings::NetworkLogging
	uint8_t ___NetworkLogging_7;

public:
	inline static int32_t get_offset_of_AppIdChat_0() { return static_cast<int32_t>(offsetof(ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356, ___AppIdChat_0)); }
	inline String_t* get_AppIdChat_0() const { return ___AppIdChat_0; }
	inline String_t** get_address_of_AppIdChat_0() { return &___AppIdChat_0; }
	inline void set_AppIdChat_0(String_t* value)
	{
		___AppIdChat_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppIdChat_0), (void*)value);
	}

	inline static int32_t get_offset_of_AppVersion_1() { return static_cast<int32_t>(offsetof(ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356, ___AppVersion_1)); }
	inline String_t* get_AppVersion_1() const { return ___AppVersion_1; }
	inline String_t** get_address_of_AppVersion_1() { return &___AppVersion_1; }
	inline void set_AppVersion_1(String_t* value)
	{
		___AppVersion_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppVersion_1), (void*)value);
	}

	inline static int32_t get_offset_of_FixedRegion_2() { return static_cast<int32_t>(offsetof(ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356, ___FixedRegion_2)); }
	inline String_t* get_FixedRegion_2() const { return ___FixedRegion_2; }
	inline String_t** get_address_of_FixedRegion_2() { return &___FixedRegion_2; }
	inline void set_FixedRegion_2(String_t* value)
	{
		___FixedRegion_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FixedRegion_2), (void*)value);
	}

	inline static int32_t get_offset_of_Server_3() { return static_cast<int32_t>(offsetof(ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356, ___Server_3)); }
	inline String_t* get_Server_3() const { return ___Server_3; }
	inline String_t** get_address_of_Server_3() { return &___Server_3; }
	inline void set_Server_3(String_t* value)
	{
		___Server_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Server_3), (void*)value);
	}

	inline static int32_t get_offset_of_Port_4() { return static_cast<int32_t>(offsetof(ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356, ___Port_4)); }
	inline uint16_t get_Port_4() const { return ___Port_4; }
	inline uint16_t* get_address_of_Port_4() { return &___Port_4; }
	inline void set_Port_4(uint16_t value)
	{
		___Port_4 = value;
	}

	inline static int32_t get_offset_of_Protocol_5() { return static_cast<int32_t>(offsetof(ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356, ___Protocol_5)); }
	inline uint8_t get_Protocol_5() const { return ___Protocol_5; }
	inline uint8_t* get_address_of_Protocol_5() { return &___Protocol_5; }
	inline void set_Protocol_5(uint8_t value)
	{
		___Protocol_5 = value;
	}

	inline static int32_t get_offset_of_EnableProtocolFallback_6() { return static_cast<int32_t>(offsetof(ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356, ___EnableProtocolFallback_6)); }
	inline bool get_EnableProtocolFallback_6() const { return ___EnableProtocolFallback_6; }
	inline bool* get_address_of_EnableProtocolFallback_6() { return &___EnableProtocolFallback_6; }
	inline void set_EnableProtocolFallback_6(bool value)
	{
		___EnableProtocolFallback_6 = value;
	}

	inline static int32_t get_offset_of_NetworkLogging_7() { return static_cast<int32_t>(offsetof(ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356, ___NetworkLogging_7)); }
	inline uint8_t get_NetworkLogging_7() const { return ___NetworkLogging_7; }
	inline uint8_t* get_address_of_NetworkLogging_7() { return &___NetworkLogging_7; }
	inline void set_NetworkLogging_7(uint8_t value)
	{
		___NetworkLogging_7 = value;
	}
};


// Photon.Chat.ChatClient
struct  ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505  : public RuntimeObject
{
public:
	// System.Boolean Photon.Chat.ChatClient::<EnableProtocolFallback>k__BackingField
	bool ___U3CEnableProtocolFallbackU3Ek__BackingField_3;
	// System.String Photon.Chat.ChatClient::<NameServerAddress>k__BackingField
	String_t* ___U3CNameServerAddressU3Ek__BackingField_4;
	// System.String Photon.Chat.ChatClient::<FrontendAddress>k__BackingField
	String_t* ___U3CFrontendAddressU3Ek__BackingField_5;
	// System.String Photon.Chat.ChatClient::chatRegion
	String_t* ___chatRegion_6;
	// Photon.Chat.ChatState Photon.Chat.ChatClient::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_7;
	// Photon.Chat.ChatDisconnectCause Photon.Chat.ChatClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_8;
	// System.String Photon.Chat.ChatClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_9;
	// System.String Photon.Chat.ChatClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_10;
	// Photon.Chat.AuthenticationValues Photon.Chat.ChatClient::<AuthValues>k__BackingField
	AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ___U3CAuthValuesU3Ek__BackingField_11;
	// System.Int32 Photon.Chat.ChatClient::MessageLimit
	int32_t ___MessageLimit_12;
	// System.Int32 Photon.Chat.ChatClient::PrivateChatHistoryLength
	int32_t ___PrivateChatHistoryLength_13;
	// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel> Photon.Chat.ChatClient::PublicChannels
	Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * ___PublicChannels_14;
	// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel> Photon.Chat.ChatClient::PrivateChannels
	Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * ___PrivateChannels_15;
	// System.Collections.Generic.HashSet`1<System.String> Photon.Chat.ChatClient::PublicChannelsUnsubscribing
	HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * ___PublicChannelsUnsubscribing_16;
	// Photon.Chat.IChatClientListener Photon.Chat.ChatClient::listener
	RuntimeObject* ___listener_17;
	// Photon.Chat.ChatPeer Photon.Chat.ChatClient::chatPeer
	ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * ___chatPeer_18;
	// System.Boolean Photon.Chat.ChatClient::didAuthenticate
	bool ___didAuthenticate_20;
	// System.Nullable`1<System.Int32> Photon.Chat.ChatClient::statusToSetWhenConnected
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  ___statusToSetWhenConnected_21;
	// System.Object Photon.Chat.ChatClient::messageToSetWhenConnected
	RuntimeObject * ___messageToSetWhenConnected_22;
	// System.Int32 Photon.Chat.ChatClient::msDeltaForServiceCalls
	int32_t ___msDeltaForServiceCalls_23;
	// System.Int32 Photon.Chat.ChatClient::msTimestampOfLastServiceCall
	int32_t ___msTimestampOfLastServiceCall_24;
	// System.Boolean Photon.Chat.ChatClient::<UseBackgroundWorkerForSending>k__BackingField
	bool ___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_U3CEnableProtocolFallbackU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___U3CEnableProtocolFallbackU3Ek__BackingField_3)); }
	inline bool get_U3CEnableProtocolFallbackU3Ek__BackingField_3() const { return ___U3CEnableProtocolFallbackU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CEnableProtocolFallbackU3Ek__BackingField_3() { return &___U3CEnableProtocolFallbackU3Ek__BackingField_3; }
	inline void set_U3CEnableProtocolFallbackU3Ek__BackingField_3(bool value)
	{
		___U3CEnableProtocolFallbackU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CNameServerAddressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___U3CNameServerAddressU3Ek__BackingField_4)); }
	inline String_t* get_U3CNameServerAddressU3Ek__BackingField_4() const { return ___U3CNameServerAddressU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CNameServerAddressU3Ek__BackingField_4() { return &___U3CNameServerAddressU3Ek__BackingField_4; }
	inline void set_U3CNameServerAddressU3Ek__BackingField_4(String_t* value)
	{
		___U3CNameServerAddressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameServerAddressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFrontendAddressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___U3CFrontendAddressU3Ek__BackingField_5)); }
	inline String_t* get_U3CFrontendAddressU3Ek__BackingField_5() const { return ___U3CFrontendAddressU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CFrontendAddressU3Ek__BackingField_5() { return &___U3CFrontendAddressU3Ek__BackingField_5; }
	inline void set_U3CFrontendAddressU3Ek__BackingField_5(String_t* value)
	{
		___U3CFrontendAddressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFrontendAddressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_chatRegion_6() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___chatRegion_6)); }
	inline String_t* get_chatRegion_6() const { return ___chatRegion_6; }
	inline String_t** get_address_of_chatRegion_6() { return &___chatRegion_6; }
	inline void set_chatRegion_6(String_t* value)
	{
		___chatRegion_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chatRegion_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___U3CStateU3Ek__BackingField_7)); }
	inline int32_t get_U3CStateU3Ek__BackingField_7() const { return ___U3CStateU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_7() { return &___U3CStateU3Ek__BackingField_7; }
	inline void set_U3CStateU3Ek__BackingField_7(int32_t value)
	{
		___U3CStateU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CDisconnectedCauseU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___U3CDisconnectedCauseU3Ek__BackingField_8)); }
	inline int32_t get_U3CDisconnectedCauseU3Ek__BackingField_8() const { return ___U3CDisconnectedCauseU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CDisconnectedCauseU3Ek__BackingField_8() { return &___U3CDisconnectedCauseU3Ek__BackingField_8; }
	inline void set_U3CDisconnectedCauseU3Ek__BackingField_8(int32_t value)
	{
		___U3CDisconnectedCauseU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CAppVersionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___U3CAppVersionU3Ek__BackingField_9)); }
	inline String_t* get_U3CAppVersionU3Ek__BackingField_9() const { return ___U3CAppVersionU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CAppVersionU3Ek__BackingField_9() { return &___U3CAppVersionU3Ek__BackingField_9; }
	inline void set_U3CAppVersionU3Ek__BackingField_9(String_t* value)
	{
		___U3CAppVersionU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppVersionU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppIdU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___U3CAppIdU3Ek__BackingField_10)); }
	inline String_t* get_U3CAppIdU3Ek__BackingField_10() const { return ___U3CAppIdU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CAppIdU3Ek__BackingField_10() { return &___U3CAppIdU3Ek__BackingField_10; }
	inline void set_U3CAppIdU3Ek__BackingField_10(String_t* value)
	{
		___U3CAppIdU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppIdU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAuthValuesU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___U3CAuthValuesU3Ek__BackingField_11)); }
	inline AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * get_U3CAuthValuesU3Ek__BackingField_11() const { return ___U3CAuthValuesU3Ek__BackingField_11; }
	inline AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 ** get_address_of_U3CAuthValuesU3Ek__BackingField_11() { return &___U3CAuthValuesU3Ek__BackingField_11; }
	inline void set_U3CAuthValuesU3Ek__BackingField_11(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * value)
	{
		___U3CAuthValuesU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthValuesU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_MessageLimit_12() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___MessageLimit_12)); }
	inline int32_t get_MessageLimit_12() const { return ___MessageLimit_12; }
	inline int32_t* get_address_of_MessageLimit_12() { return &___MessageLimit_12; }
	inline void set_MessageLimit_12(int32_t value)
	{
		___MessageLimit_12 = value;
	}

	inline static int32_t get_offset_of_PrivateChatHistoryLength_13() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___PrivateChatHistoryLength_13)); }
	inline int32_t get_PrivateChatHistoryLength_13() const { return ___PrivateChatHistoryLength_13; }
	inline int32_t* get_address_of_PrivateChatHistoryLength_13() { return &___PrivateChatHistoryLength_13; }
	inline void set_PrivateChatHistoryLength_13(int32_t value)
	{
		___PrivateChatHistoryLength_13 = value;
	}

	inline static int32_t get_offset_of_PublicChannels_14() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___PublicChannels_14)); }
	inline Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * get_PublicChannels_14() const { return ___PublicChannels_14; }
	inline Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB ** get_address_of_PublicChannels_14() { return &___PublicChannels_14; }
	inline void set_PublicChannels_14(Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * value)
	{
		___PublicChannels_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PublicChannels_14), (void*)value);
	}

	inline static int32_t get_offset_of_PrivateChannels_15() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___PrivateChannels_15)); }
	inline Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * get_PrivateChannels_15() const { return ___PrivateChannels_15; }
	inline Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB ** get_address_of_PrivateChannels_15() { return &___PrivateChannels_15; }
	inline void set_PrivateChannels_15(Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * value)
	{
		___PrivateChannels_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PrivateChannels_15), (void*)value);
	}

	inline static int32_t get_offset_of_PublicChannelsUnsubscribing_16() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___PublicChannelsUnsubscribing_16)); }
	inline HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * get_PublicChannelsUnsubscribing_16() const { return ___PublicChannelsUnsubscribing_16; }
	inline HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 ** get_address_of_PublicChannelsUnsubscribing_16() { return &___PublicChannelsUnsubscribing_16; }
	inline void set_PublicChannelsUnsubscribing_16(HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * value)
	{
		___PublicChannelsUnsubscribing_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PublicChannelsUnsubscribing_16), (void*)value);
	}

	inline static int32_t get_offset_of_listener_17() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___listener_17)); }
	inline RuntimeObject* get_listener_17() const { return ___listener_17; }
	inline RuntimeObject** get_address_of_listener_17() { return &___listener_17; }
	inline void set_listener_17(RuntimeObject* value)
	{
		___listener_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listener_17), (void*)value);
	}

	inline static int32_t get_offset_of_chatPeer_18() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___chatPeer_18)); }
	inline ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * get_chatPeer_18() const { return ___chatPeer_18; }
	inline ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 ** get_address_of_chatPeer_18() { return &___chatPeer_18; }
	inline void set_chatPeer_18(ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * value)
	{
		___chatPeer_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chatPeer_18), (void*)value);
	}

	inline static int32_t get_offset_of_didAuthenticate_20() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___didAuthenticate_20)); }
	inline bool get_didAuthenticate_20() const { return ___didAuthenticate_20; }
	inline bool* get_address_of_didAuthenticate_20() { return &___didAuthenticate_20; }
	inline void set_didAuthenticate_20(bool value)
	{
		___didAuthenticate_20 = value;
	}

	inline static int32_t get_offset_of_statusToSetWhenConnected_21() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___statusToSetWhenConnected_21)); }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  get_statusToSetWhenConnected_21() const { return ___statusToSetWhenConnected_21; }
	inline Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * get_address_of_statusToSetWhenConnected_21() { return &___statusToSetWhenConnected_21; }
	inline void set_statusToSetWhenConnected_21(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  value)
	{
		___statusToSetWhenConnected_21 = value;
	}

	inline static int32_t get_offset_of_messageToSetWhenConnected_22() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___messageToSetWhenConnected_22)); }
	inline RuntimeObject * get_messageToSetWhenConnected_22() const { return ___messageToSetWhenConnected_22; }
	inline RuntimeObject ** get_address_of_messageToSetWhenConnected_22() { return &___messageToSetWhenConnected_22; }
	inline void set_messageToSetWhenConnected_22(RuntimeObject * value)
	{
		___messageToSetWhenConnected_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageToSetWhenConnected_22), (void*)value);
	}

	inline static int32_t get_offset_of_msDeltaForServiceCalls_23() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___msDeltaForServiceCalls_23)); }
	inline int32_t get_msDeltaForServiceCalls_23() const { return ___msDeltaForServiceCalls_23; }
	inline int32_t* get_address_of_msDeltaForServiceCalls_23() { return &___msDeltaForServiceCalls_23; }
	inline void set_msDeltaForServiceCalls_23(int32_t value)
	{
		___msDeltaForServiceCalls_23 = value;
	}

	inline static int32_t get_offset_of_msTimestampOfLastServiceCall_24() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___msTimestampOfLastServiceCall_24)); }
	inline int32_t get_msTimestampOfLastServiceCall_24() const { return ___msTimestampOfLastServiceCall_24; }
	inline int32_t* get_address_of_msTimestampOfLastServiceCall_24() { return &___msTimestampOfLastServiceCall_24; }
	inline void set_msTimestampOfLastServiceCall_24(int32_t value)
	{
		___msTimestampOfLastServiceCall_24 = value;
	}

	inline static int32_t get_offset_of_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505, ___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_25)); }
	inline bool get_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_25() const { return ___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_25() { return &___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_25; }
	inline void set_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_25(bool value)
	{
		___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_25 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Photon.Chat.ChatPeer
struct  ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989  : public PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B
{
public:
	// System.String Photon.Chat.ChatPeer::NameServerHost
	String_t* ___NameServerHost_60;
	// System.UInt16 Photon.Chat.ChatPeer::NameServerPortOverride
	uint16_t ___NameServerPortOverride_62;

public:
	inline static int32_t get_offset_of_NameServerHost_60() { return static_cast<int32_t>(offsetof(ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989, ___NameServerHost_60)); }
	inline String_t* get_NameServerHost_60() const { return ___NameServerHost_60; }
	inline String_t** get_address_of_NameServerHost_60() { return &___NameServerHost_60; }
	inline void set_NameServerHost_60(String_t* value)
	{
		___NameServerHost_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameServerHost_60), (void*)value);
	}

	inline static int32_t get_offset_of_NameServerPortOverride_62() { return static_cast<int32_t>(offsetof(ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989, ___NameServerPortOverride_62)); }
	inline uint16_t get_NameServerPortOverride_62() const { return ___NameServerPortOverride_62; }
	inline uint16_t* get_address_of_NameServerPortOverride_62() { return &___NameServerPortOverride_62; }
	inline void set_NameServerPortOverride_62(uint16_t value)
	{
		___NameServerPortOverride_62 = value;
	}
};

struct ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> Photon.Chat.ChatPeer::ProtocolToNameServerPort
	Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938 * ___ProtocolToNameServerPort_61;

public:
	inline static int32_t get_offset_of_ProtocolToNameServerPort_61() { return static_cast<int32_t>(offsetof(ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_StaticFields, ___ProtocolToNameServerPort_61)); }
	inline Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938 * get_ProtocolToNameServerPort_61() const { return ___ProtocolToNameServerPort_61; }
	inline Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938 ** get_address_of_ProtocolToNameServerPort_61() { return &___ProtocolToNameServerPort_61; }
	inline void set_ProtocolToNameServerPort_61(Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938 * value)
	{
		___ProtocolToNameServerPort_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProtocolToNameServerPort_61), (void*)value);
	}
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.Func`1<System.Boolean>
struct  Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};


// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m45E64E05467ACD6F03EE6CD7F5F904574125C7C9_gshared (HashSet_1_t20C647F44B285CB7C061931B00ED43A230F311E5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m89425146ABCF46BE030B6C4B3C85A8559550F983_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2895EBB13AA7D9232058658A7DC404DC5F608923_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB  Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared_inline (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9B9FB07EC2C1D82E921C9316A4E0901C933BBF6C_gshared (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mE363888280B72ED50538416C060EF9FC94B3BB00_gshared (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mC5752F6FE57401634B963A5D15275D36D352FE4E_gshared (HashSet_1_t20C647F44B285CB7C061931B00ED43A230F311E5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mEBE349B78085D2B63A7C527798A43DD363717510_gshared (HashSet_1_t20C647F44B285CB7C061931B00ED43A230F311E5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m9EDA8049AAD42E344AE64B66843C7400A7332162_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m0F485B0073414C5DB3166F7FCB2C0BFA9517251E_gshared (HashSet_1_t20C647F44B285CB7C061931B00ED43A230F311E5 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m513B0E5967A777E63476A8264B759B2BA052E8DC_gshared (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB6A7105EE88A811F75E9529C0230DE29BC579C6A_gshared (Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22_gshared (Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m0DAE02CE9FA04B987D0923005FEF7565EB9FB52D_gshared (Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m5A9063753469889C97866CB39A30B7C391A41044_gshared (HashSet_1_t20C647F44B285CB7C061931B00ED43A230F311E5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m51DBCAAB77E596A4583902572958ADB0893E1A0E_gshared_inline (HashSet_1_t20C647F44B285CB7C061931B00ED43A230F311E5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m8C8EFA79A100F0EBAB3D0C34CE3E1DC3A41BA603_gshared (Dictionary_2_t6E5D415C5F12580B49EC33FB78F5B1A3537193F9 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Int32>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m2F9983B57813C9D03FD5764FECEB373ACD7013A2_gshared (Dictionary_2_t263DE5BBA10E31D93EC8805381ED7687AF2C3E64 * __this, uint8_t ___key0, int32_t* ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9E136275B47006BF3AF292107A931245ECD5E430_gshared (Dictionary_2_t263DE5BBA10E31D93EC8805381ED7687AF2C3E64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Int32>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m96BFA14ABECEA33D32B2CDF1669601F1F27C08DF_gshared (Dictionary_2_t263DE5BBA10E31D93EC8805381ED7687AF2C3E64 * __this, uint8_t ___key0, int32_t ___value1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::set_UserId(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AuthenticationValues_set_UserId_m3D9EE5F706F311197E729BD61E81A37CDC81DE8B_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::set_AuthPostData(System.Object)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthPostData_m4BB0A1F1BF32144A5AE42460E6DC676D40AD8061_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.String Photon.Chat.AuthenticationValues::get_AuthGetParameters()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_AuthGetParameters_m3E0298098E97E6C4EE98BEBD4C9180F4B2EFA2DC_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method);
// System.String System.Uri::EscapeDataString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_EscapeDataString_mE1095E7A694DF447B699676C651F5EA5D98A2925 (String_t* ___stringToEscape0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::set_AuthGetParameters(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthGetParameters_mA4168C7B93997D0957D5373984D60D58C3D763F2_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Photon.Chat.AuthenticationValues::get_UserId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_UserId_m240707AC145B84C517AA9251278E3A6AD3A3C9F6_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method);
// System.Object Photon.Chat.AuthenticationValues::get_Token()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * AuthenticationValues_get_Token_mC64BC0A1915CA6BC9F38E1B6FF3390ACB9FFF101_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method);
// Photon.Chat.CustomAuthenticationType Photon.Chat.AuthenticationValues::get_AuthType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t AuthenticationValues_get_AuthType_mCBBF19A8A2D5B91B99EB4E1A529888E883EEB137 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::set_AuthType(Photon.Chat.CustomAuthenticationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthType_mFF8089E6A86CA5A54EB9AED446F55077422B6D80 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Object Photon.Chat.AuthenticationValues::get_AuthPostData()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * AuthenticationValues_get_AuthPostData_mFF1BEF9E3C7A6F0C0AB2094957BE9657D8C9AC3F_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChannelCreationOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelCreationOptions__ctor_m81C207BB78F06CA880DDBE76D5B747ACD145194E (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
inline int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3 (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
inline void HashSet_1__ctor_m08DB7073F20A7ED4862EF5F753C736E060472AEE (HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 *, const RuntimeMethod*))HashSet_1__ctor_m45E64E05467ACD6F03EE6CD7F5F904574125C7C9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_mA348FA1140766465189459D25B01EB179001DE83 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138 (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void Photon.Chat.ChatChannel::set_LastMsgId(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatChannel_set_LastMsgId_mD7539C79B24056E2718FDD4DA4DED06AE641863C_inline (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::TruncateMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_TruncateMessages_m8BAAC468313ADAED4EC6C86B55EA068DE0A2268E (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m424850F752D45D547D948278FA4D9C60EA06F3DD (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984 (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m1A4A6EE07C08AC3E4066DD0547C4FC6AA87324E6 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m89425146ABCF46BE030B6C4B3C85A8559550F983_gshared)(__this, ___index0, ___count1, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m89425146ABCF46BE030B6C4B3C85A8559550F983 (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m89425146ABCF46BE030B6C4B3C85A8559550F983_gshared)(__this, ___index0, ___count1, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_mB886C990CD1F0558809236CF1D28C977A3558306 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
inline void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E (StringBuilder_t * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_inline (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
inline RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendLine_mA2F79A5F2CAA91B9F7917C0EB2B381357A395609 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
inline int32_t Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, const RuntimeMethod*))Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m2895EBB13AA7D9232058658A7DC404DC5F608923 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m2895EBB13AA7D9232058658A7DC404DC5F608923_gshared)(__this, ___capacity0, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
inline Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB  Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB  (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_inline (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  (*) (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB *, const RuntimeMethod*))Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
inline RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *, const RuntimeMethod*))KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
inline bool Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m9B9FB07EC2C1D82E921C9316A4E0901C933BBF6C (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB *, const RuntimeMethod*))Enumerator_MoveNext_m9B9FB07EC2C1D82E921C9316A4E0901C933BBF6C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
inline void Enumerator_Dispose_mE363888280B72ED50538416C060EF9FC94B3BB00 (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB *, const RuntimeMethod*))Enumerator_Dispose_mE363888280B72ED50538416C060EF9FC94B3BB00_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, RuntimeObject *, RuntimeObject **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Photon.Chat.ChatChannel::set_PublishSubscribers(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatChannel_set_PublishSubscribers_m3162B1905CF3F87749D06FD6B865836C37B9F24C_inline (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::set_MaxSubscribers(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatChannel_set_MaxSubscribers_mA3EF3E020422FFE128ADDCC8C0657D77AF353D62_inline (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(!0)
inline bool HashSet_1_Add_mD67974B4739A65BB7950DBB56C8B5CF83C01D4E9 (HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 *, String_t*, const RuntimeMethod*))HashSet_1_Add_mC5752F6FE57401634B963A5D15275D36D352FE4E_gshared)(__this, ___item0, method);
}
// Photon.Chat.ChatState Photon.Chat.ChatClient::get_State()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::get_HasPeer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_get_HasPeer_m0F8268A96258BC9856A223ACE894A1DBD2C2026B (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::get_CanChat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_get_CanChat_m303DEA407E43F29A30A67CF23FA9BF1D8CDC28F7 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mAB5703346A6A6369B91B8118882DE16CC17C10D2 (Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(!0)
inline bool HashSet_1_Contains_m5438C3AB78C9E97DAEE05557C9785D4FD71251E3 (HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 *, String_t*, const RuntimeMethod*))HashSet_1_Contains_mEBE349B78085D2B63A7C527798A43DD363717510_gshared)(__this, ___item0, method);
}
// Photon.Chat.AuthenticationValues Photon.Chat.ChatClient::get_AuthValues()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues__ctor_m32B8E2CA72D7C3EFAADBF65AD18B40C98CAAAB42 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_AuthValues(Photon.Chat.AuthenticationValues)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_AuthValues_mA9F19EDA73501C75C59D69C949B66953CE0B8EFE_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ___value0, const RuntimeMethod* method);
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::get_TransportProtocol()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t PhotonPeer_get_TransportProtocol_m767D7E412A9F27CD9689630891F5506575307C4E_inline (PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.PeerStateValue ExitGames.Client.Photon.PhotonPeer::get_PeerState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PhotonPeer_get_PeerState_m88FD264346AFB1D75762E4B2FF0385258EC3BB99 (PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TransportProtocol(ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PhotonPeer_set_TransportProtocol_m80F1A37AC3F8CA8715B4C94B5CCABA6F2212725B_inline (PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_State(Photon.Chat.ChatState)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_State_mB4F7447BD9819E2D8EE5E6F169A0AE7A0F49DC1E_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatPeer__ctor_m7134BB0AAC3428BA6A777A1493D52764B8F5DDCC (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, RuntimeObject* ___listener0, uint8_t ___protocol1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::set_SerializationProtocolType(ExitGames.Client.Photon.SerializationProtocol)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PhotonPeer_set_SerializationProtocolType_m02676498FE60666B33768152B5CA30C4F8FC6EFD_inline (PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::.ctor()
inline void Dictionary_2__ctor_mC710CD24666429D51CA2317DAB94817AAC9FA092 (Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void Photon.Chat.ChatClient::set_ChatRegion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_ChatRegion_mDFE542A6A3CE4AB4173A7E16079D14E5ECECEFCB (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_DebugOut(ExitGames.Client.Photon.DebugLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_DebugOut_m263D08A55593DC29D84E2CCF2A3A066E2B4823ED (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_TransportProtocol(ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_TransportProtocol_m964A4B1AF240459FC7314F7DEE1FAFE9D54D1AC6 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_EnableProtocolFallback(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_EnableProtocolFallback_mD96C363154CC46C3CF5AA432346DBC78EEFE474F_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatAppSettings::get_IsDefaultNameServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatAppSettings_get_IsDefaultNameServer_m4A795456A7054E72173FD85A45DD90AA55E8F951 (ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::Connect(System.String,System.String,Photon.Chat.AuthenticationValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Connect_m6A720637091E96EB0559F3BEAF85B0415BB0D376 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___appId0, String_t* ___appVersion1, AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ___authValues2, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_DisconnectedCause(Photon.Chat.ChatDisconnectCause)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_DisconnectedCause_m0726D082C1B2F8E366BAC950319DEA20CF09FFDB_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_AppId(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_AppId_m49B2AD5DFFCB3328EB95E1416DC4640BAC72847A_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_AppVersion(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_AppVersion_m7852C67700E10420F7E14D3BA0C4DC5E5E9781C8_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::set_QuickResendAttempts(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonPeer_set_QuickResendAttempts_mF1A6AF63A324442A7D3DDD07794D7071C50E8BDB (PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::Clear()
inline void Dictionary_2_Clear_m9350B48DE007190F546A199AA41BBC0B7DE68D59 (Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB *, const RuntimeMethod*))Dictionary_2_Clear_m9EDA8049AAD42E344AE64B66843C7400A7332162_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.String>::Clear()
inline void HashSet_1_Clear_m55ED25F18A656A9699E75E8DD895CF6AF871DF53 (HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 *, const RuntimeMethod*))HashSet_1_Clear_m0F485B0073414C5DB3166F7FCB2C0BFA9517251E_gshared)(__this, method);
}
// System.String Photon.Chat.ChatPeer::get_NameServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatPeer_get_NameServerAddress_mEC869AA34F11AD1F019EA0D6F7090A154DC0CAA7 (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_NameServerAddress(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_NameServerAddress_m7A3F9E28BE94D5DA80D7559F6A265DD2C86510E6_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatPeer::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatPeer_Connect_m57D6143BBC1FFA33E40820A96611D098C8E2C9C2 (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::get_UseBackgroundWorkerForSending()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ChatClient_get_UseBackgroundWorkerForSending_mA5A8EE30F7BB6048082C233967E2DA5D2CEE77E5_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m513B0E5967A777E63476A8264B759B2BA052E8DC (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m513B0E5967A777E63476A8264B759B2BA052E8DC_gshared)(__this, ___object0, ___method1, method);
}
// System.Byte ExitGames.Client.Photon.SupportClass::StartBackgroundCalls(System.Func`1<System.Boolean>,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SupportClass_StartBackgroundCalls_m97526EE667EC704A455FD13C141D62E21253A282 (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___myThread0, int32_t ___millisecondsInterval1, String_t* ___taskName2, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared)(__this, ___value0, method);
}
// System.Int32 System.Environment::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_m0A119BE4354EA90C82CC48E559588C987A79FE0C (const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m0391C33DF36612A52DE871DD0B1726EA62F99B2A (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___channels0, int32_t ___messagesFromHistory1, const RuntimeMethod* method);
// ExitGames.Client.Photon.DebugLevel Photon.Chat.ChatClient::get_DebugOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
inline void Dictionary_2__ctor_mB6A7105EE88A811F75E9529C0230DE29BC579C6A (Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 *, const RuntimeMethod*))Dictionary_2__ctor_mB6A7105EE88A811F75E9529C0230DE29BC579C6A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1)
inline void Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22 (Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 *, uint8_t, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Photon.Chat.ChatClient::SendChannelOperation(System.String[],System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendChannelOperation_m18D325052913A99B794CF2CC4B24D290344B97AF (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___channels0, uint8_t ___operation1, int32_t ___historyLength2, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::publishMessage(System.String,System.Object,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_publishMessage_m112332E73165EF56FF7ED01EEF1EED95C417077D (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___channelName0, RuntimeObject * ___message1, bool ___reliable2, bool ___forwardAsWebhook3, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SendOptions::set_Reliability(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOptions_set_Reliability_mC77446E8524CA786BE18E235B7857357F1EF12A0 (SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendPrivateMessage_m901045581F7DE5BAC226C52C9369184523EC5118 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___forwardAsWebhook3, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::sendPrivateMessage(System.String,System.Object,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_sendPrivateMessage_mCF7B7BD77EB7D22DFD1ED058A4235578551C0C02 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___reliable3, bool ___forwardAsWebhook4, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m0DAE02CE9FA04B987D0923005FEF7565EB9FB52D (Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 *, uint8_t, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_m0DAE02CE9FA04B987D0923005FEF7565EB9FB52D_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_mC9DBD5B31D8A48987B17A7E4C7A6D8CF6C299B85 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___status0, RuntimeObject * ___message1, bool ___skipMessage2, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.String Photon.Chat.ChatClient::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_UserId_m2572A1A6BB1413F845DED350093EAAFD6B518291 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m7EC41F88DF244877D026C2F83474F908A60E7091 (Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * __this, String_t* ___key0, ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB *, String_t*, ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, ___key0, ___value1, method);
}
// System.String Photon.Chat.ChatClient::GetPrivateChannelNameByUser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_GetPrivateChannelNameByUser_mF71560A0FA905208F34FCA6331BD19051A598F2E (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___userName0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::TryGetChannel(System.String,System.Boolean,Photon.Chat.ChatChannel&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_TryGetChannel_m1353AC1501810593E12AD94C6B40A9DCA4272E5D (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___channelName0, bool ___isPrivate1, ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** ___channel2, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleChatMessagesEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleChatMessagesEvent_mD1CC9854948A482BB52AD2D486BCB9092F904985 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandlePrivateMessageEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandlePrivateMessageEvent_m67E34A791863D6F6AA6D8A7F0BE55D4F1A51398B (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleStatusUpdate(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleStatusUpdate_m3A1743092197AD3987F204CE0CE8F3CA9DA36275 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleSubscribeEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleSubscribeEvent_mDA6A915E14078211D73AE270948D3CE2E80A26D6 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleUnsubscribeEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleUnsubscribeEvent_m399354AF8F49542D33F7D3B85664314CFCC382BB (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleUserSubscribedEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleUserSubscribedEvent_m071B21F5D69AF0F828261CD283AF1342BCBB368F (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleUserUnsubscribedEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleUserUnsubscribedEvent_m96BD07F4D888BF64F839E0E5D6FE90A46CAF4CDA (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleAuthResponse(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleAuthResponse_m30E8C187D97C3173D742B17F21C1D72DD410D7A9 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B * ___operationResponse0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.PhotonPeer::EstablishEncryption()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonPeer_EstablishEncryption_m8635FA2B26F476C22D3152B3734ADE787955AE5B (PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::TryAuthenticateOnNameServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_TryAuthenticateOnNameServer_m30CFD6A61727D21120AEC665856462326C7B526D (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::AuthenticateOnFrontEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_AuthenticateOnFrontEnd_mFA3F028897624959C21DBBEAFABC611E7D40D178 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.String Photon.Chat.ChatClient::get_AppId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppId_mA154B74C72A401D4A2569B9D1DBE815AC26AB8CC_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.String Photon.Chat.ChatClient::get_AppVersion()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppVersion_m325B5082717878BDB33E2AD0F338BA920984489B_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::ConnectToFrontEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_ConnectToFrontEnd_m11CB8643B389250359AC98B8B7D9E6405EA56B7C (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.StackTrace::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackTrace__ctor_mCF16893B6C5EEC13841370A064CFF74E9F54E997 (StackTrace_tD5D45826A379D8DF0CFB2CA206D992EE718C7E99 * __this, bool ___fNeedFileInfo0, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PhotonPeer::get_ServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_get_ServerAddress_mA78ED5E85749B747D7130E710A174555C134C6A3 (PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::set_Token(System.Object)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AuthenticationValues_set_Token_m3DC66AD2E8DE2C36870A4B143CFE817A518C079F_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::Disconnect(Photon.Chat.ChatDisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_Disconnect_m78C5220E4F2DA2FAEDFD0C75123D6E5B1376E984 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___cause0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::get_EnableProtocolFallback()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ChatClient_get_EnableProtocolFallback_mF139A8C5D666934E37DE8517738CB29DD3CD5789_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatPeer::AuthenticateOnNameServer(System.String,System.String,System.String,Photon.Chat.AuthenticationValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatPeer_AuthenticateOnNameServer_mEE9E9AC65A21D029BB21F0D3BFDDAFE0D79316BB (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, String_t* ___appId0, String_t* ___appVersion1, String_t* ___region2, AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ___authValues3, const RuntimeMethod* method);
// System.Object ExitGames.Client.Photon.ParameterDictionary::get_Item(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ParameterDictionary_get_Item_m1D37EB387177C5154937E23B8BEBF97FC1B72F71 (ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * __this, uint8_t ___key0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel__ctor_mA5DF33529980160873130ACB6B51CC8D3CF23C83 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::set_IsPrivate(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatChannel_set_IsPrivate_m1BA5274B9E487BB6284FDFBAFDF12C1074F86A28_inline (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::Add(!0,!1)
inline void Dictionary_2_Add_mB579D5185AC1EF2912F278C7DB76633544C91C5B (Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * __this, String_t* ___key0, ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB *, String_t*, ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Photon.Chat.ChatChannel::Add(System.String,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_Add_m27C5E5A559983353AB0D695A3A82056B23B6853E (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, String_t* ___sender0, RuntimeObject * ___message1, int32_t ___msgId2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::Add(System.String[],System.Object[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_Add_m40DB5A55A3C7DFD1195FBF16C50CBFBBECBA3DFA (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___senders0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___messages1, int32_t ___lastMsgId2, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.ParameterDictionary::TryGetValue(System.Byte,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterDictionary_TryGetValue_mFF3D9727D9763C52EC1784956D3F96A36F06819E (ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * __this, uint8_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::ReadChannelProperties(System.Collections.Generic.Dictionary`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_ReadChannelProperties_mE89FAD581BB56A388C0C11FF7387330711DF7A9D (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___newProperties0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatChannel::get_PublishSubscribers()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ChatChannel_get_PublishSubscribers_m95072AE75264032C94FBE71EA09F257C889B18EB_inline (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::AddSubscribers(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_AddSubscribers_m67F53F0F32C4061FB3870EE624D7481338F950EB (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___users0, const RuntimeMethod* method);
// System.Object ExitGames.Client.Photon.EventData::get_Item(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * EventData_get_Item_m0B6DECAC5E4E913E0B9C2229ABF41797A46E840C (EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * __this, uint8_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::Remove(!0)
inline bool Dictionary_2_Remove_m509D1AC38FEE4D43B0FEF56F2A19329F08EF3138 (Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Remove(!0)
inline bool HashSet_1_Remove_mE01EC306B6C73A065B00E9A954951FFAB6466DE4 (HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 *, String_t*, const RuntimeMethod*))HashSet_1_Remove_m5A9063753469889C97866CB39A30B7C391A41044_gshared)(__this, ___item0, method);
}
// System.String ExitGames.Client.Photon.OperationResponse::ToStringFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OperationResponse_ToStringFull_m3199D448BDD773C8652EF7E3C9ABF422D33FB5EE (OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.ParameterDictionary::ContainsKey(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterDictionary_ContainsKey_m7FF5DC8A8B0A97143B303A195EDBA8AFC634B4C4 (ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * __this, uint8_t ___key0, const RuntimeMethod* method);
// System.Object ExitGames.Client.Photon.OperationResponse::get_Item(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * OperationResponse_get_Item_m0129E7DF764B87113A443CEA9537478C4040D0BC (OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B * __this, uint8_t ___parameterCode0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_FrontendAddress(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_FrontendAddress_mF45D1E2D49E57DCCB99146E706C21245D972C4CC_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_UserId_m5499473A68F5A0ADD366380F3135D9FC32A9EC6D (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_gshared)(__this, method);
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_mB88272E0588B53E913EC3CED58A35D185FE50B0D (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___status0, RuntimeObject * ___message1, const RuntimeMethod* method);
// Photon.Chat.ChatDisconnectCause Photon.Chat.ChatClient::get_DisconnectedCause()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ChatClient_get_DisconnectedCause_m57D498FAFF15DE6D6ED299021BAD2EEE35B2EEFC_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.String Photon.Chat.ChatClient::get_FrontendAddress()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ChatClient_get_FrontendAddress_m847BEC17A9DDF9204AB4A1C860392DDD6BCB7F83_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Chat.ChatChannel::get_MaxSubscribers()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ChatChannel_get_MaxSubscribers_m7564E3A11AF219E2DECD04BB4A27BD5B3D2C8915_inline (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::get_Count()
inline int32_t HashSet_1_get_Count_m998F5D9C44774DB10586898A1EAACF986E205287_inline (HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 *, const RuntimeMethod*))HashSet_1_get_Count_m51DBCAAB77E596A4583902572958ADB0893E1A0E_gshared_inline)(__this, method);
}
// System.Int32 Photon.Chat.ChannelCreationOptions::get_MaxSubscribers()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ChannelCreationOptions_get_MaxSubscribers_m695771BA6E0451DEF5C00D270D95F218735DD6F0_inline (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChannelCreationOptions::get_PublishSubscribers()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ChannelCreationOptions_get_PublishSubscribers_m95B809EAFBB363FA01A7132CD7FA48D2200D85AC_inline (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
inline void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.String Photon.Chat.ChatPeer::GetNameServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatPeer_GetNameServerAddress_mEE174269D17B37F6B706229ADE9F5A070637A82A (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::get_UsedProtocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PhotonPeer_get_UsedProtocol_m4686906F6D5052926E68229C645155F0832628F6 (PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonPeer__ctor_m501CF8AB2D93EA3190BBE0F3DCFCBE5FC7A6AEE3 (PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B * __this, RuntimeObject* ___listener0, uint8_t ___protocolType1, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatPeer::ConfigUnitySockets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatPeer_ConfigUnitySockets_m3CA9CA2B2B41E6CC69775F1112F8BDF897F6C2B0 (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetType(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetType_m8A8A6481B24551476F2AF999A970AD705BA68C7A (String_t* ___typeName0, bool ___throwOnError1, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m27A02DCA079D7CF48A46435831EB0AD3BAC00CCC (Dictionary_2_tF9F37A139D3559F1151DDADAA520C7F397F42E41 * __this, uint8_t ___key0, Type_t * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF9F37A139D3559F1151DDADAA520C7F397F42E41 *, uint8_t, Type_t *, const RuntimeMethod*))Dictionary_2_set_Item_m8C8EFA79A100F0EBAB3D0C34CE3E1DC3A41BA603_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m23EFC611C71939B25F34AD6FB126FF0EBFAE216C (Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938 * __this, uint8_t ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938 *, uint8_t, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m2F9983B57813C9D03FD5764FECEB373ACD7013A2_gshared)(__this, ___key0, ___value1, method);
}
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::get_Listener()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* PhotonPeer_get_Listener_m887BECA64658F676E50480D559D3E133A62F159A_inline (PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m215F35137EDD190A037E2E9BDA3BF5DC056FD7C3 (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_IsEncryptionAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonPeer_get_IsEncryptionAvailable_mB1AD5EA055403463741C7B76F387DB022AD8B4A5 (PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m2458A69C9E49DB6994E10B4FB3FD42203CB427D4 (Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938 *, const RuntimeMethod*))Dictionary_2__ctor_m9E136275B47006BF3AF292107A931245ECD5E430_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::Add(!0,!1)
inline void Dictionary_2_Add_m280FAF69EDEDDB0A613884354301DB4467BCAB64 (Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938 * __this, uint8_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938 *, uint8_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_m96BFA14ABECEA33D32B2CDF1669601F1F27C08DF_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Photon.Chat.CustomAuthenticationType Photon.Chat.AuthenticationValues::get_AuthType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t AuthenticationValues_get_AuthType_mCBBF19A8A2D5B91B99EB4E1A529888E883EEB137 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0;
	{
		// get { return authType; }
		uint8_t L_0 = __this->get_authType_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return authType; }
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_AuthType(Photon.Chat.CustomAuthenticationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthType_mFF8089E6A86CA5A54EB9AED446F55077422B6D80 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// set { authType = value; }
		uint8_t L_0 = ___value0;
		__this->set_authType_0(L_0);
		// set { authType = value; }
		return;
	}
}
// System.String Photon.Chat.AuthenticationValues::get_AuthGetParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_AuthGetParameters_m3E0298098E97E6C4EE98BEBD4C9180F4B2EFA2DC (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	{
		// public string AuthGetParameters { get; set; }
		String_t* L_0 = __this->get_U3CAuthGetParametersU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_AuthGetParameters(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthGetParameters_mA4168C7B93997D0957D5373984D60D58C3D763F2 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AuthGetParameters { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAuthGetParametersU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Object Photon.Chat.AuthenticationValues::get_AuthPostData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AuthenticationValues_get_AuthPostData_mFF1BEF9E3C7A6F0C0AB2094957BE9657D8C9AC3F (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	{
		// public object AuthPostData { get; private set; }
		RuntimeObject * L_0 = __this->get_U3CAuthPostDataU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_AuthPostData(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthPostData_m4BB0A1F1BF32144A5AE42460E6DC676D40AD8061 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public object AuthPostData { get; private set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CAuthPostDataU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Object Photon.Chat.AuthenticationValues::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AuthenticationValues_get_Token_mC64BC0A1915CA6BC9F38E1B6FF3390ACB9FFF101 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	{
		// public object Token { get; protected internal set; }
		RuntimeObject * L_0 = __this->get_U3CTokenU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_Token(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_set_Token_m3DC66AD2E8DE2C36870A4B143CFE817A518C079F (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public object Token { get; protected internal set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CTokenU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String Photon.Chat.AuthenticationValues::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_UserId_m240707AC145B84C517AA9251278E3A6AD3A3C9F6 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	{
		// public string UserId { get; set; }
		String_t* L_0 = __this->get_U3CUserIdU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_set_UserId_m3D9EE5F706F311197E729BD61E81A37CDC81DE8B (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string UserId { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CUserIdU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues__ctor_m32B8E2CA72D7C3EFAADBF65AD18B40C98CAAAB42 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	{
		// private CustomAuthenticationType authType = CustomAuthenticationType.None;
		__this->set_authType_0(((int32_t)255));
		// public AuthenticationValues()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues__ctor_m9FA4C1E00AE7E91FF6517E36A4BA4F7778E927F9 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___userId0, const RuntimeMethod* method)
{
	{
		// private CustomAuthenticationType authType = CustomAuthenticationType.None;
		__this->set_authType_0(((int32_t)255));
		// public AuthenticationValues(string userId)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.UserId = userId;
		String_t* L_0 = ___userId0;
		AuthenticationValues_set_UserId_m3D9EE5F706F311197E729BD61E81A37CDC81DE8B_inline(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::SetAuthPostData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_SetAuthPostData_mA60C9ECF23D9E3634A3A207FCA348C0FEC4D758C (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___stringData0, const RuntimeMethod* method)
{
	AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * G_B2_0 = NULL;
	AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * G_B3_1 = NULL;
	{
		// this.AuthPostData = (string.IsNullOrEmpty(stringData)) ? null : stringData;
		String_t* L_0 = ___stringData0;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		String_t* L_2 = ___stringData0;
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_000e:
	{
		NullCheck(G_B3_1);
		AuthenticationValues_set_AuthPostData_m4BB0A1F1BF32144A5AE42460E6DC676D40AD8061_inline(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::SetAuthPostData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_SetAuthPostData_mC387DAA5F17257D62FFE26765EFD4AD8C88C988B (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___byteData0, const RuntimeMethod* method)
{
	{
		// this.AuthPostData = byteData;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___byteData0;
		AuthenticationValues_set_AuthPostData_m4BB0A1F1BF32144A5AE42460E6DC676D40AD8061_inline(__this, (RuntimeObject *)(RuntimeObject *)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::SetAuthPostData(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_SetAuthPostData_mB83B291DB94DB089DAC4F8D4FC64865E5EF0BF32 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___dictData0, const RuntimeMethod* method)
{
	{
		// this.AuthPostData = dictData;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = ___dictData0;
		AuthenticationValues_set_AuthPostData_m4BB0A1F1BF32144A5AE42460E6DC676D40AD8061_inline(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::AddAuthParameter(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues_AddAuthParameter_m5A2A8B1815CFD3CAE2A02CAC79DC38626DB0DA42 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthenticationValues_AddAuthParameter_m5A2A8B1815CFD3CAE2A02CAC79DC38626DB0DA42_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// string ampersand = string.IsNullOrEmpty(this.AuthGetParameters) ? "" : "&";
		String_t* L_0 = AuthenticationValues_get_AuthGetParameters_m3E0298098E97E6C4EE98BEBD4C9180F4B2EFA2DC_inline(__this, /*hidden argument*/NULL);
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		G_B3_0 = _stringLiteral7C4D33785DAA5C2370201FFA236B427AA37C9996;
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_001a:
	{
		V_0 = G_B3_0;
		// this.AuthGetParameters = string.Format("{0}{1}{2}={3}", this.AuthGetParameters, ampersand, System.Uri.EscapeDataString(key), System.Uri.EscapeDataString(value));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_2;
		String_t* L_4 = AuthenticationValues_get_AuthGetParameters_m3E0298098E97E6C4EE98BEBD4C9180F4B2EFA2DC_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_3;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_5;
		String_t* L_8 = ___key0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var);
		String_t* L_9 = Uri_EscapeDataString_mE1095E7A694DF447B699676C651F5EA5D98A2925(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = L_7;
		String_t* L_11 = ___value1;
		String_t* L_12 = Uri_EscapeDataString_mE1095E7A694DF447B699676C651F5EA5D98A2925(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		String_t* L_13 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteral9663A08052B2B050231926A22F7DC859D93D44FF, L_10, /*hidden argument*/NULL);
		AuthenticationValues_set_AuthGetParameters_mA4168C7B93997D0957D5373984D60D58C3D763F2_inline(__this, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Photon.Chat.AuthenticationValues::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthenticationValues_ToString_m61B34D3505FB9B8829ADCE870C0C56AA91919C87 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthenticationValues_ToString_m61B34D3505FB9B8829ADCE870C0C56AA91919C87_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Format("AuthenticationValues Type: {3} UserId: {0}, GetParameters: {1} Token available: {2}", this.UserId, this.AuthGetParameters, this.Token != null, this.AuthType);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = AuthenticationValues_get_UserId_m240707AC145B84C517AA9251278E3A6AD3A3C9F6_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		String_t* L_4 = AuthenticationValues_get_AuthGetParameters_m3E0298098E97E6C4EE98BEBD4C9180F4B2EFA2DC_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_3;
		RuntimeObject * L_6 = AuthenticationValues_get_Token_mC64BC0A1915CA6BC9F38E1B6FF3390ACB9FFF101_inline(__this, /*hidden argument*/NULL);
		bool L_7 = ((bool)((!(((RuntimeObject*)(RuntimeObject *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0));
		RuntimeObject * L_8 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_5;
		uint8_t L_10 = AuthenticationValues_get_AuthType_mCBBF19A8A2D5B91B99EB4E1A529888E883EEB137(__this, /*hidden argument*/NULL);
		uint8_t L_11 = L_10;
		RuntimeObject * L_12 = Box(CustomAuthenticationType_t064351BB19FC77634577630CE69F3541F420CAB8_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		String_t* L_13 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteralBBF931E13EB6B570C5B5C36D816187F0398D40EA, L_9, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_0045;
	}

IL_0045:
	{
		// }
		String_t* L_14 = V_0;
		return L_14;
	}
}
// Photon.Chat.AuthenticationValues Photon.Chat.AuthenticationValues::CopyTo(Photon.Chat.AuthenticationValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * AuthenticationValues_CopyTo_m836F1A5F0FF4E6A5B2C17897ECDCE0FFEF6777B1 (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ___copy0, const RuntimeMethod* method)
{
	AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * V_0 = NULL;
	{
		// copy.AuthType = this.AuthType;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_0 = ___copy0;
		uint8_t L_1 = AuthenticationValues_get_AuthType_mCBBF19A8A2D5B91B99EB4E1A529888E883EEB137(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		AuthenticationValues_set_AuthType_mFF8089E6A86CA5A54EB9AED446F55077422B6D80(L_0, L_1, /*hidden argument*/NULL);
		// copy.AuthGetParameters = this.AuthGetParameters;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_2 = ___copy0;
		String_t* L_3 = AuthenticationValues_get_AuthGetParameters_m3E0298098E97E6C4EE98BEBD4C9180F4B2EFA2DC_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		AuthenticationValues_set_AuthGetParameters_mA4168C7B93997D0957D5373984D60D58C3D763F2_inline(L_2, L_3, /*hidden argument*/NULL);
		// copy.AuthPostData = this.AuthPostData;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_4 = ___copy0;
		RuntimeObject * L_5 = AuthenticationValues_get_AuthPostData_mFF1BEF9E3C7A6F0C0AB2094957BE9657D8C9AC3F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		AuthenticationValues_set_AuthPostData_m4BB0A1F1BF32144A5AE42460E6DC676D40AD8061_inline(L_4, L_5, /*hidden argument*/NULL);
		// copy.UserId = this.UserId;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_6 = ___copy0;
		String_t* L_7 = AuthenticationValues_get_UserId_m240707AC145B84C517AA9251278E3A6AD3A3C9F6_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		AuthenticationValues_set_UserId_m3D9EE5F706F311197E729BD61E81A37CDC81DE8B_inline(L_6, L_7, /*hidden argument*/NULL);
		// return copy;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_8 = ___copy0;
		V_0 = L_8;
		goto IL_0039;
	}

IL_0039:
	{
		// }
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Photon.Chat.ChannelCreationOptions::get_PublishSubscribers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChannelCreationOptions_get_PublishSubscribers_m95B809EAFBB363FA01A7132CD7FA48D2200D85AC (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; set; }
		bool L_0 = __this->get_U3CPublishSubscribersU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Photon.Chat.ChannelCreationOptions::set_PublishSubscribers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelCreationOptions_set_PublishSubscribers_m5A86AB97EE0743192DF387D96C8D954E8E872351 (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CPublishSubscribersU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 Photon.Chat.ChannelCreationOptions::get_MaxSubscribers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChannelCreationOptions_get_MaxSubscribers_m695771BA6E0451DEF5C00D270D95F218735DD6F0 (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; set; }
		int32_t L_0 = __this->get_U3CMaxSubscribersU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Photon.Chat.ChannelCreationOptions::set_MaxSubscribers(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelCreationOptions_set_MaxSubscribers_m93B6C3596A984DBD6FBB4EB89920062DC90FD0B8 (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CMaxSubscribersU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Photon.Chat.ChannelCreationOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelCreationOptions__ctor_m81C207BB78F06CA880DDBE76D5B747ACD145194E (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Chat.ChannelCreationOptions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelCreationOptions__cctor_m0C802A2ED726B657BA62EAF7DD1717C77A42A6F4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChannelCreationOptions__cctor_m0C802A2ED726B657BA62EAF7DD1717C77A42A6F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ChannelCreationOptions Default = new ChannelCreationOptions();
		ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * L_0 = (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D *)il2cpp_codegen_object_new(ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D_il2cpp_TypeInfo_var);
		ChannelCreationOptions__ctor_m81C207BB78F06CA880DDBE76D5B747ACD145194E(L_0, /*hidden argument*/NULL);
		((ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D_StaticFields*)il2cpp_codegen_static_fields_for(ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D_il2cpp_TypeInfo_var))->set_Default_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.ChannelWellKnownProperties::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelWellKnownProperties__ctor_mACCE1BE31AABEB657F01B5401D95FC370D674F80 (ChannelWellKnownProperties_t885B8C39E6ADD0DADB0DAF772E2D7525AD057508 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Photon.Chat.ChatAppSettings::get_IsDefaultNameServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatAppSettings_get_IsDefaultNameServer_m4A795456A7054E72173FD85A45DD90AA55E8F951 (ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool IsDefaultNameServer { get { return string.IsNullOrEmpty(this.Server); } }
		String_t* L_0 = __this->get_Server_3();
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public bool IsDefaultNameServer { get { return string.IsNullOrEmpty(this.Server); } }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.String Photon.Chat.ChatAppSettings::get_AppId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatAppSettings_get_AppId_m9EE0A349552230CA64ED7981F60BC5CE74861220 (ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// get { return this.AppIdChat; }
		String_t* L_0 = __this->get_AppIdChat_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.AppIdChat; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Chat.ChatAppSettings::set_AppId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatAppSettings_set_AppId_mD47D49C033758CA9C10E6EF046363F565A6C7446 (ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { this.AppIdChat = value; }
		String_t* L_0 = ___value0;
		__this->set_AppIdChat_0(L_0);
		// set { this.AppIdChat = value; }
		return;
	}
}
// System.Void Photon.Chat.ChatAppSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatAppSettings__ctor_m64B52A3D821EE903147267E65AED93C738853397 (ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * __this, const RuntimeMethod* method)
{
	{
		// public ConnectionProtocol Protocol = ConnectionProtocol.Udp;
		__this->set_Protocol_5(0);
		// public bool EnableProtocolFallback = true;
		__this->set_EnableProtocolFallback_6((bool)1);
		// public DebugLevel NetworkLogging = DebugLevel.ERROR;
		__this->set_NetworkLogging_7(1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Photon.Chat.ChatChannel::get_IsPrivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatChannel_get_IsPrivate_mF3161AC27D69E4594D632BE0C37D2010A5E3FA2D (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsPrivate { get; protected internal set; }
		bool L_0 = __this->get_U3CIsPrivateU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatChannel::set_IsPrivate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_set_IsPrivate_m1BA5274B9E487BB6284FDFBAFDF12C1074F86A28 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsPrivate { get; protected internal set; }
		bool L_0 = ___value0;
		__this->set_U3CIsPrivateU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Int32 Photon.Chat.ChatChannel::get_MessageCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChatChannel_get_MessageCount_m55833104CB82ADCAE20517D318E130365D54C835 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_get_MessageCount_m55833104CB82ADCAE20517D318E130365D54C835_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public int MessageCount { get { return this.Messages.Count; } }
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = __this->get_Messages_2();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_inline(L_0, /*hidden argument*/List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public int MessageCount { get { return this.Messages.Count; } }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Photon.Chat.ChatChannel::get_LastMsgId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChatChannel_get_LastMsgId_mB439D932AC09AFD3712CFDCBF5B83585E7957892 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	{
		// public int LastMsgId { get; protected set; }
		int32_t L_0 = __this->get_U3CLastMsgIdU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatChannel::set_LastMsgId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_set_LastMsgId_mD7539C79B24056E2718FDD4DA4DED06AE641863C (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int LastMsgId { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CLastMsgIdU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Boolean Photon.Chat.ChatChannel::get_PublishSubscribers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatChannel_get_PublishSubscribers_m95072AE75264032C94FBE71EA09F257C889B18EB (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; protected set; }
		bool L_0 = __this->get_U3CPublishSubscribersU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatChannel::set_PublishSubscribers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_set_PublishSubscribers_m3162B1905CF3F87749D06FD6B865836C37B9F24C (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CPublishSubscribersU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Int32 Photon.Chat.ChatChannel::get_MaxSubscribers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChatChannel_get_MaxSubscribers_m7564E3A11AF219E2DECD04BB4A27BD5B3D2C8915 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; protected set; }
		int32_t L_0 = __this->get_U3CMaxSubscribersU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatChannel::set_MaxSubscribers(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_set_MaxSubscribers_mA3EF3E020422FFE128ADDCC8C0657D77AF353D62 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CMaxSubscribersU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel__ctor_mA5DF33529980160873130ACB6B51CC8D3CF23C83 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel__ctor_mA5DF33529980160873130ACB6B51CC8D3CF23C83_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly List<string> Senders = new List<string>();
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_0, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
		__this->set_Senders_1(L_0);
		// public readonly List<object> Messages = new List<object>();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_il2cpp_TypeInfo_var);
		List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3(L_1, /*hidden argument*/List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_RuntimeMethod_var);
		__this->set_Messages_2(L_1);
		// public readonly HashSet<string> Subscribers = new HashSet<string>();
		HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * L_2 = (HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 *)il2cpp_codegen_object_new(HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m08DB7073F20A7ED4862EF5F753C736E060472AEE(L_2, /*hidden argument*/HashSet_1__ctor_m08DB7073F20A7ED4862EF5F753C736E060472AEE_RuntimeMethod_var);
		__this->set_Subscribers_10(L_2);
		// public ChatChannel(string name)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.Name = name;
		String_t* L_3 = ___name0;
		__this->set_Name_0(L_3);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::Add(System.String,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_Add_m27C5E5A559983353AB0D695A3A82056B23B6853E (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, String_t* ___sender0, RuntimeObject * ___message1, int32_t ___msgId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_Add_m27C5E5A559983353AB0D695A3A82056B23B6853E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Senders.Add(sender);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = __this->get_Senders_1();
		String_t* L_1 = ___sender0;
		NullCheck(L_0);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_0, L_1, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		// this.Messages.Add(message);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = __this->get_Messages_2();
		RuntimeObject * L_3 = ___message1;
		NullCheck(L_2);
		List_1_Add_m6930161974C7504C80F52EC379EF012387D43138(L_2, L_3, /*hidden argument*/List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_RuntimeMethod_var);
		// this.LastMsgId = msgId;
		int32_t L_4 = ___msgId2;
		ChatChannel_set_LastMsgId_mD7539C79B24056E2718FDD4DA4DED06AE641863C_inline(__this, L_4, /*hidden argument*/NULL);
		// this.TruncateMessages();
		ChatChannel_TruncateMessages_m8BAAC468313ADAED4EC6C86B55EA068DE0A2268E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::Add(System.String[],System.Object[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_Add_m40DB5A55A3C7DFD1195FBF16C50CBFBBECBA3DFA (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___senders0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___messages1, int32_t ___lastMsgId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_Add_m40DB5A55A3C7DFD1195FBF16C50CBFBBECBA3DFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Senders.AddRange(senders);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = __this->get_Senders_1();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = ___senders0;
		NullCheck(L_0);
		List_1_AddRange_m424850F752D45D547D948278FA4D9C60EA06F3DD(L_0, (RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/List_1_AddRange_m424850F752D45D547D948278FA4D9C60EA06F3DD_RuntimeMethod_var);
		// this.Messages.AddRange(messages);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = __this->get_Messages_2();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___messages1;
		NullCheck(L_2);
		List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984(L_2, (RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_RuntimeMethod_var);
		// this.LastMsgId = lastMsgId;
		int32_t L_4 = ___lastMsgId2;
		ChatChannel_set_LastMsgId_mD7539C79B24056E2718FDD4DA4DED06AE641863C_inline(__this, L_4, /*hidden argument*/NULL);
		// this.TruncateMessages();
		ChatChannel_TruncateMessages_m8BAAC468313ADAED4EC6C86B55EA068DE0A2268E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::TruncateMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_TruncateMessages_m8BAAC468313ADAED4EC6C86B55EA068DE0A2268E (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_TruncateMessages_m8BAAC468313ADAED4EC6C86B55EA068DE0A2268E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (this.MessageLimit <= 0 || this.Messages.Count <= this.MessageLimit)
		int32_t L_0 = __this->get_MessageLimit_3();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = __this->get_Messages_2();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_inline(L_1, /*hidden argument*/List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_RuntimeMethod_var);
		int32_t L_3 = __this->get_MessageLimit_3();
		G_B3_0 = ((((int32_t)((((int32_t)L_2) > ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 1;
	}

IL_0023:
	{
		V_1 = (bool)G_B3_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// return;
		goto IL_0059;
	}

IL_002a:
	{
		// int excessCount = this.Messages.Count - this.MessageLimit;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_5 = __this->get_Messages_2();
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_inline(L_5, /*hidden argument*/List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_RuntimeMethod_var);
		int32_t L_7 = __this->get_MessageLimit_3();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7));
		// this.Senders.RemoveRange(0, excessCount);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_8 = __this->get_Senders_1();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		List_1_RemoveRange_m1A4A6EE07C08AC3E4066DD0547C4FC6AA87324E6(L_8, 0, L_9, /*hidden argument*/List_1_RemoveRange_m1A4A6EE07C08AC3E4066DD0547C4FC6AA87324E6_RuntimeMethod_var);
		// this.Messages.RemoveRange(0, excessCount);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_10 = __this->get_Messages_2();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		List_1_RemoveRange_m89425146ABCF46BE030B6C4B3C85A8559550F983(L_10, 0, L_11, /*hidden argument*/List_1_RemoveRange_m89425146ABCF46BE030B6C4B3C85A8559550F983_RuntimeMethod_var);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::ClearMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_ClearMessages_m9EF1467E2BD5CB8CAE4DC2FFFAEF551327661E55 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_ClearMessages_m9EF1467E2BD5CB8CAE4DC2FFFAEF551327661E55_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Senders.Clear();
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = __this->get_Senders_1();
		NullCheck(L_0);
		List_1_Clear_mB886C990CD1F0558809236CF1D28C977A3558306(L_0, /*hidden argument*/List_1_Clear_mB886C990CD1F0558809236CF1D28C977A3558306_RuntimeMethod_var);
		// this.Messages.Clear();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = __this->get_Messages_2();
		NullCheck(L_1);
		List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC(L_1, /*hidden argument*/List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.String Photon.Chat.ChatChannel::ToStringMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatChannel_ToStringMessages_m72F03F0CBA803F8A6BA13C02D981EB23506B06B1 (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_ToStringMessages_m72F03F0CBA803F8A6BA13C02D981EB23506B06B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		// StringBuilder txt = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// for (int i = 0; i < this.Messages.Count; i++)
		V_1 = 0;
		goto IL_003a;
	}

IL_000b:
	{
		// txt.AppendLine(string.Format("{0}: {1}", this.Senders[i], this.Messages[i]));
		StringBuilder_t * L_1 = V_0;
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_2 = __this->get_Senders_1();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		String_t* L_4 = List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_RuntimeMethod_var);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_5 = __this->get_Messages_2();
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject * L_7 = List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_RuntimeMethod_var);
		String_t* L_8 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral4D3C418A83DE54D710758569DF3FF8391356AFB7, L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_AppendLine_mA2F79A5F2CAA91B9F7917C0EB2B381357A395609(L_1, L_8, /*hidden argument*/NULL);
		// for (int i = 0; i < this.Messages.Count; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_003a:
	{
		// for (int i = 0; i < this.Messages.Count; i++)
		int32_t L_10 = V_1;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_11 = __this->get_Messages_2();
		NullCheck(L_11);
		int32_t L_12 = List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_inline(L_11, /*hidden argument*/List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_10) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_000b;
		}
	}
	{
		// return txt.ToString();
		StringBuilder_t * L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		V_3 = L_15;
		goto IL_0055;
	}

IL_0055:
	{
		// }
		String_t* L_16 = V_3;
		return L_16;
	}
}
// System.Void Photon.Chat.ChatChannel::ReadChannelProperties(System.Collections.Generic.Dictionary`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_ReadChannelProperties_mE89FAD581BB56A388C0C11FF7387330711DF7A9D (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___newProperties0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_ReadChannelProperties_mE89FAD581BB56A388C0C11FF7387330711DF7A9D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB  V_3;
	memset((&V_3), 0, sizeof(V_3));
	KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B3_0 = 0;
	{
		// if (newProperties != null && newProperties.Count > 0)
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_0 = ___newProperties0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_1 = ___newProperties0;
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6(L_1, /*hidden argument*/Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0103;
		}
	}
	{
		// if (this.properties == null)
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_4 = __this->get_properties_7();
		V_2 = (bool)((((RuntimeObject*)(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// this.properties = new Dictionary<object, object>(newProperties.Count);
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_6 = ___newProperties0;
		NullCheck(L_6);
		int32_t L_7 = Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6(L_6, /*hidden argument*/Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_RuntimeMethod_var);
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_8 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)il2cpp_codegen_object_new(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2895EBB13AA7D9232058658A7DC404DC5F608923(L_8, L_7, /*hidden argument*/Dictionary_2__ctor_m2895EBB13AA7D9232058658A7DC404DC5F608923_RuntimeMethod_var);
		__this->set_properties_7(L_8);
	}

IL_0038:
	{
		// foreach (var pair in newProperties)
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_9 = ___newProperties0;
		NullCheck(L_9);
		Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB  L_10 = Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053(L_9, /*hidden argument*/Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053_RuntimeMethod_var);
		V_3 = L_10;
	}

IL_0040:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0090;
		}

IL_0042:
		{
			// foreach (var pair in newProperties)
			KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_11 = Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_inline((Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB *)(&V_3), /*hidden argument*/Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_RuntimeMethod_var);
			V_4 = L_11;
			// if (pair.Value == null)
			RuntimeObject * L_12 = KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_inline((KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_RuntimeMethod_var);
			V_5 = (bool)((((RuntimeObject*)(RuntimeObject *)L_12) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_13 = V_5;
			if (!L_13)
			{
				goto IL_0073;
			}
		}

IL_005c:
		{
			// this.properties.Remove(pair.Key);
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_14 = __this->get_properties_7();
			RuntimeObject * L_15 = KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_inline((KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_RuntimeMethod_var);
			NullCheck(L_14);
			Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60(L_14, L_15, /*hidden argument*/Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_RuntimeMethod_var);
			goto IL_008f;
		}

IL_0073:
		{
			// this.properties[pair.Key] = pair.Value;
			Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_16 = __this->get_properties_7();
			RuntimeObject * L_17 = KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_inline((KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_RuntimeMethod_var);
			RuntimeObject * L_18 = KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_inline((KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(&V_4), /*hidden argument*/KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_RuntimeMethod_var);
			NullCheck(L_16);
			Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93(L_16, L_17, L_18, /*hidden argument*/Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_RuntimeMethod_var);
		}

IL_008f:
		{
		}

IL_0090:
		{
			// foreach (var pair in newProperties)
			bool L_19 = Enumerator_MoveNext_m9B9FB07EC2C1D82E921C9316A4E0901C933BBF6C((Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m9B9FB07EC2C1D82E921C9316A4E0901C933BBF6C_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_0042;
			}
		}

IL_0099:
		{
			IL2CPP_LEAVE(0xAA, FINALLY_009b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009b;
	}

FINALLY_009b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mE363888280B72ED50538416C060EF9FC94B3BB00((Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB *)(&V_3), /*hidden argument*/Enumerator_Dispose_mE363888280B72ED50538416C060EF9FC94B3BB00_RuntimeMethod_var);
		IL2CPP_END_FINALLY(155)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(155)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAA, IL_00aa)
	}

IL_00aa:
	{
		// if (this.properties.TryGetValue(ChannelWellKnownProperties.PublishSubscribers, out temp))
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_20 = __this->get_properties_7();
		uint8_t L_21 = ((uint8_t)((int32_t)254));
		RuntimeObject * L_22 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_20);
		bool L_23 = Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3(L_20, L_22, (RuntimeObject **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_RuntimeMethod_var);
		V_6 = L_23;
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_00d6;
		}
	}
	{
		// this.PublishSubscribers = (bool)temp;
		RuntimeObject * L_25 = V_1;
		ChatChannel_set_PublishSubscribers_m3162B1905CF3F87749D06FD6B865836C37B9F24C_inline(__this, ((*(bool*)((bool*)UnBox(L_25, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_00d6:
	{
		// if (this.properties.TryGetValue(ChannelWellKnownProperties.MaxSubscribers, out temp))
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_26 = __this->get_properties_7();
		uint8_t L_27 = ((uint8_t)((int32_t)255));
		RuntimeObject * L_28 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_26);
		bool L_29 = Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3(L_26, L_28, (RuntimeObject **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_RuntimeMethod_var);
		V_7 = L_29;
		bool L_30 = V_7;
		if (!L_30)
		{
			goto IL_0102;
		}
	}
	{
		// this.MaxSubscribers = (int)temp;
		RuntimeObject * L_31 = V_1;
		ChatChannel_set_MaxSubscribers_mA3EF3E020422FFE128ADDCC8C0657D77AF353D62_inline(__this, ((*(int32_t*)((int32_t*)UnBox(L_31, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_0102:
	{
	}

IL_0103:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::AddSubscribers(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_AddSubscribers_m67F53F0F32C4061FB3870EE624D7481338F950EB (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___users0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_AddSubscribers_m67F53F0F32C4061FB3870EE624D7481338F950EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// if (users == null)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = ___users0;
		V_0 = (bool)((((RuntimeObject*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return;
		goto IL_002f;
	}

IL_000c:
	{
		// for (int i = 0; i < users.Length; i++)
		V_1 = 0;
		goto IL_0025;
	}

IL_0010:
	{
		// this.Subscribers.Add(users[i]);
		HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * L_2 = __this->get_Subscribers_10();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = ___users0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		HashSet_1_Add_mD67974B4739A65BB7950DBB56C8B5CF83C01D4E9(L_2, L_6, /*hidden argument*/HashSet_1_Add_mD67974B4739A65BB7950DBB56C8B5CF83C01D4E9_RuntimeMethod_var);
		// for (int i = 0; i < users.Length; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0025:
	{
		// for (int i = 0; i < users.Length; i++)
		int32_t L_8 = V_1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = ___users0;
		NullCheck(L_9);
		V_2 = (bool)((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))? 1 : 0);
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_0010;
		}
	}

IL_002f:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Photon.Chat.ChatClient::get_EnableProtocolFallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_get_EnableProtocolFallback_mF139A8C5D666934E37DE8517738CB29DD3CD5789 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public bool EnableProtocolFallback { get; set; }
		bool L_0 = __this->get_U3CEnableProtocolFallbackU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_EnableProtocolFallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_EnableProtocolFallback_mD96C363154CC46C3CF5AA432346DBC78EEFE474F (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool EnableProtocolFallback { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CEnableProtocolFallbackU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_NameServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_NameServerAddress_m27512FE5315C5872B2215EFFC468BF354EB6896D (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public string NameServerAddress { get; private set; }
		String_t* L_0 = __this->get_U3CNameServerAddressU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_NameServerAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_NameServerAddress_m7A3F9E28BE94D5DA80D7559F6A265DD2C86510E6 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string NameServerAddress { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameServerAddressU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_FrontendAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_FrontendAddress_m847BEC17A9DDF9204AB4A1C860392DDD6BCB7F83 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public string FrontendAddress { get; private set; }
		String_t* L_0 = __this->get_U3CFrontendAddressU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_FrontendAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_FrontendAddress_mF45D1E2D49E57DCCB99146E706C21245D972C4CC (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string FrontendAddress { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CFrontendAddressU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_ChatRegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_ChatRegion_mBDD657C571E8583799BF73FA271B82BE6D06F2D9 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// get { return this.chatRegion; }
		String_t* L_0 = __this->get_chatRegion_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.chatRegion; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Chat.ChatClient::set_ChatRegion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_ChatRegion_mDFE542A6A3CE4AB4173A7E16079D14E5ECECEFCB (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { this.chatRegion = value; }
		String_t* L_0 = ___value0;
		__this->set_chatRegion_6(L_0);
		// set { this.chatRegion = value; }
		return;
	}
}
// Photon.Chat.ChatState Photon.Chat.ChatClient::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public ChatState State { get; private set; }
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_State(Photon.Chat.ChatState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_State_mB4F7447BD9819E2D8EE5E6F169A0AE7A0F49DC1E (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ChatState State { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_7(L_0);
		return;
	}
}
// Photon.Chat.ChatDisconnectCause Photon.Chat.ChatClient::get_DisconnectedCause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChatClient_get_DisconnectedCause_m57D498FAFF15DE6D6ED299021BAD2EEE35B2EEFC (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public ChatDisconnectCause DisconnectedCause { get; private set; }
		int32_t L_0 = __this->get_U3CDisconnectedCauseU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_DisconnectedCause(Photon.Chat.ChatDisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_DisconnectedCause_m0726D082C1B2F8E366BAC950319DEA20CF09FFDB (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ChatDisconnectCause DisconnectedCause { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CDisconnectedCauseU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::get_CanChat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_get_CanChat_m303DEA407E43F29A30A67CF23FA9BF1D8CDC28F7 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// get { return this.State == ChatState.ConnectedToFrontEnd && this.HasPeer; }
		int32_t L_0 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)7))))
		{
			goto IL_0012;
		}
	}
	{
		bool L_1 = ChatClient_get_HasPeer_m0F8268A96258BC9856A223ACE894A1DBD2C2026B(__this, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0016;
	}

IL_0016:
	{
		// get { return this.State == ChatState.ConnectedToFrontEnd && this.HasPeer; }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Photon.Chat.ChatClient::CanChatInChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_CanChatInChannel_m056F9E3199627DC00B9D30327069029F5601CF1C (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___channelName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_CanChatInChannel_m056F9E3199627DC00B9D30327069029F5601CF1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		// return this.CanChat && this.PublicChannels.ContainsKey(channelName) && !this.PublicChannelsUnsubscribing.Contains(channelName);
		bool L_0 = ChatClient_get_CanChat_m303DEA407E43F29A30A67CF23FA9BF1D8CDC28F7(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * L_1 = __this->get_PublicChannels_14();
		String_t* L_2 = ___channelName0;
		NullCheck(L_1);
		bool L_3 = Dictionary_2_ContainsKey_mAB5703346A6A6369B91B8118882DE16CC17C10D2(L_1, L_2, /*hidden argument*/Dictionary_2_ContainsKey_mAB5703346A6A6369B91B8118882DE16CC17C10D2_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * L_4 = __this->get_PublicChannelsUnsubscribing_16();
		String_t* L_5 = ___channelName0;
		NullCheck(L_4);
		bool L_6 = HashSet_1_Contains_m5438C3AB78C9E97DAEE05557C9785D4FD71251E3(L_4, L_5, /*hidden argument*/HashSet_1_Contains_m5438C3AB78C9E97DAEE05557C9785D4FD71251E3_RuntimeMethod_var);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_0029;
	}

IL_0028:
	{
		G_B4_0 = 0;
	}

IL_0029:
	{
		V_0 = (bool)G_B4_0;
		goto IL_002c;
	}

IL_002c:
	{
		// }
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Boolean Photon.Chat.ChatClient::get_HasPeer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_get_HasPeer_m0F8268A96258BC9856A223ACE894A1DBD2C2026B (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return this.chatPeer != null; }
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_0 = __this->get_chatPeer_18();
		V_0 = (bool)((!(((RuntimeObject*)(ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// get { return this.chatPeer != null; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.String Photon.Chat.ChatClient::get_AppVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppVersion_m325B5082717878BDB33E2AD0F338BA920984489B (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public string AppVersion { get; private set; }
		String_t* L_0 = __this->get_U3CAppVersionU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_AppVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_AppVersion_m7852C67700E10420F7E14D3BA0C4DC5E5E9781C8 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AppVersion { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAppVersionU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_AppId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppId_mA154B74C72A401D4A2569B9D1DBE815AC26AB8CC (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public string AppId { get; private set; }
		String_t* L_0 = __this->get_U3CAppIdU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_AppId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_AppId_m49B2AD5DFFCB3328EB95E1416DC4640BAC72847A (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AppId { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAppIdU3Ek__BackingField_10(L_0);
		return;
	}
}
// Photon.Chat.AuthenticationValues Photon.Chat.ChatClient::get_AuthValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_0 = __this->get_U3CAuthValuesU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_AuthValues(Photon.Chat.AuthenticationValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_AuthValues_mA9F19EDA73501C75C59D69C949B66953CE0B8EFE (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ___value0, const RuntimeMethod* method)
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_0 = ___value0;
		__this->set_U3CAuthValuesU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_get_UserId_m2572A1A6BB1413F845DED350093EAAFD6B518291 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// return (this.AuthValues != null) ? this.AuthValues.UserId : null;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_0 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0017;
	}

IL_000c:
	{
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_1 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = AuthenticationValues_get_UserId_m240707AC145B84C517AA9251278E3A6AD3A3C9F6_inline(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void Photon.Chat.ChatClient::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_UserId_m5499473A68F5A0ADD366380F3135D9FC32A9EC6D (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_set_UserId_m5499473A68F5A0ADD366380F3135D9FC32A9EC6D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (this.AuthValues == null)
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_0 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// this.AuthValues = new AuthenticationValues();
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_2 = (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 *)il2cpp_codegen_object_new(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78_il2cpp_TypeInfo_var);
		AuthenticationValues__ctor_m32B8E2CA72D7C3EFAADBF65AD18B40C98CAAAB42(L_2, /*hidden argument*/NULL);
		ChatClient_set_AuthValues_mA9F19EDA73501C75C59D69C949B66953CE0B8EFE_inline(__this, L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// this.AuthValues.UserId = value;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_3 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline(__this, /*hidden argument*/NULL);
		String_t* L_4 = ___value0;
		NullCheck(L_3);
		AuthenticationValues_set_UserId_m3D9EE5F706F311197E729BD61E81A37CDC81DE8B_inline(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::get_UseBackgroundWorkerForSending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_get_UseBackgroundWorkerForSending_mA5A8EE30F7BB6048082C233967E2DA5D2CEE77E5 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public bool UseBackgroundWorkerForSending { get; set; }
		bool L_0 = __this->get_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_25();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_UseBackgroundWorkerForSending(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_UseBackgroundWorkerForSending_mFC84C720BB9E2EFC7780214093D51CBB9765A53F (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UseBackgroundWorkerForSending { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_25(L_0);
		return;
	}
}
// ExitGames.Client.Photon.ConnectionProtocol Photon.Chat.ChatClient::get_TransportProtocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ChatClient_get_TransportProtocol_mBE8BFDA263854AA7302D9913C4667F53105E2FBD (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0;
	{
		// get { return this.chatPeer.TransportProtocol; }
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_0 = __this->get_chatPeer_18();
		NullCheck(L_0);
		uint8_t L_1 = PhotonPeer_get_TransportProtocol_m767D7E412A9F27CD9689630891F5506575307C4E_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return this.chatPeer.TransportProtocol; }
		uint8_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Photon.Chat.ChatClient::set_TransportProtocol(ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_TransportProtocol_m964A4B1AF240459FC7314F7DEE1FAFE9D54D1AC6 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_set_TransportProtocol_m964A4B1AF240459FC7314F7DEE1FAFE9D54D1AC6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	RuntimeObject* G_B6_2 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	RuntimeObject* G_B5_2 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	int32_t G_B7_2 = 0;
	RuntimeObject* G_B7_3 = NULL;
	{
		// if (this.chatPeer == null || this.chatPeer.PeerState != PeerStateValue.Disconnected)
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_0 = __this->get_chatPeer_18();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_1 = __this->get_chatPeer_18();
		NullCheck(L_1);
		uint8_t L_2 = PhotonPeer_get_PeerState_m88FD264346AFB1D75762E4B2FF0385258EC3BB99(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0061;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "Can't set TransportProtocol. Disconnect first! " + ((this.chatPeer != null) ? "PeerState: " + this.chatPeer.PeerState : "The chatPeer is null."));
		RuntimeObject* L_4 = __this->get_listener_17();
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_5 = __this->get_chatPeer_18();
		G_B5_0 = _stringLiteralC0A6FD1C5CA8DBFF0C1D66394DA952F681078562;
		G_B5_1 = 2;
		G_B5_2 = L_4;
		if (L_5)
		{
			G_B6_0 = _stringLiteralC0A6FD1C5CA8DBFF0C1D66394DA952F681078562;
			G_B6_1 = 2;
			G_B6_2 = L_4;
			goto IL_003a;
		}
	}
	{
		G_B7_0 = _stringLiteralD6CA3F0561CBE6D60E45676F583A5694EA29884B;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		goto IL_0054;
	}

IL_003a:
	{
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_6 = __this->get_chatPeer_18();
		NullCheck(L_6);
		uint8_t L_7 = PhotonPeer_get_PeerState_m88FD264346AFB1D75762E4B2FF0385258EC3BB99(L_6, /*hidden argument*/NULL);
		uint8_t L_8 = L_7;
		RuntimeObject * L_9 = Box(PeerStateValue_t6AB72DDE255D26E8BFE9D970B850A723EBF6F542_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral0ED3124668F532717B0D69F6EAA15F42A8393B1D, L_9, /*hidden argument*/NULL);
		G_B7_0 = L_10;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
	}

IL_0054:
	{
		String_t* L_11 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(G_B7_1, G_B7_0, /*hidden argument*/NULL);
		NullCheck(G_B7_3);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, G_B7_3, G_B7_2, L_11);
		// return;
		goto IL_006e;
	}

IL_0061:
	{
		// this.chatPeer.TransportProtocol = value;
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_12 = __this->get_chatPeer_18();
		uint8_t L_13 = ___value0;
		NullCheck(L_12);
		PhotonPeer_set_TransportProtocol_m80F1A37AC3F8CA8715B4C94B5CCABA6F2212725B_inline(L_12, L_13, /*hidden argument*/NULL);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> Photon.Chat.ChatClient::get_SocketImplementationConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tF9F37A139D3559F1151DDADAA520C7F397F42E41 * ChatClient_get_SocketImplementationConfig_m8D6A9009A45765E145D7BDAD992285A085E95FE1 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	Dictionary_2_tF9F37A139D3559F1151DDADAA520C7F397F42E41 * V_0 = NULL;
	{
		// get { return this.chatPeer.SocketImplementationConfig; }
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_0 = __this->get_chatPeer_18();
		NullCheck(L_0);
		Dictionary_2_tF9F37A139D3559F1151DDADAA520C7F397F42E41 * L_1 = ((PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B *)L_0)->get_SocketImplementationConfig_19();
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return this.chatPeer.SocketImplementationConfig; }
		Dictionary_2_tF9F37A139D3559F1151DDADAA520C7F397F42E41 * L_2 = V_0;
		return L_2;
	}
}
// System.Void Photon.Chat.ChatClient::.ctor(Photon.Chat.IChatClientListener,ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient__ctor_m6D7F40BC273FD57A79C03103BD73DF5912BA1DE5 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, RuntimeObject* ___listener0, uint8_t ___protocol1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient__ctor_m6D7F40BC273FD57A79C03103BD73DF5912BA1DE5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string chatRegion = "EU";
		__this->set_chatRegion_6(_stringLiteralC82D1B09CF32291761D4D994CF71D150CBFAB21C);
		// public int PrivateChatHistoryLength = -1;
		__this->set_PrivateChatHistoryLength_13((-1));
		// private readonly IChatClientListener listener = null;
		__this->set_listener_17((RuntimeObject*)NULL);
		// public ChatPeer chatPeer = null;
		__this->set_chatPeer_18((ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 *)NULL);
		// private int msDeltaForServiceCalls = 50;
		__this->set_msDeltaForServiceCalls_23(((int32_t)50));
		// public ChatClient(IChatClientListener listener, ConnectionProtocol protocol = ConnectionProtocol.Udp)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.listener = listener;
		RuntimeObject* L_0 = ___listener0;
		__this->set_listener_17(L_0);
		// this.State = ChatState.Uninitialized;
		ChatClient_set_State_mB4F7447BD9819E2D8EE5E6F169A0AE7A0F49DC1E_inline(__this, 0, /*hidden argument*/NULL);
		// this.chatPeer = new ChatPeer(this, protocol);
		uint8_t L_1 = ___protocol1;
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_2 = (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 *)il2cpp_codegen_object_new(ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_il2cpp_TypeInfo_var);
		ChatPeer__ctor_m7134BB0AAC3428BA6A777A1493D52764B8F5DDCC(L_2, __this, L_1, /*hidden argument*/NULL);
		__this->set_chatPeer_18(L_2);
		// this.chatPeer.SerializationProtocolType = SerializationProtocol.GpBinaryV18;
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_3 = __this->get_chatPeer_18();
		NullCheck(L_3);
		PhotonPeer_set_SerializationProtocolType_m02676498FE60666B33768152B5CA30C4F8FC6EFD_inline(L_3, 1, /*hidden argument*/NULL);
		// this.PublicChannels = new Dictionary<string, ChatChannel>();
		Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * L_4 = (Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB *)il2cpp_codegen_object_new(Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mC710CD24666429D51CA2317DAB94817AAC9FA092(L_4, /*hidden argument*/Dictionary_2__ctor_mC710CD24666429D51CA2317DAB94817AAC9FA092_RuntimeMethod_var);
		__this->set_PublicChannels_14(L_4);
		// this.PrivateChannels = new Dictionary<string, ChatChannel>();
		Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * L_5 = (Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB *)il2cpp_codegen_object_new(Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mC710CD24666429D51CA2317DAB94817AAC9FA092(L_5, /*hidden argument*/Dictionary_2__ctor_mC710CD24666429D51CA2317DAB94817AAC9FA092_RuntimeMethod_var);
		__this->set_PrivateChannels_15(L_5);
		// this.PublicChannelsUnsubscribing = new HashSet<string>();
		HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * L_6 = (HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 *)il2cpp_codegen_object_new(HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m08DB7073F20A7ED4862EF5F753C736E060472AEE(L_6, /*hidden argument*/HashSet_1__ctor_m08DB7073F20A7ED4862EF5F753C736E060472AEE_RuntimeMethod_var);
		__this->set_PublicChannelsUnsubscribing_16(L_6);
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::ConnectUsingSettings(Photon.Chat.ChatAppSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_ConnectUsingSettings_mBBF62184730115FA8D8F972661D8C7DB90FF535B (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * ___appSettings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_ConnectUsingSettings_mBBF62184730115FA8D8F972661D8C7DB90FF535B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (appSettings == null)
		ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * L_0 = ___appSettings0;
		V_0 = (bool)((((RuntimeObject*)(ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "ConnectUsingSettings failed. The appSettings can't be null.'");
		RuntimeObject* L_2 = __this->get_listener_17();
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_2, 1, _stringLiteral3337A646329BB0605D15621CA34E1626248D408C);
		// return false;
		V_1 = (bool)0;
		goto IL_00b7;
	}

IL_0023:
	{
		// if (!string.IsNullOrEmpty(appSettings.FixedRegion))
		ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * L_3 = ___appSettings0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get_FixedRegion_2();
		bool L_5 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_4, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		// this.ChatRegion = appSettings.FixedRegion;
		ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * L_7 = ___appSettings0;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_FixedRegion_2();
		ChatClient_set_ChatRegion_mDFE542A6A3CE4AB4173A7E16079D14E5ECECEFCB(__this, L_8, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// this.DebugOut = appSettings.NetworkLogging;
		ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * L_9 = ___appSettings0;
		NullCheck(L_9);
		uint8_t L_10 = L_9->get_NetworkLogging_7();
		ChatClient_set_DebugOut_m263D08A55593DC29D84E2CCF2A3A066E2B4823ED(__this, L_10, /*hidden argument*/NULL);
		// this.TransportProtocol = appSettings.Protocol;
		ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * L_11 = ___appSettings0;
		NullCheck(L_11);
		uint8_t L_12 = L_11->get_Protocol_5();
		ChatClient_set_TransportProtocol_m964A4B1AF240459FC7314F7DEE1FAFE9D54D1AC6(__this, L_12, /*hidden argument*/NULL);
		// this.EnableProtocolFallback = appSettings.EnableProtocolFallback;
		ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * L_13 = ___appSettings0;
		NullCheck(L_13);
		bool L_14 = L_13->get_EnableProtocolFallback_6();
		ChatClient_set_EnableProtocolFallback_mD96C363154CC46C3CF5AA432346DBC78EEFE474F_inline(__this, L_14, /*hidden argument*/NULL);
		// if (!appSettings.IsDefaultNameServer)
		ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * L_15 = ___appSettings0;
		NullCheck(L_15);
		bool L_16 = ChatAppSettings_get_IsDefaultNameServer_m4A795456A7054E72173FD85A45DD90AA55E8F951(L_15, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_009c;
		}
	}
	{
		// this.chatPeer.NameServerHost = appSettings.Server;
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_18 = __this->get_chatPeer_18();
		ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * L_19 = ___appSettings0;
		NullCheck(L_19);
		String_t* L_20 = L_19->get_Server_3();
		NullCheck(L_18);
		L_18->set_NameServerHost_60(L_20);
		// this.chatPeer.NameServerPortOverride = appSettings.Port;
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_21 = __this->get_chatPeer_18();
		ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * L_22 = ___appSettings0;
		NullCheck(L_22);
		uint16_t L_23 = L_22->get_Port_4();
		NullCheck(L_21);
		L_21->set_NameServerPortOverride_62(L_23);
	}

IL_009c:
	{
		// return this.Connect(appSettings.AppIdChat, appSettings.AppVersion, this.AuthValues);
		ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * L_24 = ___appSettings0;
		NullCheck(L_24);
		String_t* L_25 = L_24->get_AppIdChat_0();
		ChatAppSettings_t91ED8743610F64B1EA3DA1E861D4BBD99D8C3356 * L_26 = ___appSettings0;
		NullCheck(L_26);
		String_t* L_27 = L_26->get_AppVersion_1();
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_28 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline(__this, /*hidden argument*/NULL);
		bool L_29 = ChatClient_Connect_m6A720637091E96EB0559F3BEAF85B0415BB0D376(__this, L_25, L_27, L_28, /*hidden argument*/NULL);
		V_1 = L_29;
		goto IL_00b7;
	}

IL_00b7:
	{
		// }
		bool L_30 = V_1;
		return L_30;
	}
}
// System.Boolean Photon.Chat.ChatClient::Connect(System.String,System.String,Photon.Chat.AuthenticationValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Connect_m6A720637091E96EB0559F3BEAF85B0415BB0D376 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___appId0, String_t* ___appVersion1, AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ___authValues2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_Connect_m6A720637091E96EB0559F3BEAF85B0415BB0D376_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// this.chatPeer.TimePingInterval = 3000;
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_0 = __this->get_chatPeer_18();
		NullCheck(L_0);
		((PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B *)L_0)->set_TimePingInterval_36(((int32_t)3000));
		// this.DisconnectedCause = ChatDisconnectCause.None;
		ChatClient_set_DisconnectedCause_m0726D082C1B2F8E366BAC950319DEA20CF09FFDB_inline(__this, 0, /*hidden argument*/NULL);
		// if (authValues != null)
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_1 = ___authValues2;
		V_1 = (bool)((!(((RuntimeObject*)(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// this.AuthValues = authValues;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_3 = ___authValues2;
		ChatClient_set_AuthValues_mA9F19EDA73501C75C59D69C949B66953CE0B8EFE_inline(__this, L_3, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// this.AppId = appId;
		String_t* L_4 = ___appId0;
		ChatClient_set_AppId_m49B2AD5DFFCB3328EB95E1416DC4640BAC72847A_inline(__this, L_4, /*hidden argument*/NULL);
		// this.AppVersion = appVersion;
		String_t* L_5 = ___appVersion1;
		ChatClient_set_AppVersion_m7852C67700E10420F7E14D3BA0C4DC5E5E9781C8_inline(__this, L_5, /*hidden argument*/NULL);
		// this.didAuthenticate = false;
		__this->set_didAuthenticate_20((bool)0);
		// this.chatPeer.QuickResendAttempts = 2;
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_6 = __this->get_chatPeer_18();
		NullCheck(L_6);
		PhotonPeer_set_QuickResendAttempts_mF1A6AF63A324442A7D3DDD07794D7071C50E8BDB(L_6, (uint8_t)2, /*hidden argument*/NULL);
		// this.chatPeer.SentCountAllowance = 7;
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_7 = __this->get_chatPeer_18();
		NullCheck(L_7);
		((PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B *)L_7)->set_SentCountAllowance_34(7);
		// this.PublicChannels.Clear();
		Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * L_8 = __this->get_PublicChannels_14();
		NullCheck(L_8);
		Dictionary_2_Clear_m9350B48DE007190F546A199AA41BBC0B7DE68D59(L_8, /*hidden argument*/Dictionary_2_Clear_m9350B48DE007190F546A199AA41BBC0B7DE68D59_RuntimeMethod_var);
		// this.PrivateChannels.Clear();
		Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * L_9 = __this->get_PrivateChannels_15();
		NullCheck(L_9);
		Dictionary_2_Clear_m9350B48DE007190F546A199AA41BBC0B7DE68D59(L_9, /*hidden argument*/Dictionary_2_Clear_m9350B48DE007190F546A199AA41BBC0B7DE68D59_RuntimeMethod_var);
		// this.PublicChannelsUnsubscribing.Clear();
		HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * L_10 = __this->get_PublicChannelsUnsubscribing_16();
		NullCheck(L_10);
		HashSet_1_Clear_m55ED25F18A656A9699E75E8DD895CF6AF871DF53(L_10, /*hidden argument*/HashSet_1_Clear_m55ED25F18A656A9699E75E8DD895CF6AF871DF53_RuntimeMethod_var);
		// this.NameServerAddress = this.chatPeer.NameServerAddress;
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_11 = __this->get_chatPeer_18();
		NullCheck(L_11);
		String_t* L_12 = ChatPeer_get_NameServerAddress_mEC869AA34F11AD1F019EA0D6F7090A154DC0CAA7(L_11, /*hidden argument*/NULL);
		ChatClient_set_NameServerAddress_m7A3F9E28BE94D5DA80D7559F6A265DD2C86510E6_inline(__this, L_12, /*hidden argument*/NULL);
		// bool isConnecting = this.chatPeer.Connect();
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_13 = __this->get_chatPeer_18();
		NullCheck(L_13);
		bool L_14 = ChatPeer_Connect_m57D6143BBC1FFA33E40820A96611D098C8E2C9C2(L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		// if (isConnecting)
		bool L_15 = V_0;
		V_2 = L_15;
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_00ac;
		}
	}
	{
		// this.State = ChatState.ConnectingToNameServer;
		ChatClient_set_State_mB4F7447BD9819E2D8EE5E6F169A0AE7A0F49DC1E_inline(__this, 1, /*hidden argument*/NULL);
	}

IL_00ac:
	{
		// if (this.UseBackgroundWorkerForSending)
		bool L_17 = ChatClient_get_UseBackgroundWorkerForSending_mA5A8EE30F7BB6048082C233967E2DA5D2CEE77E5_inline(__this, /*hidden argument*/NULL);
		V_3 = L_17;
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_00d5;
		}
	}
	{
		// SupportClass.StartBackgroundCalls(this.SendOutgoingInBackground, this.msDeltaForServiceCalls, "ChatClient Service Thread");
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_19 = (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *)il2cpp_codegen_object_new(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var);
		Func_1__ctor_m513B0E5967A777E63476A8264B759B2BA052E8DC(L_19, __this, (intptr_t)((intptr_t)ChatClient_SendOutgoingInBackground_m6DACEF4746C9018F9300FC55DB31F72459728CE4_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m513B0E5967A777E63476A8264B759B2BA052E8DC_RuntimeMethod_var);
		int32_t L_20 = __this->get_msDeltaForServiceCalls_23();
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tA03F3769517B9BF8FCBDB4693B1FCB13C93FCCB0_il2cpp_TypeInfo_var);
		SupportClass_StartBackgroundCalls_m97526EE667EC704A455FD13C141D62E21253A282(L_19, L_20, _stringLiteral8CBF6943194FAE819E8AFA76DB6AA5FEDEF2323B, /*hidden argument*/NULL);
	}

IL_00d5:
	{
		// return isConnecting;
		bool L_21 = V_0;
		V_4 = L_21;
		goto IL_00da;
	}

IL_00da:
	{
		// }
		bool L_22 = V_4;
		return L_22;
	}
}
// System.Boolean Photon.Chat.ChatClient::ConnectAndSetStatus(System.String,System.String,Photon.Chat.AuthenticationValues,System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_ConnectAndSetStatus_m3111CC36FB9C7871CD736E0C376BF0868859CC87 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___appId0, String_t* ___appVersion1, AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ___authValues2, int32_t ___status3, RuntimeObject * ___message4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_ConnectAndSetStatus_m3111CC36FB9C7871CD736E0C376BF0868859CC87_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// statusToSetWhenConnected = status;
		int32_t L_0 = ___status3;
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
		__this->set_statusToSetWhenConnected_21(L_1);
		// messageToSetWhenConnected = message;
		RuntimeObject * L_2 = ___message4;
		__this->set_messageToSetWhenConnected_22(L_2);
		// return Connect(appId, appVersion, authValues);
		String_t* L_3 = ___appId0;
		String_t* L_4 = ___appVersion1;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_5 = ___authValues2;
		bool L_6 = ChatClient_Connect_m6A720637091E96EB0559F3BEAF85B0415BB0D376(__this, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0022;
	}

IL_0022:
	{
		// }
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Void Photon.Chat.ChatClient::Service()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_Service_m2EF335812DD640B6CC84AACDDB02689B595D95AE (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B16_0 = 0;
	{
		goto IL_0005;
	}

IL_0003:
	{
	}

IL_0005:
	{
		// while (this.HasPeer && this.chatPeer.DispatchIncomingCommands())
		bool L_0 = ChatClient_get_HasPeer_m0F8268A96258BC9856A223ACE894A1DBD2C2026B(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_1 = __this->get_chatPeer_18();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::DispatchIncomingCommands() */, L_1);
		G_B5_0 = ((int32_t)(L_2));
		goto IL_001b;
	}

IL_001a:
	{
		G_B5_0 = 0;
	}

IL_001b:
	{
		V_0 = (bool)G_B5_0;
		bool L_3 = V_0;
		if (L_3)
		{
			goto IL_0003;
		}
	}
	{
		// if (!this.UseBackgroundWorkerForSending)
		bool L_4 = ChatClient_get_UseBackgroundWorkerForSending_mA5A8EE30F7BB6048082C233967E2DA5D2CEE77E5_inline(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_007d;
		}
	}
	{
		// if (Environment.TickCount - this.msTimestampOfLastServiceCall > this.msDeltaForServiceCalls || this.msTimestampOfLastServiceCall == 0)
		int32_t L_6 = Environment_get_TickCount_m0A119BE4354EA90C82CC48E559588C987A79FE0C(/*hidden argument*/NULL);
		int32_t L_7 = __this->get_msTimestampOfLastServiceCall_24();
		int32_t L_8 = __this->get_msDeltaForServiceCalls_23();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7))) > ((int32_t)L_8)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_9 = __this->get_msTimestampOfLastServiceCall_24();
		G_B10_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_004d;
	}

IL_004c:
	{
		G_B10_0 = 1;
	}

IL_004d:
	{
		V_2 = (bool)G_B10_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_007c;
		}
	}
	{
		// this.msTimestampOfLastServiceCall = Environment.TickCount;
		int32_t L_11 = Environment_get_TickCount_m0A119BE4354EA90C82CC48E559588C987A79FE0C(/*hidden argument*/NULL);
		__this->set_msTimestampOfLastServiceCall_24(L_11);
		goto IL_0061;
	}

IL_005f:
	{
	}

IL_0061:
	{
		// while (this.HasPeer && this.chatPeer.SendOutgoingCommands())
		bool L_12 = ChatClient_get_HasPeer_m0F8268A96258BC9856A223ACE894A1DBD2C2026B(__this, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0076;
		}
	}
	{
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_13 = __this->get_chatPeer_18();
		NullCheck(L_13);
		bool L_14 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOutgoingCommands() */, L_13);
		G_B16_0 = ((int32_t)(L_14));
		goto IL_0077;
	}

IL_0076:
	{
		G_B16_0 = 0;
	}

IL_0077:
	{
		V_3 = (bool)G_B16_0;
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_005f;
		}
	}
	{
	}

IL_007c:
	{
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendOutgoingInBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendOutgoingInBackground_m6DACEF4746C9018F9300FC55DB31F72459728CE4 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		goto IL_0005;
	}

IL_0003:
	{
	}

IL_0005:
	{
		// while (this.HasPeer && this.chatPeer.SendOutgoingCommands())
		bool L_0 = ChatClient_get_HasPeer_m0F8268A96258BC9856A223ACE894A1DBD2C2026B(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_1 = __this->get_chatPeer_18();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOutgoingCommands() */, L_1);
		G_B5_0 = ((int32_t)(L_2));
		goto IL_001b;
	}

IL_001a:
	{
		G_B5_0 = 0;
	}

IL_001b:
	{
		V_0 = (bool)G_B5_0;
		bool L_3 = V_0;
		if (L_3)
		{
			goto IL_0003;
		}
	}
	{
		// return this.State != ChatState.Disconnected;
		int32_t L_4 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)((int32_t)11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002f;
	}

IL_002f:
	{
		// }
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void Photon.Chat.ChatClient::SendAcksOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_SendAcksOnly_m085143D7A29367B04DF0FF6C58ED4CF5894195F9 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (this.HasPeer) this.chatPeer.SendAcksOnly();
		bool L_0 = ChatClient_get_HasPeer_m0F8268A96258BC9856A223ACE894A1DBD2C2026B(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (this.HasPeer) this.chatPeer.SendAcksOnly();
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_2 = __this->get_chatPeer_18();
		NullCheck(L_2);
		VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendAcksOnly() */, L_2);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::Disconnect(Photon.Chat.ChatDisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_Disconnect_m78C5220E4F2DA2FAEDFD0C75123D6E5B1376E984 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___cause0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (this.HasPeer && this.chatPeer.PeerState != PeerStateValue.Disconnected)
		bool L_0 = ChatClient_get_HasPeer_m0F8268A96258BC9856A223ACE894A1DBD2C2026B(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_1 = __this->get_chatPeer_18();
		NullCheck(L_1);
		uint8_t L_2 = PhotonPeer_get_PeerState_m88FD264346AFB1D75762E4B2FF0385258EC3BB99(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		// this.State = ChatState.Disconnecting;
		ChatClient_set_State_mB4F7447BD9819E2D8EE5E6F169A0AE7A0F49DC1E_inline(__this, ((int32_t)10), /*hidden argument*/NULL);
		// this.DisconnectedCause = cause;
		int32_t L_4 = ___cause0;
		ChatClient_set_DisconnectedCause_m0726D082C1B2F8E366BAC950319DEA20CF09FFDB_inline(__this, L_4, /*hidden argument*/NULL);
		// this.chatPeer.Disconnect();
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_5 = __this->get_chatPeer_18();
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(8 /* System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect() */, L_5);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::StopThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_StopThread_mA350213BEDE2B23419BF0DB5DCE01423AA4E51B8 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (this.HasPeer)
		bool L_0 = ChatClient_get_HasPeer_m0F8268A96258BC9856A223ACE894A1DBD2C2026B(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// this.chatPeer.StopThread();
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_2 = __this->get_chatPeer_18();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(9 /* System.Void ExitGames.Client.Photon.PhotonPeer::StopThread() */, L_2);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m01D13AF1DF355F1AFEA2CA2F3184247CCF9EF2EB (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___channels0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.Subscribe(channels, 0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = ___channels0;
		bool L_1 = ChatClient_Subscribe_m0391C33DF36612A52DE871DD0B1726EA62F99B2A(__this, L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m162186BD32689824C32D27765C4418229ADE67F1 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___channels0, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___lastMsgIds1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_Subscribe_m162186BD32689824C32D27765C4418229ADE67F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B21_0 = 0;
	{
		// if (!this.CanChat)
		bool L_0 = ChatClient_get_CanChat_m303DEA407E43F29A30A67CF23FA9BF1D8CDC28F7(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_2 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Subscribe called while not connected to front end server.");
		RuntimeObject* L_4 = __this->get_listener_17();
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_4, 1, _stringLiteral238CFA8C25F7535B52F025A6DC2373BE55C1578E);
	}

IL_0033:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_015b;
	}

IL_003a:
	{
		// if (channels == null || channels.Length == 0)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = ___channels0;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = ___channels0;
		NullCheck(L_6);
		G_B7_0 = ((((int32_t)(((RuntimeArray*)L_6)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B7_0 = 1;
	}

IL_0045:
	{
		V_4 = (bool)G_B7_0;
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0079;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_8 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_8) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0072;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "Subscribe can't be called for empty or null channels-list.");
		RuntimeObject* L_10 = __this->get_listener_17();
		NullCheck(L_10);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_10, 2, _stringLiteral4D05D00A60529C7A57C13E385944654DD890D8DE);
	}

IL_0072:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_015b;
	}

IL_0079:
	{
		// for (int i = 0; i < channels.Length; i++)
		V_6 = 0;
		goto IL_00cf;
	}

IL_007e:
	{
		// if (string.IsNullOrEmpty(channels[i]))
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = ___channels0;
		int32_t L_12 = V_6;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		String_t* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		bool L_15 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_14, /*hidden argument*/NULL);
		V_7 = L_15;
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_00c8;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_17 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_8;
		if (!L_18)
		{
			goto IL_00c1;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("Subscribe can't be called with a null or empty channel name at index {0}.", i));
		RuntimeObject* L_19 = __this->get_listener_17();
		int32_t L_20 = V_6;
		int32_t L_21 = L_20;
		RuntimeObject * L_22 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralA31D385B9DEE1897A2E6840A59DF969194B69490, L_22, /*hidden argument*/NULL);
		NullCheck(L_19);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_19, 1, L_23);
	}

IL_00c1:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_015b;
	}

IL_00c8:
	{
		// for (int i = 0; i < channels.Length; i++)
		int32_t L_24 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00cf:
	{
		// for (int i = 0; i < channels.Length; i++)
		int32_t L_25 = V_6;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_26 = ___channels0;
		NullCheck(L_26);
		V_9 = (bool)((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))))))? 1 : 0);
		bool L_27 = V_9;
		if (L_27)
		{
			goto IL_007e;
		}
	}
	{
		// if (lastMsgIds == null || lastMsgIds.Length != channels.Length)
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_28 = ___lastMsgIds1;
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_29 = ___lastMsgIds1;
		NullCheck(L_29);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_30 = ___channels0;
		NullCheck(L_30);
		G_B21_0 = ((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ed;
	}

IL_00ec:
	{
		G_B21_0 = 1;
	}

IL_00ed:
	{
		V_10 = (bool)G_B21_0;
		bool L_31 = V_10;
		if (!L_31)
		{
			goto IL_011e;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_32 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_11 = (bool)((((int32_t)((((int32_t)L_32) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_11;
		if (!L_33)
		{
			goto IL_011a;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Subscribe can't be called when \"lastMsgIds\" array is null or does not have the same length as \"channels\" array.");
		RuntimeObject* L_34 = __this->get_listener_17();
		NullCheck(L_34);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_34, 1, _stringLiteralC82DBB40CF62E9201ED272DC15F939C724CD3E7D);
	}

IL_011a:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_015b;
	}

IL_011e:
	{
		// Dictionary<byte, object> opParameters = new Dictionary<byte, object>
		// {
		//     { ChatParameterCode.Channels, channels },
		//     { ChatParameterCode.MsgIds,  lastMsgIds},
		//     { ChatParameterCode.HistoryLength, -1 } 
		// };
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_35 = (Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 *)il2cpp_codegen_object_new(Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mB6A7105EE88A811F75E9529C0230DE29BC579C6A(L_35, /*hidden argument*/Dictionary_2__ctor_mB6A7105EE88A811F75E9529C0230DE29BC579C6A_RuntimeMethod_var);
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_36 = L_35;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_37 = ___channels0;
		NullCheck(L_36);
		Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22(L_36, (uint8_t)0, (RuntimeObject *)(RuntimeObject *)L_37, /*hidden argument*/Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22_RuntimeMethod_var);
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_38 = L_36;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_39 = ___lastMsgIds1;
		NullCheck(L_38);
		Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22(L_38, (uint8_t)((int32_t)9), (RuntimeObject *)(RuntimeObject *)L_39, /*hidden argument*/Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22_RuntimeMethod_var);
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_40 = L_38;
		int32_t L_41 = (-1);
		RuntimeObject * L_42 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_40);
		Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22(L_40, (uint8_t)((int32_t)14), L_42, /*hidden argument*/Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22_RuntimeMethod_var);
		V_0 = L_40;
		// return this.chatPeer.SendOperation(ChatOperationCode.Subscribe, opParameters, SendOptions.SendReliable);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_43 = __this->get_chatPeer_18();
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_44 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5_il2cpp_TypeInfo_var);
		SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  L_45 = ((SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_43);
		bool L_46 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 *, SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_43, (uint8_t)0, L_44, L_45);
		V_3 = L_46;
		goto IL_015b;
	}

IL_015b:
	{
		// }
		bool L_47 = V_3;
		return L_47;
	}
}
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m0391C33DF36612A52DE871DD0B1726EA62F99B2A (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___channels0, int32_t ___messagesFromHistory1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_Subscribe_m0391C33DF36612A52DE871DD0B1726EA62F99B2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B7_0 = 0;
	{
		// if (!this.CanChat)
		bool L_0 = ChatClient_get_CanChat_m303DEA407E43F29A30A67CF23FA9BF1D8CDC28F7(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_2 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Subscribe called while not connected to front end server.");
		RuntimeObject* L_4 = __this->get_listener_17();
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_4, 1, _stringLiteral238CFA8C25F7535B52F025A6DC2373BE55C1578E);
	}

IL_0033:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_007d;
	}

IL_0037:
	{
		// if (channels == null || channels.Length == 0)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = ___channels0;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = ___channels0;
		NullCheck(L_6);
		G_B7_0 = ((((int32_t)(((RuntimeArray*)L_6)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0042;
	}

IL_0041:
	{
		G_B7_0 = 1;
	}

IL_0042:
	{
		V_3 = (bool)G_B7_0;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0071;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_8 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_8) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_006d;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "Subscribe can't be called for empty or null channels-list.");
		RuntimeObject* L_10 = __this->get_listener_17();
		NullCheck(L_10);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_10, 2, _stringLiteral4D05D00A60529C7A57C13E385944654DD890D8DE);
	}

IL_006d:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_007d;
	}

IL_0071:
	{
		// return this.SendChannelOperation(channels, (byte)ChatOperationCode.Subscribe, messagesFromHistory);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = ___channels0;
		int32_t L_12 = ___messagesFromHistory1;
		bool L_13 = ChatClient_SendChannelOperation_m18D325052913A99B794CF2CC4B24D290344B97AF(__this, L_11, (uint8_t)0, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		goto IL_007d;
	}

IL_007d:
	{
		// }
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Boolean Photon.Chat.ChatClient::Unsubscribe(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Unsubscribe_mF3824B5D3C47882442414123A2C48B31C62532CC (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___channels0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_Unsubscribe_mF3824B5D3C47882442414123A2C48B31C62532CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	int32_t G_B7_0 = 0;
	{
		// if (!this.CanChat)
		bool L_0 = ChatClient_get_CanChat_m303DEA407E43F29A30A67CF23FA9BF1D8CDC28F7(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_2 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Unsubscribe called while not connected to front end server.");
		RuntimeObject* L_4 = __this->get_listener_17();
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_4, 1, _stringLiteral5618474235217E524A45AD712574B23E84EED6AD);
	}

IL_0033:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_00ab;
	}

IL_0037:
	{
		// if (channels == null || channels.Length == 0)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = ___channels0;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = ___channels0;
		NullCheck(L_6);
		G_B7_0 = ((((int32_t)(((RuntimeArray*)L_6)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0042;
	}

IL_0041:
	{
		G_B7_0 = 1;
	}

IL_0042:
	{
		V_3 = (bool)G_B7_0;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0071;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_8 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_8) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_006d;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "Unsubscribe can't be called for empty or null channels-list.");
		RuntimeObject* L_10 = __this->get_listener_17();
		NullCheck(L_10);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_10, 2, _stringLiteral11B6F3557420C105118FCE7DD35DEC9F19E23C3D);
	}

IL_006d:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_00ab;
	}

IL_0071:
	{
		// foreach (string ch in channels)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = ___channels0;
		V_5 = L_11;
		V_6 = 0;
		goto IL_0097;
	}

IL_007a:
	{
		// foreach (string ch in channels)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = V_5;
		int32_t L_13 = V_6;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_7 = L_15;
		// this.PublicChannelsUnsubscribing.Add(ch);
		HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * L_16 = __this->get_PublicChannelsUnsubscribing_16();
		String_t* L_17 = V_7;
		NullCheck(L_16);
		HashSet_1_Add_mD67974B4739A65BB7950DBB56C8B5CF83C01D4E9(L_16, L_17, /*hidden argument*/HashSet_1_Add_mD67974B4739A65BB7950DBB56C8B5CF83C01D4E9_RuntimeMethod_var);
		int32_t L_18 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0097:
	{
		// foreach (string ch in channels)
		int32_t L_19 = V_6;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_20 = V_5;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))))
		{
			goto IL_007a;
		}
	}
	{
		// return this.SendChannelOperation(channels, ChatOperationCode.Unsubscribe, 0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_21 = ___channels0;
		bool L_22 = ChatClient_SendChannelOperation_m18D325052913A99B794CF2CC4B24D290344B97AF(__this, L_21, (uint8_t)1, 0, /*hidden argument*/NULL);
		V_2 = L_22;
		goto IL_00ab;
	}

IL_00ab:
	{
		// }
		bool L_23 = V_2;
		return L_23;
	}
}
// System.Boolean Photon.Chat.ChatClient::PublishMessage(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_PublishMessage_mC4654F785E2073DF765DB653B9AC6B0275BFF082 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___channelName0, RuntimeObject * ___message1, bool ___forwardAsWebhook2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.publishMessage(channelName, message, true, forwardAsWebhook);
		String_t* L_0 = ___channelName0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___forwardAsWebhook2;
		bool L_3 = ChatClient_publishMessage_m112332E73165EF56FF7ED01EEF1EED95C417077D(__this, L_0, L_1, (bool)1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Photon.Chat.ChatClient::PublishMessageUnreliable(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_PublishMessageUnreliable_mE608B1F6C93BCCCC6D02A71C15717684AD0B8A43 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___channelName0, RuntimeObject * ___message1, bool ___forwardAsWebhook2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.publishMessage(channelName, message, false, forwardAsWebhook);
		String_t* L_0 = ___channelName0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___forwardAsWebhook2;
		bool L_3 = ChatClient_publishMessage_m112332E73165EF56FF7ED01EEF1EED95C417077D(__this, L_0, L_1, (bool)0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Photon.Chat.ChatClient::publishMessage(System.String,System.Object,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_publishMessage_m112332E73165EF56FF7ED01EEF1EED95C417077D (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___channelName0, RuntimeObject * ___message1, bool ___reliable2, bool ___forwardAsWebhook3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_publishMessage_m112332E73165EF56FF7ED01EEF1EED95C417077D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B7_0 = 0;
	{
		// if (!this.CanChat)
		bool L_0 = ChatClient_get_CanChat_m303DEA407E43F29A30A67CF23FA9BF1D8CDC28F7(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_2 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "PublishMessage called while not connected to front end server.");
		RuntimeObject* L_4 = __this->get_listener_17();
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_4, 1, _stringLiteral3D618361EC8C202858B123986AEA7B042531080B);
	}

IL_0033:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00ce;
	}

IL_003a:
	{
		// if (string.IsNullOrEmpty(channelName) || message == null)
		String_t* L_5 = ___channelName0;
		bool L_6 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject * L_7 = ___message1;
		G_B7_0 = ((((RuntimeObject*)(RuntimeObject *)L_7) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0049;
	}

IL_0048:
	{
		G_B7_0 = 1;
	}

IL_0049:
	{
		V_4 = (bool)G_B7_0;
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_007a;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_9 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_9) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_0076;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "PublishMessage parameters must be non-null and not empty.");
		RuntimeObject* L_11 = __this->get_listener_17();
		NullCheck(L_11);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_11, 2, _stringLiteral338B2B6C4BBAA566799E30C0FFE0EB3E1AD56F71);
	}

IL_0076:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00ce;
	}

IL_007a:
	{
		// Dictionary<byte, object> parameters = new Dictionary<byte, object>
		//     {
		//         { (byte)ChatParameterCode.Channel, channelName },
		//         { (byte)ChatParameterCode.Message, message }
		//     };
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_12 = (Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 *)il2cpp_codegen_object_new(Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mB6A7105EE88A811F75E9529C0230DE29BC579C6A(L_12, /*hidden argument*/Dictionary_2__ctor_mB6A7105EE88A811F75E9529C0230DE29BC579C6A_RuntimeMethod_var);
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_13 = L_12;
		String_t* L_14 = ___channelName0;
		NullCheck(L_13);
		Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22(L_13, (uint8_t)1, L_14, /*hidden argument*/Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22_RuntimeMethod_var);
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_15 = L_13;
		RuntimeObject * L_16 = ___message1;
		NullCheck(L_15);
		Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22(L_15, (uint8_t)3, L_16, /*hidden argument*/Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22_RuntimeMethod_var);
		V_0 = L_15;
		// if (forwardAsWebhook)
		bool L_17 = ___forwardAsWebhook3;
		V_6 = L_17;
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_00ab;
		}
	}
	{
		// parameters.Add(ChatParameterCode.WebFlags, (byte)0x1);
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_19 = V_0;
		uint8_t L_20 = ((uint8_t)1);
		RuntimeObject * L_21 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_19);
		Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22(L_19, (uint8_t)((int32_t)21), L_21, /*hidden argument*/Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22_RuntimeMethod_var);
	}

IL_00ab:
	{
		// return this.chatPeer.SendOperation(ChatOperationCode.Publish, parameters, new SendOptions() { Reliability = reliable });
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_22 = __this->get_chatPeer_18();
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_23 = V_0;
		il2cpp_codegen_initobj((&V_7), sizeof(SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5 ));
		bool L_24 = ___reliable2;
		SendOptions_set_Reliability_mC77446E8524CA786BE18E235B7857357F1EF12A0((SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5 *)(&V_7), L_24, /*hidden argument*/NULL);
		SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  L_25 = V_7;
		NullCheck(L_22);
		bool L_26 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 *, SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_22, (uint8_t)2, L_23, L_25);
		V_3 = L_26;
		goto IL_00ce;
	}

IL_00ce:
	{
		// }
		bool L_27 = V_3;
		return L_27;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendPrivateMessage_m5F692F987A6E6233681A597066279DD7BC2F41EB (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___forwardAsWebhook2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.SendPrivateMessage(target, message, false, forwardAsWebhook);
		String_t* L_0 = ___target0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___forwardAsWebhook2;
		bool L_3 = ChatClient_SendPrivateMessage_m901045581F7DE5BAC226C52C9369184523EC5118(__this, L_0, L_1, (bool)0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendPrivateMessage_m901045581F7DE5BAC226C52C9369184523EC5118 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___forwardAsWebhook3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.sendPrivateMessage(target, message, encrypt, true, forwardAsWebhook);
		String_t* L_0 = ___target0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___encrypt2;
		bool L_3 = ___forwardAsWebhook3;
		bool L_4 = ChatClient_sendPrivateMessage_mCF7B7BD77EB7D22DFD1ED058A4235578551C0C02(__this, L_0, L_1, L_2, (bool)1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendPrivateMessageUnreliable(System.String,System.Object,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendPrivateMessageUnreliable_m21DF7070ADC81ADC83BF32FA0536D1D80310C4A9 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___forwardAsWebhook3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.sendPrivateMessage(target, message, encrypt, false, forwardAsWebhook);
		String_t* L_0 = ___target0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___encrypt2;
		bool L_3 = ___forwardAsWebhook3;
		bool L_4 = ChatClient_sendPrivateMessage_mCF7B7BD77EB7D22DFD1ED058A4235578551C0C02(__this, L_0, L_1, L_2, (bool)0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean Photon.Chat.ChatClient::sendPrivateMessage(System.String,System.Object,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_sendPrivateMessage_mCF7B7BD77EB7D22DFD1ED058A4235578551C0C02 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___reliable3, bool ___forwardAsWebhook4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_sendPrivateMessage_mCF7B7BD77EB7D22DFD1ED058A4235578551C0C02_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B7_0 = 0;
	{
		// if (!this.CanChat)
		bool L_0 = ChatClient_get_CanChat_m303DEA407E43F29A30A67CF23FA9BF1D8CDC28F7(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_2 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "SendPrivateMessage called while not connected to front end server.");
		RuntimeObject* L_4 = __this->get_listener_17();
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_4, 1, _stringLiteralABB11E10EF4F1912CA124A43EDFCF7E4236BF4B3);
	}

IL_0033:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00db;
	}

IL_003a:
	{
		// if (string.IsNullOrEmpty(target) || message == null)
		String_t* L_5 = ___target0;
		bool L_6 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject * L_7 = ___message1;
		G_B7_0 = ((((RuntimeObject*)(RuntimeObject *)L_7) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0049;
	}

IL_0048:
	{
		G_B7_0 = 1;
	}

IL_0049:
	{
		V_4 = (bool)G_B7_0;
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_007a;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_9 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_9) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_0076;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "SendPrivateMessage parameters must be non-null and not empty.");
		RuntimeObject* L_11 = __this->get_listener_17();
		NullCheck(L_11);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_11, 2, _stringLiteral7BEA53D7765CB5C320CAF9A0C3283A4E5AF00416);
	}

IL_0076:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00db;
	}

IL_007a:
	{
		// Dictionary<byte, object> parameters = new Dictionary<byte, object>
		//     {
		//         { ChatParameterCode.UserId, target },
		//         { ChatParameterCode.Message, message }
		//     };
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_12 = (Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 *)il2cpp_codegen_object_new(Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mB6A7105EE88A811F75E9529C0230DE29BC579C6A(L_12, /*hidden argument*/Dictionary_2__ctor_mB6A7105EE88A811F75E9529C0230DE29BC579C6A_RuntimeMethod_var);
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_13 = L_12;
		String_t* L_14 = ___target0;
		NullCheck(L_13);
		Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22(L_13, (uint8_t)((int32_t)225), L_14, /*hidden argument*/Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22_RuntimeMethod_var);
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_15 = L_13;
		RuntimeObject * L_16 = ___message1;
		NullCheck(L_15);
		Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22(L_15, (uint8_t)3, L_16, /*hidden argument*/Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22_RuntimeMethod_var);
		V_0 = L_15;
		// if (forwardAsWebhook)
		bool L_17 = ___forwardAsWebhook4;
		V_6 = L_17;
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_00af;
		}
	}
	{
		// parameters.Add(ChatParameterCode.WebFlags, (byte)0x1);
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_19 = V_0;
		uint8_t L_20 = ((uint8_t)1);
		RuntimeObject * L_21 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_19);
		Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22(L_19, (uint8_t)((int32_t)21), L_21, /*hidden argument*/Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22_RuntimeMethod_var);
	}

IL_00af:
	{
		// return this.chatPeer.SendOperation(ChatOperationCode.SendPrivate, parameters, new SendOptions() { Reliability = reliable, Encrypt = encrypt });
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_22 = __this->get_chatPeer_18();
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_23 = V_0;
		il2cpp_codegen_initobj((&V_7), sizeof(SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5 ));
		bool L_24 = ___reliable3;
		SendOptions_set_Reliability_mC77446E8524CA786BE18E235B7857357F1EF12A0((SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5 *)(&V_7), L_24, /*hidden argument*/NULL);
		bool L_25 = ___encrypt2;
		(&V_7)->set_Encrypt_3(L_25);
		SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  L_26 = V_7;
		NullCheck(L_22);
		bool L_27 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 *, SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_22, (uint8_t)3, L_23, L_26);
		V_3 = L_27;
		goto IL_00db;
	}

IL_00db:
	{
		// }
		bool L_28 = V_3;
		return L_28;
	}
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_mC9DBD5B31D8A48987B17A7E4C7A6D8CF6C299B85 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___status0, RuntimeObject * ___message1, bool ___skipMessage2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_SetOnlineStatus_mC9DBD5B31D8A48987B17A7E4C7A6D8CF6C299B85_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (!this.CanChat)
		bool L_0 = ChatClient_get_CanChat_m303DEA407E43F29A30A67CF23FA9BF1D8CDC28F7(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_2 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "SetOnlineStatus called while not connected to front end server.");
		RuntimeObject* L_4 = __this->get_listener_17();
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_4, 1, _stringLiteral21D80703A6C8D4036492B5E5021EDB6DA533D41D);
	}

IL_0033:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0086;
	}

IL_0037:
	{
		// Dictionary<byte, object> parameters = new Dictionary<byte, object>
		//     {
		//         { ChatParameterCode.Status, status },
		//     };
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_5 = (Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 *)il2cpp_codegen_object_new(Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mB6A7105EE88A811F75E9529C0230DE29BC579C6A(L_5, /*hidden argument*/Dictionary_2__ctor_mB6A7105EE88A811F75E9529C0230DE29BC579C6A_RuntimeMethod_var);
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_6 = L_5;
		int32_t L_7 = ___status0;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22(L_6, (uint8_t)((int32_t)10), L_9, /*hidden argument*/Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22_RuntimeMethod_var);
		V_0 = L_6;
		// if (skipMessage)
		bool L_10 = ___skipMessage2;
		V_4 = L_10;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0066;
		}
	}
	{
		// parameters[ChatParameterCode.SkipMessage] = true;
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_12 = V_0;
		bool L_13 = ((bool)1);
		RuntimeObject * L_14 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_12);
		Dictionary_2_set_Item_m0DAE02CE9FA04B987D0923005FEF7565EB9FB52D(L_12, (uint8_t)((int32_t)12), L_14, /*hidden argument*/Dictionary_2_set_Item_m0DAE02CE9FA04B987D0923005FEF7565EB9FB52D_RuntimeMethod_var);
		goto IL_0071;
	}

IL_0066:
	{
		// parameters[ChatParameterCode.Message] = message;
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_15 = V_0;
		RuntimeObject * L_16 = ___message1;
		NullCheck(L_15);
		Dictionary_2_set_Item_m0DAE02CE9FA04B987D0923005FEF7565EB9FB52D(L_15, (uint8_t)3, L_16, /*hidden argument*/Dictionary_2_set_Item_m0DAE02CE9FA04B987D0923005FEF7565EB9FB52D_RuntimeMethod_var);
	}

IL_0071:
	{
		// return this.chatPeer.SendOperation(ChatOperationCode.UpdateStatus, parameters, SendOptions.SendReliable);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_17 = __this->get_chatPeer_18();
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5_il2cpp_TypeInfo_var);
		SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  L_19 = ((SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_17);
		bool L_20 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 *, SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_17, (uint8_t)5, L_18, L_19);
		V_3 = L_20;
		goto IL_0086;
	}

IL_0086:
	{
		// }
		bool L_21 = V_3;
		return L_21;
	}
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_mEB17F03D8059E4C4A407087F4798D1BB83FD2849 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___status0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.SetOnlineStatus(status, null, true);
		int32_t L_0 = ___status0;
		bool L_1 = ChatClient_SetOnlineStatus_mC9DBD5B31D8A48987B17A7E4C7A6D8CF6C299B85(__this, L_0, NULL, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_mB88272E0588B53E913EC3CED58A35D185FE50B0D (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___status0, RuntimeObject * ___message1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.SetOnlineStatus(status, message, false);
		int32_t L_0 = ___status0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ChatClient_SetOnlineStatus_mC9DBD5B31D8A48987B17A7E4C7A6D8CF6C299B85(__this, L_0, L_1, (bool)0, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Photon.Chat.ChatClient::AddFriends(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_AddFriends_mCC05D291C9509A0F4D776428BC69AFF28DD25AB7 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___friends0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_AddFriends_mCC05D291C9509A0F4D776428BC69AFF28DD25AB7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B7_0 = 0;
	{
		// if (!this.CanChat)
		bool L_0 = ChatClient_get_CanChat_m303DEA407E43F29A30A67CF23FA9BF1D8CDC28F7(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_2 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "AddFriends called while not connected to front end server.");
		RuntimeObject* L_4 = __this->get_listener_17();
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_4, 1, _stringLiteral68E21592360E435244D8BD55506FC51CCA67E430);
	}

IL_0033:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0107;
	}

IL_003a:
	{
		// if (friends == null || friends.Length == 0)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = ___friends0;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = ___friends0;
		NullCheck(L_6);
		G_B7_0 = ((((int32_t)(((RuntimeArray*)L_6)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B7_0 = 1;
	}

IL_0045:
	{
		V_4 = (bool)G_B7_0;
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0079;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_8 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_8) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0072;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "AddFriends can't be called for empty or null list.");
		RuntimeObject* L_10 = __this->get_listener_17();
		NullCheck(L_10);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_10, 2, _stringLiteralCC8A9D016C6E2C07A8B03493514472F62C594C42);
	}

IL_0072:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0107;
	}

IL_0079:
	{
		// if (friends.Length > FriendRequestListMax)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = ___friends0;
		NullCheck(L_11);
		V_6 = (bool)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))) > ((int32_t)((int32_t)1024)))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_00e2;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_13 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_13) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_00de;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "AddFriends max list size exceeded: " + friends.Length + " > " + FriendRequestListMax);
		RuntimeObject* L_15 = __this->get_listener_17();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralC03619A6D8E3BC5B2795B980A17D5A6CBC187308);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralC03619A6D8E3BC5B2795B980A17D5A6CBC187308);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_17;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_19 = ___friends0;
		NullCheck(L_19);
		int32_t L_20 = (((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))));
		RuntimeObject * L_21 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_21);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = L_18;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteralB4992CF8FE071D46902C6E742001E921CD3995B5);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralB4992CF8FE071D46902C6E742001E921CD3995B5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = L_22;
		int32_t L_24 = ((int32_t)1024);
		RuntimeObject * L_25 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_25);
		String_t* L_26 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_23, /*hidden argument*/NULL);
		NullCheck(L_15);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_15, 2, L_26);
	}

IL_00de:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0107;
	}

IL_00e2:
	{
		// Dictionary<byte, object> parameters = new Dictionary<byte, object>
		//     {
		//         { ChatParameterCode.Friends, friends },
		//     };
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_27 = (Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 *)il2cpp_codegen_object_new(Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mB6A7105EE88A811F75E9529C0230DE29BC579C6A(L_27, /*hidden argument*/Dictionary_2__ctor_mB6A7105EE88A811F75E9529C0230DE29BC579C6A_RuntimeMethod_var);
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_28 = L_27;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_29 = ___friends0;
		NullCheck(L_28);
		Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22(L_28, (uint8_t)((int32_t)11), (RuntimeObject *)(RuntimeObject *)L_29, /*hidden argument*/Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22_RuntimeMethod_var);
		V_0 = L_28;
		// return this.chatPeer.SendOperation(ChatOperationCode.AddFriends, parameters, SendOptions.SendReliable);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_30 = __this->get_chatPeer_18();
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5_il2cpp_TypeInfo_var);
		SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  L_32 = ((SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_30);
		bool L_33 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 *, SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_30, (uint8_t)6, L_31, L_32);
		V_3 = L_33;
		goto IL_0107;
	}

IL_0107:
	{
		// }
		bool L_34 = V_3;
		return L_34;
	}
}
// System.Boolean Photon.Chat.ChatClient::RemoveFriends(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_RemoveFriends_m55D5D9623A9B84C801016004A1E436F606417513 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___friends0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_RemoveFriends_m55D5D9623A9B84C801016004A1E436F606417513_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B7_0 = 0;
	{
		// if (!this.CanChat)
		bool L_0 = ChatClient_get_CanChat_m303DEA407E43F29A30A67CF23FA9BF1D8CDC28F7(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_2 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "RemoveFriends called while not connected to front end server.");
		RuntimeObject* L_4 = __this->get_listener_17();
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_4, 1, _stringLiteralABF28A6D84BA34B35ADF7EB356198FF5875435E5);
	}

IL_0033:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0107;
	}

IL_003a:
	{
		// if (friends == null || friends.Length == 0)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = ___friends0;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = ___friends0;
		NullCheck(L_6);
		G_B7_0 = ((((int32_t)(((RuntimeArray*)L_6)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B7_0 = 1;
	}

IL_0045:
	{
		V_4 = (bool)G_B7_0;
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0079;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_8 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_8) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0072;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "RemoveFriends can't be called for empty or null list.");
		RuntimeObject* L_10 = __this->get_listener_17();
		NullCheck(L_10);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_10, 2, _stringLiteral29683C1799AE0C427BB58C8BF974A0FB8AA9BFC9);
	}

IL_0072:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0107;
	}

IL_0079:
	{
		// if (friends.Length > FriendRequestListMax)
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = ___friends0;
		NullCheck(L_11);
		V_6 = (bool)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))) > ((int32_t)((int32_t)1024)))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_00e2;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_13 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_13) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_00de;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "RemoveFriends max list size exceeded: " + friends.Length + " > " + FriendRequestListMax);
		RuntimeObject* L_15 = __this->get_listener_17();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralBA31FDB9D9DF30D820D828B03F9C4D72781B8C2E);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralBA31FDB9D9DF30D820D828B03F9C4D72781B8C2E);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_17;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_19 = ___friends0;
		NullCheck(L_19);
		int32_t L_20 = (((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))));
		RuntimeObject * L_21 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_21);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = L_18;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteralB4992CF8FE071D46902C6E742001E921CD3995B5);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralB4992CF8FE071D46902C6E742001E921CD3995B5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = L_22;
		int32_t L_24 = ((int32_t)1024);
		RuntimeObject * L_25 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_25);
		String_t* L_26 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_23, /*hidden argument*/NULL);
		NullCheck(L_15);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_15, 2, L_26);
	}

IL_00de:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0107;
	}

IL_00e2:
	{
		// Dictionary<byte, object> parameters = new Dictionary<byte, object>
		//     {
		//         { ChatParameterCode.Friends, friends },
		//     };
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_27 = (Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 *)il2cpp_codegen_object_new(Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mB6A7105EE88A811F75E9529C0230DE29BC579C6A(L_27, /*hidden argument*/Dictionary_2__ctor_mB6A7105EE88A811F75E9529C0230DE29BC579C6A_RuntimeMethod_var);
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_28 = L_27;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_29 = ___friends0;
		NullCheck(L_28);
		Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22(L_28, (uint8_t)((int32_t)11), (RuntimeObject *)(RuntimeObject *)L_29, /*hidden argument*/Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22_RuntimeMethod_var);
		V_0 = L_28;
		// return this.chatPeer.SendOperation(ChatOperationCode.RemoveFriends, parameters, SendOptions.SendReliable);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_30 = __this->get_chatPeer_18();
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5_il2cpp_TypeInfo_var);
		SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  L_32 = ((SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_30);
		bool L_33 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 *, SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_30, (uint8_t)7, L_31, L_32);
		V_3 = L_33;
		goto IL_0107;
	}

IL_0107:
	{
		// }
		bool L_34 = V_3;
		return L_34;
	}
}
// System.String Photon.Chat.ChatClient::GetPrivateChannelNameByUser(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatClient_GetPrivateChannelNameByUser_mF71560A0FA905208F34FCA6331BD19051A598F2E (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___userName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_GetPrivateChannelNameByUser_mF71560A0FA905208F34FCA6331BD19051A598F2E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Format("{0}:{1}", this.UserId, userName);
		String_t* L_0 = ChatClient_get_UserId_m2572A1A6BB1413F845DED350093EAAFD6B518291(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___userName0;
		String_t* L_2 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralE7B85E7369BA50B83804EBF39E9612010E5B9FCD, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Photon.Chat.ChatClient::TryGetChannel(System.String,System.Boolean,Photon.Chat.ChatChannel&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_TryGetChannel_m1353AC1501810593E12AD94C6B40A9DCA4272E5D (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___channelName0, bool ___isPrivate1, ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** ___channel2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_TryGetChannel_m1353AC1501810593E12AD94C6B40A9DCA4272E5D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!isPrivate)
		bool L_0 = ___isPrivate1;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// return this.PublicChannels.TryGetValue(channelName, out channel);
		Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * L_2 = __this->get_PublicChannels_14();
		String_t* L_3 = ___channelName0;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** L_4 = ___channel2;
		NullCheck(L_2);
		bool L_5 = Dictionary_2_TryGetValue_m7EC41F88DF244877D026C2F83474F908A60E7091(L_2, L_3, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)L_4, /*hidden argument*/Dictionary_2_TryGetValue_m7EC41F88DF244877D026C2F83474F908A60E7091_RuntimeMethod_var);
		V_1 = L_5;
		goto IL_002b;
	}

IL_001a:
	{
		// return this.PrivateChannels.TryGetValue(channelName, out channel);
		Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * L_6 = __this->get_PrivateChannels_15();
		String_t* L_7 = ___channelName0;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** L_8 = ___channel2;
		NullCheck(L_6);
		bool L_9 = Dictionary_2_TryGetValue_m7EC41F88DF244877D026C2F83474F908A60E7091(L_6, L_7, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)L_8, /*hidden argument*/Dictionary_2_TryGetValue_m7EC41F88DF244877D026C2F83474F908A60E7091_RuntimeMethod_var);
		V_1 = L_9;
		goto IL_002b;
	}

IL_002b:
	{
		// }
		bool L_10 = V_1;
		return L_10;
	}
}
// System.Boolean Photon.Chat.ChatClient::TryGetChannel(System.String,Photon.Chat.ChatChannel&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_TryGetChannel_m98591C6D7F4304FAC4F1FAE967DC8AD8B36C684B (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___channelName0, ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** ___channel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_TryGetChannel_m98591C6D7F4304FAC4F1FAE967DC8AD8B36C684B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// bool found = false;
		V_0 = (bool)0;
		// found = this.PublicChannels.TryGetValue(channelName, out channel);
		Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * L_0 = __this->get_PublicChannels_14();
		String_t* L_1 = ___channelName0;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** L_2 = ___channel1;
		NullCheck(L_0);
		bool L_3 = Dictionary_2_TryGetValue_m7EC41F88DF244877D026C2F83474F908A60E7091(L_0, L_1, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)L_2, /*hidden argument*/Dictionary_2_TryGetValue_m7EC41F88DF244877D026C2F83474F908A60E7091_RuntimeMethod_var);
		V_0 = L_3;
		// if (found) return true;
		bool L_4 = V_0;
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001a;
		}
	}
	{
		// if (found) return true;
		V_2 = (bool)1;
		goto IL_002c;
	}

IL_001a:
	{
		// found = this.PrivateChannels.TryGetValue(channelName, out channel);
		Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * L_6 = __this->get_PrivateChannels_15();
		String_t* L_7 = ___channelName0;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** L_8 = ___channel1;
		NullCheck(L_6);
		bool L_9 = Dictionary_2_TryGetValue_m7EC41F88DF244877D026C2F83474F908A60E7091(L_6, L_7, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)L_8, /*hidden argument*/Dictionary_2_TryGetValue_m7EC41F88DF244877D026C2F83474F908A60E7091_RuntimeMethod_var);
		V_0 = L_9;
		// return found;
		bool L_10 = V_0;
		V_2 = L_10;
		goto IL_002c;
	}

IL_002c:
	{
		// }
		bool L_11 = V_2;
		return L_11;
	}
}
// System.Boolean Photon.Chat.ChatClient::TryGetPrivateChannelByUser(System.String,Photon.Chat.ChatChannel&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_TryGetPrivateChannelByUser_mEC5655F7F36413A2C05FA54794DC7681F0E7EF6A (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___userId0, ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** ___channel1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// channel = null;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** L_0 = ___channel1;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// if (string.IsNullOrEmpty(userId))
		String_t* L_1 = ___userId0;
		bool L_2 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0013;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0027;
	}

IL_0013:
	{
		// string channelName = this.GetPrivateChannelNameByUser(userId);
		String_t* L_4 = ___userId0;
		String_t* L_5 = ChatClient_GetPrivateChannelNameByUser_mF71560A0FA905208F34FCA6331BD19051A598F2E(__this, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// return this.TryGetChannel(channelName, true, out channel);
		String_t* L_6 = V_0;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 ** L_7 = ___channel1;
		bool L_8 = ChatClient_TryGetChannel_m1353AC1501810593E12AD94C6B40A9DCA4272E5D(__this, L_6, (bool)1, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		bool L_9 = V_2;
		return L_9;
	}
}
// System.Void Photon.Chat.ChatClient::set_DebugOut(ExitGames.Client.Photon.DebugLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_set_DebugOut_m263D08A55593DC29D84E2CCF2A3A066E2B4823ED (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// set { this.chatPeer.DebugOut = value; }
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_0 = __this->get_chatPeer_18();
		uint8_t L_1 = ___value0;
		NullCheck(L_0);
		((PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B *)L_0)->set_DebugOut_21(L_1);
		// set { this.chatPeer.DebugOut = value; }
		return;
	}
}
// ExitGames.Client.Photon.DebugLevel Photon.Chat.ChatClient::get_DebugOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0;
	{
		// get { return this.chatPeer.DebugOut; }
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_0 = __this->get_chatPeer_18();
		NullCheck(L_0);
		uint8_t L_1 = ((PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B *)L_0)->get_DebugOut_21();
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return this.chatPeer.DebugOut; }
		uint8_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_DebugReturn_m9AB2FF9E18EC7127670972E2DD50385BEC426F2E (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, uint8_t ___level0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_DebugReturn_m9AB2FF9E18EC7127670972E2DD50385BEC426F2E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.listener.DebugReturn(level, message);
		RuntimeObject* L_0 = __this->get_listener_17();
		uint8_t L_1 = ___level0;
		String_t* L_2 = ___message1;
		NullCheck(L_0);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnEvent_m4B70DC708C4389412313F86427FC18B438ADDB78 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * ___eventData0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		// switch (eventData.Code)
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_0 = ___eventData0;
		NullCheck(L_0);
		uint8_t L_1 = L_0->get_Code_0();
		V_0 = L_1;
		uint8_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0038;
			}
			case 1:
			{
				goto IL_007e;
			}
			case 2:
			{
				goto IL_0042;
			}
			case 3:
			{
				goto IL_007e;
			}
			case 4:
			{
				goto IL_004c;
			}
			case 5:
			{
				goto IL_0056;
			}
			case 6:
			{
				goto IL_0060;
			}
			case 7:
			{
				goto IL_007e;
			}
			case 8:
			{
				goto IL_006a;
			}
			case 9:
			{
				goto IL_0074;
			}
		}
	}
	{
		goto IL_007e;
	}

IL_0038:
	{
		// this.HandleChatMessagesEvent(eventData);
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_3 = ___eventData0;
		ChatClient_HandleChatMessagesEvent_mD1CC9854948A482BB52AD2D486BCB9092F904985(__this, L_3, /*hidden argument*/NULL);
		// break;
		goto IL_007e;
	}

IL_0042:
	{
		// this.HandlePrivateMessageEvent(eventData);
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_4 = ___eventData0;
		ChatClient_HandlePrivateMessageEvent_m67E34A791863D6F6AA6D8A7F0BE55D4F1A51398B(__this, L_4, /*hidden argument*/NULL);
		// break;
		goto IL_007e;
	}

IL_004c:
	{
		// this.HandleStatusUpdate(eventData);
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_5 = ___eventData0;
		ChatClient_HandleStatusUpdate_m3A1743092197AD3987F204CE0CE8F3CA9DA36275(__this, L_5, /*hidden argument*/NULL);
		// break;
		goto IL_007e;
	}

IL_0056:
	{
		// this.HandleSubscribeEvent(eventData);
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_6 = ___eventData0;
		ChatClient_HandleSubscribeEvent_mDA6A915E14078211D73AE270948D3CE2E80A26D6(__this, L_6, /*hidden argument*/NULL);
		// break;
		goto IL_007e;
	}

IL_0060:
	{
		// this.HandleUnsubscribeEvent(eventData);
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_7 = ___eventData0;
		ChatClient_HandleUnsubscribeEvent_m399354AF8F49542D33F7D3B85664314CFCC382BB(__this, L_7, /*hidden argument*/NULL);
		// break;
		goto IL_007e;
	}

IL_006a:
	{
		// this.HandleUserSubscribedEvent(eventData);
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_8 = ___eventData0;
		ChatClient_HandleUserSubscribedEvent_m071B21F5D69AF0F828261CD283AF1342BCBB368F(__this, L_8, /*hidden argument*/NULL);
		// break;
		goto IL_007e;
	}

IL_0074:
	{
		// this.HandleUserUnsubscribedEvent(eventData);
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_9 = ___eventData0;
		ChatClient_HandleUserUnsubscribedEvent_m96BD07F4D888BF64F839E0E5D6FE90A46CAF4CDA(__this, L_9, /*hidden argument*/NULL);
		// break;
		goto IL_007e;
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnOperationResponse(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnOperationResponse_m109C093F33E14C713FC52E875A2191284EFEBD18 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B * ___operationResponse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnOperationResponse_m109C093F33E14C713FC52E875A2191284EFEBD18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B8_0 = 0;
	{
		// switch (operationResponse.OperationCode)
		OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B * L_0 = ___operationResponse0;
		NullCheck(L_0);
		uint8_t L_1 = L_0->get_OperationCode_0();
		V_0 = L_1;
		uint8_t L_2 = V_0;
		if ((!(((uint32_t)L_2) > ((uint32_t)3))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		uint8_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)230))))
		{
			goto IL_0018;
		}
	}
	{
		goto IL_0025;
	}

IL_0018:
	{
		// this.HandleAuthResponse(operationResponse);
		OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B * L_4 = ___operationResponse0;
		ChatClient_HandleAuthResponse_m30E8C187D97C3173D742B17F21C1D72DD410D7A9(__this, L_4, /*hidden argument*/NULL);
		// break;
		goto IL_00ad;
	}

IL_0025:
	{
		// if ((operationResponse.ReturnCode != 0) && (this.DebugOut >= DebugLevel.ERROR))
		OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B * L_5 = ___operationResponse0;
		NullCheck(L_5);
		int16_t L_6 = L_5->get_ReturnCode_1();
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		uint8_t L_7 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		G_B8_0 = ((((int32_t)((((int32_t)L_7) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B8_0 = 0;
	}

IL_003c:
	{
		V_1 = (bool)G_B8_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_00ab;
		}
	}
	{
		// if (operationResponse.ReturnCode == -2)
		OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B * L_9 = ___operationResponse0;
		NullCheck(L_9);
		int16_t L_10 = L_9->get_ReturnCode_1();
		V_2 = (bool)((((int32_t)L_10) == ((int32_t)((int32_t)-2)))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("Chat Operation {0} unknown on server. Check your AppId and make sure it's for a Chat application.", operationResponse.OperationCode));
		RuntimeObject* L_12 = __this->get_listener_17();
		OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B * L_13 = ___operationResponse0;
		NullCheck(L_13);
		uint8_t L_14 = L_13->get_OperationCode_0();
		uint8_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralBCB5C68DA61EECD91A7CBF61D41B0938CEDBCD34, L_16, /*hidden argument*/NULL);
		NullCheck(L_12);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_12, 1, L_17);
		goto IL_00aa;
	}

IL_0075:
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("Chat Operation {0} failed (Code: {1}). Debug Message: {2}", operationResponse.OperationCode, operationResponse.ReturnCode, operationResponse.DebugMessage));
		RuntimeObject* L_18 = __this->get_listener_17();
		OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B * L_19 = ___operationResponse0;
		NullCheck(L_19);
		uint8_t L_20 = L_19->get_OperationCode_0();
		uint8_t L_21 = L_20;
		RuntimeObject * L_22 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_21);
		OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B * L_23 = ___operationResponse0;
		NullCheck(L_23);
		int16_t L_24 = L_23->get_ReturnCode_1();
		int16_t L_25 = L_24;
		RuntimeObject * L_26 = Box(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var, &L_25);
		OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B * L_27 = ___operationResponse0;
		NullCheck(L_27);
		String_t* L_28 = L_27->get_DebugMessage_2();
		String_t* L_29 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteralA8B9D506307E302D77308D7E4A5DB319E04C3EC0, L_22, L_26, L_28, /*hidden argument*/NULL);
		NullCheck(L_18);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_18, 1, L_29);
	}

IL_00aa:
	{
	}

IL_00ab:
	{
		// break;
		goto IL_00ad;
	}

IL_00ad:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnStatusChanged(ExitGames.Client.Photon.StatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnStatusChanged_m6F757ACCC6A3424F269CCA31163E7D3059C7B8CA (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___statusCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnStatusChanged_m6F757ACCC6A3424F269CCA31163E7D3059C7B8CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	String_t* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * G_B29_0 = NULL;
	ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * G_B28_0 = NULL;
	int32_t G_B30_0 = 0;
	ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * G_B30_1 = NULL;
	int32_t G_B41_0 = 0;
	int32_t G_B52_0 = 0;
	{
		// switch (statusCode)
		int32_t L_0 = ___statusCode0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)1022))))
		{
			case 0:
			{
				goto IL_0271;
			}
			case 1:
			{
				goto IL_0271;
			}
			case 2:
			{
				goto IL_0062;
			}
			case 3:
			{
				goto IL_014f;
			}
			case 4:
			{
				goto IL_02ac;
			}
		}
	}
	{
		goto IL_0025;
	}

IL_0025:
	{
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)1039))))
		{
			case 0:
			{
				goto IL_02ac;
			}
			case 1:
			{
				goto IL_02d4;
			}
			case 2:
			{
				goto IL_02b6;
			}
			case 3:
			{
				goto IL_0252;
			}
			case 4:
			{
				goto IL_02c0;
			}
			case 5:
			{
				goto IL_02ca;
			}
			case 6:
			{
				goto IL_030f;
			}
			case 7:
			{
				goto IL_030f;
			}
			case 8:
			{
				goto IL_030f;
			}
			case 9:
			{
				goto IL_0143;
			}
			case 10:
			{
				goto IL_0271;
			}
		}
	}
	{
		goto IL_030f;
	}

IL_0062:
	{
		// if (!this.chatPeer.IsProtocolSecure)
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_3 = __this->get_chatPeer_18();
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean Photon.Chat.ChatPeer::get_IsProtocolSecure() */, L_3);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_00b0;
		}
	}
	{
		// if (!this.chatPeer.EstablishEncryption())
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_6 = __this->get_chatPeer_18();
		NullCheck(L_6);
		bool L_7 = PhotonPeer_EstablishEncryption_m8635FA2B26F476C22D3152B3734ADE787955AE5B(L_6, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_00ad;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_9 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)((((int32_t)L_9) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00ac;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Error establishing encryption");
		RuntimeObject* L_11 = __this->get_listener_17();
		NullCheck(L_11);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_11, 1, _stringLiteralD964D9EDC3903803F850267B4FA83E4185A94ED7);
	}

IL_00ac:
	{
	}

IL_00ad:
	{
		goto IL_00b9;
	}

IL_00b0:
	{
		// this.TryAuthenticateOnNameServer();
		ChatClient_TryAuthenticateOnNameServer_m30CFD6A61727D21120AEC665856462326C7B526D(__this, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		// if (this.State == ChatState.ConnectingToNameServer)
		int32_t L_12 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_12) == ((int32_t)1))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00e6;
		}
	}
	{
		// this.State = ChatState.ConnectedToNameServer;
		ChatClient_set_State_mB4F7447BD9819E2D8EE5E6F169A0AE7A0F49DC1E_inline(__this, 2, /*hidden argument*/NULL);
		// this.listener.OnChatStateChange(this.State);
		RuntimeObject* L_14 = __this->get_listener_17();
		int32_t L_15 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Photon.Chat.IChatClientListener::OnChatStateChange(Photon.Chat.ChatState) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_14, L_15);
		goto IL_013e;
	}

IL_00e6:
	{
		// else if (this.State == ChatState.ConnectingToFrontEnd)
		int32_t L_16 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_16) == ((int32_t)6))? 1 : 0);
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_013e;
		}
	}
	{
		// if (!this.AuthenticateOnFrontEnd())
		bool L_18 = ChatClient_AuthenticateOnFrontEnd_mFA3F028897624959C21DBBEAFABC611E7D40D178(__this, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_013d;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_20 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_20) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_013c;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("Error authenticating on frontend! Check log output, AuthValues and if you're connected. State: {0}", this.State));
		RuntimeObject* L_22 = __this->get_listener_17();
		int32_t L_23 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		int32_t L_24 = L_23;
		RuntimeObject * L_25 = Box(ChatState_tABA9DDB2C18934215ADACBF403DF9FD0A71D8B79_il2cpp_TypeInfo_var, &L_24);
		String_t* L_26 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral551EBFB5CCD80CC20586837AC559715F59BC0147, L_25, /*hidden argument*/NULL);
		NullCheck(L_22);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_22, 1, L_26);
	}

IL_013c:
	{
	}

IL_013d:
	{
	}

IL_013e:
	{
		// break;
		goto IL_030f;
	}

IL_0143:
	{
		// this.TryAuthenticateOnNameServer();
		ChatClient_TryAuthenticateOnNameServer_m30CFD6A61727D21120AEC665856462326C7B526D(__this, /*hidden argument*/NULL);
		// break;
		goto IL_030f;
	}

IL_014f:
	{
		// switch (this.State)
		int32_t L_27 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		V_8 = L_27;
		int32_t L_28 = V_8;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_015e;
	}

IL_015e:
	{
		int32_t L_29 = V_8;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)10))))
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0166;
	}

IL_0166:
	{
		int32_t L_30 = V_8;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)12))))
		{
			goto IL_016e;
		}
	}
	{
		goto IL_01c7;
	}

IL_016e:
	{
		// this.EnableProtocolFallback = false;        
		ChatClient_set_EnableProtocolFallback_mD96C363154CC46C3CF5AA432346DBC78EEFE474F_inline(__this, (bool)0, /*hidden argument*/NULL);
		// this.chatPeer.NameServerPortOverride = 0;   
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_31 = __this->get_chatPeer_18();
		NullCheck(L_31);
		L_31->set_NameServerPortOverride_62((uint16_t)0);
		// this.chatPeer.TransportProtocol = (this.chatPeer.TransportProtocol == ConnectionProtocol.Tcp) ? ConnectionProtocol.Udp : ConnectionProtocol.Tcp;
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_32 = __this->get_chatPeer_18();
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_33 = __this->get_chatPeer_18();
		NullCheck(L_33);
		uint8_t L_34 = PhotonPeer_get_TransportProtocol_m767D7E412A9F27CD9689630891F5506575307C4E_inline(L_33, /*hidden argument*/NULL);
		G_B28_0 = L_32;
		if ((((int32_t)L_34) == ((int32_t)1)))
		{
			G_B29_0 = L_32;
			goto IL_0199;
		}
	}
	{
		G_B30_0 = 1;
		G_B30_1 = G_B28_0;
		goto IL_019a;
	}

IL_0199:
	{
		G_B30_0 = 0;
		G_B30_1 = G_B29_0;
	}

IL_019a:
	{
		NullCheck(G_B30_1);
		PhotonPeer_set_TransportProtocol_m80F1A37AC3F8CA8715B4C94B5CCABA6F2212725B_inline(G_B30_1, G_B30_0, /*hidden argument*/NULL);
		// this.Connect(this.AppId, this.AppVersion, null);
		String_t* L_35 = ChatClient_get_AppId_mA154B74C72A401D4A2569B9D1DBE815AC26AB8CC_inline(__this, /*hidden argument*/NULL);
		String_t* L_36 = ChatClient_get_AppVersion_m325B5082717878BDB33E2AD0F338BA920984489B_inline(__this, /*hidden argument*/NULL);
		ChatClient_Connect_m6A720637091E96EB0559F3BEAF85B0415BB0D376(__this, L_35, L_36, (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 *)NULL, /*hidden argument*/NULL);
		// return;
		goto IL_030f;
	}

IL_01b9:
	{
		// this.ConnectToFrontEnd();
		ChatClient_ConnectToFrontEnd_m11CB8643B389250359AC98B8B7D9E6405EA56B7C(__this, /*hidden argument*/NULL);
		// return;
		goto IL_030f;
	}

IL_01c5:
	{
		// break;
		goto IL_020c;
	}

IL_01c7:
	{
		// string stacktrace = string.Empty;
		String_t* L_37 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_9 = L_37;
		// stacktrace = new System.Diagnostics.StackTrace(true).ToString();
		StackTrace_tD5D45826A379D8DF0CFB2CA206D992EE718C7E99 * L_38 = (StackTrace_tD5D45826A379D8DF0CFB2CA206D992EE718C7E99 *)il2cpp_codegen_object_new(StackTrace_tD5D45826A379D8DF0CFB2CA206D992EE718C7E99_il2cpp_TypeInfo_var);
		StackTrace__ctor_mCF16893B6C5EEC13841370A064CFF74E9F54E997(L_38, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_38);
		String_t* L_39 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_38);
		V_9 = L_39;
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Got a unexpected Disconnect in ChatState: {0}. Server: {1} Trace: {2}", this.State, this.chatPeer.ServerAddress, stacktrace));
		RuntimeObject* L_40 = __this->get_listener_17();
		int32_t L_41 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		int32_t L_42 = L_41;
		RuntimeObject * L_43 = Box(ChatState_tABA9DDB2C18934215ADACBF403DF9FD0A71D8B79_il2cpp_TypeInfo_var, &L_42);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_44 = __this->get_chatPeer_18();
		NullCheck(L_44);
		String_t* L_45 = PhotonPeer_get_ServerAddress_mA78ED5E85749B747D7130E710A174555C134C6A3(L_44, /*hidden argument*/NULL);
		String_t* L_46 = V_9;
		String_t* L_47 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteral103C55E7DFE64F67542769202574517D87109190, L_43, L_45, L_46, /*hidden argument*/NULL);
		NullCheck(L_40);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_40, 2, L_47);
		// break;
		goto IL_020c;
	}

IL_020c:
	{
		// if (this.AuthValues != null)
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_48 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline(__this, /*hidden argument*/NULL);
		V_10 = (bool)((!(((RuntimeObject*)(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 *)L_48) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_49 = V_10;
		if (!L_49)
		{
			goto IL_022a;
		}
	}
	{
		// this.AuthValues.Token = null; 
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_50 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_50);
		AuthenticationValues_set_Token_m3DC66AD2E8DE2C36870A4B143CFE817A518C079F_inline(L_50, NULL, /*hidden argument*/NULL);
	}

IL_022a:
	{
		// this.State = ChatState.Disconnected;
		ChatClient_set_State_mB4F7447BD9819E2D8EE5E6F169A0AE7A0F49DC1E_inline(__this, ((int32_t)11), /*hidden argument*/NULL);
		// this.listener.OnChatStateChange(ChatState.Disconnected);
		RuntimeObject* L_51 = __this->get_listener_17();
		NullCheck(L_51);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Photon.Chat.IChatClientListener::OnChatStateChange(Photon.Chat.ChatState) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_51, ((int32_t)11));
		// this.listener.OnDisconnected();
		RuntimeObject* L_52 = __this->get_listener_17();
		NullCheck(L_52);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Photon.Chat.IChatClientListener::OnDisconnected() */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_52);
		// break;
		goto IL_030f;
	}

IL_0252:
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "This connection was rejected due to the apps CCU limit.");
		RuntimeObject* L_53 = __this->get_listener_17();
		NullCheck(L_53);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_53, 1, _stringLiteral384A0C94086D36412431EB0508F6F2D1985B9A68);
		// this.Disconnect(ChatDisconnectCause.MaxCcuReached);
		ChatClient_Disconnect_m78C5220E4F2DA2FAEDFD0C75123D6E5B1376E984(__this, 8, /*hidden argument*/NULL);
		// break;
		goto IL_030f;
	}

IL_0271:
	{
		// this.DisconnectedCause = ChatDisconnectCause.ExceptionOnConnect;
		ChatClient_set_DisconnectedCause_m0726D082C1B2F8E366BAC950319DEA20CF09FFDB_inline(__this, 1, /*hidden argument*/NULL);
		// if (this.EnableProtocolFallback && this.State == ChatState.ConnectingToNameServer)
		bool L_54 = ChatClient_get_EnableProtocolFallback_mF139A8C5D666934E37DE8517738CB29DD3CD5789_inline(__this, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_028c;
		}
	}
	{
		int32_t L_55 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		G_B41_0 = ((((int32_t)L_55) == ((int32_t)1))? 1 : 0);
		goto IL_028d;
	}

IL_028c:
	{
		G_B41_0 = 0;
	}

IL_028d:
	{
		V_11 = (bool)G_B41_0;
		bool L_56 = V_11;
		if (!L_56)
		{
			goto IL_02a0;
		}
	}
	{
		// this.State = ChatState.ConnectWithFallbackProtocol;
		ChatClient_set_State_mB4F7447BD9819E2D8EE5E6F169A0AE7A0F49DC1E_inline(__this, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_02aa;
	}

IL_02a0:
	{
		// this.Disconnect(ChatDisconnectCause.ExceptionOnConnect);
		ChatClient_Disconnect_m78C5220E4F2DA2FAEDFD0C75123D6E5B1376E984(__this, 1, /*hidden argument*/NULL);
	}

IL_02aa:
	{
		// break;
		goto IL_030f;
	}

IL_02ac:
	{
		// this.Disconnect(ChatDisconnectCause.Exception);
		ChatClient_Disconnect_m78C5220E4F2DA2FAEDFD0C75123D6E5B1376E984(__this, 6, /*hidden argument*/NULL);
		// break;
		goto IL_030f;
	}

IL_02b6:
	{
		// this.Disconnect(ChatDisconnectCause.ServerTimeout);
		ChatClient_Disconnect_m78C5220E4F2DA2FAEDFD0C75123D6E5B1376E984(__this, 4, /*hidden argument*/NULL);
		// break;
		goto IL_030f;
	}

IL_02c0:
	{
		// this.Disconnect(ChatDisconnectCause.DisconnectByServerLogic);
		ChatClient_Disconnect_m78C5220E4F2DA2FAEDFD0C75123D6E5B1376E984(__this, 2, /*hidden argument*/NULL);
		// break;
		goto IL_030f;
	}

IL_02ca:
	{
		// this.Disconnect(ChatDisconnectCause.DisconnectByServerReasonUnknown);
		ChatClient_Disconnect_m78C5220E4F2DA2FAEDFD0C75123D6E5B1376E984(__this, 3, /*hidden argument*/NULL);
		// break;
		goto IL_030f;
	}

IL_02d4:
	{
		// this.DisconnectedCause = ChatDisconnectCause.ClientTimeout;
		ChatClient_set_DisconnectedCause_m0726D082C1B2F8E366BAC950319DEA20CF09FFDB_inline(__this, 5, /*hidden argument*/NULL);
		// if (this.EnableProtocolFallback && this.State == ChatState.ConnectingToNameServer)
		bool L_57 = ChatClient_get_EnableProtocolFallback_mF139A8C5D666934E37DE8517738CB29DD3CD5789_inline(__this, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_02ef;
		}
	}
	{
		int32_t L_58 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		G_B52_0 = ((((int32_t)L_58) == ((int32_t)1))? 1 : 0);
		goto IL_02f0;
	}

IL_02ef:
	{
		G_B52_0 = 0;
	}

IL_02f0:
	{
		V_12 = (bool)G_B52_0;
		bool L_59 = V_12;
		if (!L_59)
		{
			goto IL_0303;
		}
	}
	{
		// this.State = ChatState.ConnectWithFallbackProtocol;
		ChatClient_set_State_mB4F7447BD9819E2D8EE5E6F169A0AE7A0F49DC1E_inline(__this, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_030d;
	}

IL_0303:
	{
		// this.Disconnect(ChatDisconnectCause.ClientTimeout);
		ChatClient_Disconnect_m78C5220E4F2DA2FAEDFD0C75123D6E5B1376E984(__this, 5, /*hidden argument*/NULL);
	}

IL_030d:
	{
		// break;
		goto IL_030f;
	}

IL_030f:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::TryAuthenticateOnNameServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_TryAuthenticateOnNameServer_m30CFD6A61727D21120AEC665856462326C7B526D (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_TryAuthenticateOnNameServer_m30CFD6A61727D21120AEC665856462326C7B526D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (!this.didAuthenticate)
		bool L_0 = __this->get_didAuthenticate_20();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		// this.didAuthenticate = this.chatPeer.AuthenticateOnNameServer(this.AppId, this.AppVersion, this.chatRegion, this.AuthValues);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_2 = __this->get_chatPeer_18();
		String_t* L_3 = ChatClient_get_AppId_mA154B74C72A401D4A2569B9D1DBE815AC26AB8CC_inline(__this, /*hidden argument*/NULL);
		String_t* L_4 = ChatClient_get_AppVersion_m325B5082717878BDB33E2AD0F338BA920984489B_inline(__this, /*hidden argument*/NULL);
		String_t* L_5 = __this->get_chatRegion_6();
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_6 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_7 = ChatPeer_AuthenticateOnNameServer_mEE9E9AC65A21D029BB21F0D3BFDDAFE0D79316BB(L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		__this->set_didAuthenticate_20(L_7);
		// if (!this.didAuthenticate)
		bool L_8 = __this->get_didAuthenticate_20();
		V_1 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_007b;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_10 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_10) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_007a;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("Error calling OpAuthenticate! Did not work on NameServer. Check log output, AuthValues and if you're connected. State: {0}", this.State));
		RuntimeObject* L_12 = __this->get_listener_17();
		int32_t L_13 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(ChatState_tABA9DDB2C18934215ADACBF403DF9FD0A71D8B79_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral6FE4B9203298E5B74393E0818142DBF57DA03BB3, L_15, /*hidden argument*/NULL);
		NullCheck(L_12);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_12, 1, L_16);
	}

IL_007a:
	{
	}

IL_007b:
	{
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendChannelOperation(System.String[],System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendChannelOperation_m18D325052913A99B794CF2CC4B24D290344B97AF (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___channels0, uint8_t ___operation1, int32_t ___historyLength2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_SendChannelOperation_m18D325052913A99B794CF2CC4B24D290344B97AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// Dictionary<byte, object> opParameters = new Dictionary<byte, object> { { (byte)ChatParameterCode.Channels, channels } };
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_0 = (Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 *)il2cpp_codegen_object_new(Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mB6A7105EE88A811F75E9529C0230DE29BC579C6A(L_0, /*hidden argument*/Dictionary_2__ctor_mB6A7105EE88A811F75E9529C0230DE29BC579C6A_RuntimeMethod_var);
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_1 = L_0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = ___channels0;
		NullCheck(L_1);
		Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22(L_1, (uint8_t)0, (RuntimeObject *)(RuntimeObject *)L_2, /*hidden argument*/Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22_RuntimeMethod_var);
		V_0 = L_1;
		// if (historyLength != 0)
		int32_t L_3 = ___historyLength2;
		V_1 = (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// opParameters.Add((byte)ChatParameterCode.HistoryLength, historyLength);
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_5 = V_0;
		int32_t L_6 = ___historyLength2;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22(L_5, (uint8_t)((int32_t)14), L_8, /*hidden argument*/Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22_RuntimeMethod_var);
	}

IL_0029:
	{
		// return this.chatPeer.SendOperation(operation, opParameters, SendOptions.SendReliable);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_9 = __this->get_chatPeer_18();
		uint8_t L_10 = ___operation1;
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5_il2cpp_TypeInfo_var);
		SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  L_12 = ((SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_9);
		bool L_13 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 *, SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_9, L_10, L_11, L_12);
		V_2 = L_13;
		goto IL_003e;
	}

IL_003e:
	{
		// }
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Void Photon.Chat.ChatClient::HandlePrivateMessageEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandlePrivateMessageEvent_m67E34A791863D6F6AA6D8A7F0BE55D4F1A51398B (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandlePrivateMessageEvent_m67E34A791863D6F6AA6D8A7F0BE55D4F1A51398B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * V_4 = NULL;
	bool V_5 = false;
	String_t* V_6 = NULL;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	{
		// object message = (object)eventData.Parameters[(byte)ChatParameterCode.Message];
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_0 = ___eventData0;
		NullCheck(L_0);
		ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2 = ParameterDictionary_get_Item_m1D37EB387177C5154937E23B8BEBF97FC1B72F71(L_1, (uint8_t)3, /*hidden argument*/NULL);
		V_0 = L_2;
		// string sender = (string)eventData.Parameters[(byte)ChatParameterCode.Sender];
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_3 = ___eventData0;
		NullCheck(L_3);
		ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5 = ParameterDictionary_get_Item_m1D37EB387177C5154937E23B8BEBF97FC1B72F71(L_4, (uint8_t)5, /*hidden argument*/NULL);
		V_1 = ((String_t*)CastclassSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
		// int msgId = (int)eventData.Parameters[ChatParameterCode.MsgId];
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_6 = ___eventData0;
		NullCheck(L_6);
		ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * L_7 = L_6->get_Parameters_1();
		NullCheck(L_7);
		RuntimeObject * L_8 = ParameterDictionary_get_Item_m1D37EB387177C5154937E23B8BEBF97FC1B72F71(L_7, (uint8_t)8, /*hidden argument*/NULL);
		V_2 = ((*(int32_t*)((int32_t*)UnBox(L_8, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var))));
		// if (this.UserId != null && this.UserId.Equals(sender))
		String_t* L_9 = ChatClient_get_UserId_m2572A1A6BB1413F845DED350093EAAFD6B518291(__this, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_10 = ChatClient_get_UserId_m2572A1A6BB1413F845DED350093EAAFD6B518291(__this, /*hidden argument*/NULL);
		String_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_10, L_11, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_12));
		goto IL_0049;
	}

IL_0048:
	{
		G_B3_0 = 0;
	}

IL_0049:
	{
		V_5 = (bool)G_B3_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0073;
		}
	}
	{
		// string target = (string)eventData.Parameters[(byte)ChatParameterCode.UserId];
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_14 = ___eventData0;
		NullCheck(L_14);
		ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * L_15 = L_14->get_Parameters_1();
		NullCheck(L_15);
		RuntimeObject * L_16 = ParameterDictionary_get_Item_m1D37EB387177C5154937E23B8BEBF97FC1B72F71(L_15, (uint8_t)((int32_t)225), /*hidden argument*/NULL);
		V_6 = ((String_t*)CastclassSealed((RuntimeObject*)L_16, String_t_il2cpp_TypeInfo_var));
		// channelName = this.GetPrivateChannelNameByUser(target);
		String_t* L_17 = V_6;
		String_t* L_18 = ChatClient_GetPrivateChannelNameByUser_mF71560A0FA905208F34FCA6331BD19051A598F2E(__this, L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		goto IL_007d;
	}

IL_0073:
	{
		// channelName = this.GetPrivateChannelNameByUser(sender);
		String_t* L_19 = V_1;
		String_t* L_20 = ChatClient_GetPrivateChannelNameByUser_mF71560A0FA905208F34FCA6331BD19051A598F2E(__this, L_19, /*hidden argument*/NULL);
		V_3 = L_20;
	}

IL_007d:
	{
		// if (!this.PrivateChannels.TryGetValue(channelName, out channel))
		Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * L_21 = __this->get_PrivateChannels_15();
		String_t* L_22 = V_3;
		NullCheck(L_21);
		bool L_23 = Dictionary_2_TryGetValue_m7EC41F88DF244877D026C2F83474F908A60E7091(L_21, L_22, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)(&V_4), /*hidden argument*/Dictionary_2_TryGetValue_m7EC41F88DF244877D026C2F83474F908A60E7091_RuntimeMethod_var);
		V_7 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_00c9;
		}
	}
	{
		// channel = new ChatChannel(channelName);
		String_t* L_25 = V_3;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_26 = (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 *)il2cpp_codegen_object_new(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579_il2cpp_TypeInfo_var);
		ChatChannel__ctor_mA5DF33529980160873130ACB6B51CC8D3CF23C83(L_26, L_25, /*hidden argument*/NULL);
		V_4 = L_26;
		// channel.IsPrivate = true;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_27 = V_4;
		NullCheck(L_27);
		ChatChannel_set_IsPrivate_m1BA5274B9E487BB6284FDFBAFDF12C1074F86A28_inline(L_27, (bool)1, /*hidden argument*/NULL);
		// channel.MessageLimit = this.MessageLimit;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_28 = V_4;
		int32_t L_29 = __this->get_MessageLimit_12();
		NullCheck(L_28);
		L_28->set_MessageLimit_3(L_29);
		// this.PrivateChannels.Add(channel.Name, channel);
		Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * L_30 = __this->get_PrivateChannels_15();
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_31 = V_4;
		NullCheck(L_31);
		String_t* L_32 = L_31->get_Name_0();
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_33 = V_4;
		NullCheck(L_30);
		Dictionary_2_Add_mB579D5185AC1EF2912F278C7DB76633544C91C5B(L_30, L_32, L_33, /*hidden argument*/Dictionary_2_Add_mB579D5185AC1EF2912F278C7DB76633544C91C5B_RuntimeMethod_var);
	}

IL_00c9:
	{
		// channel.Add(sender, message, msgId);
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_34 = V_4;
		String_t* L_35 = V_1;
		RuntimeObject * L_36 = V_0;
		int32_t L_37 = V_2;
		NullCheck(L_34);
		ChatChannel_Add_m27C5E5A559983353AB0D695A3A82056B23B6853E(L_34, L_35, L_36, L_37, /*hidden argument*/NULL);
		// this.listener.OnPrivateMessage(sender, message, channelName);
		RuntimeObject* L_38 = __this->get_listener_17();
		String_t* L_39 = V_1;
		RuntimeObject * L_40 = V_0;
		String_t* L_41 = V_3;
		NullCheck(L_38);
		InterfaceActionInvoker3< String_t*, RuntimeObject *, String_t* >::Invoke(5 /* System.Void Photon.Chat.IChatClientListener::OnPrivateMessage(System.String,System.Object,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_38, L_39, L_40, L_41);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleChatMessagesEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleChatMessagesEvent_mD1CC9854948A482BB52AD2D486BCB9092F904985 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleChatMessagesEvent_mD1CC9854948A482BB52AD2D486BCB9092F904985_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	{
		// object[] messages = (object[])eventData.Parameters[(byte)ChatParameterCode.Messages];
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_0 = ___eventData0;
		NullCheck(L_0);
		ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2 = ParameterDictionary_get_Item_m1D37EB387177C5154937E23B8BEBF97FC1B72F71(L_1, (uint8_t)2, /*hidden argument*/NULL);
		V_0 = ((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)Castclass((RuntimeObject*)L_2, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var));
		// string[] senders = (string[])eventData.Parameters[(byte)ChatParameterCode.Senders];
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_3 = ___eventData0;
		NullCheck(L_3);
		ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5 = ParameterDictionary_get_Item_m1D37EB387177C5154937E23B8BEBF97FC1B72F71(L_4, (uint8_t)4, /*hidden argument*/NULL);
		V_1 = ((StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)Castclass((RuntimeObject*)L_5, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var));
		// string channelName = (string)eventData.Parameters[(byte)ChatParameterCode.Channel];
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_6 = ___eventData0;
		NullCheck(L_6);
		ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * L_7 = L_6->get_Parameters_1();
		NullCheck(L_7);
		RuntimeObject * L_8 = ParameterDictionary_get_Item_m1D37EB387177C5154937E23B8BEBF97FC1B72F71(L_7, (uint8_t)1, /*hidden argument*/NULL);
		V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
		// int lastMsgId = (int)eventData.Parameters[ChatParameterCode.MsgId];
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_9 = ___eventData0;
		NullCheck(L_9);
		ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * L_10 = L_9->get_Parameters_1();
		NullCheck(L_10);
		RuntimeObject * L_11 = ParameterDictionary_get_Item_m1D37EB387177C5154937E23B8BEBF97FC1B72F71(L_10, (uint8_t)8, /*hidden argument*/NULL);
		V_3 = ((*(int32_t*)((int32_t*)UnBox(L_11, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var))));
		// if (!this.PublicChannels.TryGetValue(channelName, out channel))
		Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * L_12 = __this->get_PublicChannels_14();
		String_t* L_13 = V_2;
		NullCheck(L_12);
		bool L_14 = Dictionary_2_TryGetValue_m7EC41F88DF244877D026C2F83474F908A60E7091(L_12, L_13, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)(&V_4), /*hidden argument*/Dictionary_2_TryGetValue_m7EC41F88DF244877D026C2F83474F908A60E7091_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0094;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_16 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)((((int32_t)L_16) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_0092;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "Channel " + channelName + " for incoming message event not found.");
		RuntimeObject* L_18 = __this->get_listener_17();
		String_t* L_19 = V_2;
		String_t* L_20 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral8F1AC3BB2037F1143E5E5853C9E7E3990ABDFDEE, L_19, _stringLiteral187DB917BF8928E28C35D9C1A3ACCC7FFE7357D3, /*hidden argument*/NULL);
		NullCheck(L_18);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_18, 2, L_20);
	}

IL_0092:
	{
		// return;
		goto IL_00ae;
	}

IL_0094:
	{
		// channel.Add(senders, messages, lastMsgId);
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_21 = V_4;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_22 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = V_0;
		int32_t L_24 = V_3;
		NullCheck(L_21);
		ChatChannel_Add_m40DB5A55A3C7DFD1195FBF16C50CBFBBECBA3DFA(L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
		// this.listener.OnGetMessages(channelName, senders, messages);
		RuntimeObject* L_25 = __this->get_listener_17();
		String_t* L_26 = V_2;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_27 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = V_0;
		NullCheck(L_25);
		InterfaceActionInvoker3< String_t*, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void Photon.Chat.IChatClientListener::OnGetMessages(System.String,System.String[],System.Object[]) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_25, L_26, L_27, L_28);
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleSubscribeEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleSubscribeEvent_mDA6A915E14078211D73AE270948D3CE2E80A26D6 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleSubscribeEvent_mDA6A915E14078211D73AE270948D3CE2E80A26D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	String_t* V_4 = NULL;
	ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * V_5 = NULL;
	RuntimeObject * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_12 = NULL;
	bool V_13 = false;
	{
		// string[] channelsInResponse = (string[])eventData.Parameters[ChatParameterCode.Channels];
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_0 = ___eventData0;
		NullCheck(L_0);
		ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2 = ParameterDictionary_get_Item_m1D37EB387177C5154937E23B8BEBF97FC1B72F71(L_1, (uint8_t)0, /*hidden argument*/NULL);
		V_0 = ((StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)Castclass((RuntimeObject*)L_2, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var));
		// bool[] results = (bool[])eventData.Parameters[ChatParameterCode.SubscribeResults];
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_3 = ___eventData0;
		NullCheck(L_3);
		ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5 = ParameterDictionary_get_Item_m1D37EB387177C5154937E23B8BEBF97FC1B72F71(L_4, (uint8_t)((int32_t)15), /*hidden argument*/NULL);
		V_1 = ((BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040*)Castclass((RuntimeObject*)L_5, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040_il2cpp_TypeInfo_var));
		// for (int i = 0; i < channelsInResponse.Length; i++)
		V_2 = 0;
		goto IL_00ff;
	}

IL_002d:
	{
		// if (results[i])
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (uint8_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = (bool)L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00fa;
		}
	}
	{
		// string channelName = channelsInResponse[i];
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = V_0;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		String_t* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		// if (!this.PublicChannels.TryGetValue(channelName, out channel))
		Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * L_15 = __this->get_PublicChannels_14();
		String_t* L_16 = V_4;
		NullCheck(L_15);
		bool L_17 = Dictionary_2_TryGetValue_m7EC41F88DF244877D026C2F83474F908A60E7091(L_15, L_16, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)(&V_5), /*hidden argument*/Dictionary_2_TryGetValue_m7EC41F88DF244877D026C2F83474F908A60E7091_RuntimeMethod_var);
		V_7 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0083;
		}
	}
	{
		// channel = new ChatChannel(channelName);
		String_t* L_19 = V_4;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_20 = (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 *)il2cpp_codegen_object_new(ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579_il2cpp_TypeInfo_var);
		ChatChannel__ctor_mA5DF33529980160873130ACB6B51CC8D3CF23C83(L_20, L_19, /*hidden argument*/NULL);
		V_5 = L_20;
		// channel.MessageLimit = this.MessageLimit;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_21 = V_5;
		int32_t L_22 = __this->get_MessageLimit_12();
		NullCheck(L_21);
		L_21->set_MessageLimit_3(L_22);
		// this.PublicChannels.Add(channel.Name, channel);
		Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * L_23 = __this->get_PublicChannels_14();
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_24 = V_5;
		NullCheck(L_24);
		String_t* L_25 = L_24->get_Name_0();
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_26 = V_5;
		NullCheck(L_23);
		Dictionary_2_Add_mB579D5185AC1EF2912F278C7DB76633544C91C5B(L_23, L_25, L_26, /*hidden argument*/Dictionary_2_Add_mB579D5185AC1EF2912F278C7DB76633544C91C5B_RuntimeMethod_var);
	}

IL_0083:
	{
		// if (eventData.Parameters.TryGetValue(ChatParameterCode.Properties, out temp))
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_27 = ___eventData0;
		NullCheck(L_27);
		ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * L_28 = L_27->get_Parameters_1();
		NullCheck(L_28);
		bool L_29 = ParameterDictionary_TryGetValue_mFF3D9727D9763C52EC1784956D3F96A36F06819E(L_28, (uint8_t)((int32_t)22), (RuntimeObject **)(&V_6), /*hidden argument*/NULL);
		V_8 = L_29;
		bool L_30 = V_8;
		if (!L_30)
		{
			goto IL_00ad;
		}
	}
	{
		// Dictionary<object, object> channelProperties = temp as Dictionary<object, object>;
		RuntimeObject * L_31 = V_6;
		V_9 = ((Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)IsInstClass((RuntimeObject*)L_31, Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA_il2cpp_TypeInfo_var));
		// channel.ReadChannelProperties(channelProperties);
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_32 = V_5;
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_33 = V_9;
		NullCheck(L_32);
		ChatChannel_ReadChannelProperties_mE89FAD581BB56A388C0C11FF7387330711DF7A9D(L_32, L_33, /*hidden argument*/NULL);
	}

IL_00ad:
	{
		// if (channel.PublishSubscribers) 
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_34 = V_5;
		NullCheck(L_34);
		bool L_35 = ChatChannel_get_PublishSubscribers_m95072AE75264032C94FBE71EA09F257C889B18EB_inline(L_34, /*hidden argument*/NULL);
		V_10 = L_35;
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_00cf;
		}
	}
	{
		// channel.Subscribers.Add(this.UserId);
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_37 = V_5;
		NullCheck(L_37);
		HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * L_38 = L_37->get_Subscribers_10();
		String_t* L_39 = ChatClient_get_UserId_m2572A1A6BB1413F845DED350093EAAFD6B518291(__this, /*hidden argument*/NULL);
		NullCheck(L_38);
		HashSet_1_Add_mD67974B4739A65BB7950DBB56C8B5CF83C01D4E9(L_38, L_39, /*hidden argument*/HashSet_1_Add_mD67974B4739A65BB7950DBB56C8B5CF83C01D4E9_RuntimeMethod_var);
	}

IL_00cf:
	{
		// if (eventData.Parameters.TryGetValue(ChatParameterCode.ChannelSubscribers, out temp))
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_40 = ___eventData0;
		NullCheck(L_40);
		ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * L_41 = L_40->get_Parameters_1();
		NullCheck(L_41);
		bool L_42 = ParameterDictionary_TryGetValue_mFF3D9727D9763C52EC1784956D3F96A36F06819E(L_41, (uint8_t)((int32_t)23), (RuntimeObject **)(&V_6), /*hidden argument*/NULL);
		V_11 = L_42;
		bool L_43 = V_11;
		if (!L_43)
		{
			goto IL_00f9;
		}
	}
	{
		// string[] subscribers = temp as string[];
		RuntimeObject * L_44 = V_6;
		V_12 = ((StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)IsInst((RuntimeObject*)L_44, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var));
		// channel.AddSubscribers(subscribers);
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_45 = V_5;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_46 = V_12;
		NullCheck(L_45);
		ChatChannel_AddSubscribers_m67F53F0F32C4061FB3870EE624D7481338F950EB(L_45, L_46, /*hidden argument*/NULL);
	}

IL_00f9:
	{
	}

IL_00fa:
	{
		// for (int i = 0; i < channelsInResponse.Length; i++)
		int32_t L_47 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_00ff:
	{
		// for (int i = 0; i < channelsInResponse.Length; i++)
		int32_t L_48 = V_2;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_49 = V_0;
		NullCheck(L_49);
		V_13 = (bool)((((int32_t)L_48) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length))))))? 1 : 0);
		bool L_50 = V_13;
		if (L_50)
		{
			goto IL_002d;
		}
	}
	{
		// this.listener.OnSubscribed(channelsInResponse, results);
		RuntimeObject* L_51 = __this->get_listener_17();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_52 = V_0;
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_53 = V_1;
		NullCheck(L_51);
		InterfaceActionInvoker2< StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* >::Invoke(6 /* System.Void Photon.Chat.IChatClientListener::OnSubscribed(System.String[],System.Boolean[]) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_51, L_52, L_53);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleUnsubscribeEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleUnsubscribeEvent_m399354AF8F49542D33F7D3B85664314CFCC382BB (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleUnsubscribeEvent_m399354AF8F49542D33F7D3B85664314CFCC382BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	bool V_3 = false;
	{
		// string[] channelsInRequest = (string[])eventData[ChatParameterCode.Channels];
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_0 = ___eventData0;
		NullCheck(L_0);
		RuntimeObject * L_1 = EventData_get_Item_m0B6DECAC5E4E913E0B9C2229ABF41797A46E840C(L_0, (uint8_t)0, /*hidden argument*/NULL);
		V_0 = ((StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)Castclass((RuntimeObject*)L_1, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var));
		// for (int i = 0; i < channelsInRequest.Length; i++)
		V_1 = 0;
		goto IL_0036;
	}

IL_0012:
	{
		// string channelName = channelsInRequest[i];
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// this.PublicChannels.Remove(channelName);
		Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * L_6 = __this->get_PublicChannels_14();
		String_t* L_7 = V_2;
		NullCheck(L_6);
		Dictionary_2_Remove_m509D1AC38FEE4D43B0FEF56F2A19329F08EF3138(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_m509D1AC38FEE4D43B0FEF56F2A19329F08EF3138_RuntimeMethod_var);
		// this.PublicChannelsUnsubscribing.Remove(channelName);
		HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * L_8 = __this->get_PublicChannelsUnsubscribing_16();
		String_t* L_9 = V_2;
		NullCheck(L_8);
		HashSet_1_Remove_mE01EC306B6C73A065B00E9A954951FFAB6466DE4(L_8, L_9, /*hidden argument*/HashSet_1_Remove_mE01EC306B6C73A065B00E9A954951FFAB6466DE4_RuntimeMethod_var);
		// for (int i = 0; i < channelsInRequest.Length; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0036:
	{
		// for (int i = 0; i < channelsInRequest.Length; i++)
		int32_t L_11 = V_1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = V_0;
		NullCheck(L_12);
		V_3 = (bool)((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))? 1 : 0);
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_0012;
		}
	}
	{
		// this.listener.OnUnsubscribed(channelsInRequest);
		RuntimeObject* L_14 = __this->get_listener_17();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_15 = V_0;
		NullCheck(L_14);
		InterfaceActionInvoker1< StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* >::Invoke(7 /* System.Void Photon.Chat.IChatClientListener::OnUnsubscribed(System.String[]) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_14, L_15);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleAuthResponse(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleAuthResponse_m30E8C187D97C3173D742B17F21C1D72DD410D7A9 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B * ___operationResponse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleAuthResponse_m30E8C187D97C3173D742B17F21C1D72DD410D7A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	String_t* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int16_t V_11 = 0;
	bool V_12 = false;
	{
		// if (this.DebugOut >= DebugLevel.INFO)
		uint8_t L_0 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.INFO, operationResponse.ToStringFull() + " on: " + this.chatPeer.NameServerAddress);
		RuntimeObject* L_2 = __this->get_listener_17();
		OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B * L_3 = ___operationResponse0;
		NullCheck(L_3);
		String_t* L_4 = OperationResponse_ToStringFull_m3199D448BDD773C8652EF7E3C9ABF422D33FB5EE(L_3, /*hidden argument*/NULL);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_5 = __this->get_chatPeer_18();
		NullCheck(L_5);
		String_t* L_6 = ChatPeer_get_NameServerAddress_mEC869AA34F11AD1F019EA0D6F7090A154DC0CAA7(L_5, /*hidden argument*/NULL);
		String_t* L_7 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_4, _stringLiteral71EBF5DA4A7DF5D098F0A1BC60250ECE10DBEC80, L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_2, 3, L_7);
	}

IL_003b:
	{
		// if (operationResponse.ReturnCode == 0)
		OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B * L_8 = ___operationResponse0;
		NullCheck(L_8);
		int16_t L_9 = L_8->get_ReturnCode_1();
		V_1 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_01f1;
		}
	}
	{
		// if (this.State == ChatState.ConnectedToNameServer)
		int32_t L_11 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_11) == ((int32_t)2))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_017d;
		}
	}
	{
		// this.State = ChatState.Authenticated;
		ChatClient_set_State_mB4F7447BD9819E2D8EE5E6F169A0AE7A0F49DC1E_inline(__this, 4, /*hidden argument*/NULL);
		// this.listener.OnChatStateChange(this.State);
		RuntimeObject* L_13 = __this->get_listener_17();
		int32_t L_14 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Photon.Chat.IChatClientListener::OnChatStateChange(Photon.Chat.ChatState) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_13, L_14);
		// if (operationResponse.Parameters.ContainsKey(ParameterCode.Secret))
		OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B * L_15 = ___operationResponse0;
		NullCheck(L_15);
		ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * L_16 = L_15->get_Parameters_3();
		NullCheck(L_16);
		bool L_17 = ParameterDictionary_ContainsKey_m7FF5DC8A8B0A97143B303A195EDBA8AFC634B4C4(L_16, (uint8_t)((int32_t)221), /*hidden argument*/NULL);
		V_3 = L_17;
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_00eb;
		}
	}
	{
		// if (this.AuthValues == null)
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_19 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline(__this, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 *)L_19) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_00a9;
		}
	}
	{
		// this.AuthValues = new AuthenticationValues();
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_21 = (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 *)il2cpp_codegen_object_new(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78_il2cpp_TypeInfo_var);
		AuthenticationValues__ctor_m32B8E2CA72D7C3EFAADBF65AD18B40C98CAAAB42(L_21, /*hidden argument*/NULL);
		ChatClient_set_AuthValues_mA9F19EDA73501C75C59D69C949B66953CE0B8EFE_inline(__this, L_21, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		// this.AuthValues.Token = operationResponse[ParameterCode.Secret] as string;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_22 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline(__this, /*hidden argument*/NULL);
		OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B * L_23 = ___operationResponse0;
		NullCheck(L_23);
		RuntimeObject * L_24 = OperationResponse_get_Item_m0129E7DF764B87113A443CEA9537478C4040D0BC(L_23, (uint8_t)((int32_t)221), /*hidden argument*/NULL);
		NullCheck(L_22);
		AuthenticationValues_set_Token_m3DC66AD2E8DE2C36870A4B143CFE817A518C079F_inline(L_22, ((String_t*)IsInstSealed((RuntimeObject*)L_24, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// this.FrontendAddress = (string)operationResponse[ParameterCode.Address];
		OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B * L_25 = ___operationResponse0;
		NullCheck(L_25);
		RuntimeObject * L_26 = OperationResponse_get_Item_m0129E7DF764B87113A443CEA9537478C4040D0BC(L_25, (uint8_t)((int32_t)230), /*hidden argument*/NULL);
		ChatClient_set_FrontendAddress_mF45D1E2D49E57DCCB99146E706C21245D972C4CC_inline(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_26, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		// this.chatPeer.Disconnect();
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_27 = __this->get_chatPeer_18();
		NullCheck(L_27);
		VirtActionInvoker0::Invoke(8 /* System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect() */, L_27);
		goto IL_0113;
	}

IL_00eb:
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_28 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_5;
		if (!L_29)
		{
			goto IL_0112;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "No secret in authentication response.");
		RuntimeObject* L_30 = __this->get_listener_17();
		NullCheck(L_30);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_30, 1, _stringLiteral9ECB827BD6D80841068E0AE354CABBDE1FED45C0);
	}

IL_0112:
	{
	}

IL_0113:
	{
		// if (operationResponse.Parameters.ContainsKey(ParameterCode.UserId))
		OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B * L_31 = ___operationResponse0;
		NullCheck(L_31);
		ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * L_32 = L_31->get_Parameters_3();
		NullCheck(L_32);
		bool L_33 = ParameterDictionary_ContainsKey_m7FF5DC8A8B0A97143B303A195EDBA8AFC634B4C4(L_32, (uint8_t)((int32_t)225), /*hidden argument*/NULL);
		V_6 = L_33;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_017a;
		}
	}
	{
		// string incomingId = operationResponse.Parameters[ParameterCode.UserId] as string;
		OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B * L_35 = ___operationResponse0;
		NullCheck(L_35);
		ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * L_36 = L_35->get_Parameters_3();
		NullCheck(L_36);
		RuntimeObject * L_37 = ParameterDictionary_get_Item_m1D37EB387177C5154937E23B8BEBF97FC1B72F71(L_36, (uint8_t)((int32_t)225), /*hidden argument*/NULL);
		V_7 = ((String_t*)IsInstSealed((RuntimeObject*)L_37, String_t_il2cpp_TypeInfo_var));
		// if (!string.IsNullOrEmpty(incomingId))
		String_t* L_38 = V_7;
		bool L_39 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_38, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		bool L_40 = V_8;
		if (!L_40)
		{
			goto IL_0179;
		}
	}
	{
		// this.UserId = incomingId;
		String_t* L_41 = V_7;
		ChatClient_set_UserId_m5499473A68F5A0ADD366380F3135D9FC32A9EC6D(__this, L_41, /*hidden argument*/NULL);
		// this.listener.DebugReturn(DebugLevel.INFO, string.Format("Received your UserID from server. Updating local value to: {0}", this.UserId));
		RuntimeObject* L_42 = __this->get_listener_17();
		String_t* L_43 = ChatClient_get_UserId_m2572A1A6BB1413F845DED350093EAAFD6B518291(__this, /*hidden argument*/NULL);
		String_t* L_44 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral94B1E34A1FC3B7B63B014BAD58E50115CFB5FC7D, L_43, /*hidden argument*/NULL);
		NullCheck(L_42);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_42, 3, L_44);
	}

IL_0179:
	{
	}

IL_017a:
	{
		goto IL_01eb;
	}

IL_017d:
	{
		// else if (this.State == ChatState.ConnectingToFrontEnd)
		int32_t L_45 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)L_45) == ((int32_t)6))? 1 : 0);
		bool L_46 = V_9;
		if (!L_46)
		{
			goto IL_01eb;
		}
	}
	{
		// this.State = ChatState.ConnectedToFrontEnd;
		ChatClient_set_State_mB4F7447BD9819E2D8EE5E6F169A0AE7A0F49DC1E_inline(__this, 7, /*hidden argument*/NULL);
		// this.listener.OnChatStateChange(this.State);
		RuntimeObject* L_47 = __this->get_listener_17();
		int32_t L_48 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_47);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Photon.Chat.IChatClientListener::OnChatStateChange(Photon.Chat.ChatState) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_47, L_48);
		// this.listener.OnConnected();
		RuntimeObject* L_49 = __this->get_listener_17();
		NullCheck(L_49);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Photon.Chat.IChatClientListener::OnConnected() */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_49);
		// if (statusToSetWhenConnected.HasValue)
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * L_50 = __this->get_address_of_statusToSetWhenConnected_21();
		bool L_51 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)L_50, /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
		V_10 = L_51;
		bool L_52 = V_10;
		if (!L_52)
		{
			goto IL_01ea;
		}
	}
	{
		// SetOnlineStatus(statusToSetWhenConnected.Value, messageToSetWhenConnected);
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * L_53 = __this->get_address_of_statusToSetWhenConnected_21();
		int32_t L_54 = Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)L_53, /*hidden argument*/Nullable_1_get_Value_mA8BB683CA6A8C5BF448A737FB5A2AF63C730B3E5_RuntimeMethod_var);
		RuntimeObject * L_55 = __this->get_messageToSetWhenConnected_22();
		ChatClient_SetOnlineStatus_mB88272E0588B53E913EC3CED58A35D185FE50B0D(__this, L_54, L_55, /*hidden argument*/NULL);
		// statusToSetWhenConnected = null;
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * L_56 = __this->get_address_of_statusToSetWhenConnected_21();
		il2cpp_codegen_initobj(L_56, sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
	}

IL_01ea:
	{
	}

IL_01eb:
	{
		goto IL_02c5;
	}

IL_01f1:
	{
		// switch (operationResponse.ReturnCode)
		OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B * L_57 = ___operationResponse0;
		NullCheck(L_57);
		int16_t L_58 = L_57->get_ReturnCode_1();
		V_11 = L_58;
		int16_t L_59 = V_11;
		if ((((int32_t)L_59) == ((int32_t)((int32_t)-3))))
		{
			goto IL_025a;
		}
	}
	{
		goto IL_0202;
	}

IL_0202:
	{
		int16_t L_60 = V_11;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_60, (int32_t)((int32_t)32753))))
		{
			case 0:
			{
				goto IL_0265;
			}
			case 1:
			{
				goto IL_0270;
			}
			case 2:
			{
				goto IL_023a;
			}
			case 3:
			{
				goto IL_0245;
			}
			case 4:
			{
				goto IL_0250;
			}
		}
	}
	{
		goto IL_0225;
	}

IL_0225:
	{
		int16_t L_61 = V_11;
		if ((((int32_t)L_61) == ((int32_t)((int32_t)32767))))
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0270;
	}

IL_0230:
	{
		// this.DisconnectedCause = ChatDisconnectCause.InvalidAuthentication;
		ChatClient_set_DisconnectedCause_m0726D082C1B2F8E366BAC950319DEA20CF09FFDB_inline(__this, 7, /*hidden argument*/NULL);
		// break;
		goto IL_0270;
	}

IL_023a:
	{
		// this.DisconnectedCause = ChatDisconnectCause.CustomAuthenticationFailed;
		ChatClient_set_DisconnectedCause_m0726D082C1B2F8E366BAC950319DEA20CF09FFDB_inline(__this, ((int32_t)11), /*hidden argument*/NULL);
		// break;
		goto IL_0270;
	}

IL_0245:
	{
		// this.DisconnectedCause = ChatDisconnectCause.InvalidRegion;
		ChatClient_set_DisconnectedCause_m0726D082C1B2F8E366BAC950319DEA20CF09FFDB_inline(__this, ((int32_t)9), /*hidden argument*/NULL);
		// break;
		goto IL_0270;
	}

IL_0250:
	{
		// this.DisconnectedCause = ChatDisconnectCause.MaxCcuReached;
		ChatClient_set_DisconnectedCause_m0726D082C1B2F8E366BAC950319DEA20CF09FFDB_inline(__this, 8, /*hidden argument*/NULL);
		// break;
		goto IL_0270;
	}

IL_025a:
	{
		// this.DisconnectedCause = ChatDisconnectCause.OperationNotAllowedInCurrentState;
		ChatClient_set_DisconnectedCause_m0726D082C1B2F8E366BAC950319DEA20CF09FFDB_inline(__this, ((int32_t)10), /*hidden argument*/NULL);
		// break;
		goto IL_0270;
	}

IL_0265:
	{
		// this.DisconnectedCause = ChatDisconnectCause.AuthenticationTicketExpired;
		ChatClient_set_DisconnectedCause_m0726D082C1B2F8E366BAC950319DEA20CF09FFDB_inline(__this, ((int32_t)12), /*hidden argument*/NULL);
		// break;
		goto IL_0270;
	}

IL_0270:
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_62 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_12 = (bool)((((int32_t)((((int32_t)L_62) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_02b7;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("{0} ClientState: {1} ServerAddress: {2}", operationResponse.ToStringFull(), this.State, this.chatPeer.ServerAddress));
		RuntimeObject* L_64 = __this->get_listener_17();
		OperationResponse_tC3D4BB07663DFFF2CC762088DA872F544D12F05B * L_65 = ___operationResponse0;
		NullCheck(L_65);
		String_t* L_66 = OperationResponse_ToStringFull_m3199D448BDD773C8652EF7E3C9ABF422D33FB5EE(L_65, /*hidden argument*/NULL);
		int32_t L_67 = ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline(__this, /*hidden argument*/NULL);
		int32_t L_68 = L_67;
		RuntimeObject * L_69 = Box(ChatState_tABA9DDB2C18934215ADACBF403DF9FD0A71D8B79_il2cpp_TypeInfo_var, &L_68);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_70 = __this->get_chatPeer_18();
		NullCheck(L_70);
		String_t* L_71 = PhotonPeer_get_ServerAddress_mA78ED5E85749B747D7130E710A174555C134C6A3(L_70, /*hidden argument*/NULL);
		String_t* L_72 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteralE253B0891DF30C474657E7D3318961A841E3E960, L_66, L_69, L_71, /*hidden argument*/NULL);
		NullCheck(L_64);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_64, 1, L_72);
	}

IL_02b7:
	{
		// this.Disconnect(this.DisconnectedCause);
		int32_t L_73 = ChatClient_get_DisconnectedCause_m57D498FAFF15DE6D6ED299021BAD2EEE35B2EEFC_inline(__this, /*hidden argument*/NULL);
		ChatClient_Disconnect_m78C5220E4F2DA2FAEDFD0C75123D6E5B1376E984(__this, L_73, /*hidden argument*/NULL);
	}

IL_02c5:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleStatusUpdate(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleStatusUpdate_m3A1743092197AD3987F204CE0CE8F3CA9DA36275 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleStatusUpdate_m3A1743092197AD3987F204CE0CE8F3CA9DA36275_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		// string user = (string)eventData.Parameters[ChatParameterCode.Sender];
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_0 = ___eventData0;
		NullCheck(L_0);
		ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2 = ParameterDictionary_get_Item_m1D37EB387177C5154937E23B8BEBF97FC1B72F71(L_1, (uint8_t)5, /*hidden argument*/NULL);
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		// int status = (int)eventData.Parameters[ChatParameterCode.Status];
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_3 = ___eventData0;
		NullCheck(L_3);
		ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5 = ParameterDictionary_get_Item_m1D37EB387177C5154937E23B8BEBF97FC1B72F71(L_4, (uint8_t)((int32_t)10), /*hidden argument*/NULL);
		V_1 = ((*(int32_t*)((int32_t*)UnBox(L_5, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var))));
		// object message = null;
		V_2 = NULL;
		// bool gotMessage = eventData.Parameters.ContainsKey(ChatParameterCode.Message);
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_6 = ___eventData0;
		NullCheck(L_6);
		ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * L_7 = L_6->get_Parameters_1();
		NullCheck(L_7);
		bool L_8 = ParameterDictionary_ContainsKey_m7FF5DC8A8B0A97143B303A195EDBA8AFC634B4C4(L_7, (uint8_t)3, /*hidden argument*/NULL);
		V_3 = L_8;
		// if (gotMessage)
		bool L_9 = V_3;
		V_4 = L_9;
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		// message = eventData.Parameters[ChatParameterCode.Message];
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_11 = ___eventData0;
		NullCheck(L_11);
		ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * L_12 = L_11->get_Parameters_1();
		NullCheck(L_12);
		RuntimeObject * L_13 = ParameterDictionary_get_Item_m1D37EB387177C5154937E23B8BEBF97FC1B72F71(L_12, (uint8_t)3, /*hidden argument*/NULL);
		V_2 = L_13;
	}

IL_004b:
	{
		// this.listener.OnStatusUpdate(user, status, gotMessage, message);
		RuntimeObject* L_14 = __this->get_listener_17();
		String_t* L_15 = V_0;
		int32_t L_16 = V_1;
		bool L_17 = V_3;
		RuntimeObject * L_18 = V_2;
		NullCheck(L_14);
		InterfaceActionInvoker4< String_t*, int32_t, bool, RuntimeObject * >::Invoke(8 /* System.Void Photon.Chat.IChatClientListener::OnStatusUpdate(System.String,System.Int32,System.Boolean,System.Object) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_14, L_15, L_16, L_17, L_18);
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::ConnectToFrontEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_ConnectToFrontEnd_m11CB8643B389250359AC98B8B7D9E6405EA56B7C (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_ConnectToFrontEnd_m11CB8643B389250359AC98B8B7D9E6405EA56B7C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// this.State = ChatState.ConnectingToFrontEnd;
		ChatClient_set_State_mB4F7447BD9819E2D8EE5E6F169A0AE7A0F49DC1E_inline(__this, 6, /*hidden argument*/NULL);
		// if (this.DebugOut >= DebugLevel.INFO)
		uint8_t L_0 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.INFO, "Connecting to frontend " + this.FrontendAddress);
		RuntimeObject* L_2 = __this->get_listener_17();
		String_t* L_3 = ChatClient_get_FrontendAddress_m847BEC17A9DDF9204AB4A1C860392DDD6BCB7F83_inline(__this, /*hidden argument*/NULL);
		String_t* L_4 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral70E46A40252ADA773201ED2001C3B5E19AE0D5E2, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_2, 3, L_4);
	}

IL_0038:
	{
		// if (!this.chatPeer.Connect(this.FrontendAddress, ChatAppName))
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_5 = __this->get_chatPeer_18();
		String_t* L_6 = ChatClient_get_FrontendAddress_m847BEC17A9DDF9204AB4A1C860392DDD6BCB7F83_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_7 = VirtFuncInvoker4< bool, String_t*, String_t*, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::Connect(System.String,System.String,System.Object,System.Object) */, L_5, L_6, _stringLiteral7ECDE348FF9CDA2C3BA69A0C4543365039D0D65B, NULL, NULL);
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_008b;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_9 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_9) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0087;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, string.Format("Connecting to frontend {0} failed.", this.FrontendAddress));
		RuntimeObject* L_11 = __this->get_listener_17();
		String_t* L_12 = ChatClient_get_FrontendAddress_m847BEC17A9DDF9204AB4A1C860392DDD6BCB7F83_inline(__this, /*hidden argument*/NULL);
		String_t* L_13 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral427FC0E48C1D9A9A8FF6FF858C6B30F622D1F800, L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_11, 1, L_13);
	}

IL_0087:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_008f;
	}

IL_008b:
	{
		// return true;
		V_3 = (bool)1;
		goto IL_008f;
	}

IL_008f:
	{
		// }
		bool L_14 = V_3;
		return L_14;
	}
}
// System.Boolean Photon.Chat.ChatClient::AuthenticateOnFrontEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_AuthenticateOnFrontEnd_mFA3F028897624959C21DBBEAFABC611E7D40D178 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_AuthenticateOnFrontEnd_mFA3F028897624959C21DBBEAFABC611E7D40D178_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	{
		// if (this.AuthValues != null)
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_0 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((!(((RuntimeObject*)(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00af;
		}
	}
	{
		// if (this.AuthValues.Token == null)
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_2 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject * L_3 = AuthenticationValues_get_Token_mC64BC0A1915CA6BC9F38E1B6FF3390ACB9FFF101_inline(L_2, /*hidden argument*/NULL);
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject *)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0050;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_5 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_5) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Can't authenticate on front end server. Secret (AuthValues.Token) is not set");
		RuntimeObject* L_7 = __this->get_listener_17();
		NullCheck(L_7);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_7, 1, _stringLiteralFD0C5E59DABFA73FA3649F18601A967D032A1AD5);
	}

IL_0049:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_0050:
	{
		// Dictionary<byte, object> opParameters = new Dictionary<byte, object> { { (byte)ChatParameterCode.Secret, this.AuthValues.Token } };
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_8 = (Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 *)il2cpp_codegen_object_new(Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mB6A7105EE88A811F75E9529C0230DE29BC579C6A(L_8, /*hidden argument*/Dictionary_2__ctor_mB6A7105EE88A811F75E9529C0230DE29BC579C6A_RuntimeMethod_var);
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_9 = L_8;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_10 = ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_11 = AuthenticationValues_get_Token_mC64BC0A1915CA6BC9F38E1B6FF3390ACB9FFF101_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22(L_9, (uint8_t)((int32_t)221), L_11, /*hidden argument*/Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22_RuntimeMethod_var);
		V_4 = L_9;
		// if (this.PrivateChatHistoryLength > -1)
		int32_t L_12 = __this->get_PrivateChatHistoryLength_13();
		V_5 = (bool)((((int32_t)L_12) > ((int32_t)(-1)))? 1 : 0);
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0095;
		}
	}
	{
		// opParameters[(byte)ChatParameterCode.HistoryLength] = this.PrivateChatHistoryLength;
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_14 = V_4;
		int32_t L_15 = __this->get_PrivateChatHistoryLength_13();
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		Dictionary_2_set_Item_m0DAE02CE9FA04B987D0923005FEF7565EB9FB52D(L_14, (uint8_t)((int32_t)14), L_17, /*hidden argument*/Dictionary_2_set_Item_m0DAE02CE9FA04B987D0923005FEF7565EB9FB52D_RuntimeMethod_var);
	}

IL_0095:
	{
		// return this.chatPeer.SendOperation(ChatOperationCode.Authenticate, opParameters, SendOptions.SendReliable);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_18 = __this->get_chatPeer_18();
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_19 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5_il2cpp_TypeInfo_var);
		SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  L_20 = ((SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_18);
		bool L_21 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 *, SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_18, (uint8_t)((int32_t)230), L_19, L_20);
		V_3 = L_21;
		goto IL_00da;
	}

IL_00af:
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_22 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)((((int32_t)L_22) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00d6;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Can't authenticate on front end server. Authentication Values are not set");
		RuntimeObject* L_24 = __this->get_listener_17();
		NullCheck(L_24);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_24, 1, _stringLiteral638067AF521CCE283B94B0DF8899C179DCF25FB3);
	}

IL_00d6:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00da;
	}

IL_00da:
	{
		// }
		bool L_25 = V_3;
		return L_25;
	}
}
// System.Void Photon.Chat.ChatClient::HandleUserUnsubscribedEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleUserUnsubscribedEvent_m96BD07F4D888BF64F839E0E5D6FE90A46CAF4CDA (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleUserUnsubscribedEvent_m96BD07F4D888BF64F839E0E5D6FE90A46CAF4CDA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	{
		// string channelName = eventData.Parameters[ChatParameterCode.Channel] as string;
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_0 = ___eventData0;
		NullCheck(L_0);
		ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2 = ParameterDictionary_get_Item_m1D37EB387177C5154937E23B8BEBF97FC1B72F71(L_1, (uint8_t)1, /*hidden argument*/NULL);
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		// string userId = eventData.Parameters[ChatParameterCode.UserId] as string;
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_3 = ___eventData0;
		NullCheck(L_3);
		ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5 = ParameterDictionary_get_Item_m1D37EB387177C5154937E23B8BEBF97FC1B72F71(L_4, (uint8_t)((int32_t)225), /*hidden argument*/NULL);
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
		// if (this.PublicChannels.TryGetValue(channelName, out channel))
		Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * L_6 = __this->get_PublicChannels_14();
		String_t* L_7 = V_0;
		NullCheck(L_6);
		bool L_8 = Dictionary_2_TryGetValue_m7EC41F88DF244877D026C2F83474F908A60E7091(L_6, L_7, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m7EC41F88DF244877D026C2F83474F908A60E7091_RuntimeMethod_var);
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_00c4;
		}
	}
	{
		// if (!channel.PublishSubscribers)
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_10 = V_2;
		NullCheck(L_10);
		bool L_11 = ChatChannel_get_PublishSubscribers_m95072AE75264032C94FBE71EA09F257C889B18EB_inline(L_10, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_007d;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_13 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_13) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_007c;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" for incoming UserUnsubscribed (\"{1}\") event does not have PublishSubscribers enabled.", channelName, userId));
		RuntimeObject* L_15 = __this->get_listener_17();
		String_t* L_16 = V_0;
		String_t* L_17 = V_1;
		String_t* L_18 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralD1E3D9C1B922EB4D0834D565C074EDC474E4C8B1, L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_15, 2, L_18);
	}

IL_007c:
	{
	}

IL_007d:
	{
		// if (!channel.Subscribers.Remove(userId)) 
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_19 = V_2;
		NullCheck(L_19);
		HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * L_20 = L_19->get_Subscribers_10();
		String_t* L_21 = V_1;
		NullCheck(L_20);
		bool L_22 = HashSet_1_Remove_mE01EC306B6C73A065B00E9A954951FFAB6466DE4(L_20, L_21, /*hidden argument*/HashSet_1_Remove_mE01EC306B6C73A065B00E9A954951FFAB6466DE4_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00c1;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_24 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_24) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00c0;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" does not contain unsubscribed user \"{1}\".", channelName, userId));
		RuntimeObject* L_26 = __this->get_listener_17();
		String_t* L_27 = V_0;
		String_t* L_28 = V_1;
		String_t* L_29 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralEF54001782F2548B67B67C09D2133F76EE73079C, L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_26, 2, L_29);
	}

IL_00c0:
	{
	}

IL_00c1:
	{
		goto IL_00f3;
	}

IL_00c4:
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_30 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)((((int32_t)L_30) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_8;
		if (!L_31)
		{
			goto IL_00f2;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" not found for incoming UserUnsubscribed (\"{1}\") event.", channelName, userId));
		RuntimeObject* L_32 = __this->get_listener_17();
		String_t* L_33 = V_0;
		String_t* L_34 = V_1;
		String_t* L_35 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral6AFEA6BD492174EAD3729E74B21354F505CDDCF4, L_33, L_34, /*hidden argument*/NULL);
		NullCheck(L_32);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_32, 2, L_35);
	}

IL_00f2:
	{
	}

IL_00f3:
	{
		// this.listener.OnUserUnsubscribed(channelName, userId);
		RuntimeObject* L_36 = __this->get_listener_17();
		String_t* L_37 = V_0;
		String_t* L_38 = V_1;
		NullCheck(L_36);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Photon.Chat.IChatClientListener::OnUserUnsubscribed(System.String,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_36, L_37, L_38);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleUserSubscribedEvent(ExitGames.Client.Photon.EventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_HandleUserSubscribedEvent_m071B21F5D69AF0F828261CD283AF1342BCBB368F (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleUserSubscribedEvent_m071B21F5D69AF0F828261CD283AF1342BCBB368F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B12_0 = 0;
	{
		// string channelName = eventData.Parameters[ChatParameterCode.Channel] as string;
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_0 = ___eventData0;
		NullCheck(L_0);
		ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2 = ParameterDictionary_get_Item_m1D37EB387177C5154937E23B8BEBF97FC1B72F71(L_1, (uint8_t)1, /*hidden argument*/NULL);
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		// string userId = eventData.Parameters[ChatParameterCode.UserId] as string;
		EventData_t9FA705EB0D6D8A537310E6E5605AAE37E68EC5D3 * L_3 = ___eventData0;
		NullCheck(L_3);
		ParameterDictionary_tA75F72ED898004A8BC5EFC99B026A12782EDC798 * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5 = ParameterDictionary_get_Item_m1D37EB387177C5154937E23B8BEBF97FC1B72F71(L_4, (uint8_t)((int32_t)225), /*hidden argument*/NULL);
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
		// if (this.PublicChannels.TryGetValue(channelName, out channel))
		Dictionary_2_tC65D3FA3F231EFD4E4E6386DB7A60949F82B93AB * L_6 = __this->get_PublicChannels_14();
		String_t* L_7 = V_0;
		NullCheck(L_6);
		bool L_8 = Dictionary_2_TryGetValue_m7EC41F88DF244877D026C2F83474F908A60E7091(L_6, L_7, (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m7EC41F88DF244877D026C2F83474F908A60E7091_RuntimeMethod_var);
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0134;
		}
	}
	{
		// if (!channel.PublishSubscribers)
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_10 = V_2;
		NullCheck(L_10);
		bool L_11 = ChatChannel_get_PublishSubscribers_m95072AE75264032C94FBE71EA09F257C889B18EB_inline(L_10, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_007d;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_13 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_13) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_007c;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" for incoming UserSubscribed (\"{1}\") event does not have PublishSubscribers enabled.", channelName, userId));
		RuntimeObject* L_15 = __this->get_listener_17();
		String_t* L_16 = V_0;
		String_t* L_17 = V_1;
		String_t* L_18 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralE23C1A7928CC6F82A21EE1A76448A0F81B07C4E9, L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_15, 2, L_18);
	}

IL_007c:
	{
	}

IL_007d:
	{
		// if (!channel.Subscribers.Add(userId)) 
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_19 = V_2;
		NullCheck(L_19);
		HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * L_20 = L_19->get_Subscribers_10();
		String_t* L_21 = V_1;
		NullCheck(L_20);
		bool L_22 = HashSet_1_Add_mD67974B4739A65BB7950DBB56C8B5CF83C01D4E9(L_20, L_21, /*hidden argument*/HashSet_1_Add_mD67974B4739A65BB7950DBB56C8B5CF83C01D4E9_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00c3;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_24 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)((((int32_t)L_24) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00c0;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" already contains newly subscribed user \"{1}\".", channelName, userId));
		RuntimeObject* L_26 = __this->get_listener_17();
		String_t* L_27 = V_0;
		String_t* L_28 = V_1;
		String_t* L_29 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral06D8FB7D57518A9D9AD12F37B1762D47BCFEBC34, L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_26, 2, L_29);
	}

IL_00c0:
	{
		goto IL_0131;
	}

IL_00c3:
	{
		// else if (channel.MaxSubscribers > 0 && channel.Subscribers.Count > channel.MaxSubscribers)
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_30 = V_2;
		NullCheck(L_30);
		int32_t L_31 = ChatChannel_get_MaxSubscribers_m7564E3A11AF219E2DECD04BB4A27BD5B3D2C8915_inline(L_30, /*hidden argument*/NULL);
		if ((((int32_t)L_31) <= ((int32_t)0)))
		{
			goto IL_00e1;
		}
	}
	{
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_32 = V_2;
		NullCheck(L_32);
		HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * L_33 = L_32->get_Subscribers_10();
		NullCheck(L_33);
		int32_t L_34 = HashSet_1_get_Count_m998F5D9C44774DB10586898A1EAACF986E205287_inline(L_33, /*hidden argument*/HashSet_1_get_Count_m998F5D9C44774DB10586898A1EAACF986E205287_RuntimeMethod_var);
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_35 = V_2;
		NullCheck(L_35);
		int32_t L_36 = ChatChannel_get_MaxSubscribers_m7564E3A11AF219E2DECD04BB4A27BD5B3D2C8915_inline(L_35, /*hidden argument*/NULL);
		G_B12_0 = ((((int32_t)L_34) > ((int32_t)L_36))? 1 : 0);
		goto IL_00e2;
	}

IL_00e1:
	{
		G_B12_0 = 0;
	}

IL_00e2:
	{
		V_8 = (bool)G_B12_0;
		bool L_37 = V_8;
		if (!L_37)
		{
			goto IL_0131;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_38 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)((((int32_t)L_38) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_39 = V_9;
		if (!L_39)
		{
			goto IL_0130;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\"'s MaxSubscribers exceeded. count={1} > MaxSubscribers={2}.", channelName, channel.Subscribers.Count, channel.MaxSubscribers));
		RuntimeObject* L_40 = __this->get_listener_17();
		String_t* L_41 = V_0;
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_42 = V_2;
		NullCheck(L_42);
		HashSet_1_t7ED30EEB5279B4F7B38D343D0AF490E2296ACF61 * L_43 = L_42->get_Subscribers_10();
		NullCheck(L_43);
		int32_t L_44 = HashSet_1_get_Count_m998F5D9C44774DB10586898A1EAACF986E205287_inline(L_43, /*hidden argument*/HashSet_1_get_Count_m998F5D9C44774DB10586898A1EAACF986E205287_RuntimeMethod_var);
		int32_t L_45 = L_44;
		RuntimeObject * L_46 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_45);
		ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * L_47 = V_2;
		NullCheck(L_47);
		int32_t L_48 = ChatChannel_get_MaxSubscribers_m7564E3A11AF219E2DECD04BB4A27BD5B3D2C8915_inline(L_47, /*hidden argument*/NULL);
		int32_t L_49 = L_48;
		RuntimeObject * L_50 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_49);
		String_t* L_51 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteral2C2487EA5D13B73C78A16D4C01B849CC868B9F66, L_41, L_46, L_50, /*hidden argument*/NULL);
		NullCheck(L_40);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_40, 2, L_51);
	}

IL_0130:
	{
	}

IL_0131:
	{
		goto IL_0163;
	}

IL_0134:
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_52 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_10 = (bool)((((int32_t)((((int32_t)L_52) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_53 = V_10;
		if (!L_53)
		{
			goto IL_0162;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, string.Format("Channel \"{0}\" not found for incoming UserSubscribed (\"{1}\") event.", channelName, userId));
		RuntimeObject* L_54 = __this->get_listener_17();
		String_t* L_55 = V_0;
		String_t* L_56 = V_1;
		String_t* L_57 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralE92B7B36B6E384E44F7E0E2A7CDECA40F4F457DB, L_55, L_56, /*hidden argument*/NULL);
		NullCheck(L_54);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_54, 2, L_57);
	}

IL_0162:
	{
	}

IL_0163:
	{
		// this.listener.OnUserSubscribed(channelName, userId);
		RuntimeObject* L_58 = __this->get_listener_17();
		String_t* L_59 = V_0;
		String_t* L_60 = V_1;
		NullCheck(L_58);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(9 /* System.Void Photon.Chat.IChatClientListener::OnUserSubscribed(System.String,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_58, L_59, L_60);
		// }
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String,System.Int32,System.Int32,Photon.Chat.ChannelCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m0DB2A59D3FAE36EB09B8F34839AD18A95D0E6A98 (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___channel0, int32_t ___lastMsgId1, int32_t ___messagesFromHistory2, ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * ___creationOptions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_Subscribe_m0DB2A59D3FAE36EB09B8F34839AD18A95D0E6A98_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * V_2 = NULL;
	Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * V_19 = NULL;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	int32_t G_B17_0 = 0;
	int32_t G_B38_0 = 0;
	{
		// if (creationOptions == null)
		ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * L_0 = ___creationOptions3;
		V_4 = (bool)((((RuntimeObject*)(ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// creationOptions = ChannelCreationOptions.Default;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D_il2cpp_TypeInfo_var);
		ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * L_2 = ((ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D_StaticFields*)il2cpp_codegen_static_fields_for(ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D_il2cpp_TypeInfo_var))->get_Default_0();
		___creationOptions3 = L_2;
	}

IL_0015:
	{
		// int maxSubscribers = creationOptions.MaxSubscribers;
		ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * L_3 = ___creationOptions3;
		NullCheck(L_3);
		int32_t L_4 = ChannelCreationOptions_get_MaxSubscribers_m695771BA6E0451DEF5C00D270D95F218735DD6F0_inline(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// bool publishSubscribers = creationOptions.PublishSubscribers;
		ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * L_5 = ___creationOptions3;
		NullCheck(L_5);
		bool L_6 = ChannelCreationOptions_get_PublishSubscribers_m95B809EAFBB363FA01A7132CD7FA48D2200D85AC_inline(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// if (maxSubscribers < 0)
		int32_t L_7 = V_0;
		V_5 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_005e;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_9 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)((((int32_t)L_9) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_6;
		if (!L_10)
		{
			goto IL_0056;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "Cannot set MaxSubscribers < 0.");
		RuntimeObject* L_11 = __this->get_listener_17();
		NullCheck(L_11);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_11, 1, _stringLiteralB7A757A62D6F4547652BA320456CD72FF6D7093E);
	}

IL_0056:
	{
		// return false;
		V_7 = (bool)0;
		goto IL_0239;
	}

IL_005e:
	{
		// if (lastMsgId < 0)
		int32_t L_12 = ___lastMsgId1;
		V_8 = (bool)((((int32_t)L_12) < ((int32_t)0))? 1 : 0);
		bool L_13 = V_8;
		if (!L_13)
		{
			goto IL_0097;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_14 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)((((int32_t)L_14) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_9;
		if (!L_15)
		{
			goto IL_008f;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR, "lastMsgId cannot be < 0.");
		RuntimeObject* L_16 = __this->get_listener_17();
		NullCheck(L_16);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_16, 1, _stringLiteral260B333133E8DC5F239195333A036B63C1EC62B9);
	}

IL_008f:
	{
		// return false;
		V_7 = (bool)0;
		goto IL_0239;
	}

IL_0097:
	{
		// if (messagesFromHistory < -1)
		int32_t L_17 = ___messagesFromHistory2;
		V_10 = (bool)((((int32_t)L_17) < ((int32_t)(-1)))? 1 : 0);
		bool L_18 = V_10;
		if (!L_18)
		{
			goto IL_00cc;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_19 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_11 = (bool)((((int32_t)((((int32_t)L_19) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_11;
		if (!L_20)
		{
			goto IL_00c8;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "messagesFromHistory < -1, setting it to -1");
		RuntimeObject* L_21 = __this->get_listener_17();
		NullCheck(L_21);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_21, 2, _stringLiteralAAC3759B75EBB121D5A5F793C49C6496CB466067);
	}

IL_00c8:
	{
		// messagesFromHistory = -1;
		___messagesFromHistory2 = (-1);
	}

IL_00cc:
	{
		// if (lastMsgId > 0 && messagesFromHistory == 0)
		int32_t L_22 = ___lastMsgId1;
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_00d6;
		}
	}
	{
		int32_t L_23 = ___messagesFromHistory2;
		G_B17_0 = ((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B17_0 = 0;
	}

IL_00d7:
	{
		V_12 = (bool)G_B17_0;
		bool L_24 = V_12;
		if (!L_24)
		{
			goto IL_0108;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.WARNING)
		uint8_t L_25 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_13 = (bool)((((int32_t)((((int32_t)L_25) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_13;
		if (!L_26)
		{
			goto IL_0104;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.WARNING, "lastMsgId will be ignored because messagesFromHistory == 0");
		RuntimeObject* L_27 = __this->get_listener_17();
		NullCheck(L_27);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_27, 2, _stringLiteral6A99D68EAA56E7B9EA40ED090FD2E0DDA1EB1E0F);
	}

IL_0104:
	{
		// lastMsgId = 0;
		___lastMsgId1 = 0;
	}

IL_0108:
	{
		// Dictionary<object, object> properties = null;
		V_2 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)NULL;
		// if (publishSubscribers)
		bool L_28 = V_1;
		V_14 = L_28;
		bool L_29 = V_14;
		if (!L_29)
		{
			goto IL_0176;
		}
	}
	{
		// if (maxSubscribers > DefaultMaxSubscribers)
		int32_t L_30 = V_0;
		V_15 = (bool)((((int32_t)L_30) > ((int32_t)((int32_t)100)))? 1 : 0);
		bool L_31 = V_15;
		if (!L_31)
		{
			goto IL_0158;
		}
	}
	{
		// if (this.DebugOut >= DebugLevel.ERROR)
		uint8_t L_32 = ChatClient_get_DebugOut_m2D19E68897BB2614CB2A8781B4A19F131322B83A(__this, /*hidden argument*/NULL);
		V_16 = (bool)((((int32_t)((((int32_t)L_32) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_16;
		if (!L_33)
		{
			goto IL_0150;
		}
	}
	{
		// this.listener.DebugReturn(DebugLevel.ERROR,
		//     string.Format("Cannot set MaxSubscribers > {0} when PublishSubscribers == true.", DefaultMaxSubscribers));
		RuntimeObject* L_34 = __this->get_listener_17();
		int32_t L_35 = ((int32_t)100);
		RuntimeObject * L_36 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_35);
		String_t* L_37 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralD42D8F5361FEC807EFBD78D0B0154513FA3FDEA5, L_36, /*hidden argument*/NULL);
		NullCheck(L_34);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t271DA6AC80459D81B3227CC9AE0EC384874EDBE8_il2cpp_TypeInfo_var, L_34, 1, L_37);
	}

IL_0150:
	{
		// return false;
		V_7 = (bool)0;
		goto IL_0239;
	}

IL_0158:
	{
		// properties = new Dictionary<object, object>();
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_38 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)il2cpp_codegen_object_new(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498(L_38, /*hidden argument*/Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_RuntimeMethod_var);
		V_2 = L_38;
		// properties[ChannelWellKnownProperties.PublishSubscribers] = true;
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_39 = V_2;
		uint8_t L_40 = ((uint8_t)((int32_t)254));
		RuntimeObject * L_41 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_40);
		bool L_42 = ((bool)1);
		RuntimeObject * L_43 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_39);
		Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93(L_39, L_41, L_43, /*hidden argument*/Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_RuntimeMethod_var);
	}

IL_0176:
	{
		// if (maxSubscribers > 0)
		int32_t L_44 = V_0;
		V_17 = (bool)((((int32_t)L_44) > ((int32_t)0))? 1 : 0);
		bool L_45 = V_17;
		if (!L_45)
		{
			goto IL_01ab;
		}
	}
	{
		// if (properties == null)
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_46 = V_2;
		V_18 = (bool)((((RuntimeObject*)(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)L_46) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_47 = V_18;
		if (!L_47)
		{
			goto IL_0193;
		}
	}
	{
		// properties = new Dictionary<object, object>();
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_48 = (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *)il2cpp_codegen_object_new(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498(L_48, /*hidden argument*/Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_RuntimeMethod_var);
		V_2 = L_48;
	}

IL_0193:
	{
		// properties[ChannelWellKnownProperties.MaxSubscribers] = maxSubscribers;
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_49 = V_2;
		uint8_t L_50 = ((uint8_t)((int32_t)255));
		RuntimeObject * L_51 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_50);
		int32_t L_52 = V_0;
		int32_t L_53 = L_52;
		RuntimeObject * L_54 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_53);
		NullCheck(L_49);
		Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93(L_49, L_51, L_54, /*hidden argument*/Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_RuntimeMethod_var);
	}

IL_01ab:
	{
		// Dictionary<byte, object> opParameters = new Dictionary<byte, object> { { ChatParameterCode.Channels, new[] { channel } } };
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_55 = (Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 *)il2cpp_codegen_object_new(Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mB6A7105EE88A811F75E9529C0230DE29BC579C6A(L_55, /*hidden argument*/Dictionary_2__ctor_mB6A7105EE88A811F75E9529C0230DE29BC579C6A_RuntimeMethod_var);
		V_19 = L_55;
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_56 = V_19;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_57 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_58 = L_57;
		String_t* L_59 = ___channel0;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_59);
		NullCheck(L_56);
		Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22(L_56, (uint8_t)0, (RuntimeObject *)(RuntimeObject *)L_58, /*hidden argument*/Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22_RuntimeMethod_var);
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_60 = V_19;
		V_3 = L_60;
		// if (messagesFromHistory != 0)
		int32_t L_61 = ___messagesFromHistory2;
		V_20 = (bool)((!(((uint32_t)L_61) <= ((uint32_t)0)))? 1 : 0);
		bool L_62 = V_20;
		if (!L_62)
		{
			goto IL_01e3;
		}
	}
	{
		// opParameters.Add(ChatParameterCode.HistoryLength, messagesFromHistory);
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_63 = V_3;
		int32_t L_64 = ___messagesFromHistory2;
		int32_t L_65 = L_64;
		RuntimeObject * L_66 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_65);
		NullCheck(L_63);
		Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22(L_63, (uint8_t)((int32_t)14), L_66, /*hidden argument*/Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22_RuntimeMethod_var);
	}

IL_01e3:
	{
		// if (lastMsgId > 0)
		int32_t L_67 = ___lastMsgId1;
		V_21 = (bool)((((int32_t)L_67) > ((int32_t)0))? 1 : 0);
		bool L_68 = V_21;
		if (!L_68)
		{
			goto IL_0202;
		}
	}
	{
		// opParameters.Add(ChatParameterCode.MsgIds, new[] { lastMsgId });
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_69 = V_3;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_70 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_71 = L_70;
		int32_t L_72 = ___lastMsgId1;
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_72);
		NullCheck(L_69);
		Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22(L_69, (uint8_t)((int32_t)9), (RuntimeObject *)(RuntimeObject *)L_71, /*hidden argument*/Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22_RuntimeMethod_var);
	}

IL_0202:
	{
		// if (properties != null && properties.Count > 0)
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_73 = V_2;
		if (!L_73)
		{
			goto IL_0210;
		}
	}
	{
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_74 = V_2;
		NullCheck(L_74);
		int32_t L_75 = Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6(L_74, /*hidden argument*/Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_RuntimeMethod_var);
		G_B38_0 = ((((int32_t)L_75) > ((int32_t)0))? 1 : 0);
		goto IL_0211;
	}

IL_0210:
	{
		G_B38_0 = 0;
	}

IL_0211:
	{
		V_22 = (bool)G_B38_0;
		bool L_76 = V_22;
		if (!L_76)
		{
			goto IL_0223;
		}
	}
	{
		// opParameters.Add(ChatParameterCode.Properties, properties);
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_77 = V_3;
		Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * L_78 = V_2;
		NullCheck(L_77);
		Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22(L_77, (uint8_t)((int32_t)22), L_78, /*hidden argument*/Dictionary_2_Add_m1091C22B480D085791D1940EDFC7D4ABFB70DD22_RuntimeMethod_var);
	}

IL_0223:
	{
		// return this.chatPeer.SendOperation(ChatOperationCode.Subscribe, opParameters, SendOptions.SendReliable);
		ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * L_79 = __this->get_chatPeer_18();
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_80 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5_il2cpp_TypeInfo_var);
		SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  L_81 = ((SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_79);
		bool L_82 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 *, SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_79, (uint8_t)0, L_80, L_81);
		V_7 = L_82;
		goto IL_0239;
	}

IL_0239:
	{
		// }
		bool L_83 = V_7;
		return L_83;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.ChatEventCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatEventCode__ctor_m17DE89A722A955012AEC573B9C87560E318AD081 (ChatEventCode_t69355728022C08E7435EBAAB0B0CC12A186AACAE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.ChatOperationCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatOperationCode__ctor_m481F24E834ADF462072735029D4886E36F0C149E (ChatOperationCode_t2241AAA0BE1EE7E35D7FB4020009BC538267AF45 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.ChatParameterCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatParameterCode__ctor_mB5BE08E745BDC3571F9E24C104FA8AB379D20B3F (ChatParameterCode_t04DD519C260927DA892F3046EFC437B00339AF56 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Photon.Chat.ChatPeer::get_NameServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatPeer_get_NameServerAddress_mEC869AA34F11AD1F019EA0D6F7090A154DC0CAA7 (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// public string NameServerAddress { get { return this.GetNameServerAddress(); } }
		String_t* L_0 = ChatPeer_GetNameServerAddress_mEE174269D17B37F6B706229ADE9F5A070637A82A(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public string NameServerAddress { get { return this.GetNameServerAddress(); } }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Photon.Chat.ChatPeer::get_IsProtocolSecure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatPeer_get_IsProtocolSecure_m5A49DEB1B8850A3F2F40527EF6151312D4776601 (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// virtual internal bool IsProtocolSecure { get { return this.UsedProtocol == ConnectionProtocol.WebSocketSecure; } }
		uint8_t L_0 = PhotonPeer_get_UsedProtocol_m4686906F6D5052926E68229C645155F0832628F6(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)5))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// virtual internal bool IsProtocolSecure { get { return this.UsedProtocol == ConnectionProtocol.WebSocketSecure; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Chat.ChatPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatPeer__ctor_m7134BB0AAC3428BA6A777A1493D52764B8F5DDCC (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, RuntimeObject* ___listener0, uint8_t ___protocol1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatPeer__ctor_m7134BB0AAC3428BA6A777A1493D52764B8F5DDCC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string NameServerHost = "ns.exitgames.com";
		__this->set_NameServerHost_60(_stringLiteralA595791DAF8A7212368D5CC9A8886085257B5A0C);
		// public ChatPeer(IPhotonPeerListener listener, ConnectionProtocol protocol) : base(listener, protocol)
		RuntimeObject* L_0 = ___listener0;
		uint8_t L_1 = ___protocol1;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B_il2cpp_TypeInfo_var);
		PhotonPeer__ctor_m501CF8AB2D93EA3190BBE0F3DCFCBE5FC7A6AEE3(__this, L_0, L_1, /*hidden argument*/NULL);
		// this.ConfigUnitySockets();
		ChatPeer_ConfigUnitySockets_m3CA9CA2B2B41E6CC69775F1112F8BDF897F6C2B0(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.ChatPeer::ConfigUnitySockets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatPeer_ConfigUnitySockets_m3CA9CA2B2B41E6CC69775F1112F8BDF897F6C2B0 (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatPeer_ConfigUnitySockets_m3CA9CA2B2B41E6CC69775F1112F8BDF897F6C2B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// Type websocketType = null;
		V_0 = (Type_t *)NULL;
		// websocketType = Type.GetType("ExitGames.Client.Photon.SocketWebTcp, PhotonWebSocket", false);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m8A8A6481B24551476F2AF999A970AD705BA68C7A, _stringLiteral83FEBC0012B2BE602C85FC053159E9EF67600984, (bool)0, "PhotonChat, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		V_0 = L_0;
		// if (websocketType == null)
		Type_t * L_1 = V_0;
		bool L_2 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_1, (Type_t *)NULL, /*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// websocketType = Type.GetType("ExitGames.Client.Photon.SocketWebTcp, Assembly-CSharp-firstpass", false);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m8A8A6481B24551476F2AF999A970AD705BA68C7A, _stringLiteralBF11A57FF863BE16C3B8157656862961ACDA3725, (bool)0, "PhotonChat, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		V_0 = L_4;
	}

IL_0028:
	{
		// if (websocketType == null)
		Type_t * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_6 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_5, (Type_t *)NULL, /*hidden argument*/NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		// websocketType = Type.GetType("ExitGames.Client.Photon.SocketWebTcp, Assembly-CSharp", false);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m8A8A6481B24551476F2AF999A970AD705BA68C7A, _stringLiteral5729A153EC7FAE56800274A78531B43CC0A3112C, (bool)0, "PhotonChat, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		V_0 = L_8;
	}

IL_0041:
	{
		// if (websocketType != null)
		Type_t * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_10 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_9, (Type_t *)NULL, /*hidden argument*/NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		// this.SocketImplementationConfig[ConnectionProtocol.WebSocket] = websocketType;
		Dictionary_2_tF9F37A139D3559F1151DDADAA520C7F397F42E41 * L_12 = ((PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B *)__this)->get_SocketImplementationConfig_19();
		Type_t * L_13 = V_0;
		NullCheck(L_12);
		Dictionary_2_set_Item_m27A02DCA079D7CF48A46435831EB0AD3BAC00CCC(L_12, 4, L_13, /*hidden argument*/Dictionary_2_set_Item_m27A02DCA079D7CF48A46435831EB0AD3BAC00CCC_RuntimeMethod_var);
		// this.SocketImplementationConfig[ConnectionProtocol.WebSocketSecure] = websocketType;
		Dictionary_2_tF9F37A139D3559F1151DDADAA520C7F397F42E41 * L_14 = ((PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B *)__this)->get_SocketImplementationConfig_19();
		Type_t * L_15 = V_0;
		NullCheck(L_14);
		Dictionary_2_set_Item_m27A02DCA079D7CF48A46435831EB0AD3BAC00CCC(L_14, 5, L_15, /*hidden argument*/Dictionary_2_set_Item_m27A02DCA079D7CF48A46435831EB0AD3BAC00CCC_RuntimeMethod_var);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.String Photon.Chat.ChatPeer::GetNameServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatPeer_GetNameServerAddress_mEE174269D17B37F6B706229ADE9F5A070637A82A (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatPeer_GetNameServerAddress_mEE174269D17B37F6B706229ADE9F5A070637A82A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	uint8_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		// var protocolPort = 0;
		V_0 = 0;
		// ProtocolToNameServerPort.TryGetValue(this.TransportProtocol, out protocolPort);
		IL2CPP_RUNTIME_CLASS_INIT(ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_il2cpp_TypeInfo_var);
		Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938 * L_0 = ((ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_StaticFields*)il2cpp_codegen_static_fields_for(ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_il2cpp_TypeInfo_var))->get_ProtocolToNameServerPort_61();
		uint8_t L_1 = PhotonPeer_get_TransportProtocol_m767D7E412A9F27CD9689630891F5506575307C4E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_TryGetValue_m23EFC611C71939B25F34AD6FB126FF0EBFAE216C(L_0, L_1, (int32_t*)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m23EFC611C71939B25F34AD6FB126FF0EBFAE216C_RuntimeMethod_var);
		// if (this.NameServerPortOverride != 0)
		uint16_t L_2 = __this->get_NameServerPortOverride_62();
		V_1 = (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_004e;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.INFO, string.Format("Using NameServerPortInAppSettings as port for Name Server: {0}", this.NameServerPortOverride));
		RuntimeObject* L_4 = PhotonPeer_get_Listener_m887BECA64658F676E50480D559D3E133A62F159A_inline(__this, /*hidden argument*/NULL);
		uint16_t L_5 = __this->get_NameServerPortOverride_62();
		uint16_t L_6 = L_5;
		RuntimeObject * L_7 = Box(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral054F15C3275CDCFDF4FC81DEF376F70DF3381D91, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tDC907B98639311C4461981C7CCA42DCED60727C0_il2cpp_TypeInfo_var, L_4, 3, L_8);
		// protocolPort = this.NameServerPortOverride;
		uint16_t L_9 = __this->get_NameServerPortOverride_62();
		V_0 = L_9;
	}

IL_004e:
	{
		// switch (this.TransportProtocol)
		uint8_t L_10 = PhotonPeer_get_TransportProtocol_m767D7E412A9F27CD9689630891F5506575307C4E_inline(__this, /*hidden argument*/NULL);
		V_2 = L_10;
		uint8_t L_11 = V_2;
		switch (L_11)
		{
			case 0:
			{
				goto IL_0075;
			}
			case 1:
			{
				goto IL_0075;
			}
			case 2:
			{
				goto IL_00c0;
			}
			case 3:
			{
				goto IL_00c0;
			}
			case 4:
			{
				goto IL_008e;
			}
			case 5:
			{
				goto IL_00a7;
			}
		}
	}
	{
		goto IL_00c0;
	}

IL_0075:
	{
		// return string.Format("{0}:{1}", NameServerHost, protocolPort);
		String_t* L_12 = __this->get_NameServerHost_60();
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralE7B85E7369BA50B83804EBF39E9612010E5B9FCD, L_12, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		goto IL_00c6;
	}

IL_008e:
	{
		// return string.Format("ws:
		String_t* L_17 = __this->get_NameServerHost_60();
		int32_t L_18 = V_0;
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral107307FBAF61C580C469AD7BCE2AE293E1C4A281, L_17, L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		goto IL_00c6;
	}

IL_00a7:
	{
		// return string.Format("wss:
		String_t* L_22 = __this->get_NameServerHost_60();
		int32_t L_23 = V_0;
		int32_t L_24 = L_23;
		RuntimeObject * L_25 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_24);
		String_t* L_26 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral74E0537A883E3EB77F6D19BD02E970E3B8CAA800, L_22, L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		goto IL_00c6;
	}

IL_00c0:
	{
		// throw new ArgumentOutOfRangeException();
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_27 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m215F35137EDD190A037E2E9BDA3BF5DC056FD7C3(L_27, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ChatPeer_GetNameServerAddress_mEE174269D17B37F6B706229ADE9F5A070637A82A_RuntimeMethod_var);
	}

IL_00c6:
	{
		// }
		String_t* L_28 = V_3;
		return L_28;
	}
}
// System.Boolean Photon.Chat.ChatPeer::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatPeer_Connect_m57D6143BBC1FFA33E40820A96611D098C8E2C9C2 (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatPeer_Connect_m57D6143BBC1FFA33E40820A96611D098C8E2C9C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (this.DebugOut >= DebugLevel.INFO)
		uint8_t L_0 = ((PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B *)__this)->get_DebugOut_21();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.INFO, "Connecting to nameserver " + this.NameServerAddress);
		RuntimeObject* L_2 = PhotonPeer_get_Listener_m887BECA64658F676E50480D559D3E133A62F159A_inline(__this, /*hidden argument*/NULL);
		String_t* L_3 = ChatPeer_get_NameServerAddress_mEC869AA34F11AD1F019EA0D6F7090A154DC0CAA7(__this, /*hidden argument*/NULL);
		String_t* L_4 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral2EAC14B3D351C8B6836D36173E0E34127AA6A058, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tDC907B98639311C4461981C7CCA42DCED60727C0_il2cpp_TypeInfo_var, L_2, 3, L_4);
	}

IL_0030:
	{
		// return this.Connect(this.NameServerAddress, "NameServer");
		String_t* L_5 = ChatPeer_get_NameServerAddress_mEC869AA34F11AD1F019EA0D6F7090A154DC0CAA7(__this, /*hidden argument*/NULL);
		bool L_6 = VirtFuncInvoker4< bool, String_t*, String_t*, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::Connect(System.String,System.String,System.Object,System.Object) */, __this, L_5, _stringLiteral5742FE1BDA7AB1FC9AFE28EA777EE363C684E01E, NULL, NULL);
		V_1 = L_6;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Boolean Photon.Chat.ChatPeer::AuthenticateOnNameServer(System.String,System.String,System.String,Photon.Chat.AuthenticationValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatPeer_AuthenticateOnNameServer_mEE9E9AC65A21D029BB21F0D3BFDDAFE0D79316BB (ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989 * __this, String_t* ___appId0, String_t* ___appVersion1, String_t* ___region2, AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ___authValues3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatPeer_AuthenticateOnNameServer_mEE9E9AC65A21D029BB21F0D3BFDDAFE0D79316BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	{
		// if (this.DebugOut >= DebugLevel.INFO)
		uint8_t L_0 = ((PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B *)__this)->get_DebugOut_21();
		V_1 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.INFO, "OpAuthenticate()");
		RuntimeObject* L_2 = PhotonPeer_get_Listener_m887BECA64658F676E50480D559D3E133A62F159A_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tDC907B98639311C4461981C7CCA42DCED60727C0_il2cpp_TypeInfo_var, L_2, 3, _stringLiteral0C9BC8A9EA08F5764E66418E04C783D7C5EA550E);
	}

IL_0025:
	{
		// var opParameters = new Dictionary<byte, object>();
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_3 = (Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 *)il2cpp_codegen_object_new(Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mB6A7105EE88A811F75E9529C0230DE29BC579C6A(L_3, /*hidden argument*/Dictionary_2__ctor_mB6A7105EE88A811F75E9529C0230DE29BC579C6A_RuntimeMethod_var);
		V_0 = L_3;
		// opParameters[ParameterCode.AppVersion] = appVersion;
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_4 = V_0;
		String_t* L_5 = ___appVersion1;
		NullCheck(L_4);
		Dictionary_2_set_Item_m0DAE02CE9FA04B987D0923005FEF7565EB9FB52D(L_4, (uint8_t)((int32_t)220), L_5, /*hidden argument*/Dictionary_2_set_Item_m0DAE02CE9FA04B987D0923005FEF7565EB9FB52D_RuntimeMethod_var);
		// opParameters[ParameterCode.ApplicationId] = appId;
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_6 = V_0;
		String_t* L_7 = ___appId0;
		NullCheck(L_6);
		Dictionary_2_set_Item_m0DAE02CE9FA04B987D0923005FEF7565EB9FB52D(L_6, (uint8_t)((int32_t)224), L_7, /*hidden argument*/Dictionary_2_set_Item_m0DAE02CE9FA04B987D0923005FEF7565EB9FB52D_RuntimeMethod_var);
		// opParameters[ParameterCode.Region] = region;
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_8 = V_0;
		String_t* L_9 = ___region2;
		NullCheck(L_8);
		Dictionary_2_set_Item_m0DAE02CE9FA04B987D0923005FEF7565EB9FB52D(L_8, (uint8_t)((int32_t)210), L_9, /*hidden argument*/Dictionary_2_set_Item_m0DAE02CE9FA04B987D0923005FEF7565EB9FB52D_RuntimeMethod_var);
		// if (authValues != null)
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_10 = ___authValues3;
		V_2 = (bool)((!(((RuntimeObject*)(AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 *)L_10) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0134;
		}
	}
	{
		// if (!string.IsNullOrEmpty(authValues.UserId))
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_12 = ___authValues3;
		NullCheck(L_12);
		String_t* L_13 = AuthenticationValues_get_UserId_m240707AC145B84C517AA9251278E3A6AD3A3C9F6_inline(L_12, /*hidden argument*/NULL);
		bool L_14 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_13, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0087;
		}
	}
	{
		// opParameters[ParameterCode.UserId] = authValues.UserId;
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_16 = V_0;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_17 = ___authValues3;
		NullCheck(L_17);
		String_t* L_18 = AuthenticationValues_get_UserId_m240707AC145B84C517AA9251278E3A6AD3A3C9F6_inline(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Dictionary_2_set_Item_m0DAE02CE9FA04B987D0923005FEF7565EB9FB52D(L_16, (uint8_t)((int32_t)225), L_18, /*hidden argument*/Dictionary_2_set_Item_m0DAE02CE9FA04B987D0923005FEF7565EB9FB52D_RuntimeMethod_var);
	}

IL_0087:
	{
		// if (authValues.AuthType != CustomAuthenticationType.None)
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_19 = ___authValues3;
		NullCheck(L_19);
		uint8_t L_20 = AuthenticationValues_get_AuthType_mCBBF19A8A2D5B91B99EB4E1A529888E883EEB137(L_19, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_20) == ((int32_t)((int32_t)255)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0133;
		}
	}
	{
		// opParameters[ParameterCode.ClientAuthenticationType] = (byte) authValues.AuthType;
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_22 = V_0;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_23 = ___authValues3;
		NullCheck(L_23);
		uint8_t L_24 = AuthenticationValues_get_AuthType_mCBBF19A8A2D5B91B99EB4E1A529888E883EEB137(L_23, /*hidden argument*/NULL);
		uint8_t L_25 = ((uint8_t)L_24);
		RuntimeObject * L_26 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_22);
		Dictionary_2_set_Item_m0DAE02CE9FA04B987D0923005FEF7565EB9FB52D(L_22, (uint8_t)((int32_t)217), L_26, /*hidden argument*/Dictionary_2_set_Item_m0DAE02CE9FA04B987D0923005FEF7565EB9FB52D_RuntimeMethod_var);
		// if (authValues.Token != null)
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_27 = ___authValues3;
		NullCheck(L_27);
		RuntimeObject * L_28 = AuthenticationValues_get_Token_mC64BC0A1915CA6BC9F38E1B6FF3390ACB9FFF101_inline(L_27, /*hidden argument*/NULL);
		V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject *)L_28) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_29 = V_5;
		if (!L_29)
		{
			goto IL_00e1;
		}
	}
	{
		// opParameters[ParameterCode.Secret] = authValues.Token;
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_30 = V_0;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_31 = ___authValues3;
		NullCheck(L_31);
		RuntimeObject * L_32 = AuthenticationValues_get_Token_mC64BC0A1915CA6BC9F38E1B6FF3390ACB9FFF101_inline(L_31, /*hidden argument*/NULL);
		NullCheck(L_30);
		Dictionary_2_set_Item_m0DAE02CE9FA04B987D0923005FEF7565EB9FB52D(L_30, (uint8_t)((int32_t)221), L_32, /*hidden argument*/Dictionary_2_set_Item_m0DAE02CE9FA04B987D0923005FEF7565EB9FB52D_RuntimeMethod_var);
		goto IL_0132;
	}

IL_00e1:
	{
		// if (!string.IsNullOrEmpty(authValues.AuthGetParameters))
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_33 = ___authValues3;
		NullCheck(L_33);
		String_t* L_34 = AuthenticationValues_get_AuthGetParameters_m3E0298098E97E6C4EE98BEBD4C9180F4B2EFA2DC_inline(L_33, /*hidden argument*/NULL);
		bool L_35 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_34, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_010c;
		}
	}
	{
		// opParameters[ParameterCode.ClientAuthenticationParams] = authValues.AuthGetParameters;
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_37 = V_0;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_38 = ___authValues3;
		NullCheck(L_38);
		String_t* L_39 = AuthenticationValues_get_AuthGetParameters_m3E0298098E97E6C4EE98BEBD4C9180F4B2EFA2DC_inline(L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		Dictionary_2_set_Item_m0DAE02CE9FA04B987D0923005FEF7565EB9FB52D(L_37, (uint8_t)((int32_t)216), L_39, /*hidden argument*/Dictionary_2_set_Item_m0DAE02CE9FA04B987D0923005FEF7565EB9FB52D_RuntimeMethod_var);
	}

IL_010c:
	{
		// if (authValues.AuthPostData != null)
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_40 = ___authValues3;
		NullCheck(L_40);
		RuntimeObject * L_41 = AuthenticationValues_get_AuthPostData_mFF1BEF9E3C7A6F0C0AB2094957BE9657D8C9AC3F_inline(L_40, /*hidden argument*/NULL);
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject *)L_41) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_42 = V_7;
		if (!L_42)
		{
			goto IL_0131;
		}
	}
	{
		// opParameters[ParameterCode.ClientAuthenticationData] = authValues.AuthPostData;
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_43 = V_0;
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_44 = ___authValues3;
		NullCheck(L_44);
		RuntimeObject * L_45 = AuthenticationValues_get_AuthPostData_mFF1BEF9E3C7A6F0C0AB2094957BE9657D8C9AC3F_inline(L_44, /*hidden argument*/NULL);
		NullCheck(L_43);
		Dictionary_2_set_Item_m0DAE02CE9FA04B987D0923005FEF7565EB9FB52D(L_43, (uint8_t)((int32_t)214), L_45, /*hidden argument*/Dictionary_2_set_Item_m0DAE02CE9FA04B987D0923005FEF7565EB9FB52D_RuntimeMethod_var);
	}

IL_0131:
	{
	}

IL_0132:
	{
	}

IL_0133:
	{
	}

IL_0134:
	{
		// return this.SendOperation(ChatOperationCode.Authenticate, opParameters, new SendOptions() { Reliability = true, Encrypt = this.IsEncryptionAvailable });
		Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * L_46 = V_0;
		il2cpp_codegen_initobj((&V_8), sizeof(SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5 ));
		SendOptions_set_Reliability_mC77446E8524CA786BE18E235B7857357F1EF12A0((SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5 *)(&V_8), (bool)1, /*hidden argument*/NULL);
		bool L_47 = PhotonPeer_get_IsEncryptionAvailable_mB1AD5EA055403463741C7B76F387DB022AD8B4A5(__this, /*hidden argument*/NULL);
		(&V_8)->set_Encrypt_3(L_47);
		SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  L_48 = V_8;
		bool L_49 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 *, SendOptions_tF1CDE4BABA24CAC8D92FB434B75FE595E7965EF5  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, __this, (uint8_t)((int32_t)230), L_46, L_48);
		V_9 = L_49;
		goto IL_0164;
	}

IL_0164:
	{
		// }
		bool L_50 = V_9;
		return L_50;
	}
}
// System.Void Photon.Chat.ChatPeer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatPeer__cctor_m22A7660C34602B8F951AC2CEBC56AA40DFEE7866 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatPeer__cctor_m22A7660C34602B8F951AC2CEBC56AA40DFEE7866_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Dictionary<ConnectionProtocol, int> ProtocolToNameServerPort = new Dictionary<ConnectionProtocol, int>() { { ConnectionProtocol.Udp, 5058 }, { ConnectionProtocol.Tcp, 4533 }, { ConnectionProtocol.WebSocket, 9093 }, { ConnectionProtocol.WebSocketSecure, 19093 } }; 
		Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938 * L_0 = (Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938 *)il2cpp_codegen_object_new(Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2458A69C9E49DB6994E10B4FB3FD42203CB427D4(L_0, /*hidden argument*/Dictionary_2__ctor_m2458A69C9E49DB6994E10B4FB3FD42203CB427D4_RuntimeMethod_var);
		Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938 * L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_m280FAF69EDEDDB0A613884354301DB4467BCAB64(L_1, 0, ((int32_t)5058), /*hidden argument*/Dictionary_2_Add_m280FAF69EDEDDB0A613884354301DB4467BCAB64_RuntimeMethod_var);
		Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938 * L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_m280FAF69EDEDDB0A613884354301DB4467BCAB64(L_2, 1, ((int32_t)4533), /*hidden argument*/Dictionary_2_Add_m280FAF69EDEDDB0A613884354301DB4467BCAB64_RuntimeMethod_var);
		Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938 * L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_m280FAF69EDEDDB0A613884354301DB4467BCAB64(L_3, 4, ((int32_t)9093), /*hidden argument*/Dictionary_2_Add_m280FAF69EDEDDB0A613884354301DB4467BCAB64_RuntimeMethod_var);
		Dictionary_2_t1B897B559976313E3D88129C5E1771ABD6655938 * L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_m280FAF69EDEDDB0A613884354301DB4467BCAB64(L_4, 5, ((int32_t)19093), /*hidden argument*/Dictionary_2_Add_m280FAF69EDEDDB0A613884354301DB4467BCAB64_RuntimeMethod_var);
		((ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_StaticFields*)il2cpp_codegen_static_fields_for(ChatPeer_t9D41A5C9A43743EA3E6A072C2C8CF66ECF2F8989_il2cpp_TypeInfo_var))->set_ProtocolToNameServerPort_61(L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.ErrorCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorCode__ctor_m834E31BB4EA037772AC46662DA9EB1511287E8B5 (ErrorCode_t49B1D3A0A84EAE4C66AA6E40237D6FB10E6A35E5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.ParameterCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterCode__ctor_m4A87B3E2E228B85CF730FBDDDBC4DD1DB54EFA6B (ParameterCode_t7CAB0CED18EF18251341209C8FF74EBCB049AA91 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AuthenticationValues_set_UserId_m3D9EE5F706F311197E729BD61E81A37CDC81DE8B_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string UserId { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CUserIdU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthPostData_m4BB0A1F1BF32144A5AE42460E6DC676D40AD8061_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public object AuthPostData { get; private set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CAuthPostDataU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_AuthGetParameters_m3E0298098E97E6C4EE98BEBD4C9180F4B2EFA2DC_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	{
		// public string AuthGetParameters { get; set; }
		String_t* L_0 = __this->get_U3CAuthGetParametersU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthGetParameters_mA4168C7B93997D0957D5373984D60D58C3D763F2_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AuthGetParameters { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAuthGetParametersU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_UserId_m240707AC145B84C517AA9251278E3A6AD3A3C9F6_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	{
		// public string UserId { get; set; }
		String_t* L_0 = __this->get_U3CUserIdU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * AuthenticationValues_get_Token_mC64BC0A1915CA6BC9F38E1B6FF3390ACB9FFF101_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	{
		// public object Token { get; protected internal set; }
		RuntimeObject * L_0 = __this->get_U3CTokenU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * AuthenticationValues_get_AuthPostData_mFF1BEF9E3C7A6F0C0AB2094957BE9657D8C9AC3F_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, const RuntimeMethod* method)
{
	{
		// public object AuthPostData { get; private set; }
		RuntimeObject * L_0 = __this->get_U3CAuthPostDataU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatChannel_set_LastMsgId_mD7539C79B24056E2718FDD4DA4DED06AE641863C_inline (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int LastMsgId { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CLastMsgIdU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatChannel_set_PublishSubscribers_m3162B1905CF3F87749D06FD6B865836C37B9F24C_inline (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CPublishSubscribersU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatChannel_set_MaxSubscribers_mA3EF3E020422FFE128ADDCC8C0657D77AF353D62_inline (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CMaxSubscribersU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ChatClient_get_State_m699EC4A67CAA0596492E6E32DA46654A3DBC9EA0_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public ChatState State { get; private set; }
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ChatClient_get_AuthValues_mF82FDE2770658A9C379F1CF74DF14A601F5D317E_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_0 = __this->get_U3CAuthValuesU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_AuthValues_mA9F19EDA73501C75C59D69C949B66953CE0B8EFE_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * ___value0, const RuntimeMethod* method)
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * L_0 = ___value0;
		__this->set_U3CAuthValuesU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t PhotonPeer_get_TransportProtocol_m767D7E412A9F27CD9689630891F5506575307C4E_inline (PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_U3CTransportProtocolU3Ek__BackingField_38();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PhotonPeer_set_TransportProtocol_m80F1A37AC3F8CA8715B4C94B5CCABA6F2212725B_inline (PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_U3CTransportProtocolU3Ek__BackingField_38(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_State_mB4F7447BD9819E2D8EE5E6F169A0AE7A0F49DC1E_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ChatState State { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PhotonPeer_set_SerializationProtocolType_m02676498FE60666B33768152B5CA30C4F8FC6EFD_inline (PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CSerializationProtocolTypeU3Ek__BackingField_18(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_EnableProtocolFallback_mD96C363154CC46C3CF5AA432346DBC78EEFE474F_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool EnableProtocolFallback { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CEnableProtocolFallbackU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_DisconnectedCause_m0726D082C1B2F8E366BAC950319DEA20CF09FFDB_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public ChatDisconnectCause DisconnectedCause { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CDisconnectedCauseU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_AppId_m49B2AD5DFFCB3328EB95E1416DC4640BAC72847A_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AppId { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAppIdU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_AppVersion_m7852C67700E10420F7E14D3BA0C4DC5E5E9781C8_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string AppVersion { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAppVersionU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_NameServerAddress_m7A3F9E28BE94D5DA80D7559F6A265DD2C86510E6_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string NameServerAddress { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameServerAddressU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ChatClient_get_UseBackgroundWorkerForSending_mA5A8EE30F7BB6048082C233967E2DA5D2CEE77E5_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public bool UseBackgroundWorkerForSending { get; set; }
		bool L_0 = __this->get_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_25();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppId_mA154B74C72A401D4A2569B9D1DBE815AC26AB8CC_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public string AppId { get; private set; }
		String_t* L_0 = __this->get_U3CAppIdU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppVersion_m325B5082717878BDB33E2AD0F338BA920984489B_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public string AppVersion { get; private set; }
		String_t* L_0 = __this->get_U3CAppVersionU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AuthenticationValues_set_Token_m3DC66AD2E8DE2C36870A4B143CFE817A518C079F_inline (AuthenticationValues_tE3DFC85033BE0CD27BF26EDB30BF555799AE4E78 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public object Token { get; protected internal set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CTokenU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ChatClient_get_EnableProtocolFallback_mF139A8C5D666934E37DE8517738CB29DD3CD5789_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public bool EnableProtocolFallback { get; set; }
		bool L_0 = __this->get_U3CEnableProtocolFallbackU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatChannel_set_IsPrivate_m1BA5274B9E487BB6284FDFBAFDF12C1074F86A28_inline (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsPrivate { get; protected internal set; }
		bool L_0 = ___value0;
		__this->set_U3CIsPrivateU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ChatChannel_get_PublishSubscribers_m95072AE75264032C94FBE71EA09F257C889B18EB_inline (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; protected set; }
		bool L_0 = __this->get_U3CPublishSubscribersU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ChatClient_set_FrontendAddress_mF45D1E2D49E57DCCB99146E706C21245D972C4CC_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string FrontendAddress { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CFrontendAddressU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ChatClient_get_DisconnectedCause_m57D498FAFF15DE6D6ED299021BAD2EEE35B2EEFC_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public ChatDisconnectCause DisconnectedCause { get; private set; }
		int32_t L_0 = __this->get_U3CDisconnectedCauseU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ChatClient_get_FrontendAddress_m847BEC17A9DDF9204AB4A1C860392DDD6BCB7F83_inline (ChatClient_t00238E132CA795D7F98C1DE6F433BB231F875505 * __this, const RuntimeMethod* method)
{
	{
		// public string FrontendAddress { get; private set; }
		String_t* L_0 = __this->get_U3CFrontendAddressU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ChatChannel_get_MaxSubscribers_m7564E3A11AF219E2DECD04BB4A27BD5B3D2C8915_inline (ChatChannel_tA7512B49C2002C0C0C83D52EDB01A178A333F579 * __this, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; protected set; }
		int32_t L_0 = __this->get_U3CMaxSubscribersU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ChannelCreationOptions_get_MaxSubscribers_m695771BA6E0451DEF5C00D270D95F218735DD6F0_inline (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, const RuntimeMethod* method)
{
	{
		// public int MaxSubscribers { get; set; }
		int32_t L_0 = __this->get_U3CMaxSubscribersU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool ChannelCreationOptions_get_PublishSubscribers_m95B809EAFBB363FA01A7132CD7FA48D2200D85AC_inline (ChannelCreationOptions_t307558F73A0621A89A95613A19C90429DEC46C8D * __this, const RuntimeMethod* method)
{
	{
		// public bool PublishSubscribers { get; set; }
		bool L_0 = __this->get_U3CPublishSubscribersU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* PhotonPeer_get_Listener_m887BECA64658F676E50480D559D3E133A62F159A_inline (PhotonPeer_tD98A98B8E9FF0E5A66E7279BD082410451BA1A7B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CListenerU3Ek__BackingField_22();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared_inline (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_0 = (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )__this->get_current_3();
		return (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m51DBCAAB77E596A4583902572958ADB0893E1A0E_gshared_inline (HashSet_1_t20C647F44B285CB7C061931B00ED43A230F311E5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__count_9();
		return (int32_t)L_0;
	}
}
