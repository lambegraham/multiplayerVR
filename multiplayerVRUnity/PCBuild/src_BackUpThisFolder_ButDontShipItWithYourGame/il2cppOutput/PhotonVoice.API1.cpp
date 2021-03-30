#include "il2cpp-config.h"

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

template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2;
// Photon.Voice.AudioUtil/LevelMeter`1<System.Int16>
struct LevelMeter_1_t4B8A3F8A829C902E37A4586895E2409DA5191AAB;
// Photon.Voice.AudioUtil/LevelMeter`1<System.Single>
struct LevelMeter_1_t28B3BB8AF52310712E5B3531973AEF68F3EEF313;
// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Int16>
struct VoiceDetectorCalibration_1_tA0B8E0360AFA342823133C34C47FD8528EE2323E;
// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Single>
struct VoiceDetectorCalibration_1_t7CB90E5F137F74DF61C50C34D3A4EC99E27C5FA8;
// Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>
struct VoiceDetector_1_tC1EA6413FAEC07048E59AB2B41250322208BB53F;
// Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>
struct VoiceDetector_1_t56F70EEFF9558BBE943EAAA907E2BE481FF3C696;
// Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16>
struct FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF;
// Photon.Voice.FactoryPrimitiveArrayPool`1<System.Single>
struct FactoryPrimitiveArrayPool_1_t418A4CA2D3B7BD53F205049A6C5EB8CC3A2A949D;
// Photon.Voice.Framer`1<System.Int16>
struct Framer_1_tFA4A125073CBA54E0B5C3EE99831A9C12BED8751;
// Photon.Voice.Framer`1<System.Single>
struct Framer_1_t9E72DFCCE1F62F49B9F5C9E0574B98EA19BDC847;
// Photon.Voice.IDecoder
struct IDecoder_t36A28037841F7AC22993FFA5D8C4FCDA480C946E;
// Photon.Voice.IEncoder
struct IEncoder_tAB85482F12DE70245C151D00C3BE79085F365876;
// Photon.Voice.ILogger
struct ILogger_t1D376534F7B46D24792BF8A70751D4B75719C345;
// Photon.Voice.IServiceable
struct IServiceable_t494B8C6576F0623D8242FBDA637DC4C8B0345AF2;
// Photon.Voice.IVoiceTransport
struct IVoiceTransport_t13DCCD7F60B69957D0B67AA8B7DC652F6134C1AB;
// Photon.Voice.LocalVoice
struct LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501;
// Photon.Voice.LocalVoiceAudio`1<System.Int16>
struct LocalVoiceAudio_1_t5841EE1080E7EF2DF1DF88B18F83C8B883614A34;
// Photon.Voice.LocalVoiceAudio`1<System.Single>
struct LocalVoiceAudio_1_tE5D43B1351403442A635282CB35E16AB8C714838;
// Photon.Voice.LocalVoiceFramed`1<System.Int16>
struct LocalVoiceFramed_1_t631B3C25EBF711BB5E2EB03387F85C8BB662853E;
// Photon.Voice.LocalVoiceFramed`1<System.Single>
struct LocalVoiceFramed_1_tFAA6F2D1E653F01F3F71CA424CEA5DE18C7AD8F8;
// Photon.Voice.ObjectFactory`2<System.Int16[],System.Int32>
struct ObjectFactory_2_t1375185CBB63DADBA9D49449027035BE22EBDE4F;
// Photon.Voice.PrimitiveArrayPool`1<System.Int16>
struct PrimitiveArrayPool_1_t946096CC95E2A065D120718899C04F8AFCE79859;
// Photon.Voice.PrimitiveArrayPool`1<System.Single>
struct PrimitiveArrayPool_1_t8D35B61981A83CAC319D5DEA9ADF061E5C126559;
// Photon.Voice.RemoteVoice
struct RemoteVoice_tFB7B418D0495B703F0EBB5E8F950768A6A48D39B;
// Photon.Voice.RemoteVoiceInfo
struct RemoteVoiceInfo_tBE345189E3B7ED8A97D47B0999117273F16427EC;
// Photon.Voice.SpacingProfile
struct SpacingProfile_t86BFDE82BB4987EF8B5CE17889858E4392E70842;
// Photon.Voice.VoiceClient
struct VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33;
// Photon.Voice.VoiceClient/<>c
struct U3CU3Ec_t85C70299099BE4D2CF1D1C061B5EBD8321A50821;
// Photon.Voice.VoiceClient/<>c__DisplayClass47_0
struct U3CU3Ec__DisplayClass47_0_t648A17DFFFA37BA31B69266006B0352162ACBDDD;
// Photon.Voice.VoiceClient/<>c__DisplayClass50_0
struct U3CU3Ec__DisplayClass50_0_tA1A9493FC62C2FB2D7A2DD68C7A220387A5F1CC8;
// Photon.Voice.VoiceClient/<>c__DisplayClass50_1
struct U3CU3Ec__DisplayClass50_1_t4A11DAFD8B25F39F74D7BF947FB54CABFA3C4BAD;
// Photon.Voice.VoiceClient/<>c__DisplayClass50_2
struct U3CU3Ec__DisplayClass50_2_tB13B134F0287DC3312D23D1B120642C6C344ABF0;
// Photon.Voice.VoiceClient/<>c__DisplayClass50_3
struct U3CU3Ec__DisplayClass50_3_t95073D710235C84E8A926584ADA4339760716317;
// Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40
struct U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0;
// Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate
struct RemoteVoiceInfoDelegate_t9DDC9137E7981970B308A55A9F2C949364906D06;
// Photon.Voice.VoiceEvent
struct VoiceEvent_tC8CCAB6DA56312061470CF25E66CCF26A9CF2BDF;
// Photon.Voice.WebRTCAudioLib
struct WebRTCAudioLib_t1E26D463A18D0FCACE38B6CCEDBE9AFDEAEF2A89;
// Photon.Voice.WebRTCAudioProcessor
struct WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE;
// Photon.Voice.Windows.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_t3BB49D06B906DAFF1EA7DF66BC74543E29EF63BE;
// Photon.Voice.Windows.WindowsAudioInPusher
struct WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038;
// Photon.Voice.Windows.WindowsAudioInPusher/CallbackDelegate
struct CallbackDelegate_t4514EFCDF9110C72DCC6DBA745B6DD429C888FF8;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Int16[]>
struct Action_1_tB6E8E8CB26C84B16959C0CA9F3E9958D027263C3;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`3<System.Int32,System.IntPtr,System.Int32>
struct Action_3_tA3B470E9D4FEF30C8329D94BF79F47D8F0EFC367;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Byte,Photon.Voice.RemoteVoice>[]
struct EntryU5BU5D_t15B7801B1E254309EC9A906CFC746E4D6A0893C4;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Photon.Voice.Windows.WindowsAudioInPusher>[]
struct EntryU5BU5D_tE21593DFA08A8136ECE0D2064E68FD08ABCACF7F;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>[]
struct EntryU5BU5D_t2DC6E7BDE536F67A817AF299B42D0F4BF341754C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,Photon.Voice.RemoteVoice>
struct KeyCollection_tA13C0EE5321EF40A748E5785DB22143AE5B7702A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Photon.Voice.Windows.WindowsAudioInPusher>
struct KeyCollection_t85CDE3C915D7D26D8EEB4FE1900917089AA844E6;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>
struct KeyCollection_tCAEEF4F96B1EC3D09EC86CFF114B853CD3A22DC2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,Photon.Voice.RemoteVoice>
struct ValueCollection_tF6D5304998399EB0027D0F6709DF8B0EE77A7192;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Photon.Voice.Windows.WindowsAudioInPusher>
struct ValueCollection_t6730F71B70E99B54E4455455BC908A020C1A3D5F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>
struct ValueCollection_t5E7C876203B9273698AFD139D55E4E054C4F9A04;
// System.Collections.Generic.Dictionary`2<Photon.Voice.Codec,System.Int32>
struct Dictionary_2_tADFB10BF29CFB1F63E0F0DFA077F252707AE99B9;
// System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.LocalVoice>
struct Dictionary_2_t5DCD4F036D1C394C8B50D98824F214981BF11DED;
// System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>
struct Dictionary_2_t0518167B203339B478AB3F8F942303BAF8B24B77;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>
struct Dictionary_2_t3B77FDE09068A7905F58AAC0DB3B58971B40A516;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Voice.Windows.WindowsAudioInPusher>
struct Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>
struct Dictionary_2_t611A5FC094D9C83B06C788EC1402D634859BADE5;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Photon.Voice.LocalVoice>>
struct Dictionary_2_t9D47848158230A04CC68EE0E1E8CCAF7878B6481;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884;
// System.Collections.Generic.IEnumerable`1<System.Single[]>
struct IEnumerable_1_tC2BAE12154B72C377B9AD70CE709436B5FABABEB;
// System.Collections.Generic.IEnumerator`1<Photon.Voice.RemoteVoiceInfo>
struct IEnumerator_1_tD61BBB8A5A7CD10ED1E1FC0E6F705BCF68C17FFD;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_tBCCD6A9500C35AEB0EB966AD9E7101A68F06AA97;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<System.Int16>>
struct List_1_tC560187189515692BF61CAA4B783247B8B1FDC40;
// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<System.Single>>
struct List_1_t71BDA25FF88BFFDFF7DC0B4727FB732FEAC89D7E;
// System.Collections.Generic.Queue`1<Photon.Voice.FrameBuffer>
struct Queue_1_tBA66CCF9F37EDB52FAA379006BF94F96ADEC8C90;
// System.Collections.Generic.Queue`1<System.Int16[]>
struct Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0;
// System.Collections.Generic.Queue`1<System.Single[]>
struct Queue_1_t1D68CA5304B329ED091A86142D0C2886A18AA284;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Func`2<Photon.Voice.LocalVoice,System.Boolean>
struct Func_2_tF4E1078BC60C632418A37AF0FAD969E37ED95920;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int16[]
struct Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28;
// System.Int16[][]
struct Int16U5BU5DU5BU5D_t07FBF1BD646E6D6779697B7E1168340225DBE4D5;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Random
struct Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Principal.IPrincipal
struct IPrincipal_t63FD7F58FBBE134C8FE4D31710AAEA00B000F0BF;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98;
// System.Threading.ExecutionContext
struct ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70;
// System.Threading.InternalThread
struct InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192;
// System.Threading.Thread
struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7;
// System.Threading.ThreadStart
struct ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* Action_3_tA3B470E9D4FEF30C8329D94BF79F47D8F0EFC367_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Codec_tD177CC2C38203F5AB2E612E0E36F2DA1CB222D0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Framer_1_t9E72DFCCE1F62F49B9F5C9E0574B98EA19BDC847_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tC2BAE12154B72C377B9AD70CE709436B5FABABEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t8C9BC05090AF8E2A1A53BC3F98B08B31603E8A85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_t1D376534F7B46D24792BF8A70751D4B75719C345_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectFactory_2_t1375185CBB63DADBA9D49449027035BE22EBDE4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Param_t8B3DC3D8B33F289FD0D8D2E5A3F840C19CDBD652_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteVoiceInfo_tBE345189E3B7ED8A97D47B0999117273F16427EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteVoiceOptions_t2F19B3BEA11C908B63B0C9A6F0A445D019150214_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t85C70299099BE4D2CF1D1C061B5EBD8321A50821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tF81834743BA3008C119EFE0241CD0B42D8F539AC____990752441D5A39D66F916F6D91562D3673B4333A_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0D3F48B826672C0315E426FB8044B0EF887CE290;
IL2CPP_EXTERN_C String_t* _stringLiteral1035F51824C7291A85F61C471422D7379DA39454;
IL2CPP_EXTERN_C String_t* _stringLiteral1133E4375ABCDBD942AB590E80C672D594E11E9D;
IL2CPP_EXTERN_C String_t* _stringLiteral1D1D20E00F9F5C15C3A3C00E2FBCD1D90D31999C;
IL2CPP_EXTERN_C String_t* _stringLiteral1E4B7A55286AE48B98EE19B33C7E47014369ED39;
IL2CPP_EXTERN_C String_t* _stringLiteral1EFADD5C561FC41BDB462E41E51E0EEA344F94D4;
IL2CPP_EXTERN_C String_t* _stringLiteral21606782C65E44CAC7AFBB90977D8B6F82140E76;
IL2CPP_EXTERN_C String_t* _stringLiteral342FE9D5EE8B2C39D5F136A27F9E58EB4A8F4DAF;
IL2CPP_EXTERN_C String_t* _stringLiteral3B52BDC686C8A120A771C894679FF85E28425030;
IL2CPP_EXTERN_C String_t* _stringLiteral3FAFB8170F7B02CCB1A2BEC38CD43F2B540EBB44;
IL2CPP_EXTERN_C String_t* _stringLiteral43098AF404A40855136AF1D2634F0768E13D8152;
IL2CPP_EXTERN_C String_t* _stringLiteral5950B2514EF161E3CE2127993890A1100E1B76A8;
IL2CPP_EXTERN_C String_t* _stringLiteral5AAC9D556F7904ED56FEBA666318B8A790C6A12D;
IL2CPP_EXTERN_C String_t* _stringLiteral5B3E51230F720022A7F6B3F4ECFB61C665E97961;
IL2CPP_EXTERN_C String_t* _stringLiteral5F3624B516C84B80F8F15D29D591B2F5CD54F3BB;
IL2CPP_EXTERN_C String_t* _stringLiteral7B0A5966A88414D3790BB8E2B29E110B6BFD049C;
IL2CPP_EXTERN_C String_t* _stringLiteral8396B00FF8239467BF90455265FA52CF47904843;
IL2CPP_EXTERN_C String_t* _stringLiteral9528931236125C82D28B276D4ADB03399050D743;
IL2CPP_EXTERN_C String_t* _stringLiteralA1A08CE86D8A2AF150E903536E8229B24F185D5F;
IL2CPP_EXTERN_C String_t* _stringLiteralA4B530CCBC40E0046638CFE2E77A5BAB794C3B8F;
IL2CPP_EXTERN_C String_t* _stringLiteralA6DC1E1054DDEAE3C225EF83CCB0AAD18CE5A6DA;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E2758CE468BBC76AFC68D064BBED850561F0FC;
IL2CPP_EXTERN_C String_t* _stringLiteralB398F0EACFB4FC434E7394B6D0E8CEA831DF4B7B;
IL2CPP_EXTERN_C String_t* _stringLiteralBEB42EFF96DE600339DAD246E1A49AEAC2F9A770;
IL2CPP_EXTERN_C String_t* _stringLiteralC09B2B6E6179C669C9DCE1EE566E2A47A682DFA7;
IL2CPP_EXTERN_C String_t* _stringLiteralC1FAF8D32C867A061B567F81710C5AB58469814B;
IL2CPP_EXTERN_C String_t* _stringLiteralC5D6EB9D023E3D0AD6A5CE66E23D9D799588B02F;
IL2CPP_EXTERN_C String_t* _stringLiteralC69A4735FB44C982E3D72F243F7F53842D6E503B;
IL2CPP_EXTERN_C String_t* _stringLiteralCC732911121A99D16F7B4E395735F6B301DDA6DE;
IL2CPP_EXTERN_C String_t* _stringLiteralDE65E3610887956DB5708A5C24B397A4EDA96C7E;
IL2CPP_EXTERN_C String_t* _stringLiteralE0B21B636C9DAC9314E35835A40D10ADEBD8F491;
IL2CPP_EXTERN_C String_t* _stringLiteralE5001DE73850166462BE7E176F72C4A8F9F03E83;
IL2CPP_EXTERN_C String_t* _stringLiteralE576926A40B4C1EDEFCAA5878CC5DA99FBAA5B0C;
IL2CPP_EXTERN_C String_t* _stringLiteralEBE6C44F4B0C805E88334B1B1C86EED08285E6D7;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m420EECC0794DD9644AEF360F0309109F0989857A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_3__ctor_mCA5F9BDBF11CA0BC604BC63CAAB894D5EAE08A09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mA08AF9299C3E6C6CCB54C761D2A0C31D00512053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m23358DBED01384B592A9399E84D7A4906CF1641F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m4C033987CC9FDC8194F32618AFE3BEA09C88463D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m3D2340424BA571726ED5B3AAE0E64316D21A87EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m509D1745CA295DEE22CB804D470B94E7A116750A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m85308C069B94E44BF6E0C29D6D0CA01E2BF7A570_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9E9779965C5DE6F96574EEFF97A0978AD895D4C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA9BD96F227D7514904C9E7DD7FEC7CD826051F44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m92F2D3AAD3ACFEE8C3DABD7BD78F63C5FB18DD86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFDECD0DB93C203A08DC479E6AE8875DF4EFC2177_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m3E621FEE10445519C310F57D148D114756B78CB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4CEAD02442DF9B81445FF8C2B8FED6A9798C16BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FactoryPrimitiveArrayPool_1_Free_m5C953DE8CD2CBC136E1C8995A04F8325AEA3C01B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FactoryPrimitiveArrayPool_1_New_m55E13ACEC576100A9A6380E5E200F0EA8E6C4A85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FactoryPrimitiveArrayPool_1_New_m6FE87FBC0519D29D44164E40374B613B92DE56A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FactoryPrimitiveArrayPool_1_New_mC4F640517198A1CEB6869E76A71133E0BF174950_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FactoryPrimitiveArrayPool_1__ctor_m8BF2472EF468272ACE5B5F0A48339A3957E97D34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Framer_1_Frame_m18D4AE6AF9BC39BF578ADC00C24019E6D28CC51C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Framer_1__ctor_mB44E93DA6F91465BDE36FA57B9CB3D98D4F14CDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m648AEE032BFE34D6857A3807BFF307726641B6C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mC70443985A23E921917ADA227A8EFEFAB49C7D41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m8889DEAA4F81F4AA48EE570BF2D2EF5414840A34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mF2A47560A4B835767281B4FCE0DD10DDA0BDA7E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalVoiceFramed_1_PushDataAsync_m26B54A35B29091F791B316FC76F6C87A43D52332_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalVoiceFramed_1_PushDataAsync_m5BE879D4365DE39A75E39450B4EDE8CA844389AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalVoiceFramed_1_get_BufferFactory_m35C61BD0C7496B253B0341A2E1A2BCA871C4A23F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalVoiceFramed_1_get_BufferFactory_m54C4D49DB6DC23EAF947EB390ADF4AED8E253745_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m74586FE2340B2DD558E02835DC485D181991A21A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m67A298CFA555767E45845FF2C9E441F85EA86CB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mD71406C9A28EE99DDE07C8FFD0CC458936F23430_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m14436A3E2747030960ED9C388F570A402777FA7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_IEnumerator_Reset_m9D6F7557EE66C7036496F43D00795EDDA9619C9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRTCAudioProcessor_ReverseStreamThread_mB5385F957C0A4B1A31F8746763FFE36D569852C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsAudioInPusher_nativePushCallback_mAB59AE24CB58FF72A0AEA487A6541254C1961D95_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t CallbackDelegate_BeginInvoke_m1552D6F7361C7058FD311BEE8F3D3169915E65CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RemoteVoiceInfoDelegate_BeginInvoke_m75B90423F5DB40919EEA2FD02D827B80FCCCF3E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass47_0_U3CCreateLocalVoiceU3Eb__0_m433936FD2C530F16A086C1628921E8367AC59A52_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass50_0_U3CCreateLocalVoiceAudioFromSourceU3Eb__0_mA44DABF71F7F964F3A7035BB9DAAF3E500847553_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass50_1_U3CCreateLocalVoiceAudioFromSourceU3Eb__1_m6DC7D4C4228E515374A8ADE0F10DE3E624BB580D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass50_2_U3CCreateLocalVoiceAudioFromSourceU3Eb__2_m61131F171D9A9E48E5A6DCB852A6B649AAEAE912_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass50_3_U3CCreateLocalVoiceAudioFromSourceU3Eb__3_m53F2B8F7956F9C90A34C982D42F8352CC944A46D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m1C6209EA970A7EE3E1B4B5D39CEC0CBE27A2D494_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cget_RemoteVoiceInfosU3Ed__40_MoveNext_m328F4F2DAA6381D36E58FF8D3BD6A3BD6E6C1525_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_Generic_IEnumerableU3CPhoton_Voice_RemoteVoiceInfoU3E_GetEnumerator_mF6E6A04A378FC25CDDE5A52FD5F1152A13C1B806_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_IEnumerator_Reset_m9D6F7557EE66C7036496F43D00795EDDA9619C9C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally1_mC6DB71AA66036CCD87CE4B2F5F942A86007D6284_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally2_m3EE2A7ABE02C6E5CF0A4AE6BD63CE2BE91C83959_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VoiceInfo_ToString_m83A234C40AF2AFF955ABD69DE7F49A5E3C52F72C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRTCAudioProcessor_Dispose_m7445F7D4480F6FC55F1FB693FCEE8ED421148491_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRTCAudioProcessor_InitReverseStream_m78FBF4ECCEA760160E948263C7A9941EAB7FB8FE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRTCAudioProcessor_OnAudioOutFrameFloat_mDA88595564B6F8047BF8863239D3A6C3C11E1105_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRTCAudioProcessor_Process_mD833606D163A70328C2641A3494E1C7187B3B255_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRTCAudioProcessor_ReverseStreamThread_mB5385F957C0A4B1A31F8746763FFE36D569852C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRTCAudioProcessor__cctor_m77F09971D6E4F4A670AAB3067AB0299E0E104466_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRTCAudioProcessor__ctor_m65304840759D8AC2DC7195625043D0D289EEB6FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRTCAudioProcessor_setParam_m5C1609843F1640EC9A1B3C01482BD3C3224932E9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRTCAudioProcessor_set_AECHighPass_m1A9F7E7ED3767E8FFA4784442BC7F912BE2B7E69_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRTCAudioProcessor_set_AECMobile_mFA2C38993A756AFDB37F36C72CA2049E534DDDD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRTCAudioProcessor_set_AECStreamDelayMs_mF8A183FD7A5A4060DC5170E27F2564B7208939B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRTCAudioProcessor_set_AEC_mB6E0B6EC6DC70CBF8B59E6E1524EFCC965E480D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRTCAudioProcessor_set_AGC2_mBB980A035865D41C8C94473A39A7D6FD97982760_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRTCAudioProcessor_set_AGCCompressionGain_m7442CBA872899D5D18F787A080C5401B23BF2638_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRTCAudioProcessor_set_AGCTargetLevel_mB42B872BDF22F82EE772657F80F0556A09869A16_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRTCAudioProcessor_set_AGC_m94F321CCC61C28B78E863601BB428D75C6A43520_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRTCAudioProcessor_set_Bypass_m8587D0FEC885E0825AF99071B621A0DAEE97913E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRTCAudioProcessor_set_HighPass_mDB5C0FC80430A979F853D88F0A7D27C78425045B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRTCAudioProcessor_set_NoiseSuppression_mD54F08549A8878E95B6E92FEC258D21BFFA99A9D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRTCAudioProcessor_set_VAD_m81F796A653F539E6B3DFC8FEC8C55FA5BC2D157D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsAudioInPusher_Dispose_mEC26FD89A1FCF5D958CE54EE5E1E292615CC63AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsAudioInPusher__cctor_m56B4618921BB879FF065CAE5F0712F5E10EB8300_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsAudioInPusher__ctor_mEC0FCD6DE967AEC0F3D19413017CC5074F1A7C90_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsAudioInPusher_nativePushCallback_mAB59AE24CB58FF72A0AEA487A6541254C1961D95_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsAudioInPusher_push_mED1E1EA2D3B2B1C76814E25F6E044E455EDB9E2D_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16>
struct  FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF  : public RuntimeObject
{
public:
	// Photon.Voice.PrimitiveArrayPool`1<T> Photon.Voice.FactoryPrimitiveArrayPool`1::pool
	PrimitiveArrayPool_1_t946096CC95E2A065D120718899C04F8AFCE79859 * ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF, ___pool_0)); }
	inline PrimitiveArrayPool_1_t946096CC95E2A065D120718899C04F8AFCE79859 * get_pool_0() const { return ___pool_0; }
	inline PrimitiveArrayPool_1_t946096CC95E2A065D120718899C04F8AFCE79859 ** get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(PrimitiveArrayPool_1_t946096CC95E2A065D120718899C04F8AFCE79859 * value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_0), (void*)value);
	}
};


// Photon.Voice.FactoryPrimitiveArrayPool`1<System.Single>
struct  FactoryPrimitiveArrayPool_1_t418A4CA2D3B7BD53F205049A6C5EB8CC3A2A949D  : public RuntimeObject
{
public:
	// Photon.Voice.PrimitiveArrayPool`1<T> Photon.Voice.FactoryPrimitiveArrayPool`1::pool
	PrimitiveArrayPool_1_t8D35B61981A83CAC319D5DEA9ADF061E5C126559 * ___pool_0;

public:
	inline static int32_t get_offset_of_pool_0() { return static_cast<int32_t>(offsetof(FactoryPrimitiveArrayPool_1_t418A4CA2D3B7BD53F205049A6C5EB8CC3A2A949D, ___pool_0)); }
	inline PrimitiveArrayPool_1_t8D35B61981A83CAC319D5DEA9ADF061E5C126559 * get_pool_0() const { return ___pool_0; }
	inline PrimitiveArrayPool_1_t8D35B61981A83CAC319D5DEA9ADF061E5C126559 ** get_address_of_pool_0() { return &___pool_0; }
	inline void set_pool_0(PrimitiveArrayPool_1_t8D35B61981A83CAC319D5DEA9ADF061E5C126559 * value)
	{
		___pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_0), (void*)value);
	}
};


// Photon.Voice.Framer`1<System.Single>
struct  Framer_1_t9E72DFCCE1F62F49B9F5C9E0574B98EA19BDC847  : public RuntimeObject
{
public:
	// T[] Photon.Voice.Framer`1::frame
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___frame_0;
	// System.Int32 Photon.Voice.Framer`1::sizeofT
	int32_t ___sizeofT_1;
	// System.Int32 Photon.Voice.Framer`1::framePos
	int32_t ___framePos_2;

public:
	inline static int32_t get_offset_of_frame_0() { return static_cast<int32_t>(offsetof(Framer_1_t9E72DFCCE1F62F49B9F5C9E0574B98EA19BDC847, ___frame_0)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_frame_0() const { return ___frame_0; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_frame_0() { return &___frame_0; }
	inline void set_frame_0(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___frame_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frame_0), (void*)value);
	}

	inline static int32_t get_offset_of_sizeofT_1() { return static_cast<int32_t>(offsetof(Framer_1_t9E72DFCCE1F62F49B9F5C9E0574B98EA19BDC847, ___sizeofT_1)); }
	inline int32_t get_sizeofT_1() const { return ___sizeofT_1; }
	inline int32_t* get_address_of_sizeofT_1() { return &___sizeofT_1; }
	inline void set_sizeofT_1(int32_t value)
	{
		___sizeofT_1 = value;
	}

	inline static int32_t get_offset_of_framePos_2() { return static_cast<int32_t>(offsetof(Framer_1_t9E72DFCCE1F62F49B9F5C9E0574B98EA19BDC847, ___framePos_2)); }
	inline int32_t get_framePos_2() const { return ___framePos_2; }
	inline int32_t* get_address_of_framePos_2() { return &___framePos_2; }
	inline void set_framePos_2(int32_t value)
	{
		___framePos_2 = value;
	}
};


// Photon.Voice.VoiceClient
struct  VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33  : public RuntimeObject
{
public:
	// Photon.Voice.IVoiceTransport Photon.Voice.VoiceClient::transport
	RuntimeObject* ___transport_0;
	// Photon.Voice.ILogger Photon.Voice.VoiceClient::logger
	RuntimeObject* ___logger_1;
	// System.Int32 Photon.Voice.VoiceClient::<FramesLost>k__BackingField
	int32_t ___U3CFramesLostU3Ek__BackingField_2;
	// System.Int32 Photon.Voice.VoiceClient::<FramesReceived>k__BackingField
	int32_t ___U3CFramesReceivedU3Ek__BackingField_3;
	// System.Int32 Photon.Voice.VoiceClient::<RoundTripTime>k__BackingField
	int32_t ___U3CRoundTripTimeU3Ek__BackingField_4;
	// System.Int32 Photon.Voice.VoiceClient::<RoundTripTimeVariance>k__BackingField
	int32_t ___U3CRoundTripTimeVarianceU3Ek__BackingField_5;
	// System.Boolean Photon.Voice.VoiceClient::<SuppressInfoDuplicateWarning>k__BackingField
	bool ___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6;
	// Photon.Voice.VoiceClient_RemoteVoiceInfoDelegate Photon.Voice.VoiceClient::<OnRemoteVoiceInfoAction>k__BackingField
	RemoteVoiceInfoDelegate_t9DDC9137E7981970B308A55A9F2C949364906D06 * ___U3COnRemoteVoiceInfoActionU3Ek__BackingField_7;
	// System.Int32 Photon.Voice.VoiceClient::<DebugLostPercent>k__BackingField
	int32_t ___U3CDebugLostPercentU3Ek__BackingField_8;
	// System.Int32 Photon.Voice.VoiceClient::prevRtt
	int32_t ___prevRtt_9;
	// System.Collections.Generic.Dictionary`2<Photon.Voice.Codec,System.Int32> Photon.Voice.VoiceClient::remoteVoiceDelayFrames
	Dictionary_2_tADFB10BF29CFB1F63E0F0DFA077F252707AE99B9 * ___remoteVoiceDelayFrames_10;
	// System.Byte Photon.Voice.VoiceClient::globalInterestGroup
	uint8_t ___globalInterestGroup_11;
	// System.Byte Photon.Voice.VoiceClient::voiceIdCnt
	uint8_t ___voiceIdCnt_12;
	// System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.LocalVoice> Photon.Voice.VoiceClient::localVoices
	Dictionary_2_t5DCD4F036D1C394C8B50D98824F214981BF11DED * ___localVoices_13;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Photon.Voice.LocalVoice>> Photon.Voice.VoiceClient::localVoicesPerChannel
	Dictionary_2_t9D47848158230A04CC68EE0E1E8CCAF7878B6481 * ___localVoicesPerChannel_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>> Photon.Voice.VoiceClient::remoteVoices
	Dictionary_2_t611A5FC094D9C83B06C788EC1402D634859BADE5 * ___remoteVoices_15;
	// System.Random Photon.Voice.VoiceClient::rnd
	Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * ___rnd_16;

public:
	inline static int32_t get_offset_of_transport_0() { return static_cast<int32_t>(offsetof(VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33, ___transport_0)); }
	inline RuntimeObject* get_transport_0() const { return ___transport_0; }
	inline RuntimeObject** get_address_of_transport_0() { return &___transport_0; }
	inline void set_transport_0(RuntimeObject* value)
	{
		___transport_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transport_0), (void*)value);
	}

	inline static int32_t get_offset_of_logger_1() { return static_cast<int32_t>(offsetof(VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33, ___logger_1)); }
	inline RuntimeObject* get_logger_1() const { return ___logger_1; }
	inline RuntimeObject** get_address_of_logger_1() { return &___logger_1; }
	inline void set_logger_1(RuntimeObject* value)
	{
		___logger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFramesLostU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33, ___U3CFramesLostU3Ek__BackingField_2)); }
	inline int32_t get_U3CFramesLostU3Ek__BackingField_2() const { return ___U3CFramesLostU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CFramesLostU3Ek__BackingField_2() { return &___U3CFramesLostU3Ek__BackingField_2; }
	inline void set_U3CFramesLostU3Ek__BackingField_2(int32_t value)
	{
		___U3CFramesLostU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CFramesReceivedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33, ___U3CFramesReceivedU3Ek__BackingField_3)); }
	inline int32_t get_U3CFramesReceivedU3Ek__BackingField_3() const { return ___U3CFramesReceivedU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CFramesReceivedU3Ek__BackingField_3() { return &___U3CFramesReceivedU3Ek__BackingField_3; }
	inline void set_U3CFramesReceivedU3Ek__BackingField_3(int32_t value)
	{
		___U3CFramesReceivedU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CRoundTripTimeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33, ___U3CRoundTripTimeU3Ek__BackingField_4)); }
	inline int32_t get_U3CRoundTripTimeU3Ek__BackingField_4() const { return ___U3CRoundTripTimeU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CRoundTripTimeU3Ek__BackingField_4() { return &___U3CRoundTripTimeU3Ek__BackingField_4; }
	inline void set_U3CRoundTripTimeU3Ek__BackingField_4(int32_t value)
	{
		___U3CRoundTripTimeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CRoundTripTimeVarianceU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33, ___U3CRoundTripTimeVarianceU3Ek__BackingField_5)); }
	inline int32_t get_U3CRoundTripTimeVarianceU3Ek__BackingField_5() const { return ___U3CRoundTripTimeVarianceU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CRoundTripTimeVarianceU3Ek__BackingField_5() { return &___U3CRoundTripTimeVarianceU3Ek__BackingField_5; }
	inline void set_U3CRoundTripTimeVarianceU3Ek__BackingField_5(int32_t value)
	{
		___U3CRoundTripTimeVarianceU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33, ___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6)); }
	inline bool get_U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6() const { return ___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6() { return &___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6; }
	inline void set_U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6(bool value)
	{
		___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3COnRemoteVoiceInfoActionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33, ___U3COnRemoteVoiceInfoActionU3Ek__BackingField_7)); }
	inline RemoteVoiceInfoDelegate_t9DDC9137E7981970B308A55A9F2C949364906D06 * get_U3COnRemoteVoiceInfoActionU3Ek__BackingField_7() const { return ___U3COnRemoteVoiceInfoActionU3Ek__BackingField_7; }
	inline RemoteVoiceInfoDelegate_t9DDC9137E7981970B308A55A9F2C949364906D06 ** get_address_of_U3COnRemoteVoiceInfoActionU3Ek__BackingField_7() { return &___U3COnRemoteVoiceInfoActionU3Ek__BackingField_7; }
	inline void set_U3COnRemoteVoiceInfoActionU3Ek__BackingField_7(RemoteVoiceInfoDelegate_t9DDC9137E7981970B308A55A9F2C949364906D06 * value)
	{
		___U3COnRemoteVoiceInfoActionU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnRemoteVoiceInfoActionU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDebugLostPercentU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33, ___U3CDebugLostPercentU3Ek__BackingField_8)); }
	inline int32_t get_U3CDebugLostPercentU3Ek__BackingField_8() const { return ___U3CDebugLostPercentU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CDebugLostPercentU3Ek__BackingField_8() { return &___U3CDebugLostPercentU3Ek__BackingField_8; }
	inline void set_U3CDebugLostPercentU3Ek__BackingField_8(int32_t value)
	{
		___U3CDebugLostPercentU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_prevRtt_9() { return static_cast<int32_t>(offsetof(VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33, ___prevRtt_9)); }
	inline int32_t get_prevRtt_9() const { return ___prevRtt_9; }
	inline int32_t* get_address_of_prevRtt_9() { return &___prevRtt_9; }
	inline void set_prevRtt_9(int32_t value)
	{
		___prevRtt_9 = value;
	}

	inline static int32_t get_offset_of_remoteVoiceDelayFrames_10() { return static_cast<int32_t>(offsetof(VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33, ___remoteVoiceDelayFrames_10)); }
	inline Dictionary_2_tADFB10BF29CFB1F63E0F0DFA077F252707AE99B9 * get_remoteVoiceDelayFrames_10() const { return ___remoteVoiceDelayFrames_10; }
	inline Dictionary_2_tADFB10BF29CFB1F63E0F0DFA077F252707AE99B9 ** get_address_of_remoteVoiceDelayFrames_10() { return &___remoteVoiceDelayFrames_10; }
	inline void set_remoteVoiceDelayFrames_10(Dictionary_2_tADFB10BF29CFB1F63E0F0DFA077F252707AE99B9 * value)
	{
		___remoteVoiceDelayFrames_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteVoiceDelayFrames_10), (void*)value);
	}

	inline static int32_t get_offset_of_globalInterestGroup_11() { return static_cast<int32_t>(offsetof(VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33, ___globalInterestGroup_11)); }
	inline uint8_t get_globalInterestGroup_11() const { return ___globalInterestGroup_11; }
	inline uint8_t* get_address_of_globalInterestGroup_11() { return &___globalInterestGroup_11; }
	inline void set_globalInterestGroup_11(uint8_t value)
	{
		___globalInterestGroup_11 = value;
	}

	inline static int32_t get_offset_of_voiceIdCnt_12() { return static_cast<int32_t>(offsetof(VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33, ___voiceIdCnt_12)); }
	inline uint8_t get_voiceIdCnt_12() const { return ___voiceIdCnt_12; }
	inline uint8_t* get_address_of_voiceIdCnt_12() { return &___voiceIdCnt_12; }
	inline void set_voiceIdCnt_12(uint8_t value)
	{
		___voiceIdCnt_12 = value;
	}

	inline static int32_t get_offset_of_localVoices_13() { return static_cast<int32_t>(offsetof(VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33, ___localVoices_13)); }
	inline Dictionary_2_t5DCD4F036D1C394C8B50D98824F214981BF11DED * get_localVoices_13() const { return ___localVoices_13; }
	inline Dictionary_2_t5DCD4F036D1C394C8B50D98824F214981BF11DED ** get_address_of_localVoices_13() { return &___localVoices_13; }
	inline void set_localVoices_13(Dictionary_2_t5DCD4F036D1C394C8B50D98824F214981BF11DED * value)
	{
		___localVoices_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localVoices_13), (void*)value);
	}

	inline static int32_t get_offset_of_localVoicesPerChannel_14() { return static_cast<int32_t>(offsetof(VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33, ___localVoicesPerChannel_14)); }
	inline Dictionary_2_t9D47848158230A04CC68EE0E1E8CCAF7878B6481 * get_localVoicesPerChannel_14() const { return ___localVoicesPerChannel_14; }
	inline Dictionary_2_t9D47848158230A04CC68EE0E1E8CCAF7878B6481 ** get_address_of_localVoicesPerChannel_14() { return &___localVoicesPerChannel_14; }
	inline void set_localVoicesPerChannel_14(Dictionary_2_t9D47848158230A04CC68EE0E1E8CCAF7878B6481 * value)
	{
		___localVoicesPerChannel_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localVoicesPerChannel_14), (void*)value);
	}

	inline static int32_t get_offset_of_remoteVoices_15() { return static_cast<int32_t>(offsetof(VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33, ___remoteVoices_15)); }
	inline Dictionary_2_t611A5FC094D9C83B06C788EC1402D634859BADE5 * get_remoteVoices_15() const { return ___remoteVoices_15; }
	inline Dictionary_2_t611A5FC094D9C83B06C788EC1402D634859BADE5 ** get_address_of_remoteVoices_15() { return &___remoteVoices_15; }
	inline void set_remoteVoices_15(Dictionary_2_t611A5FC094D9C83B06C788EC1402D634859BADE5 * value)
	{
		___remoteVoices_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteVoices_15), (void*)value);
	}

	inline static int32_t get_offset_of_rnd_16() { return static_cast<int32_t>(offsetof(VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33, ___rnd_16)); }
	inline Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * get_rnd_16() const { return ___rnd_16; }
	inline Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F ** get_address_of_rnd_16() { return &___rnd_16; }
	inline void set_rnd_16(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * value)
	{
		___rnd_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rnd_16), (void*)value);
	}
};


// Photon.Voice.VoiceClient_<>c
struct  U3CU3Ec_t85C70299099BE4D2CF1D1C061B5EBD8321A50821  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t85C70299099BE4D2CF1D1C061B5EBD8321A50821_StaticFields
{
public:
	// Photon.Voice.VoiceClient_<>c Photon.Voice.VoiceClient_<>c::<>9
	U3CU3Ec_t85C70299099BE4D2CF1D1C061B5EBD8321A50821 * ___U3CU3E9_0;
	// System.Func`2<Photon.Voice.LocalVoice,System.Boolean> Photon.Voice.VoiceClient_<>c::<>9__55_0
	Func_2_tF4E1078BC60C632418A37AF0FAD969E37ED95920 * ___U3CU3E9__55_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t85C70299099BE4D2CF1D1C061B5EBD8321A50821_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t85C70299099BE4D2CF1D1C061B5EBD8321A50821 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t85C70299099BE4D2CF1D1C061B5EBD8321A50821 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t85C70299099BE4D2CF1D1C061B5EBD8321A50821 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__55_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t85C70299099BE4D2CF1D1C061B5EBD8321A50821_StaticFields, ___U3CU3E9__55_0_1)); }
	inline Func_2_tF4E1078BC60C632418A37AF0FAD969E37ED95920 * get_U3CU3E9__55_0_1() const { return ___U3CU3E9__55_0_1; }
	inline Func_2_tF4E1078BC60C632418A37AF0FAD969E37ED95920 ** get_address_of_U3CU3E9__55_0_1() { return &___U3CU3E9__55_0_1; }
	inline void set_U3CU3E9__55_0_1(Func_2_tF4E1078BC60C632418A37AF0FAD969E37ED95920 * value)
	{
		___U3CU3E9__55_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__55_0_1), (void*)value);
	}
};


// Photon.Voice.VoiceClient_<>c__DisplayClass50_0
struct  U3CU3Ec__DisplayClass50_0_tA1A9493FC62C2FB2D7A2DD68C7A220387A5F1CC8  : public RuntimeObject
{
public:
	// Photon.Voice.LocalVoiceAudio`1<System.Int16> Photon.Voice.VoiceClient_<>c__DisplayClass50_0::localVoice
	LocalVoiceAudio_1_t5841EE1080E7EF2DF1DF88B18F83C8B883614A34 * ___localVoice_0;

public:
	inline static int32_t get_offset_of_localVoice_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass50_0_tA1A9493FC62C2FB2D7A2DD68C7A220387A5F1CC8, ___localVoice_0)); }
	inline LocalVoiceAudio_1_t5841EE1080E7EF2DF1DF88B18F83C8B883614A34 * get_localVoice_0() const { return ___localVoice_0; }
	inline LocalVoiceAudio_1_t5841EE1080E7EF2DF1DF88B18F83C8B883614A34 ** get_address_of_localVoice_0() { return &___localVoice_0; }
	inline void set_localVoice_0(LocalVoiceAudio_1_t5841EE1080E7EF2DF1DF88B18F83C8B883614A34 * value)
	{
		___localVoice_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localVoice_0), (void*)value);
	}
};


// Photon.Voice.VoiceClient_<>c__DisplayClass50_1
struct  U3CU3Ec__DisplayClass50_1_t4A11DAFD8B25F39F74D7BF947FB54CABFA3C4BAD  : public RuntimeObject
{
public:
	// Photon.Voice.LocalVoiceAudio`1<System.Single> Photon.Voice.VoiceClient_<>c__DisplayClass50_1::localVoice
	LocalVoiceAudio_1_tE5D43B1351403442A635282CB35E16AB8C714838 * ___localVoice_0;

public:
	inline static int32_t get_offset_of_localVoice_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass50_1_t4A11DAFD8B25F39F74D7BF947FB54CABFA3C4BAD, ___localVoice_0)); }
	inline LocalVoiceAudio_1_tE5D43B1351403442A635282CB35E16AB8C714838 * get_localVoice_0() const { return ___localVoice_0; }
	inline LocalVoiceAudio_1_tE5D43B1351403442A635282CB35E16AB8C714838 ** get_address_of_localVoice_0() { return &___localVoice_0; }
	inline void set_localVoice_0(LocalVoiceAudio_1_tE5D43B1351403442A635282CB35E16AB8C714838 * value)
	{
		___localVoice_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localVoice_0), (void*)value);
	}
};


// Photon.Voice.VoiceClient_<>c__DisplayClass50_2
struct  U3CU3Ec__DisplayClass50_2_tB13B134F0287DC3312D23D1B120642C6C344ABF0  : public RuntimeObject
{
public:
	// Photon.Voice.LocalVoiceAudio`1<System.Single> Photon.Voice.VoiceClient_<>c__DisplayClass50_2::localVoice
	LocalVoiceAudio_1_tE5D43B1351403442A635282CB35E16AB8C714838 * ___localVoice_0;

public:
	inline static int32_t get_offset_of_localVoice_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass50_2_tB13B134F0287DC3312D23D1B120642C6C344ABF0, ___localVoice_0)); }
	inline LocalVoiceAudio_1_tE5D43B1351403442A635282CB35E16AB8C714838 * get_localVoice_0() const { return ___localVoice_0; }
	inline LocalVoiceAudio_1_tE5D43B1351403442A635282CB35E16AB8C714838 ** get_address_of_localVoice_0() { return &___localVoice_0; }
	inline void set_localVoice_0(LocalVoiceAudio_1_tE5D43B1351403442A635282CB35E16AB8C714838 * value)
	{
		___localVoice_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localVoice_0), (void*)value);
	}
};


// Photon.Voice.VoiceClient_<>c__DisplayClass50_3
struct  U3CU3Ec__DisplayClass50_3_t95073D710235C84E8A926584ADA4339760716317  : public RuntimeObject
{
public:
	// Photon.Voice.LocalVoiceAudio`1<System.Int16> Photon.Voice.VoiceClient_<>c__DisplayClass50_3::localVoice
	LocalVoiceAudio_1_t5841EE1080E7EF2DF1DF88B18F83C8B883614A34 * ___localVoice_0;

public:
	inline static int32_t get_offset_of_localVoice_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass50_3_t95073D710235C84E8A926584ADA4339760716317, ___localVoice_0)); }
	inline LocalVoiceAudio_1_t5841EE1080E7EF2DF1DF88B18F83C8B883614A34 * get_localVoice_0() const { return ___localVoice_0; }
	inline LocalVoiceAudio_1_t5841EE1080E7EF2DF1DF88B18F83C8B883614A34 ** get_address_of_localVoice_0() { return &___localVoice_0; }
	inline void set_localVoice_0(LocalVoiceAudio_1_t5841EE1080E7EF2DF1DF88B18F83C8B883614A34 * value)
	{
		___localVoice_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localVoice_0), (void*)value);
	}
};


// Photon.Voice.VoiceEvent
struct  VoiceEvent_tC8CCAB6DA56312061470CF25E66CCF26A9CF2BDF  : public RuntimeObject
{
public:

public:
};


// Photon.Voice.WebRTCAudioLib
struct  WebRTCAudioLib_t1E26D463A18D0FCACE38B6CCEDBE9AFDEAEF2A89  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>
struct  Dictionary_2_t0518167B203339B478AB3F8F942303BAF8B24B77  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t15B7801B1E254309EC9A906CFC746E4D6A0893C4* ___entries_1;
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
	KeyCollection_tA13C0EE5321EF40A748E5785DB22143AE5B7702A * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tF6D5304998399EB0027D0F6709DF8B0EE77A7192 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t0518167B203339B478AB3F8F942303BAF8B24B77, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t0518167B203339B478AB3F8F942303BAF8B24B77, ___entries_1)); }
	inline EntryU5BU5D_t15B7801B1E254309EC9A906CFC746E4D6A0893C4* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t15B7801B1E254309EC9A906CFC746E4D6A0893C4** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t15B7801B1E254309EC9A906CFC746E4D6A0893C4* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t0518167B203339B478AB3F8F942303BAF8B24B77, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t0518167B203339B478AB3F8F942303BAF8B24B77, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t0518167B203339B478AB3F8F942303BAF8B24B77, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t0518167B203339B478AB3F8F942303BAF8B24B77, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t0518167B203339B478AB3F8F942303BAF8B24B77, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t0518167B203339B478AB3F8F942303BAF8B24B77, ___keys_7)); }
	inline KeyCollection_tA13C0EE5321EF40A748E5785DB22143AE5B7702A * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tA13C0EE5321EF40A748E5785DB22143AE5B7702A ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tA13C0EE5321EF40A748E5785DB22143AE5B7702A * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t0518167B203339B478AB3F8F942303BAF8B24B77, ___values_8)); }
	inline ValueCollection_tF6D5304998399EB0027D0F6709DF8B0EE77A7192 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tF6D5304998399EB0027D0F6709DF8B0EE77A7192 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tF6D5304998399EB0027D0F6709DF8B0EE77A7192 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t0518167B203339B478AB3F8F942303BAF8B24B77, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Voice.Windows.WindowsAudioInPusher>
struct  Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE21593DFA08A8136ECE0D2064E68FD08ABCACF7F* ___entries_1;
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
	KeyCollection_t85CDE3C915D7D26D8EEB4FE1900917089AA844E6 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t6730F71B70E99B54E4455455BC908A020C1A3D5F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E, ___entries_1)); }
	inline EntryU5BU5D_tE21593DFA08A8136ECE0D2064E68FD08ABCACF7F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE21593DFA08A8136ECE0D2064E68FD08ABCACF7F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE21593DFA08A8136ECE0D2064E68FD08ABCACF7F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E, ___keys_7)); }
	inline KeyCollection_t85CDE3C915D7D26D8EEB4FE1900917089AA844E6 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t85CDE3C915D7D26D8EEB4FE1900917089AA844E6 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t85CDE3C915D7D26D8EEB4FE1900917089AA844E6 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E, ___values_8)); }
	inline ValueCollection_t6730F71B70E99B54E4455455BC908A020C1A3D5F * get_values_8() const { return ___values_8; }
	inline ValueCollection_t6730F71B70E99B54E4455455BC908A020C1A3D5F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t6730F71B70E99B54E4455455BC908A020C1A3D5F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>
struct  Dictionary_2_t611A5FC094D9C83B06C788EC1402D634859BADE5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t2DC6E7BDE536F67A817AF299B42D0F4BF341754C* ___entries_1;
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
	KeyCollection_tCAEEF4F96B1EC3D09EC86CFF114B853CD3A22DC2 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t5E7C876203B9273698AFD139D55E4E054C4F9A04 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t611A5FC094D9C83B06C788EC1402D634859BADE5, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t611A5FC094D9C83B06C788EC1402D634859BADE5, ___entries_1)); }
	inline EntryU5BU5D_t2DC6E7BDE536F67A817AF299B42D0F4BF341754C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t2DC6E7BDE536F67A817AF299B42D0F4BF341754C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t2DC6E7BDE536F67A817AF299B42D0F4BF341754C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t611A5FC094D9C83B06C788EC1402D634859BADE5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t611A5FC094D9C83B06C788EC1402D634859BADE5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t611A5FC094D9C83B06C788EC1402D634859BADE5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t611A5FC094D9C83B06C788EC1402D634859BADE5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t611A5FC094D9C83B06C788EC1402D634859BADE5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t611A5FC094D9C83B06C788EC1402D634859BADE5, ___keys_7)); }
	inline KeyCollection_tCAEEF4F96B1EC3D09EC86CFF114B853CD3A22DC2 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tCAEEF4F96B1EC3D09EC86CFF114B853CD3A22DC2 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tCAEEF4F96B1EC3D09EC86CFF114B853CD3A22DC2 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t611A5FC094D9C83B06C788EC1402D634859BADE5, ___values_8)); }
	inline ValueCollection_t5E7C876203B9273698AFD139D55E4E054C4F9A04 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t5E7C876203B9273698AFD139D55E4E054C4F9A04 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t5E7C876203B9273698AFD139D55E4E054C4F9A04 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t611A5FC094D9C83B06C788EC1402D634859BADE5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Int16[]>
struct  Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	Int16U5BU5DU5BU5D_t07FBF1BD646E6D6779697B7E1168340225DBE4D5* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C, ____array_0)); }
	inline Int16U5BU5DU5BU5D_t07FBF1BD646E6D6779697B7E1168340225DBE4D5* get__array_0() const { return ____array_0; }
	inline Int16U5BU5DU5BU5D_t07FBF1BD646E6D6779697B7E1168340225DBE4D5** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(Int16U5BU5DU5BU5D_t07FBF1BD646E6D6779697B7E1168340225DBE4D5* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct  Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0, ____array_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9  : public RuntimeObject
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

// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D16
struct  __StaticArrayInitTypeSizeU3D16_tF01902D16ED825C23F7C8CDF99D1A0E2535324C0 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tF01902D16ED825C23F7C8CDF99D1A0E2535324C0__padding[16];
	};

public:
};


// Photon.Voice.Windows.MonoPInvokeCallbackAttribute
struct  MonoPInvokeCallbackAttribute_t3BB49D06B906DAFF1EA7DF66BC74543E29EF63BE  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.Type Photon.Voice.Windows.MonoPInvokeCallbackAttribute::type
	Type_t * ___type_0;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(MonoPInvokeCallbackAttribute_t3BB49D06B906DAFF1EA7DF66BC74543E29EF63BE, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}
};


// System.ArraySegment`1<System.Byte>
struct  ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA 
{
public:
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA, ____array_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__array_0() const { return ____array_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
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


// System.Collections.Generic.KeyValuePair`2<System.Byte,Photon.Voice.RemoteVoice>
struct  KeyValuePair_2_t17B7EC8064FF24A65F802824DAEA46CAA219AAB7 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RemoteVoice_tFB7B418D0495B703F0EBB5E8F950768A6A48D39B * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t17B7EC8064FF24A65F802824DAEA46CAA219AAB7, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t17B7EC8064FF24A65F802824DAEA46CAA219AAB7, ___value_1)); }
	inline RemoteVoice_tFB7B418D0495B703F0EBB5E8F950768A6A48D39B * get_value_1() const { return ___value_1; }
	inline RemoteVoice_tFB7B418D0495B703F0EBB5E8F950768A6A48D39B ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RemoteVoice_tFB7B418D0495B703F0EBB5E8F950768A6A48D39B * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>
struct  KeyValuePair_2_t98F624736AE86A14B9AD84D588449356C07782F8 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t98F624736AE86A14B9AD84D588449356C07782F8, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t98F624736AE86A14B9AD84D588449356C07782F8, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>
struct  KeyValuePair_2_tE556C31F9BEDF6762AAB4A88C8714DBCCA03EADF 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Dictionary_2_t0518167B203339B478AB3F8F942303BAF8B24B77 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE556C31F9BEDF6762AAB4A88C8714DBCCA03EADF, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE556C31F9BEDF6762AAB4A88C8714DBCCA03EADF, ___value_1)); }
	inline Dictionary_2_t0518167B203339B478AB3F8F942303BAF8B24B77 * get_value_1() const { return ___value_1; }
	inline Dictionary_2_t0518167B203339B478AB3F8F942303BAF8B24B77 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Dictionary_2_t0518167B203339B478AB3F8F942303BAF8B24B77 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C, ___value_1)); }
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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.Thread
struct  Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7  : public CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___internal_thread_6)); }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_tA4C58C2A7D15AF43C3E7507375E6D31DBBE7D192 * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t0E11C30308A4CC964D8A2EA9132F9BDCE5362C70 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t1964DDB9F2BE154BE3159A7507D0D0CCBF8FDCA9 * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_tD39651C2EDD14B144FF3D9B9C716F807EB57655A * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tE0636E08496405406FD63190AC51EEB2EE51E304 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
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


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_tF81834743BA3008C119EFE0241CD0B42D8F539AC  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_tF81834743BA3008C119EFE0241CD0B42D8F539AC_StaticFields
{
public:
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D16 <PrivateImplementationDetails>::990752441D5A39D66F916F6D91562D3673B4333A
	__StaticArrayInitTypeSizeU3D16_tF01902D16ED825C23F7C8CDF99D1A0E2535324C0  ___990752441D5A39D66F916F6D91562D3673B4333A_0;

public:
	inline static int32_t get_offset_of_U3990752441D5A39D66F916F6D91562D3673B4333A_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tF81834743BA3008C119EFE0241CD0B42D8F539AC_StaticFields, ___990752441D5A39D66F916F6D91562D3673B4333A_0)); }
	inline __StaticArrayInitTypeSizeU3D16_tF01902D16ED825C23F7C8CDF99D1A0E2535324C0  get_U3990752441D5A39D66F916F6D91562D3673B4333A_0() const { return ___990752441D5A39D66F916F6D91562D3673B4333A_0; }
	inline __StaticArrayInitTypeSizeU3D16_tF01902D16ED825C23F7C8CDF99D1A0E2535324C0 * get_address_of_U3990752441D5A39D66F916F6D91562D3673B4333A_0() { return &___990752441D5A39D66F916F6D91562D3673B4333A_0; }
	inline void set_U3990752441D5A39D66F916F6D91562D3673B4333A_0(__StaticArrayInitTypeSizeU3D16_tF01902D16ED825C23F7C8CDF99D1A0E2535324C0  value)
	{
		___990752441D5A39D66F916F6D91562D3673B4333A_0 = value;
	}
};


// POpusCodec.Enums.SamplingRate
struct  SamplingRate_t735D84DD78387B1793CB9732810868253837D45B 
{
public:
	// System.Int32 POpusCodec.Enums.SamplingRate::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SamplingRate_t735D84DD78387B1793CB9732810868253837D45B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.Codec
struct  Codec_tD177CC2C38203F5AB2E612E0E36F2DA1CB222D0C 
{
public:
	// System.Int32 Photon.Voice.Codec::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Codec_tD177CC2C38203F5AB2E612E0E36F2DA1CB222D0C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.FrameFlags
struct  FrameFlags_t2E35B080F17A5E8C0AE1B09938A34C831CBB7E56 
{
public:
	// System.Byte Photon.Voice.FrameFlags::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FrameFlags_t2E35B080F17A5E8C0AE1B09938A34C831CBB7E56, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.ImageFormat
struct  ImageFormat_tC545125EBD4E153F2E25DDB1FE0A1EA73D13576D 
{
public:
	// System.Int32 Photon.Voice.ImageFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ImageFormat_tC545125EBD4E153F2E25DDB1FE0A1EA73D13576D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.OpusCodec_FrameDuration
struct  FrameDuration_t4A833A0BFF0F703BF3D14D530E47962EFF84B010 
{
public:
	// System.Int32 Photon.Voice.OpusCodec_FrameDuration::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FrameDuration_t4A833A0BFF0F703BF3D14D530E47962EFF84B010, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.RemoteVoiceOptions_OutputType
struct  OutputType_tF94431E6749A028025C49760BC75705D392F7D4E 
{
public:
	// System.Int32 Photon.Voice.RemoteVoiceOptions_OutputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OutputType_tF94431E6749A028025C49760BC75705D392F7D4E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.WebRTCAudioLib_Error
struct  Error_t23C27F28D0146FABC5C779270AB2438EACBA1571 
{
public:
	// System.Int32 Photon.Voice.WebRTCAudioLib_Error::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Error_t23C27F28D0146FABC5C779270AB2438EACBA1571, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.WebRTCAudioLib_Param
struct  Param_t8B3DC3D8B33F289FD0D8D2E5A3F840C19CDBD652 
{
public:
	// System.Int32 Photon.Voice.WebRTCAudioLib_Param::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Param_t8B3DC3D8B33F289FD0D8D2E5A3F840C19CDBD652, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.WebRTCAudioProcessor
struct  WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE  : public WebRTCAudioLib_t1E26D463A18D0FCACE38B6CCEDBE9AFDEAEF2A89
{
public:
	// System.Int32 Photon.Voice.WebRTCAudioProcessor::reverseStreamDelayMs
	int32_t ___reverseStreamDelayMs_2;
	// System.Boolean Photon.Voice.WebRTCAudioProcessor::aec
	bool ___aec_3;
	// System.Boolean Photon.Voice.WebRTCAudioProcessor::aecHighPass
	bool ___aecHighPass_4;
	// System.Boolean Photon.Voice.WebRTCAudioProcessor::aecm
	bool ___aecm_5;
	// System.Boolean Photon.Voice.WebRTCAudioProcessor::highPass
	bool ___highPass_6;
	// System.Boolean Photon.Voice.WebRTCAudioProcessor::ns
	bool ___ns_7;
	// System.Boolean Photon.Voice.WebRTCAudioProcessor::agc
	bool ___agc_8;
	// System.Int32 Photon.Voice.WebRTCAudioProcessor::agcCompressionGain
	int32_t ___agcCompressionGain_9;
	// System.Int32 Photon.Voice.WebRTCAudioProcessor::agcTargetLevel
	int32_t ___agcTargetLevel_10;
	// System.Boolean Photon.Voice.WebRTCAudioProcessor::agc2
	bool ___agc2_11;
	// System.Boolean Photon.Voice.WebRTCAudioProcessor::vad
	bool ___vad_12;
	// System.Boolean Photon.Voice.WebRTCAudioProcessor::reverseStreamThreadRunning
	bool ___reverseStreamThreadRunning_13;
	// System.Collections.Generic.Queue`1<System.Int16[]> Photon.Voice.WebRTCAudioProcessor::reverseStreamQueue
	Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C * ___reverseStreamQueue_14;
	// System.Threading.AutoResetEvent Photon.Voice.WebRTCAudioProcessor::reverseStreamQueueReady
	AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * ___reverseStreamQueueReady_15;
	// Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16> Photon.Voice.WebRTCAudioProcessor::reverseBufferFactory
	FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF * ___reverseBufferFactory_16;
	// System.Boolean Photon.Voice.WebRTCAudioProcessor::bypass
	bool ___bypass_17;
	// System.Int32 Photon.Voice.WebRTCAudioProcessor::inFrameSize
	int32_t ___inFrameSize_18;
	// System.Int32 Photon.Voice.WebRTCAudioProcessor::processFrameSize
	int32_t ___processFrameSize_19;
	// System.Int32 Photon.Voice.WebRTCAudioProcessor::samplingRate
	int32_t ___samplingRate_20;
	// System.Int32 Photon.Voice.WebRTCAudioProcessor::channels
	int32_t ___channels_21;
	// System.IntPtr Photon.Voice.WebRTCAudioProcessor::proc
	intptr_t ___proc_22;
	// System.Boolean Photon.Voice.WebRTCAudioProcessor::disposed
	bool ___disposed_23;
	// Photon.Voice.Framer`1<System.Single> Photon.Voice.WebRTCAudioProcessor::reverseFramer
	Framer_1_t9E72DFCCE1F62F49B9F5C9E0574B98EA19BDC847 * ___reverseFramer_24;
	// System.Int32 Photon.Voice.WebRTCAudioProcessor::reverseSamplingRate
	int32_t ___reverseSamplingRate_25;
	// System.Int32 Photon.Voice.WebRTCAudioProcessor::reverseChannels
	int32_t ___reverseChannels_26;
	// Photon.Voice.ILogger Photon.Voice.WebRTCAudioProcessor::logger
	RuntimeObject* ___logger_27;
	// System.Boolean Photon.Voice.WebRTCAudioProcessor::aecInited
	bool ___aecInited_30;
	// System.Int32 Photon.Voice.WebRTCAudioProcessor::lastProcessErr
	int32_t ___lastProcessErr_31;
	// System.Int32 Photon.Voice.WebRTCAudioProcessor::lastProcessReverseErr
	int32_t ___lastProcessReverseErr_32;

public:
	inline static int32_t get_offset_of_reverseStreamDelayMs_2() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___reverseStreamDelayMs_2)); }
	inline int32_t get_reverseStreamDelayMs_2() const { return ___reverseStreamDelayMs_2; }
	inline int32_t* get_address_of_reverseStreamDelayMs_2() { return &___reverseStreamDelayMs_2; }
	inline void set_reverseStreamDelayMs_2(int32_t value)
	{
		___reverseStreamDelayMs_2 = value;
	}

	inline static int32_t get_offset_of_aec_3() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___aec_3)); }
	inline bool get_aec_3() const { return ___aec_3; }
	inline bool* get_address_of_aec_3() { return &___aec_3; }
	inline void set_aec_3(bool value)
	{
		___aec_3 = value;
	}

	inline static int32_t get_offset_of_aecHighPass_4() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___aecHighPass_4)); }
	inline bool get_aecHighPass_4() const { return ___aecHighPass_4; }
	inline bool* get_address_of_aecHighPass_4() { return &___aecHighPass_4; }
	inline void set_aecHighPass_4(bool value)
	{
		___aecHighPass_4 = value;
	}

	inline static int32_t get_offset_of_aecm_5() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___aecm_5)); }
	inline bool get_aecm_5() const { return ___aecm_5; }
	inline bool* get_address_of_aecm_5() { return &___aecm_5; }
	inline void set_aecm_5(bool value)
	{
		___aecm_5 = value;
	}

	inline static int32_t get_offset_of_highPass_6() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___highPass_6)); }
	inline bool get_highPass_6() const { return ___highPass_6; }
	inline bool* get_address_of_highPass_6() { return &___highPass_6; }
	inline void set_highPass_6(bool value)
	{
		___highPass_6 = value;
	}

	inline static int32_t get_offset_of_ns_7() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___ns_7)); }
	inline bool get_ns_7() const { return ___ns_7; }
	inline bool* get_address_of_ns_7() { return &___ns_7; }
	inline void set_ns_7(bool value)
	{
		___ns_7 = value;
	}

	inline static int32_t get_offset_of_agc_8() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___agc_8)); }
	inline bool get_agc_8() const { return ___agc_8; }
	inline bool* get_address_of_agc_8() { return &___agc_8; }
	inline void set_agc_8(bool value)
	{
		___agc_8 = value;
	}

	inline static int32_t get_offset_of_agcCompressionGain_9() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___agcCompressionGain_9)); }
	inline int32_t get_agcCompressionGain_9() const { return ___agcCompressionGain_9; }
	inline int32_t* get_address_of_agcCompressionGain_9() { return &___agcCompressionGain_9; }
	inline void set_agcCompressionGain_9(int32_t value)
	{
		___agcCompressionGain_9 = value;
	}

	inline static int32_t get_offset_of_agcTargetLevel_10() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___agcTargetLevel_10)); }
	inline int32_t get_agcTargetLevel_10() const { return ___agcTargetLevel_10; }
	inline int32_t* get_address_of_agcTargetLevel_10() { return &___agcTargetLevel_10; }
	inline void set_agcTargetLevel_10(int32_t value)
	{
		___agcTargetLevel_10 = value;
	}

	inline static int32_t get_offset_of_agc2_11() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___agc2_11)); }
	inline bool get_agc2_11() const { return ___agc2_11; }
	inline bool* get_address_of_agc2_11() { return &___agc2_11; }
	inline void set_agc2_11(bool value)
	{
		___agc2_11 = value;
	}

	inline static int32_t get_offset_of_vad_12() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___vad_12)); }
	inline bool get_vad_12() const { return ___vad_12; }
	inline bool* get_address_of_vad_12() { return &___vad_12; }
	inline void set_vad_12(bool value)
	{
		___vad_12 = value;
	}

	inline static int32_t get_offset_of_reverseStreamThreadRunning_13() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___reverseStreamThreadRunning_13)); }
	inline bool get_reverseStreamThreadRunning_13() const { return ___reverseStreamThreadRunning_13; }
	inline bool* get_address_of_reverseStreamThreadRunning_13() { return &___reverseStreamThreadRunning_13; }
	inline void set_reverseStreamThreadRunning_13(bool value)
	{
		___reverseStreamThreadRunning_13 = value;
	}

	inline static int32_t get_offset_of_reverseStreamQueue_14() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___reverseStreamQueue_14)); }
	inline Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C * get_reverseStreamQueue_14() const { return ___reverseStreamQueue_14; }
	inline Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C ** get_address_of_reverseStreamQueue_14() { return &___reverseStreamQueue_14; }
	inline void set_reverseStreamQueue_14(Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C * value)
	{
		___reverseStreamQueue_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reverseStreamQueue_14), (void*)value);
	}

	inline static int32_t get_offset_of_reverseStreamQueueReady_15() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___reverseStreamQueueReady_15)); }
	inline AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * get_reverseStreamQueueReady_15() const { return ___reverseStreamQueueReady_15; }
	inline AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 ** get_address_of_reverseStreamQueueReady_15() { return &___reverseStreamQueueReady_15; }
	inline void set_reverseStreamQueueReady_15(AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * value)
	{
		___reverseStreamQueueReady_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reverseStreamQueueReady_15), (void*)value);
	}

	inline static int32_t get_offset_of_reverseBufferFactory_16() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___reverseBufferFactory_16)); }
	inline FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF * get_reverseBufferFactory_16() const { return ___reverseBufferFactory_16; }
	inline FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF ** get_address_of_reverseBufferFactory_16() { return &___reverseBufferFactory_16; }
	inline void set_reverseBufferFactory_16(FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF * value)
	{
		___reverseBufferFactory_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reverseBufferFactory_16), (void*)value);
	}

	inline static int32_t get_offset_of_bypass_17() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___bypass_17)); }
	inline bool get_bypass_17() const { return ___bypass_17; }
	inline bool* get_address_of_bypass_17() { return &___bypass_17; }
	inline void set_bypass_17(bool value)
	{
		___bypass_17 = value;
	}

	inline static int32_t get_offset_of_inFrameSize_18() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___inFrameSize_18)); }
	inline int32_t get_inFrameSize_18() const { return ___inFrameSize_18; }
	inline int32_t* get_address_of_inFrameSize_18() { return &___inFrameSize_18; }
	inline void set_inFrameSize_18(int32_t value)
	{
		___inFrameSize_18 = value;
	}

	inline static int32_t get_offset_of_processFrameSize_19() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___processFrameSize_19)); }
	inline int32_t get_processFrameSize_19() const { return ___processFrameSize_19; }
	inline int32_t* get_address_of_processFrameSize_19() { return &___processFrameSize_19; }
	inline void set_processFrameSize_19(int32_t value)
	{
		___processFrameSize_19 = value;
	}

	inline static int32_t get_offset_of_samplingRate_20() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___samplingRate_20)); }
	inline int32_t get_samplingRate_20() const { return ___samplingRate_20; }
	inline int32_t* get_address_of_samplingRate_20() { return &___samplingRate_20; }
	inline void set_samplingRate_20(int32_t value)
	{
		___samplingRate_20 = value;
	}

	inline static int32_t get_offset_of_channels_21() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___channels_21)); }
	inline int32_t get_channels_21() const { return ___channels_21; }
	inline int32_t* get_address_of_channels_21() { return &___channels_21; }
	inline void set_channels_21(int32_t value)
	{
		___channels_21 = value;
	}

	inline static int32_t get_offset_of_proc_22() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___proc_22)); }
	inline intptr_t get_proc_22() const { return ___proc_22; }
	inline intptr_t* get_address_of_proc_22() { return &___proc_22; }
	inline void set_proc_22(intptr_t value)
	{
		___proc_22 = value;
	}

	inline static int32_t get_offset_of_disposed_23() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___disposed_23)); }
	inline bool get_disposed_23() const { return ___disposed_23; }
	inline bool* get_address_of_disposed_23() { return &___disposed_23; }
	inline void set_disposed_23(bool value)
	{
		___disposed_23 = value;
	}

	inline static int32_t get_offset_of_reverseFramer_24() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___reverseFramer_24)); }
	inline Framer_1_t9E72DFCCE1F62F49B9F5C9E0574B98EA19BDC847 * get_reverseFramer_24() const { return ___reverseFramer_24; }
	inline Framer_1_t9E72DFCCE1F62F49B9F5C9E0574B98EA19BDC847 ** get_address_of_reverseFramer_24() { return &___reverseFramer_24; }
	inline void set_reverseFramer_24(Framer_1_t9E72DFCCE1F62F49B9F5C9E0574B98EA19BDC847 * value)
	{
		___reverseFramer_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reverseFramer_24), (void*)value);
	}

	inline static int32_t get_offset_of_reverseSamplingRate_25() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___reverseSamplingRate_25)); }
	inline int32_t get_reverseSamplingRate_25() const { return ___reverseSamplingRate_25; }
	inline int32_t* get_address_of_reverseSamplingRate_25() { return &___reverseSamplingRate_25; }
	inline void set_reverseSamplingRate_25(int32_t value)
	{
		___reverseSamplingRate_25 = value;
	}

	inline static int32_t get_offset_of_reverseChannels_26() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___reverseChannels_26)); }
	inline int32_t get_reverseChannels_26() const { return ___reverseChannels_26; }
	inline int32_t* get_address_of_reverseChannels_26() { return &___reverseChannels_26; }
	inline void set_reverseChannels_26(int32_t value)
	{
		___reverseChannels_26 = value;
	}

	inline static int32_t get_offset_of_logger_27() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___logger_27)); }
	inline RuntimeObject* get_logger_27() const { return ___logger_27; }
	inline RuntimeObject** get_address_of_logger_27() { return &___logger_27; }
	inline void set_logger_27(RuntimeObject* value)
	{
		___logger_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_27), (void*)value);
	}

	inline static int32_t get_offset_of_aecInited_30() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___aecInited_30)); }
	inline bool get_aecInited_30() const { return ___aecInited_30; }
	inline bool* get_address_of_aecInited_30() { return &___aecInited_30; }
	inline void set_aecInited_30(bool value)
	{
		___aecInited_30 = value;
	}

	inline static int32_t get_offset_of_lastProcessErr_31() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___lastProcessErr_31)); }
	inline int32_t get_lastProcessErr_31() const { return ___lastProcessErr_31; }
	inline int32_t* get_address_of_lastProcessErr_31() { return &___lastProcessErr_31; }
	inline void set_lastProcessErr_31(int32_t value)
	{
		___lastProcessErr_31 = value;
	}

	inline static int32_t get_offset_of_lastProcessReverseErr_32() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE, ___lastProcessReverseErr_32)); }
	inline int32_t get_lastProcessReverseErr_32() const { return ___lastProcessReverseErr_32; }
	inline int32_t* get_address_of_lastProcessReverseErr_32() { return &___lastProcessReverseErr_32; }
	inline void set_lastProcessReverseErr_32(int32_t value)
	{
		___lastProcessReverseErr_32 = value;
	}
};

struct WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE_StaticFields
{
public:
	// System.Int32[] Photon.Voice.WebRTCAudioProcessor::SupportedSamplingRates
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___SupportedSamplingRates_29;

public:
	inline static int32_t get_offset_of_SupportedSamplingRates_29() { return static_cast<int32_t>(offsetof(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE_StaticFields, ___SupportedSamplingRates_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_SupportedSamplingRates_29() const { return ___SupportedSamplingRates_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_SupportedSamplingRates_29() { return &___SupportedSamplingRates_29; }
	inline void set_SupportedSamplingRates_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___SupportedSamplingRates_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SupportedSamplingRates_29), (void*)value);
	}
};


// Photon.Voice.Windows.WindowsAudioInPusher
struct  WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038  : public RuntimeObject
{
public:
	// System.IntPtr Photon.Voice.Windows.WindowsAudioInPusher::handle
	intptr_t ___handle_0;
	// System.Int32 Photon.Voice.Windows.WindowsAudioInPusher::instanceID
	int32_t ___instanceID_1;
	// System.Action`1<System.Int16[]> Photon.Voice.Windows.WindowsAudioInPusher::pushCallback
	Action_1_tB6E8E8CB26C84B16959C0CA9F3E9958D027263C3 * ___pushCallback_2;
	// Photon.Voice.ObjectFactory`2<System.Int16[],System.Int32> Photon.Voice.Windows.WindowsAudioInPusher::bufferFactory
	RuntimeObject* ___bufferFactory_3;
	// System.String Photon.Voice.Windows.WindowsAudioInPusher::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_instanceID_1() { return static_cast<int32_t>(offsetof(WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038, ___instanceID_1)); }
	inline int32_t get_instanceID_1() const { return ___instanceID_1; }
	inline int32_t* get_address_of_instanceID_1() { return &___instanceID_1; }
	inline void set_instanceID_1(int32_t value)
	{
		___instanceID_1 = value;
	}

	inline static int32_t get_offset_of_pushCallback_2() { return static_cast<int32_t>(offsetof(WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038, ___pushCallback_2)); }
	inline Action_1_tB6E8E8CB26C84B16959C0CA9F3E9958D027263C3 * get_pushCallback_2() const { return ___pushCallback_2; }
	inline Action_1_tB6E8E8CB26C84B16959C0CA9F3E9958D027263C3 ** get_address_of_pushCallback_2() { return &___pushCallback_2; }
	inline void set_pushCallback_2(Action_1_tB6E8E8CB26C84B16959C0CA9F3E9958D027263C3 * value)
	{
		___pushCallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pushCallback_2), (void*)value);
	}

	inline static int32_t get_offset_of_bufferFactory_3() { return static_cast<int32_t>(offsetof(WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038, ___bufferFactory_3)); }
	inline RuntimeObject* get_bufferFactory_3() const { return ___bufferFactory_3; }
	inline RuntimeObject** get_address_of_bufferFactory_3() { return &___bufferFactory_3; }
	inline void set_bufferFactory_3(RuntimeObject* value)
	{
		___bufferFactory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bufferFactory_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038, ___U3CErrorU3Ek__BackingField_6)); }
	inline String_t* get_U3CErrorU3Ek__BackingField_6() const { return ___U3CErrorU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CErrorU3Ek__BackingField_6() { return &___U3CErrorU3Ek__BackingField_6; }
	inline void set_U3CErrorU3Ek__BackingField_6(String_t* value)
	{
		___U3CErrorU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_6), (void*)value);
	}
};

struct WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_StaticFields
{
public:
	// System.Int32 Photon.Voice.Windows.WindowsAudioInPusher::instanceCnt
	int32_t ___instanceCnt_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Voice.Windows.WindowsAudioInPusher> Photon.Voice.Windows.WindowsAudioInPusher::instancePerHandle
	Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E * ___instancePerHandle_5;

public:
	inline static int32_t get_offset_of_instanceCnt_4() { return static_cast<int32_t>(offsetof(WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_StaticFields, ___instanceCnt_4)); }
	inline int32_t get_instanceCnt_4() const { return ___instanceCnt_4; }
	inline int32_t* get_address_of_instanceCnt_4() { return &___instanceCnt_4; }
	inline void set_instanceCnt_4(int32_t value)
	{
		___instanceCnt_4 = value;
	}

	inline static int32_t get_offset_of_instancePerHandle_5() { return static_cast<int32_t>(offsetof(WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_StaticFields, ___instancePerHandle_5)); }
	inline Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E * get_instancePerHandle_5() const { return ___instancePerHandle_5; }
	inline Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E ** get_address_of_instancePerHandle_5() { return &___instancePerHandle_5; }
	inline void set_instancePerHandle_5(Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E * value)
	{
		___instancePerHandle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instancePerHandle_5), (void*)value);
	}
};


// Photon.Voice.Windows.WindowsAudioInPusher_SystemMode
struct  SystemMode_t69333CF65624C529F4CF0BFB20EABFF8E31A9C3D 
{
public:
	// System.Int32 Photon.Voice.Windows.WindowsAudioInPusher_SystemMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SystemMode_t69333CF65624C529F4CF0BFB20EABFF8E31A9C3D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.Byte,Photon.Voice.RemoteVoice>
struct  Enumerator_t757B49B66CCB7F4CE425E72906209268CDA5B7BE 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t0518167B203339B478AB3F8F942303BAF8B24B77 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t17B7EC8064FF24A65F802824DAEA46CAA219AAB7  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t757B49B66CCB7F4CE425E72906209268CDA5B7BE, ___dictionary_0)); }
	inline Dictionary_2_t0518167B203339B478AB3F8F942303BAF8B24B77 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t0518167B203339B478AB3F8F942303BAF8B24B77 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t0518167B203339B478AB3F8F942303BAF8B24B77 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t757B49B66CCB7F4CE425E72906209268CDA5B7BE, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t757B49B66CCB7F4CE425E72906209268CDA5B7BE, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t757B49B66CCB7F4CE425E72906209268CDA5B7BE, ___current_3)); }
	inline KeyValuePair_2_t17B7EC8064FF24A65F802824DAEA46CAA219AAB7  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t17B7EC8064FF24A65F802824DAEA46CAA219AAB7 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t17B7EC8064FF24A65F802824DAEA46CAA219AAB7  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t757B49B66CCB7F4CE425E72906209268CDA5B7BE, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.Byte,System.Object>
struct  Enumerator_t6FAB3A88A9B87F97CFB4D7DEA082CC1CEF975FF7 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t98F624736AE86A14B9AD84D588449356C07782F8  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t6FAB3A88A9B87F97CFB4D7DEA082CC1CEF975FF7, ___dictionary_0)); }
	inline Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t6FAB3A88A9B87F97CFB4D7DEA082CC1CEF975FF7, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t6FAB3A88A9B87F97CFB4D7DEA082CC1CEF975FF7, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t6FAB3A88A9B87F97CFB4D7DEA082CC1CEF975FF7, ___current_3)); }
	inline KeyValuePair_2_t98F624736AE86A14B9AD84D588449356C07782F8  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t98F624736AE86A14B9AD84D588449356C07782F8 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t98F624736AE86A14B9AD84D588449356C07782F8  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t6FAB3A88A9B87F97CFB4D7DEA082CC1CEF975FF7, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>
struct  Enumerator_t5BCBDA24A17EEA0E33D4EC58D125362D9F2A9A2C 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t611A5FC094D9C83B06C788EC1402D634859BADE5 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_tE556C31F9BEDF6762AAB4A88C8714DBCCA03EADF  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t5BCBDA24A17EEA0E33D4EC58D125362D9F2A9A2C, ___dictionary_0)); }
	inline Dictionary_2_t611A5FC094D9C83B06C788EC1402D634859BADE5 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t611A5FC094D9C83B06C788EC1402D634859BADE5 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t611A5FC094D9C83B06C788EC1402D634859BADE5 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t5BCBDA24A17EEA0E33D4EC58D125362D9F2A9A2C, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t5BCBDA24A17EEA0E33D4EC58D125362D9F2A9A2C, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t5BCBDA24A17EEA0E33D4EC58D125362D9F2A9A2C, ___current_3)); }
	inline KeyValuePair_2_tE556C31F9BEDF6762AAB4A88C8714DBCCA03EADF  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tE556C31F9BEDF6762AAB4A88C8714DBCCA03EADF * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tE556C31F9BEDF6762AAB4A88C8714DBCCA03EADF  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t5BCBDA24A17EEA0E33D4EC58D125362D9F2A9A2C, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.Int32,System.Object>
struct  Enumerator_tC0410598D958D8FA61F7F1A803A0B7F242CEF1C6 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tC0410598D958D8FA61F7F1A803A0B7F242CEF1C6, ___dictionary_0)); }
	inline Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tC0410598D958D8FA61F7F1A803A0B7F242CEF1C6, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tC0410598D958D8FA61F7F1A803A0B7F242CEF1C6, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC0410598D958D8FA61F7F1A803A0B7F242CEF1C6, ___current_3)); }
	inline KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tC0410598D958D8FA61F7F1A803A0B7F242CEF1C6, ___getEnumeratorRetType_4)); }
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


// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
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


// System.Threading.WaitHandle
struct  WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshaled_pinvoke : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshaled_com : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// Photon.Voice.FrameBuffer
struct  FrameBuffer_t1EA3A60B030CE5091B8A1B94063C68910DE46801 
{
public:
	// System.Byte[] Photon.Voice.FrameBuffer::array
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___array_0;
	// System.Int32 Photon.Voice.FrameBuffer::offset
	int32_t ___offset_1;
	// System.Int32 Photon.Voice.FrameBuffer::count
	int32_t ___count_2;
	// System.Action Photon.Voice.FrameBuffer::release
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___release_3;
	// Photon.Voice.FrameFlags Photon.Voice.FrameBuffer::<Flags>k__BackingField
	uint8_t ___U3CFlagsU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(FrameBuffer_t1EA3A60B030CE5091B8A1B94063C68910DE46801, ___array_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_array_0() const { return ___array_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_0), (void*)value);
	}

	inline static int32_t get_offset_of_offset_1() { return static_cast<int32_t>(offsetof(FrameBuffer_t1EA3A60B030CE5091B8A1B94063C68910DE46801, ___offset_1)); }
	inline int32_t get_offset_1() const { return ___offset_1; }
	inline int32_t* get_address_of_offset_1() { return &___offset_1; }
	inline void set_offset_1(int32_t value)
	{
		___offset_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(FrameBuffer_t1EA3A60B030CE5091B8A1B94063C68910DE46801, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_release_3() { return static_cast<int32_t>(offsetof(FrameBuffer_t1EA3A60B030CE5091B8A1B94063C68910DE46801, ___release_3)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_release_3() const { return ___release_3; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_release_3() { return &___release_3; }
	inline void set_release_3(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___release_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___release_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFlagsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FrameBuffer_t1EA3A60B030CE5091B8A1B94063C68910DE46801, ___U3CFlagsU3Ek__BackingField_4)); }
	inline uint8_t get_U3CFlagsU3Ek__BackingField_4() const { return ___U3CFlagsU3Ek__BackingField_4; }
	inline uint8_t* get_address_of_U3CFlagsU3Ek__BackingField_4() { return &___U3CFlagsU3Ek__BackingField_4; }
	inline void set_U3CFlagsU3Ek__BackingField_4(uint8_t value)
	{
		___U3CFlagsU3Ek__BackingField_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Photon.Voice.FrameBuffer
struct FrameBuffer_t1EA3A60B030CE5091B8A1B94063C68910DE46801_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___array_0;
	int32_t ___offset_1;
	int32_t ___count_2;
	Il2CppMethodPointer ___release_3;
	uint8_t ___U3CFlagsU3Ek__BackingField_4;
};
// Native definition for COM marshalling of Photon.Voice.FrameBuffer
struct FrameBuffer_t1EA3A60B030CE5091B8A1B94063C68910DE46801_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___array_0;
	int32_t ___offset_1;
	int32_t ___count_2;
	Il2CppMethodPointer ___release_3;
	uint8_t ___U3CFlagsU3Ek__BackingField_4;
};

// Photon.Voice.RemoteVoiceOptions
struct  RemoteVoiceOptions_t2F19B3BEA11C908B63B0C9A6F0A445D019150214 
{
public:
	// System.Action Photon.Voice.RemoteVoiceOptions::<OnRemoteVoiceRemoveAction>k__BackingField
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0;
	// Photon.Voice.IDecoder Photon.Voice.RemoteVoiceOptions::<Decoder>k__BackingField
	RuntimeObject* ___U3CDecoderU3Ek__BackingField_1;
	// Photon.Voice.ImageFormat Photon.Voice.RemoteVoiceOptions::<OutputImageFormat>k__BackingField
	int32_t ___U3COutputImageFormatU3Ek__BackingField_2;
	// Photon.Voice.RemoteVoiceOptions_OutputType Photon.Voice.RemoteVoiceOptions::<outType>k__BackingField
	int32_t ___U3CoutTypeU3Ek__BackingField_3;
	// System.Object Photon.Voice.RemoteVoiceOptions::<output>k__BackingField
	RuntimeObject * ___U3CoutputU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RemoteVoiceOptions_t2F19B3BEA11C908B63B0C9A6F0A445D019150214, ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0() const { return ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0() { return &___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0; }
	inline void set_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDecoderU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RemoteVoiceOptions_t2F19B3BEA11C908B63B0C9A6F0A445D019150214, ___U3CDecoderU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CDecoderU3Ek__BackingField_1() const { return ___U3CDecoderU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CDecoderU3Ek__BackingField_1() { return &___U3CDecoderU3Ek__BackingField_1; }
	inline void set_U3CDecoderU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CDecoderU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDecoderU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3COutputImageFormatU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RemoteVoiceOptions_t2F19B3BEA11C908B63B0C9A6F0A445D019150214, ___U3COutputImageFormatU3Ek__BackingField_2)); }
	inline int32_t get_U3COutputImageFormatU3Ek__BackingField_2() const { return ___U3COutputImageFormatU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3COutputImageFormatU3Ek__BackingField_2() { return &___U3COutputImageFormatU3Ek__BackingField_2; }
	inline void set_U3COutputImageFormatU3Ek__BackingField_2(int32_t value)
	{
		___U3COutputImageFormatU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CoutTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RemoteVoiceOptions_t2F19B3BEA11C908B63B0C9A6F0A445D019150214, ___U3CoutTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CoutTypeU3Ek__BackingField_3() const { return ___U3CoutTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CoutTypeU3Ek__BackingField_3() { return &___U3CoutTypeU3Ek__BackingField_3; }
	inline void set_U3CoutTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CoutTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CoutputU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RemoteVoiceOptions_t2F19B3BEA11C908B63B0C9A6F0A445D019150214, ___U3CoutputU3Ek__BackingField_4)); }
	inline RuntimeObject * get_U3CoutputU3Ek__BackingField_4() const { return ___U3CoutputU3Ek__BackingField_4; }
	inline RuntimeObject ** get_address_of_U3CoutputU3Ek__BackingField_4() { return &___U3CoutputU3Ek__BackingField_4; }
	inline void set_U3CoutputU3Ek__BackingField_4(RuntimeObject * value)
	{
		___U3CoutputU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoutputU3Ek__BackingField_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Photon.Voice.RemoteVoiceOptions
struct RemoteVoiceOptions_t2F19B3BEA11C908B63B0C9A6F0A445D019150214_marshaled_pinvoke
{
	Il2CppMethodPointer ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0;
	RuntimeObject* ___U3CDecoderU3Ek__BackingField_1;
	int32_t ___U3COutputImageFormatU3Ek__BackingField_2;
	int32_t ___U3CoutTypeU3Ek__BackingField_3;
	Il2CppIUnknown* ___U3CoutputU3Ek__BackingField_4;
};
// Native definition for COM marshalling of Photon.Voice.RemoteVoiceOptions
struct RemoteVoiceOptions_t2F19B3BEA11C908B63B0C9A6F0A445D019150214_marshaled_com
{
	Il2CppMethodPointer ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0;
	RuntimeObject* ___U3CDecoderU3Ek__BackingField_1;
	int32_t ___U3COutputImageFormatU3Ek__BackingField_2;
	int32_t ___U3CoutTypeU3Ek__BackingField_3;
	Il2CppIUnknown* ___U3CoutputU3Ek__BackingField_4;
};

// Photon.Voice.VoiceClient_<get_RemoteVoiceInfos>d__40
struct  U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0  : public RuntimeObject
{
public:
	// System.Int32 Photon.Voice.VoiceClient_<get_RemoteVoiceInfos>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Photon.Voice.RemoteVoiceInfo Photon.Voice.VoiceClient_<get_RemoteVoiceInfos>d__40::<>2__current
	RemoteVoiceInfo_tBE345189E3B7ED8A97D47B0999117273F16427EC * ___U3CU3E2__current_1;
	// System.Int32 Photon.Voice.VoiceClient_<get_RemoteVoiceInfos>d__40::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Photon.Voice.VoiceClient Photon.Voice.VoiceClient_<get_RemoteVoiceInfos>d__40::<>4__this
	VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 * ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2_Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>> Photon.Voice.VoiceClient_<get_RemoteVoiceInfos>d__40::<>s__1
	Enumerator_t5BCBDA24A17EEA0E33D4EC58D125362D9F2A9A2C  ___U3CU3Es__1_4;
	// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>> Photon.Voice.VoiceClient_<get_RemoteVoiceInfos>d__40::<playerVoices>5__2
	KeyValuePair_2_tE556C31F9BEDF6762AAB4A88C8714DBCCA03EADF  ___U3CplayerVoicesU3E5__2_5;
	// System.Collections.Generic.Dictionary`2_Enumerator<System.Byte,Photon.Voice.RemoteVoice> Photon.Voice.VoiceClient_<get_RemoteVoiceInfos>d__40::<>s__3
	Enumerator_t757B49B66CCB7F4CE425E72906209268CDA5B7BE  ___U3CU3Es__3_6;
	// System.Collections.Generic.KeyValuePair`2<System.Byte,Photon.Voice.RemoteVoice> Photon.Voice.VoiceClient_<get_RemoteVoiceInfos>d__40::<voice>5__4
	KeyValuePair_2_t17B7EC8064FF24A65F802824DAEA46CAA219AAB7  ___U3CvoiceU3E5__4_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0, ___U3CU3E2__current_1)); }
	inline RemoteVoiceInfo_tBE345189E3B7ED8A97D47B0999117273F16427EC * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RemoteVoiceInfo_tBE345189E3B7ED8A97D47B0999117273F16427EC ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RemoteVoiceInfo_tBE345189E3B7ED8A97D47B0999117273F16427EC * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0, ___U3CU3E4__this_3)); }
	inline VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_4() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0, ___U3CU3Es__1_4)); }
	inline Enumerator_t5BCBDA24A17EEA0E33D4EC58D125362D9F2A9A2C  get_U3CU3Es__1_4() const { return ___U3CU3Es__1_4; }
	inline Enumerator_t5BCBDA24A17EEA0E33D4EC58D125362D9F2A9A2C * get_address_of_U3CU3Es__1_4() { return &___U3CU3Es__1_4; }
	inline void set_U3CU3Es__1_4(Enumerator_t5BCBDA24A17EEA0E33D4EC58D125362D9F2A9A2C  value)
	{
		___U3CU3Es__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__1_4))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Es__1_4))->___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CplayerVoicesU3E5__2_5() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0, ___U3CplayerVoicesU3E5__2_5)); }
	inline KeyValuePair_2_tE556C31F9BEDF6762AAB4A88C8714DBCCA03EADF  get_U3CplayerVoicesU3E5__2_5() const { return ___U3CplayerVoicesU3E5__2_5; }
	inline KeyValuePair_2_tE556C31F9BEDF6762AAB4A88C8714DBCCA03EADF * get_address_of_U3CplayerVoicesU3E5__2_5() { return &___U3CplayerVoicesU3E5__2_5; }
	inline void set_U3CplayerVoicesU3E5__2_5(KeyValuePair_2_tE556C31F9BEDF6762AAB4A88C8714DBCCA03EADF  value)
	{
		___U3CplayerVoicesU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CplayerVoicesU3E5__2_5))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Es__3_6() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0, ___U3CU3Es__3_6)); }
	inline Enumerator_t757B49B66CCB7F4CE425E72906209268CDA5B7BE  get_U3CU3Es__3_6() const { return ___U3CU3Es__3_6; }
	inline Enumerator_t757B49B66CCB7F4CE425E72906209268CDA5B7BE * get_address_of_U3CU3Es__3_6() { return &___U3CU3Es__3_6; }
	inline void set_U3CU3Es__3_6(Enumerator_t757B49B66CCB7F4CE425E72906209268CDA5B7BE  value)
	{
		___U3CU3Es__3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__3_6))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Es__3_6))->___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CvoiceU3E5__4_7() { return static_cast<int32_t>(offsetof(U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0, ___U3CvoiceU3E5__4_7)); }
	inline KeyValuePair_2_t17B7EC8064FF24A65F802824DAEA46CAA219AAB7  get_U3CvoiceU3E5__4_7() const { return ___U3CvoiceU3E5__4_7; }
	inline KeyValuePair_2_t17B7EC8064FF24A65F802824DAEA46CAA219AAB7 * get_address_of_U3CvoiceU3E5__4_7() { return &___U3CvoiceU3E5__4_7; }
	inline void set_U3CvoiceU3E5__4_7(KeyValuePair_2_t17B7EC8064FF24A65F802824DAEA46CAA219AAB7  value)
	{
		___U3CvoiceU3E5__4_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CvoiceU3E5__4_7))->___value_1), (void*)NULL);
	}
};


// Photon.Voice.VoiceInfo
struct  VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 
{
public:
	// Photon.Voice.Codec Photon.Voice.VoiceInfo::<Codec>k__BackingField
	int32_t ___U3CCodecU3Ek__BackingField_0;
	// System.Int32 Photon.Voice.VoiceInfo::<SamplingRate>k__BackingField
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	// System.Int32 Photon.Voice.VoiceInfo::<Channels>k__BackingField
	int32_t ___U3CChannelsU3Ek__BackingField_2;
	// System.Int32 Photon.Voice.VoiceInfo::<FrameDurationUs>k__BackingField
	int32_t ___U3CFrameDurationUsU3Ek__BackingField_3;
	// System.Int32 Photon.Voice.VoiceInfo::<Bitrate>k__BackingField
	int32_t ___U3CBitrateU3Ek__BackingField_4;
	// System.Int32 Photon.Voice.VoiceInfo::<Width>k__BackingField
	int32_t ___U3CWidthU3Ek__BackingField_5;
	// System.Int32 Photon.Voice.VoiceInfo::<Height>k__BackingField
	int32_t ___U3CHeightU3Ek__BackingField_6;
	// System.Int32 Photon.Voice.VoiceInfo::<FPS>k__BackingField
	int32_t ___U3CFPSU3Ek__BackingField_7;
	// System.Int32 Photon.Voice.VoiceInfo::<KeyFrameInt>k__BackingField
	int32_t ___U3CKeyFrameIntU3Ek__BackingField_8;
	// System.Object Photon.Voice.VoiceInfo::<UserData>k__BackingField
	RuntimeObject * ___U3CUserDataU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CCodecU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740, ___U3CCodecU3Ek__BackingField_0)); }
	inline int32_t get_U3CCodecU3Ek__BackingField_0() const { return ___U3CCodecU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCodecU3Ek__BackingField_0() { return &___U3CCodecU3Ek__BackingField_0; }
	inline void set_U3CCodecU3Ek__BackingField_0(int32_t value)
	{
		___U3CCodecU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CSamplingRateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740, ___U3CSamplingRateU3Ek__BackingField_1)); }
	inline int32_t get_U3CSamplingRateU3Ek__BackingField_1() const { return ___U3CSamplingRateU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CSamplingRateU3Ek__BackingField_1() { return &___U3CSamplingRateU3Ek__BackingField_1; }
	inline void set_U3CSamplingRateU3Ek__BackingField_1(int32_t value)
	{
		___U3CSamplingRateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CChannelsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740, ___U3CChannelsU3Ek__BackingField_2)); }
	inline int32_t get_U3CChannelsU3Ek__BackingField_2() const { return ___U3CChannelsU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CChannelsU3Ek__BackingField_2() { return &___U3CChannelsU3Ek__BackingField_2; }
	inline void set_U3CChannelsU3Ek__BackingField_2(int32_t value)
	{
		___U3CChannelsU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CFrameDurationUsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740, ___U3CFrameDurationUsU3Ek__BackingField_3)); }
	inline int32_t get_U3CFrameDurationUsU3Ek__BackingField_3() const { return ___U3CFrameDurationUsU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CFrameDurationUsU3Ek__BackingField_3() { return &___U3CFrameDurationUsU3Ek__BackingField_3; }
	inline void set_U3CFrameDurationUsU3Ek__BackingField_3(int32_t value)
	{
		___U3CFrameDurationUsU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CBitrateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740, ___U3CBitrateU3Ek__BackingField_4)); }
	inline int32_t get_U3CBitrateU3Ek__BackingField_4() const { return ___U3CBitrateU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CBitrateU3Ek__BackingField_4() { return &___U3CBitrateU3Ek__BackingField_4; }
	inline void set_U3CBitrateU3Ek__BackingField_4(int32_t value)
	{
		___U3CBitrateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CWidthU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740, ___U3CWidthU3Ek__BackingField_5)); }
	inline int32_t get_U3CWidthU3Ek__BackingField_5() const { return ___U3CWidthU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CWidthU3Ek__BackingField_5() { return &___U3CWidthU3Ek__BackingField_5; }
	inline void set_U3CWidthU3Ek__BackingField_5(int32_t value)
	{
		___U3CWidthU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CHeightU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740, ___U3CHeightU3Ek__BackingField_6)); }
	inline int32_t get_U3CHeightU3Ek__BackingField_6() const { return ___U3CHeightU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CHeightU3Ek__BackingField_6() { return &___U3CHeightU3Ek__BackingField_6; }
	inline void set_U3CHeightU3Ek__BackingField_6(int32_t value)
	{
		___U3CHeightU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CFPSU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740, ___U3CFPSU3Ek__BackingField_7)); }
	inline int32_t get_U3CFPSU3Ek__BackingField_7() const { return ___U3CFPSU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CFPSU3Ek__BackingField_7() { return &___U3CFPSU3Ek__BackingField_7; }
	inline void set_U3CFPSU3Ek__BackingField_7(int32_t value)
	{
		___U3CFPSU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CKeyFrameIntU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740, ___U3CKeyFrameIntU3Ek__BackingField_8)); }
	inline int32_t get_U3CKeyFrameIntU3Ek__BackingField_8() const { return ___U3CKeyFrameIntU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CKeyFrameIntU3Ek__BackingField_8() { return &___U3CKeyFrameIntU3Ek__BackingField_8; }
	inline void set_U3CKeyFrameIntU3Ek__BackingField_8(int32_t value)
	{
		___U3CKeyFrameIntU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CUserDataU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740, ___U3CUserDataU3Ek__BackingField_9)); }
	inline RuntimeObject * get_U3CUserDataU3Ek__BackingField_9() const { return ___U3CUserDataU3Ek__BackingField_9; }
	inline RuntimeObject ** get_address_of_U3CUserDataU3Ek__BackingField_9() { return &___U3CUserDataU3Ek__BackingField_9; }
	inline void set_U3CUserDataU3Ek__BackingField_9(RuntimeObject * value)
	{
		___U3CUserDataU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserDataU3Ek__BackingField_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Photon.Voice.VoiceInfo
struct VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740_marshaled_pinvoke
{
	int32_t ___U3CCodecU3Ek__BackingField_0;
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	int32_t ___U3CChannelsU3Ek__BackingField_2;
	int32_t ___U3CFrameDurationUsU3Ek__BackingField_3;
	int32_t ___U3CBitrateU3Ek__BackingField_4;
	int32_t ___U3CWidthU3Ek__BackingField_5;
	int32_t ___U3CHeightU3Ek__BackingField_6;
	int32_t ___U3CFPSU3Ek__BackingField_7;
	int32_t ___U3CKeyFrameIntU3Ek__BackingField_8;
	Il2CppIUnknown* ___U3CUserDataU3Ek__BackingField_9;
};
// Native definition for COM marshalling of Photon.Voice.VoiceInfo
struct VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740_marshaled_com
{
	int32_t ___U3CCodecU3Ek__BackingField_0;
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	int32_t ___U3CChannelsU3Ek__BackingField_2;
	int32_t ___U3CFrameDurationUsU3Ek__BackingField_3;
	int32_t ___U3CBitrateU3Ek__BackingField_4;
	int32_t ___U3CWidthU3Ek__BackingField_5;
	int32_t ___U3CHeightU3Ek__BackingField_6;
	int32_t ___U3CFPSU3Ek__BackingField_7;
	int32_t ___U3CKeyFrameIntU3Ek__BackingField_8;
	Il2CppIUnknown* ___U3CUserDataU3Ek__BackingField_9;
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


// System.Threading.EventWaitHandle
struct  EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98  : public WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6
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


// Photon.Voice.LocalVoice
struct  LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501  : public RuntimeObject
{
public:
	// System.Byte Photon.Voice.LocalVoice::<InterestGroup>k__BackingField
	uint8_t ___U3CInterestGroupU3Ek__BackingField_1;
	// System.Boolean Photon.Voice.LocalVoice::transmitEnabled
	bool ___transmitEnabled_2;
	// System.Int32 Photon.Voice.LocalVoice::<FramesSent>k__BackingField
	int32_t ___U3CFramesSentU3Ek__BackingField_3;
	// System.Int32 Photon.Voice.LocalVoice::<FramesSentBytes>k__BackingField
	int32_t ___U3CFramesSentBytesU3Ek__BackingField_4;
	// System.Boolean Photon.Voice.LocalVoice::<Reliable>k__BackingField
	bool ___U3CReliableU3Ek__BackingField_5;
	// System.Boolean Photon.Voice.LocalVoice::<Encrypt>k__BackingField
	bool ___U3CEncryptU3Ek__BackingField_6;
	// Photon.Voice.IServiceable Photon.Voice.LocalVoice::<LocalUserServiceable>k__BackingField
	RuntimeObject* ___U3CLocalUserServiceableU3Ek__BackingField_7;
	// System.Boolean Photon.Voice.LocalVoice::debugEchoMode
	bool ___debugEchoMode_8;
	// Photon.Voice.VoiceInfo Photon.Voice.LocalVoice::info
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  ___info_9;
	// Photon.Voice.IEncoder Photon.Voice.LocalVoice::encoder
	RuntimeObject* ___encoder_10;
	// System.Byte Photon.Voice.LocalVoice::id
	uint8_t ___id_11;
	// System.Int32 Photon.Voice.LocalVoice::channelId
	int32_t ___channelId_12;
	// System.Byte Photon.Voice.LocalVoice::evNumber
	uint8_t ___evNumber_13;
	// Photon.Voice.VoiceClient Photon.Voice.LocalVoice::voiceClient
	VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 * ___voiceClient_14;
	// System.ArraySegment`1<System.Byte> Photon.Voice.LocalVoice::configFrame
	ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  ___configFrame_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Photon.Voice.LocalVoice::disposed
	bool ___disposed_16;
	// System.Object Photon.Voice.LocalVoice::disposeLock
	RuntimeObject * ___disposeLock_17;
	// System.Int32 Photon.Voice.LocalVoice::lastTransmitTime
	int32_t ___lastTransmitTime_19;
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32> Photon.Voice.LocalVoice::eventTimestamps
	Dictionary_2_t3B77FDE09068A7905F58AAC0DB3B58971B40A516 * ___eventTimestamps_20;

public:
	inline static int32_t get_offset_of_U3CInterestGroupU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501, ___U3CInterestGroupU3Ek__BackingField_1)); }
	inline uint8_t get_U3CInterestGroupU3Ek__BackingField_1() const { return ___U3CInterestGroupU3Ek__BackingField_1; }
	inline uint8_t* get_address_of_U3CInterestGroupU3Ek__BackingField_1() { return &___U3CInterestGroupU3Ek__BackingField_1; }
	inline void set_U3CInterestGroupU3Ek__BackingField_1(uint8_t value)
	{
		___U3CInterestGroupU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_transmitEnabled_2() { return static_cast<int32_t>(offsetof(LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501, ___transmitEnabled_2)); }
	inline bool get_transmitEnabled_2() const { return ___transmitEnabled_2; }
	inline bool* get_address_of_transmitEnabled_2() { return &___transmitEnabled_2; }
	inline void set_transmitEnabled_2(bool value)
	{
		___transmitEnabled_2 = value;
	}

	inline static int32_t get_offset_of_U3CFramesSentU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501, ___U3CFramesSentU3Ek__BackingField_3)); }
	inline int32_t get_U3CFramesSentU3Ek__BackingField_3() const { return ___U3CFramesSentU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CFramesSentU3Ek__BackingField_3() { return &___U3CFramesSentU3Ek__BackingField_3; }
	inline void set_U3CFramesSentU3Ek__BackingField_3(int32_t value)
	{
		___U3CFramesSentU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CFramesSentBytesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501, ___U3CFramesSentBytesU3Ek__BackingField_4)); }
	inline int32_t get_U3CFramesSentBytesU3Ek__BackingField_4() const { return ___U3CFramesSentBytesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CFramesSentBytesU3Ek__BackingField_4() { return &___U3CFramesSentBytesU3Ek__BackingField_4; }
	inline void set_U3CFramesSentBytesU3Ek__BackingField_4(int32_t value)
	{
		___U3CFramesSentBytesU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CReliableU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501, ___U3CReliableU3Ek__BackingField_5)); }
	inline bool get_U3CReliableU3Ek__BackingField_5() const { return ___U3CReliableU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CReliableU3Ek__BackingField_5() { return &___U3CReliableU3Ek__BackingField_5; }
	inline void set_U3CReliableU3Ek__BackingField_5(bool value)
	{
		___U3CReliableU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CEncryptU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501, ___U3CEncryptU3Ek__BackingField_6)); }
	inline bool get_U3CEncryptU3Ek__BackingField_6() const { return ___U3CEncryptU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CEncryptU3Ek__BackingField_6() { return &___U3CEncryptU3Ek__BackingField_6; }
	inline void set_U3CEncryptU3Ek__BackingField_6(bool value)
	{
		___U3CEncryptU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CLocalUserServiceableU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501, ___U3CLocalUserServiceableU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CLocalUserServiceableU3Ek__BackingField_7() const { return ___U3CLocalUserServiceableU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CLocalUserServiceableU3Ek__BackingField_7() { return &___U3CLocalUserServiceableU3Ek__BackingField_7; }
	inline void set_U3CLocalUserServiceableU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CLocalUserServiceableU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLocalUserServiceableU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_debugEchoMode_8() { return static_cast<int32_t>(offsetof(LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501, ___debugEchoMode_8)); }
	inline bool get_debugEchoMode_8() const { return ___debugEchoMode_8; }
	inline bool* get_address_of_debugEchoMode_8() { return &___debugEchoMode_8; }
	inline void set_debugEchoMode_8(bool value)
	{
		___debugEchoMode_8 = value;
	}

	inline static int32_t get_offset_of_info_9() { return static_cast<int32_t>(offsetof(LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501, ___info_9)); }
	inline VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  get_info_9() const { return ___info_9; }
	inline VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * get_address_of_info_9() { return &___info_9; }
	inline void set_info_9(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  value)
	{
		___info_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___info_9))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
	}

	inline static int32_t get_offset_of_encoder_10() { return static_cast<int32_t>(offsetof(LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501, ___encoder_10)); }
	inline RuntimeObject* get_encoder_10() const { return ___encoder_10; }
	inline RuntimeObject** get_address_of_encoder_10() { return &___encoder_10; }
	inline void set_encoder_10(RuntimeObject* value)
	{
		___encoder_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_10), (void*)value);
	}

	inline static int32_t get_offset_of_id_11() { return static_cast<int32_t>(offsetof(LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501, ___id_11)); }
	inline uint8_t get_id_11() const { return ___id_11; }
	inline uint8_t* get_address_of_id_11() { return &___id_11; }
	inline void set_id_11(uint8_t value)
	{
		___id_11 = value;
	}

	inline static int32_t get_offset_of_channelId_12() { return static_cast<int32_t>(offsetof(LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501, ___channelId_12)); }
	inline int32_t get_channelId_12() const { return ___channelId_12; }
	inline int32_t* get_address_of_channelId_12() { return &___channelId_12; }
	inline void set_channelId_12(int32_t value)
	{
		___channelId_12 = value;
	}

	inline static int32_t get_offset_of_evNumber_13() { return static_cast<int32_t>(offsetof(LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501, ___evNumber_13)); }
	inline uint8_t get_evNumber_13() const { return ___evNumber_13; }
	inline uint8_t* get_address_of_evNumber_13() { return &___evNumber_13; }
	inline void set_evNumber_13(uint8_t value)
	{
		___evNumber_13 = value;
	}

	inline static int32_t get_offset_of_voiceClient_14() { return static_cast<int32_t>(offsetof(LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501, ___voiceClient_14)); }
	inline VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 * get_voiceClient_14() const { return ___voiceClient_14; }
	inline VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 ** get_address_of_voiceClient_14() { return &___voiceClient_14; }
	inline void set_voiceClient_14(VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 * value)
	{
		___voiceClient_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceClient_14), (void*)value);
	}

	inline static int32_t get_offset_of_configFrame_15() { return static_cast<int32_t>(offsetof(LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501, ___configFrame_15)); }
	inline ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  get_configFrame_15() const { return ___configFrame_15; }
	inline ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA * get_address_of_configFrame_15() { return &___configFrame_15; }
	inline void set_configFrame_15(ArraySegment_1_t5B17204266E698CC035E2A7F6435A4F78286D0FA  value)
	{
		___configFrame_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___configFrame_15))->____array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_disposed_16() { return static_cast<int32_t>(offsetof(LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501, ___disposed_16)); }
	inline bool get_disposed_16() const { return ___disposed_16; }
	inline bool* get_address_of_disposed_16() { return &___disposed_16; }
	inline void set_disposed_16(bool value)
	{
		___disposed_16 = value;
	}

	inline static int32_t get_offset_of_disposeLock_17() { return static_cast<int32_t>(offsetof(LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501, ___disposeLock_17)); }
	inline RuntimeObject * get_disposeLock_17() const { return ___disposeLock_17; }
	inline RuntimeObject ** get_address_of_disposeLock_17() { return &___disposeLock_17; }
	inline void set_disposeLock_17(RuntimeObject * value)
	{
		___disposeLock_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposeLock_17), (void*)value);
	}

	inline static int32_t get_offset_of_lastTransmitTime_19() { return static_cast<int32_t>(offsetof(LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501, ___lastTransmitTime_19)); }
	inline int32_t get_lastTransmitTime_19() const { return ___lastTransmitTime_19; }
	inline int32_t* get_address_of_lastTransmitTime_19() { return &___lastTransmitTime_19; }
	inline void set_lastTransmitTime_19(int32_t value)
	{
		___lastTransmitTime_19 = value;
	}

	inline static int32_t get_offset_of_eventTimestamps_20() { return static_cast<int32_t>(offsetof(LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501, ___eventTimestamps_20)); }
	inline Dictionary_2_t3B77FDE09068A7905F58AAC0DB3B58971B40A516 * get_eventTimestamps_20() const { return ___eventTimestamps_20; }
	inline Dictionary_2_t3B77FDE09068A7905F58AAC0DB3B58971B40A516 ** get_address_of_eventTimestamps_20() { return &___eventTimestamps_20; }
	inline void set_eventTimestamps_20(Dictionary_2_t3B77FDE09068A7905F58AAC0DB3B58971B40A516 * value)
	{
		___eventTimestamps_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventTimestamps_20), (void*)value);
	}
};


// Photon.Voice.RemoteVoice
struct  RemoteVoice_tFB7B418D0495B703F0EBB5E8F950768A6A48D39B  : public RuntimeObject
{
public:
	// Photon.Voice.VoiceInfo Photon.Voice.RemoteVoice::<Info>k__BackingField
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  ___U3CInfoU3Ek__BackingField_0;
	// Photon.Voice.RemoteVoiceOptions Photon.Voice.RemoteVoice::options
	RemoteVoiceOptions_t2F19B3BEA11C908B63B0C9A6F0A445D019150214  ___options_1;
	// System.Int32 Photon.Voice.RemoteVoice::channelId
	int32_t ___channelId_2;
	// System.Int32 Photon.Voice.RemoteVoice::<DelayFrames>k__BackingField
	int32_t ___U3CDelayFramesU3Ek__BackingField_3;
	// System.Int32 Photon.Voice.RemoteVoice::playerId
	int32_t ___playerId_4;
	// System.Byte Photon.Voice.RemoteVoice::voiceId
	uint8_t ___voiceId_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Photon.Voice.RemoteVoice::disposed
	bool ___disposed_6;
	// System.Object Photon.Voice.RemoteVoice::disposeLock
	RuntimeObject * ___disposeLock_7;
	// Photon.Voice.SpacingProfile Photon.Voice.RemoteVoice::receiveSpacingProfile
	SpacingProfile_t86BFDE82BB4987EF8B5CE17889858E4392E70842 * ___receiveSpacingProfile_8;
	// System.Byte Photon.Voice.RemoteVoice::lastEvNumber
	uint8_t ___lastEvNumber_9;
	// Photon.Voice.VoiceClient Photon.Voice.RemoteVoice::voiceClient
	VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 * ___voiceClient_10;
	// System.Collections.Generic.Queue`1<Photon.Voice.FrameBuffer> Photon.Voice.RemoteVoice::frameQueue
	Queue_1_tBA66CCF9F37EDB52FAA379006BF94F96ADEC8C90 * ___frameQueue_11;
	// System.Threading.AutoResetEvent Photon.Voice.RemoteVoice::frameQueueReady
	AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * ___frameQueueReady_12;
	// System.Int32 Photon.Voice.RemoteVoice::flushingFramePosInQueue
	int32_t ___flushingFramePosInQueue_13;
	// Photon.Voice.FrameBuffer Photon.Voice.RemoteVoice::nullFrame
	FrameBuffer_t1EA3A60B030CE5091B8A1B94063C68910DE46801  ___nullFrame_14;

public:
	inline static int32_t get_offset_of_U3CInfoU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RemoteVoice_tFB7B418D0495B703F0EBB5E8F950768A6A48D39B, ___U3CInfoU3Ek__BackingField_0)); }
	inline VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  get_U3CInfoU3Ek__BackingField_0() const { return ___U3CInfoU3Ek__BackingField_0; }
	inline VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * get_address_of_U3CInfoU3Ek__BackingField_0() { return &___U3CInfoU3Ek__BackingField_0; }
	inline void set_U3CInfoU3Ek__BackingField_0(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  value)
	{
		___U3CInfoU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CInfoU3Ek__BackingField_0))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
	}

	inline static int32_t get_offset_of_options_1() { return static_cast<int32_t>(offsetof(RemoteVoice_tFB7B418D0495B703F0EBB5E8F950768A6A48D39B, ___options_1)); }
	inline RemoteVoiceOptions_t2F19B3BEA11C908B63B0C9A6F0A445D019150214  get_options_1() const { return ___options_1; }
	inline RemoteVoiceOptions_t2F19B3BEA11C908B63B0C9A6F0A445D019150214 * get_address_of_options_1() { return &___options_1; }
	inline void set_options_1(RemoteVoiceOptions_t2F19B3BEA11C908B63B0C9A6F0A445D019150214  value)
	{
		___options_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___options_1))->___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___options_1))->___U3CDecoderU3Ek__BackingField_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___options_1))->___U3CoutputU3Ek__BackingField_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_channelId_2() { return static_cast<int32_t>(offsetof(RemoteVoice_tFB7B418D0495B703F0EBB5E8F950768A6A48D39B, ___channelId_2)); }
	inline int32_t get_channelId_2() const { return ___channelId_2; }
	inline int32_t* get_address_of_channelId_2() { return &___channelId_2; }
	inline void set_channelId_2(int32_t value)
	{
		___channelId_2 = value;
	}

	inline static int32_t get_offset_of_U3CDelayFramesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RemoteVoice_tFB7B418D0495B703F0EBB5E8F950768A6A48D39B, ___U3CDelayFramesU3Ek__BackingField_3)); }
	inline int32_t get_U3CDelayFramesU3Ek__BackingField_3() const { return ___U3CDelayFramesU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CDelayFramesU3Ek__BackingField_3() { return &___U3CDelayFramesU3Ek__BackingField_3; }
	inline void set_U3CDelayFramesU3Ek__BackingField_3(int32_t value)
	{
		___U3CDelayFramesU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_playerId_4() { return static_cast<int32_t>(offsetof(RemoteVoice_tFB7B418D0495B703F0EBB5E8F950768A6A48D39B, ___playerId_4)); }
	inline int32_t get_playerId_4() const { return ___playerId_4; }
	inline int32_t* get_address_of_playerId_4() { return &___playerId_4; }
	inline void set_playerId_4(int32_t value)
	{
		___playerId_4 = value;
	}

	inline static int32_t get_offset_of_voiceId_5() { return static_cast<int32_t>(offsetof(RemoteVoice_tFB7B418D0495B703F0EBB5E8F950768A6A48D39B, ___voiceId_5)); }
	inline uint8_t get_voiceId_5() const { return ___voiceId_5; }
	inline uint8_t* get_address_of_voiceId_5() { return &___voiceId_5; }
	inline void set_voiceId_5(uint8_t value)
	{
		___voiceId_5 = value;
	}

	inline static int32_t get_offset_of_disposed_6() { return static_cast<int32_t>(offsetof(RemoteVoice_tFB7B418D0495B703F0EBB5E8F950768A6A48D39B, ___disposed_6)); }
	inline bool get_disposed_6() const { return ___disposed_6; }
	inline bool* get_address_of_disposed_6() { return &___disposed_6; }
	inline void set_disposed_6(bool value)
	{
		___disposed_6 = value;
	}

	inline static int32_t get_offset_of_disposeLock_7() { return static_cast<int32_t>(offsetof(RemoteVoice_tFB7B418D0495B703F0EBB5E8F950768A6A48D39B, ___disposeLock_7)); }
	inline RuntimeObject * get_disposeLock_7() const { return ___disposeLock_7; }
	inline RuntimeObject ** get_address_of_disposeLock_7() { return &___disposeLock_7; }
	inline void set_disposeLock_7(RuntimeObject * value)
	{
		___disposeLock_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposeLock_7), (void*)value);
	}

	inline static int32_t get_offset_of_receiveSpacingProfile_8() { return static_cast<int32_t>(offsetof(RemoteVoice_tFB7B418D0495B703F0EBB5E8F950768A6A48D39B, ___receiveSpacingProfile_8)); }
	inline SpacingProfile_t86BFDE82BB4987EF8B5CE17889858E4392E70842 * get_receiveSpacingProfile_8() const { return ___receiveSpacingProfile_8; }
	inline SpacingProfile_t86BFDE82BB4987EF8B5CE17889858E4392E70842 ** get_address_of_receiveSpacingProfile_8() { return &___receiveSpacingProfile_8; }
	inline void set_receiveSpacingProfile_8(SpacingProfile_t86BFDE82BB4987EF8B5CE17889858E4392E70842 * value)
	{
		___receiveSpacingProfile_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receiveSpacingProfile_8), (void*)value);
	}

	inline static int32_t get_offset_of_lastEvNumber_9() { return static_cast<int32_t>(offsetof(RemoteVoice_tFB7B418D0495B703F0EBB5E8F950768A6A48D39B, ___lastEvNumber_9)); }
	inline uint8_t get_lastEvNumber_9() const { return ___lastEvNumber_9; }
	inline uint8_t* get_address_of_lastEvNumber_9() { return &___lastEvNumber_9; }
	inline void set_lastEvNumber_9(uint8_t value)
	{
		___lastEvNumber_9 = value;
	}

	inline static int32_t get_offset_of_voiceClient_10() { return static_cast<int32_t>(offsetof(RemoteVoice_tFB7B418D0495B703F0EBB5E8F950768A6A48D39B, ___voiceClient_10)); }
	inline VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 * get_voiceClient_10() const { return ___voiceClient_10; }
	inline VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 ** get_address_of_voiceClient_10() { return &___voiceClient_10; }
	inline void set_voiceClient_10(VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 * value)
	{
		___voiceClient_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceClient_10), (void*)value);
	}

	inline static int32_t get_offset_of_frameQueue_11() { return static_cast<int32_t>(offsetof(RemoteVoice_tFB7B418D0495B703F0EBB5E8F950768A6A48D39B, ___frameQueue_11)); }
	inline Queue_1_tBA66CCF9F37EDB52FAA379006BF94F96ADEC8C90 * get_frameQueue_11() const { return ___frameQueue_11; }
	inline Queue_1_tBA66CCF9F37EDB52FAA379006BF94F96ADEC8C90 ** get_address_of_frameQueue_11() { return &___frameQueue_11; }
	inline void set_frameQueue_11(Queue_1_tBA66CCF9F37EDB52FAA379006BF94F96ADEC8C90 * value)
	{
		___frameQueue_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameQueue_11), (void*)value);
	}

	inline static int32_t get_offset_of_frameQueueReady_12() { return static_cast<int32_t>(offsetof(RemoteVoice_tFB7B418D0495B703F0EBB5E8F950768A6A48D39B, ___frameQueueReady_12)); }
	inline AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * get_frameQueueReady_12() const { return ___frameQueueReady_12; }
	inline AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 ** get_address_of_frameQueueReady_12() { return &___frameQueueReady_12; }
	inline void set_frameQueueReady_12(AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * value)
	{
		___frameQueueReady_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameQueueReady_12), (void*)value);
	}

	inline static int32_t get_offset_of_flushingFramePosInQueue_13() { return static_cast<int32_t>(offsetof(RemoteVoice_tFB7B418D0495B703F0EBB5E8F950768A6A48D39B, ___flushingFramePosInQueue_13)); }
	inline int32_t get_flushingFramePosInQueue_13() const { return ___flushingFramePosInQueue_13; }
	inline int32_t* get_address_of_flushingFramePosInQueue_13() { return &___flushingFramePosInQueue_13; }
	inline void set_flushingFramePosInQueue_13(int32_t value)
	{
		___flushingFramePosInQueue_13 = value;
	}

	inline static int32_t get_offset_of_nullFrame_14() { return static_cast<int32_t>(offsetof(RemoteVoice_tFB7B418D0495B703F0EBB5E8F950768A6A48D39B, ___nullFrame_14)); }
	inline FrameBuffer_t1EA3A60B030CE5091B8A1B94063C68910DE46801  get_nullFrame_14() const { return ___nullFrame_14; }
	inline FrameBuffer_t1EA3A60B030CE5091B8A1B94063C68910DE46801 * get_address_of_nullFrame_14() { return &___nullFrame_14; }
	inline void set_nullFrame_14(FrameBuffer_t1EA3A60B030CE5091B8A1B94063C68910DE46801  value)
	{
		___nullFrame_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___nullFrame_14))->___array_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___nullFrame_14))->___release_3), (void*)NULL);
		#endif
	}
};


// Photon.Voice.RemoteVoiceInfo
struct  RemoteVoiceInfo_tBE345189E3B7ED8A97D47B0999117273F16427EC  : public RuntimeObject
{
public:
	// Photon.Voice.VoiceInfo Photon.Voice.RemoteVoiceInfo::<Info>k__BackingField
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  ___U3CInfoU3Ek__BackingField_0;
	// System.Int32 Photon.Voice.RemoteVoiceInfo::<ChannelId>k__BackingField
	int32_t ___U3CChannelIdU3Ek__BackingField_1;
	// System.Int32 Photon.Voice.RemoteVoiceInfo::<PlayerId>k__BackingField
	int32_t ___U3CPlayerIdU3Ek__BackingField_2;
	// System.Byte Photon.Voice.RemoteVoiceInfo::<VoiceId>k__BackingField
	uint8_t ___U3CVoiceIdU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CInfoU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RemoteVoiceInfo_tBE345189E3B7ED8A97D47B0999117273F16427EC, ___U3CInfoU3Ek__BackingField_0)); }
	inline VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  get_U3CInfoU3Ek__BackingField_0() const { return ___U3CInfoU3Ek__BackingField_0; }
	inline VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * get_address_of_U3CInfoU3Ek__BackingField_0() { return &___U3CInfoU3Ek__BackingField_0; }
	inline void set_U3CInfoU3Ek__BackingField_0(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  value)
	{
		___U3CInfoU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CInfoU3Ek__BackingField_0))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CChannelIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RemoteVoiceInfo_tBE345189E3B7ED8A97D47B0999117273F16427EC, ___U3CChannelIdU3Ek__BackingField_1)); }
	inline int32_t get_U3CChannelIdU3Ek__BackingField_1() const { return ___U3CChannelIdU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CChannelIdU3Ek__BackingField_1() { return &___U3CChannelIdU3Ek__BackingField_1; }
	inline void set_U3CChannelIdU3Ek__BackingField_1(int32_t value)
	{
		___U3CChannelIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPlayerIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RemoteVoiceInfo_tBE345189E3B7ED8A97D47B0999117273F16427EC, ___U3CPlayerIdU3Ek__BackingField_2)); }
	inline int32_t get_U3CPlayerIdU3Ek__BackingField_2() const { return ___U3CPlayerIdU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CPlayerIdU3Ek__BackingField_2() { return &___U3CPlayerIdU3Ek__BackingField_2; }
	inline void set_U3CPlayerIdU3Ek__BackingField_2(int32_t value)
	{
		___U3CPlayerIdU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CVoiceIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RemoteVoiceInfo_tBE345189E3B7ED8A97D47B0999117273F16427EC, ___U3CVoiceIdU3Ek__BackingField_3)); }
	inline uint8_t get_U3CVoiceIdU3Ek__BackingField_3() const { return ___U3CVoiceIdU3Ek__BackingField_3; }
	inline uint8_t* get_address_of_U3CVoiceIdU3Ek__BackingField_3() { return &___U3CVoiceIdU3Ek__BackingField_3; }
	inline void set_U3CVoiceIdU3Ek__BackingField_3(uint8_t value)
	{
		___U3CVoiceIdU3Ek__BackingField_3 = value;
	}
};


// Photon.Voice.VoiceClient_<>c__DisplayClass47_0
struct  U3CU3Ec__DisplayClass47_0_t648A17DFFFA37BA31B69266006B0352162ACBDDD  : public RuntimeObject
{
public:
	// Photon.Voice.VoiceClient Photon.Voice.VoiceClient_<>c__DisplayClass47_0::<>4__this
	VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 * ___U3CU3E4__this_0;
	// Photon.Voice.IEncoder Photon.Voice.VoiceClient_<>c__DisplayClass47_0::encoder
	RuntimeObject* ___encoder_1;
	// Photon.Voice.VoiceInfo Photon.Voice.VoiceClient_<>c__DisplayClass47_0::voiceInfo
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  ___voiceInfo_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass47_0_t648A17DFFFA37BA31B69266006B0352162ACBDDD, ___U3CU3E4__this_0)); }
	inline VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_encoder_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass47_0_t648A17DFFFA37BA31B69266006B0352162ACBDDD, ___encoder_1)); }
	inline RuntimeObject* get_encoder_1() const { return ___encoder_1; }
	inline RuntimeObject** get_address_of_encoder_1() { return &___encoder_1; }
	inline void set_encoder_1(RuntimeObject* value)
	{
		___encoder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_1), (void*)value);
	}

	inline static int32_t get_offset_of_voiceInfo_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass47_0_t648A17DFFFA37BA31B69266006B0352162ACBDDD, ___voiceInfo_2)); }
	inline VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  get_voiceInfo_2() const { return ___voiceInfo_2; }
	inline VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * get_address_of_voiceInfo_2() { return &___voiceInfo_2; }
	inline void set_voiceInfo_2(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  value)
	{
		___voiceInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___voiceInfo_2))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
	}
};


// Photon.Voice.VoiceClient_RemoteVoiceInfoDelegate
struct  RemoteVoiceInfoDelegate_t9DDC9137E7981970B308A55A9F2C949364906D06  : public MulticastDelegate_t
{
public:

public:
};


// Photon.Voice.Windows.WindowsAudioInPusher_CallbackDelegate
struct  CallbackDelegate_t4514EFCDF9110C72DCC6DBA745B6DD429C888FF8  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Int16[]>
struct  Action_1_tB6E8E8CB26C84B16959C0CA9F3E9958D027263C3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`3<System.Int32,System.IntPtr,System.Int32>
struct  Action_3_tA3B470E9D4FEF30C8329D94BF79F47D8F0EFC367  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Threading.AutoResetEvent
struct  AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7  : public EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98
{
public:

public:
};


// System.Threading.ThreadStart
struct  ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF  : public MulticastDelegate_t
{
public:

public:
};


// Photon.Voice.LocalVoiceFramedBase
struct  LocalVoiceFramedBase_tA0A275DAF15FCFD0DE0BE2074A0DFE9860CFE1D0  : public LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501
{
public:
	// System.Int32 Photon.Voice.LocalVoiceFramedBase::<FrameSize>k__BackingField
	int32_t ___U3CFrameSizeU3Ek__BackingField_21;

public:
	inline static int32_t get_offset_of_U3CFrameSizeU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(LocalVoiceFramedBase_tA0A275DAF15FCFD0DE0BE2074A0DFE9860CFE1D0, ___U3CFrameSizeU3Ek__BackingField_21)); }
	inline int32_t get_U3CFrameSizeU3Ek__BackingField_21() const { return ___U3CFrameSizeU3Ek__BackingField_21; }
	inline int32_t* get_address_of_U3CFrameSizeU3Ek__BackingField_21() { return &___U3CFrameSizeU3Ek__BackingField_21; }
	inline void set_U3CFrameSizeU3Ek__BackingField_21(int32_t value)
	{
		___U3CFrameSizeU3Ek__BackingField_21 = value;
	}
};


// Photon.Voice.LocalVoiceFramed`1<System.Int16>
struct  LocalVoiceFramed_1_t631B3C25EBF711BB5E2EB03387F85C8BB662853E  : public LocalVoiceFramedBase_tA0A275DAF15FCFD0DE0BE2074A0DFE9860CFE1D0
{
public:
	// Photon.Voice.Framer`1<T> Photon.Voice.LocalVoiceFramed`1::framer
	Framer_1_tFA4A125073CBA54E0B5C3EE99831A9C12BED8751 * ___framer_22;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::preProcessorsCnt
	int32_t ___preProcessorsCnt_23;
	// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<T>> Photon.Voice.LocalVoiceFramed`1::processors
	List_1_tC560187189515692BF61CAA4B783247B8B1FDC40 * ___processors_24;
	// System.Boolean Photon.Voice.LocalVoiceFramed`1::dataEncodeThreadStarted
	bool ___dataEncodeThreadStarted_25;
	// System.Collections.Generic.Queue`1<T[]> Photon.Voice.LocalVoiceFramed`1::pushDataQueue
	Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C * ___pushDataQueue_26;
	// System.Threading.AutoResetEvent Photon.Voice.LocalVoiceFramed`1::pushDataQueueReady
	AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * ___pushDataQueueReady_27;
	// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1::bufferFactory
	FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF * ___bufferFactory_28;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::framesSkippedNextLog
	int32_t ___framesSkippedNextLog_29;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::framesSkipped
	int32_t ___framesSkipped_30;
	// System.Boolean Photon.Voice.LocalVoiceFramed`1::exitThread
	bool ___exitThread_31;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::processNullFramesCnt
	int32_t ___processNullFramesCnt_32;

public:
	inline static int32_t get_offset_of_framer_22() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t631B3C25EBF711BB5E2EB03387F85C8BB662853E, ___framer_22)); }
	inline Framer_1_tFA4A125073CBA54E0B5C3EE99831A9C12BED8751 * get_framer_22() const { return ___framer_22; }
	inline Framer_1_tFA4A125073CBA54E0B5C3EE99831A9C12BED8751 ** get_address_of_framer_22() { return &___framer_22; }
	inline void set_framer_22(Framer_1_tFA4A125073CBA54E0B5C3EE99831A9C12BED8751 * value)
	{
		___framer_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___framer_22), (void*)value);
	}

	inline static int32_t get_offset_of_preProcessorsCnt_23() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t631B3C25EBF711BB5E2EB03387F85C8BB662853E, ___preProcessorsCnt_23)); }
	inline int32_t get_preProcessorsCnt_23() const { return ___preProcessorsCnt_23; }
	inline int32_t* get_address_of_preProcessorsCnt_23() { return &___preProcessorsCnt_23; }
	inline void set_preProcessorsCnt_23(int32_t value)
	{
		___preProcessorsCnt_23 = value;
	}

	inline static int32_t get_offset_of_processors_24() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t631B3C25EBF711BB5E2EB03387F85C8BB662853E, ___processors_24)); }
	inline List_1_tC560187189515692BF61CAA4B783247B8B1FDC40 * get_processors_24() const { return ___processors_24; }
	inline List_1_tC560187189515692BF61CAA4B783247B8B1FDC40 ** get_address_of_processors_24() { return &___processors_24; }
	inline void set_processors_24(List_1_tC560187189515692BF61CAA4B783247B8B1FDC40 * value)
	{
		___processors_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___processors_24), (void*)value);
	}

	inline static int32_t get_offset_of_dataEncodeThreadStarted_25() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t631B3C25EBF711BB5E2EB03387F85C8BB662853E, ___dataEncodeThreadStarted_25)); }
	inline bool get_dataEncodeThreadStarted_25() const { return ___dataEncodeThreadStarted_25; }
	inline bool* get_address_of_dataEncodeThreadStarted_25() { return &___dataEncodeThreadStarted_25; }
	inline void set_dataEncodeThreadStarted_25(bool value)
	{
		___dataEncodeThreadStarted_25 = value;
	}

	inline static int32_t get_offset_of_pushDataQueue_26() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t631B3C25EBF711BB5E2EB03387F85C8BB662853E, ___pushDataQueue_26)); }
	inline Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C * get_pushDataQueue_26() const { return ___pushDataQueue_26; }
	inline Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C ** get_address_of_pushDataQueue_26() { return &___pushDataQueue_26; }
	inline void set_pushDataQueue_26(Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C * value)
	{
		___pushDataQueue_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pushDataQueue_26), (void*)value);
	}

	inline static int32_t get_offset_of_pushDataQueueReady_27() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t631B3C25EBF711BB5E2EB03387F85C8BB662853E, ___pushDataQueueReady_27)); }
	inline AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * get_pushDataQueueReady_27() const { return ___pushDataQueueReady_27; }
	inline AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 ** get_address_of_pushDataQueueReady_27() { return &___pushDataQueueReady_27; }
	inline void set_pushDataQueueReady_27(AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * value)
	{
		___pushDataQueueReady_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pushDataQueueReady_27), (void*)value);
	}

	inline static int32_t get_offset_of_bufferFactory_28() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t631B3C25EBF711BB5E2EB03387F85C8BB662853E, ___bufferFactory_28)); }
	inline FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF * get_bufferFactory_28() const { return ___bufferFactory_28; }
	inline FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF ** get_address_of_bufferFactory_28() { return &___bufferFactory_28; }
	inline void set_bufferFactory_28(FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF * value)
	{
		___bufferFactory_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bufferFactory_28), (void*)value);
	}

	inline static int32_t get_offset_of_framesSkippedNextLog_29() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t631B3C25EBF711BB5E2EB03387F85C8BB662853E, ___framesSkippedNextLog_29)); }
	inline int32_t get_framesSkippedNextLog_29() const { return ___framesSkippedNextLog_29; }
	inline int32_t* get_address_of_framesSkippedNextLog_29() { return &___framesSkippedNextLog_29; }
	inline void set_framesSkippedNextLog_29(int32_t value)
	{
		___framesSkippedNextLog_29 = value;
	}

	inline static int32_t get_offset_of_framesSkipped_30() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t631B3C25EBF711BB5E2EB03387F85C8BB662853E, ___framesSkipped_30)); }
	inline int32_t get_framesSkipped_30() const { return ___framesSkipped_30; }
	inline int32_t* get_address_of_framesSkipped_30() { return &___framesSkipped_30; }
	inline void set_framesSkipped_30(int32_t value)
	{
		___framesSkipped_30 = value;
	}

	inline static int32_t get_offset_of_exitThread_31() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t631B3C25EBF711BB5E2EB03387F85C8BB662853E, ___exitThread_31)); }
	inline bool get_exitThread_31() const { return ___exitThread_31; }
	inline bool* get_address_of_exitThread_31() { return &___exitThread_31; }
	inline void set_exitThread_31(bool value)
	{
		___exitThread_31 = value;
	}

	inline static int32_t get_offset_of_processNullFramesCnt_32() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_t631B3C25EBF711BB5E2EB03387F85C8BB662853E, ___processNullFramesCnt_32)); }
	inline int32_t get_processNullFramesCnt_32() const { return ___processNullFramesCnt_32; }
	inline int32_t* get_address_of_processNullFramesCnt_32() { return &___processNullFramesCnt_32; }
	inline void set_processNullFramesCnt_32(int32_t value)
	{
		___processNullFramesCnt_32 = value;
	}
};


// Photon.Voice.LocalVoiceFramed`1<System.Single>
struct  LocalVoiceFramed_1_tFAA6F2D1E653F01F3F71CA424CEA5DE18C7AD8F8  : public LocalVoiceFramedBase_tA0A275DAF15FCFD0DE0BE2074A0DFE9860CFE1D0
{
public:
	// Photon.Voice.Framer`1<T> Photon.Voice.LocalVoiceFramed`1::framer
	Framer_1_t9E72DFCCE1F62F49B9F5C9E0574B98EA19BDC847 * ___framer_22;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::preProcessorsCnt
	int32_t ___preProcessorsCnt_23;
	// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<T>> Photon.Voice.LocalVoiceFramed`1::processors
	List_1_t71BDA25FF88BFFDFF7DC0B4727FB732FEAC89D7E * ___processors_24;
	// System.Boolean Photon.Voice.LocalVoiceFramed`1::dataEncodeThreadStarted
	bool ___dataEncodeThreadStarted_25;
	// System.Collections.Generic.Queue`1<T[]> Photon.Voice.LocalVoiceFramed`1::pushDataQueue
	Queue_1_t1D68CA5304B329ED091A86142D0C2886A18AA284 * ___pushDataQueue_26;
	// System.Threading.AutoResetEvent Photon.Voice.LocalVoiceFramed`1::pushDataQueueReady
	AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * ___pushDataQueueReady_27;
	// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1::bufferFactory
	FactoryPrimitiveArrayPool_1_t418A4CA2D3B7BD53F205049A6C5EB8CC3A2A949D * ___bufferFactory_28;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::framesSkippedNextLog
	int32_t ___framesSkippedNextLog_29;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::framesSkipped
	int32_t ___framesSkipped_30;
	// System.Boolean Photon.Voice.LocalVoiceFramed`1::exitThread
	bool ___exitThread_31;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::processNullFramesCnt
	int32_t ___processNullFramesCnt_32;

public:
	inline static int32_t get_offset_of_framer_22() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tFAA6F2D1E653F01F3F71CA424CEA5DE18C7AD8F8, ___framer_22)); }
	inline Framer_1_t9E72DFCCE1F62F49B9F5C9E0574B98EA19BDC847 * get_framer_22() const { return ___framer_22; }
	inline Framer_1_t9E72DFCCE1F62F49B9F5C9E0574B98EA19BDC847 ** get_address_of_framer_22() { return &___framer_22; }
	inline void set_framer_22(Framer_1_t9E72DFCCE1F62F49B9F5C9E0574B98EA19BDC847 * value)
	{
		___framer_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___framer_22), (void*)value);
	}

	inline static int32_t get_offset_of_preProcessorsCnt_23() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tFAA6F2D1E653F01F3F71CA424CEA5DE18C7AD8F8, ___preProcessorsCnt_23)); }
	inline int32_t get_preProcessorsCnt_23() const { return ___preProcessorsCnt_23; }
	inline int32_t* get_address_of_preProcessorsCnt_23() { return &___preProcessorsCnt_23; }
	inline void set_preProcessorsCnt_23(int32_t value)
	{
		___preProcessorsCnt_23 = value;
	}

	inline static int32_t get_offset_of_processors_24() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tFAA6F2D1E653F01F3F71CA424CEA5DE18C7AD8F8, ___processors_24)); }
	inline List_1_t71BDA25FF88BFFDFF7DC0B4727FB732FEAC89D7E * get_processors_24() const { return ___processors_24; }
	inline List_1_t71BDA25FF88BFFDFF7DC0B4727FB732FEAC89D7E ** get_address_of_processors_24() { return &___processors_24; }
	inline void set_processors_24(List_1_t71BDA25FF88BFFDFF7DC0B4727FB732FEAC89D7E * value)
	{
		___processors_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___processors_24), (void*)value);
	}

	inline static int32_t get_offset_of_dataEncodeThreadStarted_25() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tFAA6F2D1E653F01F3F71CA424CEA5DE18C7AD8F8, ___dataEncodeThreadStarted_25)); }
	inline bool get_dataEncodeThreadStarted_25() const { return ___dataEncodeThreadStarted_25; }
	inline bool* get_address_of_dataEncodeThreadStarted_25() { return &___dataEncodeThreadStarted_25; }
	inline void set_dataEncodeThreadStarted_25(bool value)
	{
		___dataEncodeThreadStarted_25 = value;
	}

	inline static int32_t get_offset_of_pushDataQueue_26() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tFAA6F2D1E653F01F3F71CA424CEA5DE18C7AD8F8, ___pushDataQueue_26)); }
	inline Queue_1_t1D68CA5304B329ED091A86142D0C2886A18AA284 * get_pushDataQueue_26() const { return ___pushDataQueue_26; }
	inline Queue_1_t1D68CA5304B329ED091A86142D0C2886A18AA284 ** get_address_of_pushDataQueue_26() { return &___pushDataQueue_26; }
	inline void set_pushDataQueue_26(Queue_1_t1D68CA5304B329ED091A86142D0C2886A18AA284 * value)
	{
		___pushDataQueue_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pushDataQueue_26), (void*)value);
	}

	inline static int32_t get_offset_of_pushDataQueueReady_27() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tFAA6F2D1E653F01F3F71CA424CEA5DE18C7AD8F8, ___pushDataQueueReady_27)); }
	inline AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * get_pushDataQueueReady_27() const { return ___pushDataQueueReady_27; }
	inline AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 ** get_address_of_pushDataQueueReady_27() { return &___pushDataQueueReady_27; }
	inline void set_pushDataQueueReady_27(AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * value)
	{
		___pushDataQueueReady_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pushDataQueueReady_27), (void*)value);
	}

	inline static int32_t get_offset_of_bufferFactory_28() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tFAA6F2D1E653F01F3F71CA424CEA5DE18C7AD8F8, ___bufferFactory_28)); }
	inline FactoryPrimitiveArrayPool_1_t418A4CA2D3B7BD53F205049A6C5EB8CC3A2A949D * get_bufferFactory_28() const { return ___bufferFactory_28; }
	inline FactoryPrimitiveArrayPool_1_t418A4CA2D3B7BD53F205049A6C5EB8CC3A2A949D ** get_address_of_bufferFactory_28() { return &___bufferFactory_28; }
	inline void set_bufferFactory_28(FactoryPrimitiveArrayPool_1_t418A4CA2D3B7BD53F205049A6C5EB8CC3A2A949D * value)
	{
		___bufferFactory_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bufferFactory_28), (void*)value);
	}

	inline static int32_t get_offset_of_framesSkippedNextLog_29() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tFAA6F2D1E653F01F3F71CA424CEA5DE18C7AD8F8, ___framesSkippedNextLog_29)); }
	inline int32_t get_framesSkippedNextLog_29() const { return ___framesSkippedNextLog_29; }
	inline int32_t* get_address_of_framesSkippedNextLog_29() { return &___framesSkippedNextLog_29; }
	inline void set_framesSkippedNextLog_29(int32_t value)
	{
		___framesSkippedNextLog_29 = value;
	}

	inline static int32_t get_offset_of_framesSkipped_30() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tFAA6F2D1E653F01F3F71CA424CEA5DE18C7AD8F8, ___framesSkipped_30)); }
	inline int32_t get_framesSkipped_30() const { return ___framesSkipped_30; }
	inline int32_t* get_address_of_framesSkipped_30() { return &___framesSkipped_30; }
	inline void set_framesSkipped_30(int32_t value)
	{
		___framesSkipped_30 = value;
	}

	inline static int32_t get_offset_of_exitThread_31() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tFAA6F2D1E653F01F3F71CA424CEA5DE18C7AD8F8, ___exitThread_31)); }
	inline bool get_exitThread_31() const { return ___exitThread_31; }
	inline bool* get_address_of_exitThread_31() { return &___exitThread_31; }
	inline void set_exitThread_31(bool value)
	{
		___exitThread_31 = value;
	}

	inline static int32_t get_offset_of_processNullFramesCnt_32() { return static_cast<int32_t>(offsetof(LocalVoiceFramed_1_tFAA6F2D1E653F01F3F71CA424CEA5DE18C7AD8F8, ___processNullFramesCnt_32)); }
	inline int32_t get_processNullFramesCnt_32() const { return ___processNullFramesCnt_32; }
	inline int32_t* get_address_of_processNullFramesCnt_32() { return &___processNullFramesCnt_32; }
	inline void set_processNullFramesCnt_32(int32_t value)
	{
		___processNullFramesCnt_32 = value;
	}
};


// Photon.Voice.LocalVoiceAudio`1<System.Int16>
struct  LocalVoiceAudio_1_t5841EE1080E7EF2DF1DF88B18F83C8B883614A34  : public LocalVoiceFramed_1_t631B3C25EBF711BB5E2EB03387F85C8BB662853E
{
public:
	// Photon.Voice.AudioUtil_VoiceDetector`1<T> Photon.Voice.LocalVoiceAudio`1::voiceDetector
	VoiceDetector_1_tC1EA6413FAEC07048E59AB2B41250322208BB53F * ___voiceDetector_33;
	// Photon.Voice.AudioUtil_VoiceDetectorCalibration`1<T> Photon.Voice.LocalVoiceAudio`1::voiceDetectorCalibration
	VoiceDetectorCalibration_1_tA0B8E0360AFA342823133C34C47FD8528EE2323E * ___voiceDetectorCalibration_34;
	// Photon.Voice.AudioUtil_LevelMeter`1<T> Photon.Voice.LocalVoiceAudio`1::levelMeter
	LevelMeter_1_t4B8A3F8A829C902E37A4586895E2409DA5191AAB * ___levelMeter_35;
	// System.Int32 Photon.Voice.LocalVoiceAudio`1::channels
	int32_t ___channels_36;
	// System.Boolean Photon.Voice.LocalVoiceAudio`1::resampleSource
	bool ___resampleSource_37;

public:
	inline static int32_t get_offset_of_voiceDetector_33() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_t5841EE1080E7EF2DF1DF88B18F83C8B883614A34, ___voiceDetector_33)); }
	inline VoiceDetector_1_tC1EA6413FAEC07048E59AB2B41250322208BB53F * get_voiceDetector_33() const { return ___voiceDetector_33; }
	inline VoiceDetector_1_tC1EA6413FAEC07048E59AB2B41250322208BB53F ** get_address_of_voiceDetector_33() { return &___voiceDetector_33; }
	inline void set_voiceDetector_33(VoiceDetector_1_tC1EA6413FAEC07048E59AB2B41250322208BB53F * value)
	{
		___voiceDetector_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceDetector_33), (void*)value);
	}

	inline static int32_t get_offset_of_voiceDetectorCalibration_34() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_t5841EE1080E7EF2DF1DF88B18F83C8B883614A34, ___voiceDetectorCalibration_34)); }
	inline VoiceDetectorCalibration_1_tA0B8E0360AFA342823133C34C47FD8528EE2323E * get_voiceDetectorCalibration_34() const { return ___voiceDetectorCalibration_34; }
	inline VoiceDetectorCalibration_1_tA0B8E0360AFA342823133C34C47FD8528EE2323E ** get_address_of_voiceDetectorCalibration_34() { return &___voiceDetectorCalibration_34; }
	inline void set_voiceDetectorCalibration_34(VoiceDetectorCalibration_1_tA0B8E0360AFA342823133C34C47FD8528EE2323E * value)
	{
		___voiceDetectorCalibration_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceDetectorCalibration_34), (void*)value);
	}

	inline static int32_t get_offset_of_levelMeter_35() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_t5841EE1080E7EF2DF1DF88B18F83C8B883614A34, ___levelMeter_35)); }
	inline LevelMeter_1_t4B8A3F8A829C902E37A4586895E2409DA5191AAB * get_levelMeter_35() const { return ___levelMeter_35; }
	inline LevelMeter_1_t4B8A3F8A829C902E37A4586895E2409DA5191AAB ** get_address_of_levelMeter_35() { return &___levelMeter_35; }
	inline void set_levelMeter_35(LevelMeter_1_t4B8A3F8A829C902E37A4586895E2409DA5191AAB * value)
	{
		___levelMeter_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelMeter_35), (void*)value);
	}

	inline static int32_t get_offset_of_channels_36() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_t5841EE1080E7EF2DF1DF88B18F83C8B883614A34, ___channels_36)); }
	inline int32_t get_channels_36() const { return ___channels_36; }
	inline int32_t* get_address_of_channels_36() { return &___channels_36; }
	inline void set_channels_36(int32_t value)
	{
		___channels_36 = value;
	}

	inline static int32_t get_offset_of_resampleSource_37() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_t5841EE1080E7EF2DF1DF88B18F83C8B883614A34, ___resampleSource_37)); }
	inline bool get_resampleSource_37() const { return ___resampleSource_37; }
	inline bool* get_address_of_resampleSource_37() { return &___resampleSource_37; }
	inline void set_resampleSource_37(bool value)
	{
		___resampleSource_37 = value;
	}
};


// Photon.Voice.LocalVoiceAudio`1<System.Single>
struct  LocalVoiceAudio_1_tE5D43B1351403442A635282CB35E16AB8C714838  : public LocalVoiceFramed_1_tFAA6F2D1E653F01F3F71CA424CEA5DE18C7AD8F8
{
public:
	// Photon.Voice.AudioUtil_VoiceDetector`1<T> Photon.Voice.LocalVoiceAudio`1::voiceDetector
	VoiceDetector_1_t56F70EEFF9558BBE943EAAA907E2BE481FF3C696 * ___voiceDetector_33;
	// Photon.Voice.AudioUtil_VoiceDetectorCalibration`1<T> Photon.Voice.LocalVoiceAudio`1::voiceDetectorCalibration
	VoiceDetectorCalibration_1_t7CB90E5F137F74DF61C50C34D3A4EC99E27C5FA8 * ___voiceDetectorCalibration_34;
	// Photon.Voice.AudioUtil_LevelMeter`1<T> Photon.Voice.LocalVoiceAudio`1::levelMeter
	LevelMeter_1_t28B3BB8AF52310712E5B3531973AEF68F3EEF313 * ___levelMeter_35;
	// System.Int32 Photon.Voice.LocalVoiceAudio`1::channels
	int32_t ___channels_36;
	// System.Boolean Photon.Voice.LocalVoiceAudio`1::resampleSource
	bool ___resampleSource_37;

public:
	inline static int32_t get_offset_of_voiceDetector_33() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_tE5D43B1351403442A635282CB35E16AB8C714838, ___voiceDetector_33)); }
	inline VoiceDetector_1_t56F70EEFF9558BBE943EAAA907E2BE481FF3C696 * get_voiceDetector_33() const { return ___voiceDetector_33; }
	inline VoiceDetector_1_t56F70EEFF9558BBE943EAAA907E2BE481FF3C696 ** get_address_of_voiceDetector_33() { return &___voiceDetector_33; }
	inline void set_voiceDetector_33(VoiceDetector_1_t56F70EEFF9558BBE943EAAA907E2BE481FF3C696 * value)
	{
		___voiceDetector_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceDetector_33), (void*)value);
	}

	inline static int32_t get_offset_of_voiceDetectorCalibration_34() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_tE5D43B1351403442A635282CB35E16AB8C714838, ___voiceDetectorCalibration_34)); }
	inline VoiceDetectorCalibration_1_t7CB90E5F137F74DF61C50C34D3A4EC99E27C5FA8 * get_voiceDetectorCalibration_34() const { return ___voiceDetectorCalibration_34; }
	inline VoiceDetectorCalibration_1_t7CB90E5F137F74DF61C50C34D3A4EC99E27C5FA8 ** get_address_of_voiceDetectorCalibration_34() { return &___voiceDetectorCalibration_34; }
	inline void set_voiceDetectorCalibration_34(VoiceDetectorCalibration_1_t7CB90E5F137F74DF61C50C34D3A4EC99E27C5FA8 * value)
	{
		___voiceDetectorCalibration_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceDetectorCalibration_34), (void*)value);
	}

	inline static int32_t get_offset_of_levelMeter_35() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_tE5D43B1351403442A635282CB35E16AB8C714838, ___levelMeter_35)); }
	inline LevelMeter_1_t28B3BB8AF52310712E5B3531973AEF68F3EEF313 * get_levelMeter_35() const { return ___levelMeter_35; }
	inline LevelMeter_1_t28B3BB8AF52310712E5B3531973AEF68F3EEF313 ** get_address_of_levelMeter_35() { return &___levelMeter_35; }
	inline void set_levelMeter_35(LevelMeter_1_t28B3BB8AF52310712E5B3531973AEF68F3EEF313 * value)
	{
		___levelMeter_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelMeter_35), (void*)value);
	}

	inline static int32_t get_offset_of_channels_36() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_tE5D43B1351403442A635282CB35E16AB8C714838, ___channels_36)); }
	inline int32_t get_channels_36() const { return ___channels_36; }
	inline int32_t* get_address_of_channels_36() { return &___channels_36; }
	inline void set_channels_36(int32_t value)
	{
		___channels_36 = value;
	}

	inline static int32_t get_offset_of_resampleSource_37() { return static_cast<int32_t>(offsetof(LocalVoiceAudio_1_tE5D43B1351403442A635282CB35E16AB8C714838, ___resampleSource_37)); }
	inline bool get_resampleSource_37() const { return ___resampleSource_37; }
	inline bool* get_address_of_resampleSource_37() { return &___resampleSource_37; }
	inline void set_resampleSource_37(bool value)
	{
		___resampleSource_37 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1<System.Int16>::get_BufferFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF * LocalVoiceFramed_1_get_BufferFactory_m35C61BD0C7496B253B0341A2E1A2BCA871C4A23F_gshared (LocalVoiceFramed_1_t631B3C25EBF711BB5E2EB03387F85C8BB662853E * __this, const RuntimeMethod* method);
// T[] Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16>::New(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* FactoryPrimitiveArrayPool_1_New_mC4F640517198A1CEB6869E76A71133E0BF174950_gshared (FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Int16>::PushDataAsync(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalVoiceFramed_1_PushDataAsync_m26B54A35B29091F791B316FC76F6C87A43D52332_gshared (LocalVoiceFramed_1_t631B3C25EBF711BB5E2EB03387F85C8BB662853E * __this, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___buf0, const RuntimeMethod* method);
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Single>::PushDataAsync(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalVoiceFramed_1_PushDataAsync_m5BE879D4365DE39A75E39450B4EDE8CA844389AD_gshared (LocalVoiceFramed_1_tFAA6F2D1E653F01F3F71CA424CEA5DE18C7AD8F8 * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___buf0, const RuntimeMethod* method);
// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1<System.Single>::get_BufferFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FactoryPrimitiveArrayPool_1_t418A4CA2D3B7BD53F205049A6C5EB8CC3A2A949D * LocalVoiceFramed_1_get_BufferFactory_m54C4D49DB6DC23EAF947EB390ADF4AED8E253745_gshared (LocalVoiceFramed_1_tFAA6F2D1E653F01F3F71CA424CEA5DE18C7AD8F8 * __this, const RuntimeMethod* method);
// T[] Photon.Voice.FactoryPrimitiveArrayPool`1<System.Single>::New(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* FactoryPrimitiveArrayPool_1_New_m6FE87FBC0519D29D44164E40374B613B92DE56A5_gshared (FactoryPrimitiveArrayPool_1_t418A4CA2D3B7BD53F205049A6C5EB8CC3A2A949D * __this, int32_t ___size0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC0410598D958D8FA61F7F1A803A0B7F242CEF1C6  Dictionary_2_GetEnumerator_mE47C13FC1B2BACBEE6F795B0E40E6406CAC55D4B_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C  Enumerator_get_Current_m73F8FC135A20BDFEA0846D8FC876863ED85FEA49_gshared_inline (Enumerator_tC0410598D958D8FA61F7F1A803A0B7F242CEF1C6 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mAD6801F3BC9BA1E99D4E0F72B2B420182D0494FC_gshared_inline (KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6FAB3A88A9B87F97CFB4D7DEA082CC1CEF975FF7  Dictionary_2_GetEnumerator_m285B8F389DDF209C74796F0534DBA902DA2D24CF_gshared (Dictionary_2_t11E65D85C0449A467570DBC470F327BA4C1AF557 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_t98F624736AE86A14B9AD84D588449356C07782F8  Enumerator_get_Current_m336681D81D4875B6AA910C3EDC850D1F1CE08C23_gshared_inline (Enumerator_t6FAB3A88A9B87F97CFB4D7DEA082CC1CEF975FF7 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mFFDB1DCFD724D3C287979F171E334E48D2D21217_gshared_inline (KeyValuePair_2_t98F624736AE86A14B9AD84D588449356C07782F8 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m89B687D373FBE3D230647CA0C536235E12AD829C_gshared_inline (KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>::get_Key()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR uint8_t KeyValuePair_2_get_Key_mFBFAFF2B44214677B4F6BB23BF32AB56FA35415E_gshared_inline (KeyValuePair_2_t98F624736AE86A14B9AD84D588449356C07782F8 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m26A3FD5086A89E52FCEB06FAC097E12815F2CAD7_gshared (Enumerator_t6FAB3A88A9B87F97CFB4D7DEA082CC1CEF975FF7 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m637AE52AC4BDE5BEB1D89BE4B75E49B4C328EFC9_gshared (Enumerator_tC0410598D958D8FA61F7F1A803A0B7F242CEF1C6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m772E7049D8DA96AF5021EA09C3E6322CD4BFBDFC_gshared (Enumerator_tC0410598D958D8FA61F7F1A803A0B7F242CEF1C6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m89C98F638EA96B8B7CF9675E9996CFBC996DEA06_gshared (Enumerator_t6FAB3A88A9B87F97CFB4D7DEA082CC1CEF975FF7 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m57D20E9B6532A644845C835306D5BCBCD3163964_gshared (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Framer`1<System.Single>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Framer_1__ctor_mB44E93DA6F91465BDE36FA57B9CB3D98D4F14CDA_gshared (Framer_1_t9E72DFCCE1F62F49B9F5C9E0574B98EA19BDC847 * __this, int32_t ___frameSize0, const RuntimeMethod* method);
// System.Void Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16>::.ctor(System.Int32,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FactoryPrimitiveArrayPool_1__ctor_m8BF2472EF468272ACE5B5F0A48339A3957E97D34_gshared (FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF * __this, int32_t ___capacity0, String_t* ___name1, int32_t ___info2, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<T[]> Photon.Voice.Framer`1<System.Single>::Frame(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Framer_1_Frame_m18D4AE6AF9BC39BF578ADC00C24019E6D28CC51C_gshared (Framer_1_t9E72DFCCE1F62F49B9F5C9E0574B98EA19BDC847 * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___buf0, const RuntimeMethod* method);
// T[] Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16>::New()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* FactoryPrimitiveArrayPool_1_New_m55E13ACEC576100A9A6380E5E200F0EA8E6C4A85_gshared (FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m0CE0B6919A09EFFBB1EBA5B5DFEF50E4F8A89CFA_gshared_inline (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m12D1C0BBE742C2537335B7E2B71F7E42A421A6FD_gshared (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16>::Free(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FactoryPrimitiveArrayPool_1_Free_m5C953DE8CD2CBC136E1C8995A04F8325AEA3C01B_gshared (FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF * __this, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___obj0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_m6013DB8A542ACA15F662B6832ED389BB061EFEDE_gshared (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * __this, const RuntimeMethod* method);
// System.Void System.Action`3<System.Int32,System.IntPtr,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_mCA5F9BDBF11CA0BC604BC63CAAB894D5EAE08A09_gshared (Action_3_tA3B470E9D4FEF30C8329D94BF79F47D8F0EFC367 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mF7AEA0EFA07EEBC1A4B283A26A7CB720EE7A4C20_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m867F6DA953678D0333A55270B7C6EF38EFC293FF_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2204D6D532702FD13AB2A9AD8DB538E4E8FB1913_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, const RuntimeMethod* method);

// System.Void Photon.Voice.VoiceClient/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m44319C7B6D7A3E650820CB8097D88FABBCA37A8E (U3CU3Ec_t85C70299099BE4D2CF1D1C061B5EBD8321A50821 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.LocalVoice::get_DebugEchoMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalVoice_get_DebugEchoMode_m23F8701AEDACA723F2A985AC815D1908E10B0A86 (LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.LocalVoice::.ctor(Photon.Voice.VoiceClient,Photon.Voice.IEncoder,System.Byte,Photon.Voice.VoiceInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalVoice__ctor_m9EEB50097DD89AB52E06FC7E7FCD13AE957B831B (LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * __this, VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 * ___voiceClient0, RuntimeObject* ___encoder1, uint8_t ___id2, VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  ___voiceInfo3, int32_t ___channelId4, const RuntimeMethod* method);
// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1<System.Int16>::get_BufferFactory()
inline FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF * LocalVoiceFramed_1_get_BufferFactory_m35C61BD0C7496B253B0341A2E1A2BCA871C4A23F (LocalVoiceFramed_1_t631B3C25EBF711BB5E2EB03387F85C8BB662853E * __this, const RuntimeMethod* method)
{
	return ((  FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF * (*) (LocalVoiceFramed_1_t631B3C25EBF711BB5E2EB03387F85C8BB662853E *, const RuntimeMethod*))LocalVoiceFramed_1_get_BufferFactory_m35C61BD0C7496B253B0341A2E1A2BCA871C4A23F_gshared)(__this, method);
}
// T[] Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16>::New(System.Int32)
inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* FactoryPrimitiveArrayPool_1_New_mC4F640517198A1CEB6869E76A71133E0BF174950 (FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF * __this, int32_t ___size0, const RuntimeMethod* method)
{
	return ((  Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* (*) (FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF *, int32_t, const RuntimeMethod*))FactoryPrimitiveArrayPool_1_New_mC4F640517198A1CEB6869E76A71133E0BF174950_gshared)(__this, ___size0, method);
}
// System.Void Photon.Voice.AudioUtil::Convert(System.Single[],System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioUtil_Convert_mD9329A97EDC298B5434E80A9DDA8D9935DF2EE7A (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___src0, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___dst1, int32_t ___dstCount2, const RuntimeMethod* method);
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Int16>::PushDataAsync(T[])
inline void LocalVoiceFramed_1_PushDataAsync_m26B54A35B29091F791B316FC76F6C87A43D52332 (LocalVoiceFramed_1_t631B3C25EBF711BB5E2EB03387F85C8BB662853E * __this, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___buf0, const RuntimeMethod* method)
{
	((  void (*) (LocalVoiceFramed_1_t631B3C25EBF711BB5E2EB03387F85C8BB662853E *, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*, const RuntimeMethod*))LocalVoiceFramed_1_PushDataAsync_m26B54A35B29091F791B316FC76F6C87A43D52332_gshared)(__this, ___buf0, method);
}
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Single>::PushDataAsync(T[])
inline void LocalVoiceFramed_1_PushDataAsync_m5BE879D4365DE39A75E39450B4EDE8CA844389AD (LocalVoiceFramed_1_tFAA6F2D1E653F01F3F71CA424CEA5DE18C7AD8F8 * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___buf0, const RuntimeMethod* method)
{
	((  void (*) (LocalVoiceFramed_1_tFAA6F2D1E653F01F3F71CA424CEA5DE18C7AD8F8 *, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*))LocalVoiceFramed_1_PushDataAsync_m5BE879D4365DE39A75E39450B4EDE8CA844389AD_gshared)(__this, ___buf0, method);
}
// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1<System.Single>::get_BufferFactory()
inline FactoryPrimitiveArrayPool_1_t418A4CA2D3B7BD53F205049A6C5EB8CC3A2A949D * LocalVoiceFramed_1_get_BufferFactory_m54C4D49DB6DC23EAF947EB390ADF4AED8E253745 (LocalVoiceFramed_1_tFAA6F2D1E653F01F3F71CA424CEA5DE18C7AD8F8 * __this, const RuntimeMethod* method)
{
	return ((  FactoryPrimitiveArrayPool_1_t418A4CA2D3B7BD53F205049A6C5EB8CC3A2A949D * (*) (LocalVoiceFramed_1_tFAA6F2D1E653F01F3F71CA424CEA5DE18C7AD8F8 *, const RuntimeMethod*))LocalVoiceFramed_1_get_BufferFactory_m54C4D49DB6DC23EAF947EB390ADF4AED8E253745_gshared)(__this, method);
}
// T[] Photon.Voice.FactoryPrimitiveArrayPool`1<System.Single>::New(System.Int32)
inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* FactoryPrimitiveArrayPool_1_New_m6FE87FBC0519D29D44164E40374B613B92DE56A5 (FactoryPrimitiveArrayPool_1_t418A4CA2D3B7BD53F205049A6C5EB8CC3A2A949D * __this, int32_t ___size0, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* (*) (FactoryPrimitiveArrayPool_1_t418A4CA2D3B7BD53F205049A6C5EB8CC3A2A949D *, int32_t, const RuntimeMethod*))FactoryPrimitiveArrayPool_1_New_m6FE87FBC0519D29D44164E40374B613B92DE56A5_gshared)(__this, ___size0, method);
}
// System.Void Photon.Voice.AudioUtil::Convert(System.Int16[],System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioUtil_Convert_m95C121F35006C25B3D52977F9D5500B010D4A66C (Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___src0, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___dst1, int32_t ___dstCount2, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m0E897C88355903220B1EC214832F5E815D7C13D1 (const RuntimeMethod* method);
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally2_m3EE2A7ABE02C6E5CF0A4AE6BD63CE2BE91C83959 (U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally1_mC6DB71AA66036CCD87CE4B2F5F942A86007D6284 (U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>::GetEnumerator()
inline Enumerator_t5BCBDA24A17EEA0E33D4EC58D125362D9F2A9A2C  Dictionary_2_GetEnumerator_m23358DBED01384B592A9399E84D7A4906CF1641F (Dictionary_2_t611A5FC094D9C83B06C788EC1402D634859BADE5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5BCBDA24A17EEA0E33D4EC58D125362D9F2A9A2C  (*) (Dictionary_2_t611A5FC094D9C83B06C788EC1402D634859BADE5 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mE47C13FC1B2BACBEE6F795B0E40E6406CAC55D4B_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>::get_Current()
inline KeyValuePair_2_tE556C31F9BEDF6762AAB4A88C8714DBCCA03EADF  Enumerator_get_Current_m3E621FEE10445519C310F57D148D114756B78CB0_inline (Enumerator_t5BCBDA24A17EEA0E33D4EC58D125362D9F2A9A2C * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tE556C31F9BEDF6762AAB4A88C8714DBCCA03EADF  (*) (Enumerator_t5BCBDA24A17EEA0E33D4EC58D125362D9F2A9A2C *, const RuntimeMethod*))Enumerator_get_Current_m73F8FC135A20BDFEA0846D8FC876863ED85FEA49_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>::get_Value()
inline Dictionary_2_t0518167B203339B478AB3F8F942303BAF8B24B77 * KeyValuePair_2_get_Value_mF2A47560A4B835767281B4FCE0DD10DDA0BDA7E8_inline (KeyValuePair_2_tE556C31F9BEDF6762AAB4A88C8714DBCCA03EADF * __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t0518167B203339B478AB3F8F942303BAF8B24B77 * (*) (KeyValuePair_2_tE556C31F9BEDF6762AAB4A88C8714DBCCA03EADF *, const RuntimeMethod*))KeyValuePair_2_get_Value_mAD6801F3BC9BA1E99D4E0F72B2B420182D0494FC_gshared_inline)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>::GetEnumerator()
inline Enumerator_t757B49B66CCB7F4CE425E72906209268CDA5B7BE  Dictionary_2_GetEnumerator_m4C033987CC9FDC8194F32618AFE3BEA09C88463D (Dictionary_2_t0518167B203339B478AB3F8F942303BAF8B24B77 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t757B49B66CCB7F4CE425E72906209268CDA5B7BE  (*) (Dictionary_2_t0518167B203339B478AB3F8F942303BAF8B24B77 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m285B8F389DDF209C74796F0534DBA902DA2D24CF_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,Photon.Voice.RemoteVoice>::get_Current()
inline KeyValuePair_2_t17B7EC8064FF24A65F802824DAEA46CAA219AAB7  Enumerator_get_Current_m4CEAD02442DF9B81445FF8C2B8FED6A9798C16BB_inline (Enumerator_t757B49B66CCB7F4CE425E72906209268CDA5B7BE * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t17B7EC8064FF24A65F802824DAEA46CAA219AAB7  (*) (Enumerator_t757B49B66CCB7F4CE425E72906209268CDA5B7BE *, const RuntimeMethod*))Enumerator_get_Current_m336681D81D4875B6AA910C3EDC850D1F1CE08C23_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Byte,Photon.Voice.RemoteVoice>::get_Value()
inline RemoteVoice_tFB7B418D0495B703F0EBB5E8F950768A6A48D39B * KeyValuePair_2_get_Value_m8889DEAA4F81F4AA48EE570BF2D2EF5414840A34_inline (KeyValuePair_2_t17B7EC8064FF24A65F802824DAEA46CAA219AAB7 * __this, const RuntimeMethod* method)
{
	return ((  RemoteVoice_tFB7B418D0495B703F0EBB5E8F950768A6A48D39B * (*) (KeyValuePair_2_t17B7EC8064FF24A65F802824DAEA46CAA219AAB7 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mFFDB1DCFD724D3C287979F171E334E48D2D21217_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>::get_Key()
inline int32_t KeyValuePair_2_get_Key_mC70443985A23E921917ADA227A8EFEFAB49C7D41_inline (KeyValuePair_2_tE556C31F9BEDF6762AAB4A88C8714DBCCA03EADF * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tE556C31F9BEDF6762AAB4A88C8714DBCCA03EADF *, const RuntimeMethod*))KeyValuePair_2_get_Key_m89B687D373FBE3D230647CA0C536235E12AD829C_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Byte,Photon.Voice.RemoteVoice>::get_Key()
inline uint8_t KeyValuePair_2_get_Key_m648AEE032BFE34D6857A3807BFF307726641B6C9_inline (KeyValuePair_2_t17B7EC8064FF24A65F802824DAEA46CAA219AAB7 * __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (KeyValuePair_2_t17B7EC8064FF24A65F802824DAEA46CAA219AAB7 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mFBFAFF2B44214677B4F6BB23BF32AB56FA35415E_gshared_inline)(__this, method);
}
// Photon.Voice.VoiceInfo Photon.Voice.RemoteVoice::get_Info()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  RemoteVoice_get_Info_m0E8DC5364A52540F8FB31D18004700CB0EDC8D5F_inline (RemoteVoice_tFB7B418D0495B703F0EBB5E8F950768A6A48D39B * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.RemoteVoiceInfo::.ctor(System.Int32,System.Int32,System.Byte,Photon.Voice.VoiceInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVoiceInfo__ctor_m5867D6FBC7BC4D2B56EFFFFB359730C1FCB20454 (RemoteVoiceInfo_tBE345189E3B7ED8A97D47B0999117273F16427EC * __this, int32_t ___channelId0, int32_t ___playerId1, uint8_t ___voiceId2, VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  ___info3, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,Photon.Voice.RemoteVoice>::MoveNext()
inline bool Enumerator_MoveNext_mFDECD0DB93C203A08DC479E6AE8875DF4EFC2177 (Enumerator_t757B49B66CCB7F4CE425E72906209268CDA5B7BE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t757B49B66CCB7F4CE425E72906209268CDA5B7BE *, const RuntimeMethod*))Enumerator_MoveNext_m26A3FD5086A89E52FCEB06FAC097E12815F2CAD7_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>::MoveNext()
inline bool Enumerator_MoveNext_m92F2D3AAD3ACFEE8C3DABD7BD78F63C5FB18DD86 (Enumerator_t5BCBDA24A17EEA0E33D4EC58D125362D9F2A9A2C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5BCBDA24A17EEA0E33D4EC58D125362D9F2A9A2C *, const RuntimeMethod*))Enumerator_MoveNext_m637AE52AC4BDE5BEB1D89BE4B75E49B4C328EFC9_gshared)(__this, method);
}
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_System_IDisposable_Dispose_mE37C4A65F0593C69C0EB64466A7F73449EB34DFE (U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>::Dispose()
inline void Enumerator_Dispose_m9E9779965C5DE6F96574EEFF97A0978AD895D4C8 (Enumerator_t5BCBDA24A17EEA0E33D4EC58D125362D9F2A9A2C * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5BCBDA24A17EEA0E33D4EC58D125362D9F2A9A2C *, const RuntimeMethod*))Enumerator_Dispose_m772E7049D8DA96AF5021EA09C3E6322CD4BFBDFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,Photon.Voice.RemoteVoice>::Dispose()
inline void Enumerator_Dispose_mA9BD96F227D7514904C9E7DD7FEC7CD826051F44 (Enumerator_t757B49B66CCB7F4CE425E72906209268CDA5B7BE * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t757B49B66CCB7F4CE425E72906209268CDA5B7BE *, const RuntimeMethod*))Enumerator_Dispose_m89C98F638EA96B8B7CF9675E9996CFBC996DEA06_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40__ctor_mF67B9D35DC8D57CB3FC5D2A56F421D0FCBBFE7F7 (U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Photon.Voice.RemoteVoiceInfo> Photon.Voice.VoiceClient/<get_RemoteVoiceInfos>d__40::System.Collections.Generic.IEnumerable<Photon.Voice.RemoteVoiceInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_Generic_IEnumerableU3CPhoton_Voice_RemoteVoiceInfoU3E_GetEnumerator_mF6E6A04A378FC25CDDE5A52FD5F1152A13C1B806 (U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.VoiceInfo::set_Codec(Photon.Voice.Codec)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VoiceInfo_set_Codec_mE2F6EF39D929159A040E7D54A3D1F0F6E5193D60_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.VoiceInfo::set_SamplingRate(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VoiceInfo_set_SamplingRate_mFD9A827BF89AEE753031B4E9989450B610D38ED7_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.VoiceInfo::set_Channels(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VoiceInfo_set_Channels_m1D24F473872C247719FCDF25BFC069560C2A7119_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.VoiceInfo::set_FrameDurationUs(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VoiceInfo_set_FrameDurationUs_mED9CBABB82E4C4E9C2D8B3E0DEC3DEF9A1F77E50_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.VoiceInfo::set_Bitrate(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VoiceInfo_set_Bitrate_m33B8EAAEB3F83BA8F32AA8E4D6691DF3B881E983_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.VoiceInfo::set_UserData(System.Object)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VoiceInfo_set_UserData_m2A0E95B290393D7D38CBDCBE17899BDCE7DD9674_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// Photon.Voice.Codec Photon.Voice.VoiceInfo::get_Codec()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_Codec_m75D36C2F23671F6E2236A7E86F32B5C645F98268_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Voice.VoiceInfo::get_SamplingRate()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_SamplingRate_m9D617B430547DE230A31AD21379D7E823C144832_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Voice.VoiceInfo::get_Channels()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_Channels_m54796F2353DE7853164099D9E2B9F2C4D245B6ED_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Voice.VoiceInfo::get_FrameDurationUs()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_FrameDurationUs_mFD847A0412A4F679882877FC30F5CFDDD5AEB45C_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Voice.VoiceInfo::get_FrameSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_FrameSize_m8999A370968B57CA3AB12F1067500069A1483209 (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Voice.VoiceInfo::get_Bitrate()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_Bitrate_mD7CE0F9D49F705629F35ACAAFD94B94FEA93EC10_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Voice.VoiceInfo::get_Width()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_Width_mA885EAB6AF205DD4FF02D227E34095AFFD16BAA7_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Voice.VoiceInfo::get_Height()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_Height_mC24A2C9366949E6DA1CD41B034068A676BE9D9C8_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Voice.VoiceInfo::get_FPS()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_FPS_m7F99240ED4764ACD0A43C3F054F425BD304B62DB_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Voice.VoiceInfo::get_KeyFrameInt()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_KeyFrameInt_m6208E1FF83FF48C217AE13E35E2939EB832BAA93_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method);
// System.Object Photon.Voice.VoiceInfo::get_UserData()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * VoiceInfo_get_UserData_m47264239C6EFD622B9B403448D956EC29743C460_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.String Photon.Voice.VoiceInfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VoiceInfo_ToString_m83A234C40AF2AFF955ABD69DE7F49A5E3C52F72C (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.VoiceInfo::set_Width(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VoiceInfo_set_Width_mB5EE2D104B7413416F84EECB9E9E1BDFC91DBC88_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.VoiceInfo::set_Height(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VoiceInfo_set_Height_m834A6A637AEFADF9531E2C47BBEB683C77FBF9A5_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.VoiceInfo::set_FPS(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VoiceInfo_set_FPS_mE44747AC77FE9492A1122BA07CFD1AAEEBF6BEE0_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.VoiceInfo::set_KeyFrameInt(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VoiceInfo_set_KeyFrameInt_m9D40D6580068B64286558C71CC0D80A2D76FD9C3_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 Photon.Voice.VoiceInfo::get_FrameDurationSamples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_FrameDurationSamples_mA40D7D1A45DD7104BCF1B82B11E3775D882EA2E1 (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Int32 Photon.Voice.WebRTCAudioProcessor::setParam(Photon.Voice.WebRTCAudioLib/Param,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRTCAudioProcessor_setParam_m5C1609843F1640EC9A1B3C01482BD3C3224932E9 (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, int32_t ___param0, int32_t ___v1, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioProcessor::InitReverseStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_InitReverseStream_m78FBF4ECCEA760160E948263C7A9941EAB7FB8FE (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301 (bool* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline)(method);
}
// System.Void System.Collections.Generic.Queue`1<System.Int16[]>::.ctor()
inline void Queue_1__ctor_mD71406C9A28EE99DDE07C8FFD0CC458936F23430 (Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C *, const RuntimeMethod*))Queue_1__ctor_m57D20E9B6532A644845C835306D5BCBCD3163964_gshared)(__this, method);
}
// System.Void System.Threading.AutoResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoResetEvent__ctor_m2A6F4D44E005E07021957D5134037747AE9890BE (AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * __this, bool ___initialState0, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioLib::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioLib__ctor_mFC867AE76AB7D9A12ECFC07C7325A0FABB809628 (WebRTCAudioLib_t1E26D463A18D0FCACE38B6CCEDBE9AFDEAEF2A89 * __this, const RuntimeMethod* method);
// System.IntPtr Photon.Voice.WebRTCAudioLib::webrtc_audio_processor_create(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WebRTCAudioLib_webrtc_audio_processor_create_mD49D60638BADDA1ACD1B83A10DE0A5CF2CC4EFBD (int32_t ___samplingRate0, int32_t ___channels1, int32_t ___frameSize2, int32_t ___revSamplingRate3, int32_t ___revChannels4, const RuntimeMethod* method);
// System.Int32 Photon.Voice.WebRTCAudioLib::webrtc_audio_processor_init(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRTCAudioLib_webrtc_audio_processor_init_m9127C594502D09AE236B1BC363CDE94F954076C4 (intptr_t ___proc0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void Photon.Voice.Framer`1<System.Single>::.ctor(System.Int32)
inline void Framer_1__ctor_mB44E93DA6F91465BDE36FA57B9CB3D98D4F14CDA (Framer_1_t9E72DFCCE1F62F49B9F5C9E0574B98EA19BDC847 * __this, int32_t ___frameSize0, const RuntimeMethod* method)
{
	((  void (*) (Framer_1_t9E72DFCCE1F62F49B9F5C9E0574B98EA19BDC847 *, int32_t, const RuntimeMethod*))Framer_1__ctor_mB44E93DA6F91465BDE36FA57B9CB3D98D4F14CDA_gshared)(__this, ___frameSize0, method);
}
// System.Void Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16>::.ctor(System.Int32,System.String,System.Int32)
inline void FactoryPrimitiveArrayPool_1__ctor_m8BF2472EF468272ACE5B5F0A48339A3957E97D34 (FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF * __this, int32_t ___capacity0, String_t* ___name1, int32_t ___info2, const RuntimeMethod* method)
{
	((  void (*) (FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF *, int32_t, String_t*, int32_t, const RuntimeMethod*))FactoryPrimitiveArrayPool_1__ctor_m8BF2472EF468272ACE5B5F0A48339A3957E97D34_gshared)(__this, ___capacity0, ___name1, ___info2, method);
}
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m692348FEAEBAF381D62984EE95B217CC024A77D5 (ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m36A33B990160C4499E991D288341CA325AE66DDD (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * ___start0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_mE2AC4744AFD147FDC84E8D9317B4E3AB890BC2D6 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_Name_mEBD0DF20D69C49612949EA6F24E8E4EADB7F5E77 (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean Photon.Voice.WebRTCAudioProcessor::get_Bypass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRTCAudioProcessor_get_Bypass_m40975EE93F06ADC6937A65533C74A902BAA7398A (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Int32 Photon.Voice.WebRTCAudioLib::webrtc_audio_processor_process(System.IntPtr,System.Int16[],System.Int32,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRTCAudioLib_webrtc_audio_processor_process_mBAF14A4F31EDDC8E254A2A976377B577286A8858 (intptr_t ___proc0, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___buffer1, int32_t ___offset2, bool* ___voiceDetected3, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<T[]> Photon.Voice.Framer`1<System.Single>::Frame(T[])
inline RuntimeObject* Framer_1_Frame_m18D4AE6AF9BC39BF578ADC00C24019E6D28CC51C (Framer_1_t9E72DFCCE1F62F49B9F5C9E0574B98EA19BDC847 * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___buf0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Framer_1_t9E72DFCCE1F62F49B9F5C9E0574B98EA19BDC847 *, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, const RuntimeMethod*))Framer_1_Frame_m18D4AE6AF9BC39BF578ADC00C24019E6D28CC51C_gshared)(__this, ___buf0, method);
}
// T[] Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16>::New()
inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* FactoryPrimitiveArrayPool_1_New_m55E13ACEC576100A9A6380E5E200F0EA8E6C4A85 (FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF * __this, const RuntimeMethod* method)
{
	return ((  Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* (*) (FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF *, const RuntimeMethod*))FactoryPrimitiveArrayPool_1_New_m55E13ACEC576100A9A6380E5E200F0EA8E6C4A85_gshared)(__this, method);
}
// System.Void Photon.Voice.AudioUtil::ResampleAndConvert(System.Single[],System.Int16[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioUtil_ResampleAndConvert_m0F2DCB855E451CA3A743A9186582DE1957711FAB (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___src0, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___dst1, int32_t ___dstCount2, int32_t ___channels3, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Int16[]>::get_Count()
inline int32_t Queue_1_get_Count_m14436A3E2747030960ED9C388F570A402777FA7D_inline (Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C *, const RuntimeMethod*))Queue_1_get_Count_m0CE0B6919A09EFFBB1EBA5B5DFEF50E4F8A89CFA_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Int16[]>::Enqueue(!0)
inline void Queue_1_Enqueue_m67A298CFA555767E45845FF2C9E441F85EA86CB2 (Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C * __this, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C *, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*, const RuntimeMethod*))Queue_1_Enqueue_m12D1C0BBE742C2537335B7E2B71F7E42A421A6FD_gshared)(__this, ___item0, method);
}
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m7959A86A39735296FC949EC86FDA42A6CFAAB94C (EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16>::Free(T[])
inline void FactoryPrimitiveArrayPool_1_Free_m5C953DE8CD2CBC136E1C8995A04F8325AEA3C01B (FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF * __this, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF *, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*, const RuntimeMethod*))FactoryPrimitiveArrayPool_1_Free_m5C953DE8CD2CBC136E1C8995A04F8325AEA3C01B_gshared)(__this, ___obj0, method);
}
// !0 System.Collections.Generic.Queue`1<System.Int16[]>::Dequeue()
inline Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* Queue_1_Dequeue_m74586FE2340B2DD558E02835DC485D181991A21A (Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C * __this, const RuntimeMethod* method)
{
	return ((  Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* (*) (Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C *, const RuntimeMethod*))Queue_1_Dequeue_m6013DB8A542ACA15F662B6832ED389BB061EFEDE_gshared)(__this, method);
}
// System.Int32 Photon.Voice.WebRTCAudioLib::webrtc_audio_processor_process_reverse(System.IntPtr,System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRTCAudioLib_webrtc_audio_processor_process_reverse_m736FE6AB282F19A0FA3C8CB6FF81524DF278B886 (intptr_t ___proc0, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___buffer1, int32_t ___bufferSize2, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Int32 Photon.Voice.WebRTCAudioLib::webrtc_audio_processor_set_param(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRTCAudioLib_webrtc_audio_processor_set_param_m805534FCA93A6714F0F99F00A81EA966B453F8C9 (intptr_t ___proc0, int32_t ___param1, int32_t ___v2, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m2CD320EAB7BE02CC1F395EAFE9970D53A5F9EAEF (int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioLib::webrtc_audio_processor_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioLib_webrtc_audio_processor_destroy_m8463BA01FBDF672DDA44CC4DA2C372BD4A2BB391 (intptr_t ___proc0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A (RuntimeArray * ___array0, RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  ___fldHandle1, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0 (Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Windows.WindowsAudioInPusher::nativePushCallback(System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsAudioInPusher_nativePushCallback_mAB59AE24CB58FF72A0AEA487A6541254C1961D95 (int32_t ___instanceID0, intptr_t ___buf1, int32_t ___len2, const RuntimeMethod* method);
// System.Void System.Action`3<System.Int32,System.IntPtr,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_mCA5F9BDBF11CA0BC604BC63CAAB894D5EAE08A09 (Action_3_tA3B470E9D4FEF30C8329D94BF79F47D8F0EFC367 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_tA3B470E9D4FEF30C8329D94BF79F47D8F0EFC367 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_3__ctor_mCA5F9BDBF11CA0BC604BC63CAAB894D5EAE08A09_gshared)(__this, ___object0, ___method1, method);
}
// System.IntPtr Photon.Voice.Windows.WindowsAudioInPusher::Photon_Audio_In_Create(System.Int32,Photon.Voice.Windows.WindowsAudioInPusher/SystemMode,System.Int32,System.Int32,System.Action`3<System.Int32,System.IntPtr,System.Int32>,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsAudioInPusher_Photon_Audio_In_Create_mE98C9C2A080D0D45E4973A1774C20760E0096273 (int32_t ___instanceID0, int32_t ___systemMode1, int32_t ___micDevIdx2, int32_t ___spkDevIdx3, Action_3_tA3B470E9D4FEF30C8329D94BF79F47D8F0EFC367 * ___callback4, bool ___featrModeOn5, bool ___noiseSup6, bool ___agc7, bool ___cntrClip8, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Photon.Voice.Windows.WindowsAudioInPusher>::Add(!0,!1)
inline void Dictionary_2_Add_mA08AF9299C3E6C6CCB54C761D2A0C31D00512053 (Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E * __this, int32_t ___key0, WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E *, int32_t, WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038 *, const RuntimeMethod*))Dictionary_2_Add_mF7AEA0EFA07EEBC1A4B283A26A7CB720EE7A4C20_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Photon.Voice.Windows.WindowsAudioInPusher::set_Error(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WindowsAudioInPusher_set_Error_m095167EA557E2970CA59FB5A31F106F499605684_inline (WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Photon.Voice.Windows.WindowsAudioInPusher::get_Error()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* WindowsAudioInPusher_get_Error_m91B3D4BECC25331EBE4BDF9C012C7708C11123AF_inline (WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Photon.Voice.Windows.WindowsAudioInPusher>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m509D1745CA295DEE22CB804D470B94E7A116750A (Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E * __this, int32_t ___key0, WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E *, int32_t, WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m867F6DA953678D0333A55270B7C6EF38EFC293FF_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Photon.Voice.Windows.WindowsAudioInPusher::push(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsAudioInPusher_push_mED1E1EA2D3B2B1C76814E25F6E044E455EDB9E2D (WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038 * __this, intptr_t ___buf0, int32_t ___lenBytes1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Int16[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m9959F27D111045D5003ED1791897BDF6AC01F332 (intptr_t ___source0, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int16[]>::Invoke(!0)
inline void Action_1_Invoke_m420EECC0794DD9644AEF360F0309109F0989857A (Action_1_tB6E8E8CB26C84B16959C0CA9F3E9958D027263C3 * __this, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB6E8E8CB26C84B16959C0CA9F3E9958D027263C3 *, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Photon.Voice.Windows.WindowsAudioInPusher>::Remove(!0)
inline bool Dictionary_2_Remove_m3D2340424BA571726ED5B3AAE0E64316D21A87EF (Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m2204D6D532702FD13AB2A9AD8DB538E4E8FB1913_gshared)(__this, ___key0, method);
}
// System.Void Photon.Voice.Windows.WindowsAudioInPusher::Photon_Audio_In_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsAudioInPusher_Photon_Audio_In_Destroy_m1F528876105B63C4BED99A91911999E5DA0C8748 (intptr_t ___handler0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Photon.Voice.Windows.WindowsAudioInPusher>::.ctor()
inline void Dictionary_2__ctor_m85308C069B94E44BF6E0C29D6D0CA01E2BF7A570 (Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E *, const RuntimeMethod*))Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Voice.VoiceClient_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1C6209EA970A7EE3E1B4B5D39CEC0CBE27A2D494 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m1C6209EA970A7EE3E1B4B5D39CEC0CBE27A2D494_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t85C70299099BE4D2CF1D1C061B5EBD8321A50821 * L_0 = (U3CU3Ec_t85C70299099BE4D2CF1D1C061B5EBD8321A50821 *)il2cpp_codegen_object_new(U3CU3Ec_t85C70299099BE4D2CF1D1C061B5EBD8321A50821_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m44319C7B6D7A3E650820CB8097D88FABBCA37A8E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t85C70299099BE4D2CF1D1C061B5EBD8321A50821_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t85C70299099BE4D2CF1D1C061B5EBD8321A50821_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m44319C7B6D7A3E650820CB8097D88FABBCA37A8E (U3CU3Ec_t85C70299099BE4D2CF1D1C061B5EBD8321A50821 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Photon.Voice.VoiceClient_<>c::<sendVoicesInfoAndConfigFrame>b__55_0(Photon.Voice.LocalVoice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CsendVoicesInfoAndConfigFrameU3Eb__55_0_mB4749313726938EACEEF9237AC7FE353D8472D0D (U3CU3Ec_t85C70299099BE4D2CF1D1C061B5EBD8321A50821 * __this, LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * ___x0, const RuntimeMethod* method)
{
	{
		// var debugEchoVoices = localVoices.Values.Where(x => x.DebugEchoMode);
		LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * L_0 = ___x0;
		NullCheck(L_0);
		bool L_1 = LocalVoice_get_DebugEchoMode_m23F8701AEDACA723F2A985AC815D1908E10B0A86(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void Photon.Voice.VoiceClient_<>c__DisplayClass47_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass47_0__ctor_mF219DA394CABFBD4EF2DA9F9EECFDA76D0940CCC (U3CU3Ec__DisplayClass47_0_t648A17DFFFA37BA31B69266006B0352162ACBDDD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// Photon.Voice.LocalVoice Photon.Voice.VoiceClient_<>c__DisplayClass47_0::<CreateLocalVoice>b__0(System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * U3CU3Ec__DisplayClass47_0_U3CCreateLocalVoiceU3Eb__0_m433936FD2C530F16A086C1628921E8367AC59A52 (U3CU3Ec__DisplayClass47_0_t648A17DFFFA37BA31B69266006B0352162ACBDDD * __this, uint8_t ___vId0, int32_t ___chId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass47_0_U3CCreateLocalVoiceU3Eb__0_m433936FD2C530F16A086C1628921E8367AC59A52_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (LocalVoice)createLocalVoice(channelId, (vId, chId) => new LocalVoice(this, encoder, vId, voiceInfo, chId));
		VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 * L_0 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_1 = __this->get_encoder_1();
		uint8_t L_2 = ___vId0;
		VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  L_3 = __this->get_voiceInfo_2();
		int32_t L_4 = ___chId1;
		LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * L_5 = (LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 *)il2cpp_codegen_object_new(LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501_il2cpp_TypeInfo_var);
		LocalVoice__ctor_m9EEB50097DD89AB52E06FC7E7FCD13AE957B831B(L_5, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Void Photon.Voice.VoiceClient_<>c__DisplayClass50_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_0__ctor_mD4538A8267A2567F1D85DA8CB4216F12F961BE2F (U3CU3Ec__DisplayClass50_0_tA1A9493FC62C2FB2D7A2DD68C7A220387A5F1CC8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient_<>c__DisplayClass50_0::<CreateLocalVoiceAudioFromSource>b__0(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_0_U3CCreateLocalVoiceAudioFromSourceU3Eb__0_mA44DABF71F7F964F3A7035BB9DAAF3E500847553 (U3CU3Ec__DisplayClass50_0_tA1A9493FC62C2FB2D7A2DD68C7A220387A5F1CC8 * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___buf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass50_0_U3CCreateLocalVoiceAudioFromSourceU3Eb__0_mA44DABF71F7F964F3A7035BB9DAAF3E500847553_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* V_0 = NULL;
	{
		// var shortBuf = localVoice.BufferFactory.New(buf.Length);
		LocalVoiceAudio_1_t5841EE1080E7EF2DF1DF88B18F83C8B883614A34 * L_0 = __this->get_localVoice_0();
		NullCheck(L_0);
		FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF * L_1 = LocalVoiceFramed_1_get_BufferFactory_m35C61BD0C7496B253B0341A2E1A2BCA871C4A23F(L_0, /*hidden argument*/LocalVoiceFramed_1_get_BufferFactory_m35C61BD0C7496B253B0341A2E1A2BCA871C4A23F_RuntimeMethod_var);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_2 = ___buf0;
		NullCheck(L_2);
		NullCheck(L_1);
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_3 = FactoryPrimitiveArrayPool_1_New_mC4F640517198A1CEB6869E76A71133E0BF174950(L_1, (((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))), /*hidden argument*/FactoryPrimitiveArrayPool_1_New_mC4F640517198A1CEB6869E76A71133E0BF174950_RuntimeMethod_var);
		V_0 = L_3;
		// AudioUtil.Convert(buf, shortBuf, buf.Length);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_4 = ___buf0;
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_5 = V_0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_6 = ___buf0;
		NullCheck(L_6);
		AudioUtil_Convert_mD9329A97EDC298B5434E80A9DDA8D9935DF2EE7A(L_4, L_5, (((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))), /*hidden argument*/NULL);
		// localVoice.PushDataAsync(shortBuf);
		LocalVoiceAudio_1_t5841EE1080E7EF2DF1DF88B18F83C8B883614A34 * L_7 = __this->get_localVoice_0();
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_8 = V_0;
		NullCheck(L_7);
		LocalVoiceFramed_1_PushDataAsync_m26B54A35B29091F791B316FC76F6C87A43D52332(L_7, L_8, /*hidden argument*/LocalVoiceFramed_1_PushDataAsync_m26B54A35B29091F791B316FC76F6C87A43D52332_RuntimeMethod_var);
		// }, bufferFactory);
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
// System.Void Photon.Voice.VoiceClient_<>c__DisplayClass50_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_1__ctor_m21256E2C3484A422ABEBD9051307395BCA943D52 (U3CU3Ec__DisplayClass50_1_t4A11DAFD8B25F39F74D7BF947FB54CABFA3C4BAD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient_<>c__DisplayClass50_1::<CreateLocalVoiceAudioFromSource>b__1(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_1_U3CCreateLocalVoiceAudioFromSourceU3Eb__1_m6DC7D4C4228E515374A8ADE0F10DE3E624BB580D (U3CU3Ec__DisplayClass50_1_t4A11DAFD8B25F39F74D7BF947FB54CABFA3C4BAD * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___buf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass50_1_U3CCreateLocalVoiceAudioFromSourceU3Eb__1_m6DC7D4C4228E515374A8ADE0F10DE3E624BB580D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ((IAudioPusher<float>)source).SetCallback(buf => localVoice.PushDataAsync(buf), localVoice.BufferFactory);
		LocalVoiceAudio_1_tE5D43B1351403442A635282CB35E16AB8C714838 * L_0 = __this->get_localVoice_0();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = ___buf0;
		NullCheck(L_0);
		LocalVoiceFramed_1_PushDataAsync_m5BE879D4365DE39A75E39450B4EDE8CA844389AD(L_0, L_1, /*hidden argument*/LocalVoiceFramed_1_PushDataAsync_m5BE879D4365DE39A75E39450B4EDE8CA844389AD_RuntimeMethod_var);
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
// System.Void Photon.Voice.VoiceClient_<>c__DisplayClass50_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_2__ctor_mBC2DFE9532100DEB3BF484AF07A0B938ABD60FD5 (U3CU3Ec__DisplayClass50_2_tB13B134F0287DC3312D23D1B120642C6C344ABF0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient_<>c__DisplayClass50_2::<CreateLocalVoiceAudioFromSource>b__2(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_2_U3CCreateLocalVoiceAudioFromSourceU3Eb__2_m61131F171D9A9E48E5A6DCB852A6B649AAEAE912 (U3CU3Ec__DisplayClass50_2_tB13B134F0287DC3312D23D1B120642C6C344ABF0 * __this, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___buf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass50_2_U3CCreateLocalVoiceAudioFromSourceU3Eb__2_m61131F171D9A9E48E5A6DCB852A6B649AAEAE912_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_0 = NULL;
	{
		// var floatBuf = localVoice.BufferFactory.New(buf.Length);
		LocalVoiceAudio_1_tE5D43B1351403442A635282CB35E16AB8C714838 * L_0 = __this->get_localVoice_0();
		NullCheck(L_0);
		FactoryPrimitiveArrayPool_1_t418A4CA2D3B7BD53F205049A6C5EB8CC3A2A949D * L_1 = LocalVoiceFramed_1_get_BufferFactory_m54C4D49DB6DC23EAF947EB390ADF4AED8E253745(L_0, /*hidden argument*/LocalVoiceFramed_1_get_BufferFactory_m54C4D49DB6DC23EAF947EB390ADF4AED8E253745_RuntimeMethod_var);
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_2 = ___buf0;
		NullCheck(L_2);
		NullCheck(L_1);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_3 = FactoryPrimitiveArrayPool_1_New_m6FE87FBC0519D29D44164E40374B613B92DE56A5(L_1, (((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))), /*hidden argument*/FactoryPrimitiveArrayPool_1_New_m6FE87FBC0519D29D44164E40374B613B92DE56A5_RuntimeMethod_var);
		V_0 = L_3;
		// AudioUtil.Convert(buf, floatBuf, buf.Length);
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_4 = ___buf0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_5 = V_0;
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_6 = ___buf0;
		NullCheck(L_6);
		AudioUtil_Convert_m95C121F35006C25B3D52977F9D5500B010D4A66C(L_4, L_5, (((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))), /*hidden argument*/NULL);
		// localVoice.PushDataAsync(floatBuf);
		LocalVoiceAudio_1_tE5D43B1351403442A635282CB35E16AB8C714838 * L_7 = __this->get_localVoice_0();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_8 = V_0;
		NullCheck(L_7);
		LocalVoiceFramed_1_PushDataAsync_m5BE879D4365DE39A75E39450B4EDE8CA844389AD(L_7, L_8, /*hidden argument*/LocalVoiceFramed_1_PushDataAsync_m5BE879D4365DE39A75E39450B4EDE8CA844389AD_RuntimeMethod_var);
		// }, bufferFactory);
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
// System.Void Photon.Voice.VoiceClient_<>c__DisplayClass50_3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_3__ctor_mA16CBB95AF69227A962560DD585EEABDC13988E7 (U3CU3Ec__DisplayClass50_3_t95073D710235C84E8A926584ADA4339760716317 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient_<>c__DisplayClass50_3::<CreateLocalVoiceAudioFromSource>b__3(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_3_U3CCreateLocalVoiceAudioFromSourceU3Eb__3_m53F2B8F7956F9C90A34C982D42F8352CC944A46D (U3CU3Ec__DisplayClass50_3_t95073D710235C84E8A926584ADA4339760716317 * __this, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___buf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass50_3_U3CCreateLocalVoiceAudioFromSourceU3Eb__3_m53F2B8F7956F9C90A34C982D42F8352CC944A46D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ((IAudioPusher<short>)source).SetCallback(buf => localVoice.PushDataAsync(buf), localVoice.BufferFactory);
		LocalVoiceAudio_1_t5841EE1080E7EF2DF1DF88B18F83C8B883614A34 * L_0 = __this->get_localVoice_0();
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_1 = ___buf0;
		NullCheck(L_0);
		LocalVoiceFramed_1_PushDataAsync_m26B54A35B29091F791B316FC76F6C87A43D52332(L_0, L_1, /*hidden argument*/LocalVoiceFramed_1_PushDataAsync_m26B54A35B29091F791B316FC76F6C87A43D52332_RuntimeMethod_var);
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
// System.Void Photon.Voice.VoiceClient_<get_RemoteVoiceInfos>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40__ctor_mF67B9D35DC8D57CB3FC5D2A56F421D0FCBBFE7F7 (U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1 = Environment_get_CurrentManagedThreadId_m0E897C88355903220B1EC214832F5E815D7C13D1(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient_<get_RemoteVoiceInfos>d__40::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_System_IDisposable_Dispose_mE37C4A65F0593C69C0EB64466A7F73449EB34DFE (U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_003b;
	}

IL_0016:
	{
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
			{
				goto IL_0024;
			}
		}

IL_001c:
		{
			goto IL_001e;
		}

IL_001e:
		{
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)1)))
			{
				goto IL_0024;
			}
		}

IL_0022:
		{
			goto IL_0030;
		}

IL_0024:
		{
		}

IL_0025:
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x2E, FINALLY_0027);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0027;
		}

FINALLY_0027:
		{ // begin finally (depth: 2)
			U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally2_m3EE2A7ABE02C6E5CF0A4AE6BD63CE2BE91C83959(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(39)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(39)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x2E, IL_002e)
		}

IL_002e:
		{
			goto IL_0030;
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x39, FINALLY_0032);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0032;
	}

FINALLY_0032:
	{ // begin finally (depth: 1)
		U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally1_mC6DB71AA66036CCD87CE4B2F5F942A86007D6284(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(50)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(50)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
	}

IL_0039:
	{
		goto IL_003b;
	}

IL_003b:
	{
		return;
	}
}
// System.Boolean Photon.Voice.VoiceClient_<get_RemoteVoiceInfos>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_RemoteVoiceInfosU3Ed__40_MoveNext_m328F4F2DAA6381D36E58FF8D3BD6A3BD6E6C1525 (U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cget_RemoteVoiceInfosU3Ed__40_MoveNext_m328F4F2DAA6381D36E58FF8D3BD6A3BD6E6C1525_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0012;
			}
		}

IL_000a:
		{
			goto IL_000c;
		}

IL_000c:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014;
			}
		}

IL_0010:
		{
			goto IL_0019;
		}

IL_0012:
		{
			goto IL_0020;
		}

IL_0014:
		{
			goto IL_00dd;
		}

IL_0019:
		{
			V_0 = (bool)0;
			goto IL_014e;
		}

IL_0020:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (var playerVoices in this.remoteVoices)
			VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 * L_3 = __this->get_U3CU3E4__this_3();
			NullCheck(L_3);
			Dictionary_2_t611A5FC094D9C83B06C788EC1402D634859BADE5 * L_4 = L_3->get_remoteVoices_15();
			NullCheck(L_4);
			Enumerator_t5BCBDA24A17EEA0E33D4EC58D125362D9F2A9A2C  L_5 = Dictionary_2_GetEnumerator_m23358DBED01384B592A9399E84D7A4906CF1641F(L_4, /*hidden argument*/Dictionary_2_GetEnumerator_m23358DBED01384B592A9399E84D7A4906CF1641F_RuntimeMethod_var);
			__this->set_U3CU3Es__1_4(L_5);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_011f;
		}

IL_004c:
		{
			// foreach (var playerVoices in this.remoteVoices)
			Enumerator_t5BCBDA24A17EEA0E33D4EC58D125362D9F2A9A2C * L_6 = __this->get_address_of_U3CU3Es__1_4();
			KeyValuePair_2_tE556C31F9BEDF6762AAB4A88C8714DBCCA03EADF  L_7 = Enumerator_get_Current_m3E621FEE10445519C310F57D148D114756B78CB0_inline((Enumerator_t5BCBDA24A17EEA0E33D4EC58D125362D9F2A9A2C *)L_6, /*hidden argument*/Enumerator_get_Current_m3E621FEE10445519C310F57D148D114756B78CB0_RuntimeMethod_var);
			__this->set_U3CplayerVoicesU3E5__2_5(L_7);
			// foreach (var voice in playerVoices.Value)
			KeyValuePair_2_tE556C31F9BEDF6762AAB4A88C8714DBCCA03EADF * L_8 = __this->get_address_of_U3CplayerVoicesU3E5__2_5();
			Dictionary_2_t0518167B203339B478AB3F8F942303BAF8B24B77 * L_9 = KeyValuePair_2_get_Value_mF2A47560A4B835767281B4FCE0DD10DDA0BDA7E8_inline((KeyValuePair_2_tE556C31F9BEDF6762AAB4A88C8714DBCCA03EADF *)L_8, /*hidden argument*/KeyValuePair_2_get_Value_mF2A47560A4B835767281B4FCE0DD10DDA0BDA7E8_RuntimeMethod_var);
			NullCheck(L_9);
			Enumerator_t757B49B66CCB7F4CE425E72906209268CDA5B7BE  L_10 = Dictionary_2_GetEnumerator_m4C033987CC9FDC8194F32618AFE3BEA09C88463D(L_9, /*hidden argument*/Dictionary_2_GetEnumerator_m4C033987CC9FDC8194F32618AFE3BEA09C88463D_RuntimeMethod_var);
			__this->set_U3CU3Es__3_6(L_10);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_00f2;
		}

IL_007f:
		{
			// foreach (var voice in playerVoices.Value)
			Enumerator_t757B49B66CCB7F4CE425E72906209268CDA5B7BE * L_11 = __this->get_address_of_U3CU3Es__3_6();
			KeyValuePair_2_t17B7EC8064FF24A65F802824DAEA46CAA219AAB7  L_12 = Enumerator_get_Current_m4CEAD02442DF9B81445FF8C2B8FED6A9798C16BB_inline((Enumerator_t757B49B66CCB7F4CE425E72906209268CDA5B7BE *)L_11, /*hidden argument*/Enumerator_get_Current_m4CEAD02442DF9B81445FF8C2B8FED6A9798C16BB_RuntimeMethod_var);
			__this->set_U3CvoiceU3E5__4_7(L_12);
			// yield return new RemoteVoiceInfo(voice.Value.channelId, playerVoices.Key, voice.Key, voice.Value.Info);
			KeyValuePair_2_t17B7EC8064FF24A65F802824DAEA46CAA219AAB7 * L_13 = __this->get_address_of_U3CvoiceU3E5__4_7();
			RemoteVoice_tFB7B418D0495B703F0EBB5E8F950768A6A48D39B * L_14 = KeyValuePair_2_get_Value_m8889DEAA4F81F4AA48EE570BF2D2EF5414840A34_inline((KeyValuePair_2_t17B7EC8064FF24A65F802824DAEA46CAA219AAB7 *)L_13, /*hidden argument*/KeyValuePair_2_get_Value_m8889DEAA4F81F4AA48EE570BF2D2EF5414840A34_RuntimeMethod_var);
			NullCheck(L_14);
			int32_t L_15 = L_14->get_channelId_2();
			KeyValuePair_2_tE556C31F9BEDF6762AAB4A88C8714DBCCA03EADF * L_16 = __this->get_address_of_U3CplayerVoicesU3E5__2_5();
			int32_t L_17 = KeyValuePair_2_get_Key_mC70443985A23E921917ADA227A8EFEFAB49C7D41_inline((KeyValuePair_2_tE556C31F9BEDF6762AAB4A88C8714DBCCA03EADF *)L_16, /*hidden argument*/KeyValuePair_2_get_Key_mC70443985A23E921917ADA227A8EFEFAB49C7D41_RuntimeMethod_var);
			KeyValuePair_2_t17B7EC8064FF24A65F802824DAEA46CAA219AAB7 * L_18 = __this->get_address_of_U3CvoiceU3E5__4_7();
			uint8_t L_19 = KeyValuePair_2_get_Key_m648AEE032BFE34D6857A3807BFF307726641B6C9_inline((KeyValuePair_2_t17B7EC8064FF24A65F802824DAEA46CAA219AAB7 *)L_18, /*hidden argument*/KeyValuePair_2_get_Key_m648AEE032BFE34D6857A3807BFF307726641B6C9_RuntimeMethod_var);
			KeyValuePair_2_t17B7EC8064FF24A65F802824DAEA46CAA219AAB7 * L_20 = __this->get_address_of_U3CvoiceU3E5__4_7();
			RemoteVoice_tFB7B418D0495B703F0EBB5E8F950768A6A48D39B * L_21 = KeyValuePair_2_get_Value_m8889DEAA4F81F4AA48EE570BF2D2EF5414840A34_inline((KeyValuePair_2_t17B7EC8064FF24A65F802824DAEA46CAA219AAB7 *)L_20, /*hidden argument*/KeyValuePair_2_get_Value_m8889DEAA4F81F4AA48EE570BF2D2EF5414840A34_RuntimeMethod_var);
			NullCheck(L_21);
			VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  L_22 = RemoteVoice_get_Info_m0E8DC5364A52540F8FB31D18004700CB0EDC8D5F_inline(L_21, /*hidden argument*/NULL);
			RemoteVoiceInfo_tBE345189E3B7ED8A97D47B0999117273F16427EC * L_23 = (RemoteVoiceInfo_tBE345189E3B7ED8A97D47B0999117273F16427EC *)il2cpp_codegen_object_new(RemoteVoiceInfo_tBE345189E3B7ED8A97D47B0999117273F16427EC_il2cpp_TypeInfo_var);
			RemoteVoiceInfo__ctor_m5867D6FBC7BC4D2B56EFFFFB359730C1FCB20454(L_23, L_15, L_17, L_19, L_22, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_23);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_014e;
		}

IL_00dd:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			KeyValuePair_2_t17B7EC8064FF24A65F802824DAEA46CAA219AAB7 * L_24 = __this->get_address_of_U3CvoiceU3E5__4_7();
			il2cpp_codegen_initobj(L_24, sizeof(KeyValuePair_2_t17B7EC8064FF24A65F802824DAEA46CAA219AAB7 ));
		}

IL_00f2:
		{
			// foreach (var voice in playerVoices.Value)
			Enumerator_t757B49B66CCB7F4CE425E72906209268CDA5B7BE * L_25 = __this->get_address_of_U3CU3Es__3_6();
			bool L_26 = Enumerator_MoveNext_mFDECD0DB93C203A08DC479E6AE8875DF4EFC2177((Enumerator_t757B49B66CCB7F4CE425E72906209268CDA5B7BE *)L_25, /*hidden argument*/Enumerator_MoveNext_mFDECD0DB93C203A08DC479E6AE8875DF4EFC2177_RuntimeMethod_var);
			if (L_26)
			{
				goto IL_007f;
			}
		}

IL_00ff:
		{
			U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally2_m3EE2A7ABE02C6E5CF0A4AE6BD63CE2BE91C83959(__this, /*hidden argument*/NULL);
			Enumerator_t757B49B66CCB7F4CE425E72906209268CDA5B7BE * L_27 = __this->get_address_of_U3CU3Es__3_6();
			il2cpp_codegen_initobj(L_27, sizeof(Enumerator_t757B49B66CCB7F4CE425E72906209268CDA5B7BE ));
			KeyValuePair_2_tE556C31F9BEDF6762AAB4A88C8714DBCCA03EADF * L_28 = __this->get_address_of_U3CplayerVoicesU3E5__2_5();
			il2cpp_codegen_initobj(L_28, sizeof(KeyValuePair_2_tE556C31F9BEDF6762AAB4A88C8714DBCCA03EADF ));
		}

IL_011f:
		{
			// foreach (var playerVoices in this.remoteVoices)
			Enumerator_t5BCBDA24A17EEA0E33D4EC58D125362D9F2A9A2C * L_29 = __this->get_address_of_U3CU3Es__1_4();
			bool L_30 = Enumerator_MoveNext_m92F2D3AAD3ACFEE8C3DABD7BD78F63C5FB18DD86((Enumerator_t5BCBDA24A17EEA0E33D4EC58D125362D9F2A9A2C *)L_29, /*hidden argument*/Enumerator_MoveNext_m92F2D3AAD3ACFEE8C3DABD7BD78F63C5FB18DD86_RuntimeMethod_var);
			if (L_30)
			{
				goto IL_004c;
			}
		}

IL_012f:
		{
			U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally1_mC6DB71AA66036CCD87CE4B2F5F942A86007D6284(__this, /*hidden argument*/NULL);
			Enumerator_t5BCBDA24A17EEA0E33D4EC58D125362D9F2A9A2C * L_31 = __this->get_address_of_U3CU3Es__1_4();
			il2cpp_codegen_initobj(L_31, sizeof(Enumerator_t5BCBDA24A17EEA0E33D4EC58D125362D9F2A9A2C ));
			// }
			V_0 = (bool)0;
			goto IL_014e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0146;
	}

FAULT_0146:
	{ // begin fault (depth: 1)
		U3Cget_RemoteVoiceInfosU3Ed__40_System_IDisposable_Dispose_mE37C4A65F0593C69C0EB64466A7F73449EB34DFE(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(326)
	} // end fault
	IL2CPP_CLEANUP(326)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_014e:
	{
		bool L_32 = V_0;
		return L_32;
	}
}
// System.Void Photon.Voice.VoiceClient_<get_RemoteVoiceInfos>d__40::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally1_mC6DB71AA66036CCD87CE4B2F5F942A86007D6284 (U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally1_mC6DB71AA66036CCD87CE4B2F5F942A86007D6284_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t5BCBDA24A17EEA0E33D4EC58D125362D9F2A9A2C * L_0 = __this->get_address_of_U3CU3Es__1_4();
		Enumerator_Dispose_m9E9779965C5DE6F96574EEFF97A0978AD895D4C8((Enumerator_t5BCBDA24A17EEA0E33D4EC58D125362D9F2A9A2C *)L_0, /*hidden argument*/Enumerator_Dispose_m9E9779965C5DE6F96574EEFF97A0978AD895D4C8_RuntimeMethod_var);
		return;
	}
}
// System.Void Photon.Voice.VoiceClient_<get_RemoteVoiceInfos>d__40::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally2_m3EE2A7ABE02C6E5CF0A4AE6BD63CE2BE91C83959 (U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cget_RemoteVoiceInfosU3Ed__40_U3CU3Em__Finally2_m3EE2A7ABE02C6E5CF0A4AE6BD63CE2BE91C83959_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0(((int32_t)-3));
		Enumerator_t757B49B66CCB7F4CE425E72906209268CDA5B7BE * L_0 = __this->get_address_of_U3CU3Es__3_6();
		Enumerator_Dispose_mA9BD96F227D7514904C9E7DD7FEC7CD826051F44((Enumerator_t757B49B66CCB7F4CE425E72906209268CDA5B7BE *)L_0, /*hidden argument*/Enumerator_Dispose_mA9BD96F227D7514904C9E7DD7FEC7CD826051F44_RuntimeMethod_var);
		return;
	}
}
// Photon.Voice.RemoteVoiceInfo Photon.Voice.VoiceClient_<get_RemoteVoiceInfos>d__40::System.Collections.Generic.IEnumerator<Photon.Voice.RemoteVoiceInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RemoteVoiceInfo_tBE345189E3B7ED8A97D47B0999117273F16427EC * U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_Generic_IEnumeratorU3CPhoton_Voice_RemoteVoiceInfoU3E_get_Current_m6DD22561588FE9BA8280FCA87FC1221F7F26888D (U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0 * __this, const RuntimeMethod* method)
{
	{
		RemoteVoiceInfo_tBE345189E3B7ED8A97D47B0999117273F16427EC * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Photon.Voice.VoiceClient_<get_RemoteVoiceInfos>d__40::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_IEnumerator_Reset_m9D6F7557EE66C7036496F43D00795EDDA9619C9C (U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_IEnumerator_Reset_m9D6F7557EE66C7036496F43D00795EDDA9619C9C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_IEnumerator_Reset_m9D6F7557EE66C7036496F43D00795EDDA9619C9C_RuntimeMethod_var);
	}
}
// System.Object Photon.Voice.VoiceClient_<get_RemoteVoiceInfos>d__40::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_IEnumerator_get_Current_m758398477410D19C456C6CB24C4008165C533195 (U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0 * __this, const RuntimeMethod* method)
{
	{
		RemoteVoiceInfo_tBE345189E3B7ED8A97D47B0999117273F16427EC * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Photon.Voice.RemoteVoiceInfo> Photon.Voice.VoiceClient_<get_RemoteVoiceInfos>d__40::System.Collections.Generic.IEnumerable<Photon.Voice.RemoteVoiceInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_Generic_IEnumerableU3CPhoton_Voice_RemoteVoiceInfoU3E_GetEnumerator_mF6E6A04A378FC25CDDE5A52FD5F1152A13C1B806 (U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_Generic_IEnumerableU3CPhoton_Voice_RemoteVoiceInfoU3E_GetEnumerator_mF6E6A04A378FC25CDDE5A52FD5F1152A13C1B806_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2 = Environment_get_CurrentManagedThreadId_m0E897C88355903220B1EC214832F5E815D7C13D1(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0 * L_3 = (U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0 *)il2cpp_codegen_object_new(U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0_il2cpp_TypeInfo_var);
		U3Cget_RemoteVoiceInfosU3Ed__40__ctor_mF67B9D35DC8D57CB3FC5D2A56F421D0FCBBFE7F7(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0 * L_4 = V_0;
		VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Photon.Voice.VoiceClient_<get_RemoteVoiceInfos>d__40::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_IEnumerable_GetEnumerator_mCB9CFE622F273B900B15A849E7E3D6C71C8C7A31 (U3Cget_RemoteVoiceInfosU3Ed__40_t79F08E5CADFD6171F558D0813C955EEC846CE0E0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3Cget_RemoteVoiceInfosU3Ed__40_System_Collections_Generic_IEnumerableU3CPhoton_Voice_RemoteVoiceInfoU3E_GetEnumerator_mF6E6A04A378FC25CDDE5A52FD5F1152A13C1B806(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void Photon.Voice.VoiceClient_RemoteVoiceInfoDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVoiceInfoDelegate__ctor_m560EF0F5F072A16E434BA525C0E15D0442BDB383 (RemoteVoiceInfoDelegate_t9DDC9137E7981970B308A55A9F2C949364906D06 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Photon.Voice.VoiceClient_RemoteVoiceInfoDelegate::Invoke(System.Int32,System.Int32,System.Byte,Photon.Voice.VoiceInfo,Photon.Voice.RemoteVoiceOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVoiceInfoDelegate_Invoke_m1C1C6272737051156A22857E031CB91C8627C74C (RemoteVoiceInfoDelegate_t9DDC9137E7981970B308A55A9F2C949364906D06 * __this, int32_t ___channelId0, int32_t ___playerId1, uint8_t ___voiceId2, VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  ___voiceInfo3, RemoteVoiceOptions_t2F19B3BEA11C908B63B0C9A6F0A445D019150214 * ___options4, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, uint8_t, VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 , RemoteVoiceOptions_t2F19B3BEA11C908B63B0C9A6F0A445D019150214 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, uint8_t, VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 , RemoteVoiceOptions_t2F19B3BEA11C908B63B0C9A6F0A445D019150214 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker5< int32_t, int32_t, uint8_t, VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 , RemoteVoiceOptions_t2F19B3BEA11C908B63B0C9A6F0A445D019150214 * >::Invoke(targetMethod, targetThis, ___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4);
					else
						GenericVirtActionInvoker5< int32_t, int32_t, uint8_t, VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 , RemoteVoiceOptions_t2F19B3BEA11C908B63B0C9A6F0A445D019150214 * >::Invoke(targetMethod, targetThis, ___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< int32_t, int32_t, uint8_t, VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 , RemoteVoiceOptions_t2F19B3BEA11C908B63B0C9A6F0A445D019150214 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4);
					else
						VirtActionInvoker5< int32_t, int32_t, uint8_t, VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 , RemoteVoiceOptions_t2F19B3BEA11C908B63B0C9A6F0A445D019150214 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, uint8_t, VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 , RemoteVoiceOptions_t2F19B3BEA11C908B63B0C9A6F0A445D019150214 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___channelId0) - 1), ___playerId1, ___voiceId2, ___voiceInfo3, ___options4, targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, uint8_t, VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 , RemoteVoiceOptions_t2F19B3BEA11C908B63B0C9A6F0A445D019150214 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___channelId0, ___playerId1, ___voiceId2, ___voiceInfo3, ___options4, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Photon.Voice.VoiceClient_RemoteVoiceInfoDelegate::BeginInvoke(System.Int32,System.Int32,System.Byte,Photon.Voice.VoiceInfo,Photon.Voice.RemoteVoiceOptions&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RemoteVoiceInfoDelegate_BeginInvoke_m75B90423F5DB40919EEA2FD02D827B80FCCCF3E6 (RemoteVoiceInfoDelegate_t9DDC9137E7981970B308A55A9F2C949364906D06 * __this, int32_t ___channelId0, int32_t ___playerId1, uint8_t ___voiceId2, VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  ___voiceInfo3, RemoteVoiceOptions_t2F19B3BEA11C908B63B0C9A6F0A445D019150214 * ___options4, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteVoiceInfoDelegate_BeginInvoke_m75B90423F5DB40919EEA2FD02D827B80FCCCF3E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___channelId0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___playerId1);
	__d_args[2] = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &___voiceId2);
	__d_args[3] = Box(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740_il2cpp_TypeInfo_var, &___voiceInfo3);
	__d_args[4] = Box(RemoteVoiceOptions_t2F19B3BEA11C908B63B0C9A6F0A445D019150214_il2cpp_TypeInfo_var, &*___options4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// System.Void Photon.Voice.VoiceClient_RemoteVoiceInfoDelegate::EndInvoke(Photon.Voice.RemoteVoiceOptions&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteVoiceInfoDelegate_EndInvoke_m1B60BF0BC45BC93CE096DCD446E64B82E355FD54 (RemoteVoiceInfoDelegate_t9DDC9137E7981970B308A55A9F2C949364906D06 * __this, RemoteVoiceOptions_t2F19B3BEA11C908B63B0C9A6F0A445D019150214 * ___options0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___options0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Voice.VoiceEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceEvent__ctor_m920E49D43A512CE917D00DA630869A9B79E438BB (VoiceEvent_tC8CCAB6DA56312061470CF25E66CCF26A9CF2BDF * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: Photon.Voice.VoiceInfo
IL2CPP_EXTERN_C void VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740_marshal_pinvoke(const VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740& unmarshaled, VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CCodecU3Ek__BackingField_0 = unmarshaled.get_U3CCodecU3Ek__BackingField_0();
	marshaled.___U3CSamplingRateU3Ek__BackingField_1 = unmarshaled.get_U3CSamplingRateU3Ek__BackingField_1();
	marshaled.___U3CChannelsU3Ek__BackingField_2 = unmarshaled.get_U3CChannelsU3Ek__BackingField_2();
	marshaled.___U3CFrameDurationUsU3Ek__BackingField_3 = unmarshaled.get_U3CFrameDurationUsU3Ek__BackingField_3();
	marshaled.___U3CBitrateU3Ek__BackingField_4 = unmarshaled.get_U3CBitrateU3Ek__BackingField_4();
	marshaled.___U3CWidthU3Ek__BackingField_5 = unmarshaled.get_U3CWidthU3Ek__BackingField_5();
	marshaled.___U3CHeightU3Ek__BackingField_6 = unmarshaled.get_U3CHeightU3Ek__BackingField_6();
	marshaled.___U3CFPSU3Ek__BackingField_7 = unmarshaled.get_U3CFPSU3Ek__BackingField_7();
	marshaled.___U3CKeyFrameIntU3Ek__BackingField_8 = unmarshaled.get_U3CKeyFrameIntU3Ek__BackingField_8();
	if (unmarshaled.get_U3CUserDataU3Ek__BackingField_9() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_U3CUserDataU3Ek__BackingField_9()))
		{
			marshaled.___U3CUserDataU3Ek__BackingField_9 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get_U3CUserDataU3Ek__BackingField_9()));
			(marshaled.___U3CUserDataU3Ek__BackingField_9)->AddRef();
		}
		else
		{
			marshaled.___U3CUserDataU3Ek__BackingField_9 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get_U3CUserDataU3Ek__BackingField_9());
		}
	}
	else
	{
		marshaled.___U3CUserDataU3Ek__BackingField_9 = NULL;
	}
}
IL2CPP_EXTERN_C void VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740_marshal_pinvoke_back(const VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740_marshaled_pinvoke& marshaled, VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_U3CCodecU3Ek__BackingField_temp_0 = 0;
	unmarshaled_U3CCodecU3Ek__BackingField_temp_0 = marshaled.___U3CCodecU3Ek__BackingField_0;
	unmarshaled.set_U3CCodecU3Ek__BackingField_0(unmarshaled_U3CCodecU3Ek__BackingField_temp_0);
	int32_t unmarshaled_U3CSamplingRateU3Ek__BackingField_temp_1 = 0;
	unmarshaled_U3CSamplingRateU3Ek__BackingField_temp_1 = marshaled.___U3CSamplingRateU3Ek__BackingField_1;
	unmarshaled.set_U3CSamplingRateU3Ek__BackingField_1(unmarshaled_U3CSamplingRateU3Ek__BackingField_temp_1);
	int32_t unmarshaled_U3CChannelsU3Ek__BackingField_temp_2 = 0;
	unmarshaled_U3CChannelsU3Ek__BackingField_temp_2 = marshaled.___U3CChannelsU3Ek__BackingField_2;
	unmarshaled.set_U3CChannelsU3Ek__BackingField_2(unmarshaled_U3CChannelsU3Ek__BackingField_temp_2);
	int32_t unmarshaled_U3CFrameDurationUsU3Ek__BackingField_temp_3 = 0;
	unmarshaled_U3CFrameDurationUsU3Ek__BackingField_temp_3 = marshaled.___U3CFrameDurationUsU3Ek__BackingField_3;
	unmarshaled.set_U3CFrameDurationUsU3Ek__BackingField_3(unmarshaled_U3CFrameDurationUsU3Ek__BackingField_temp_3);
	int32_t unmarshaled_U3CBitrateU3Ek__BackingField_temp_4 = 0;
	unmarshaled_U3CBitrateU3Ek__BackingField_temp_4 = marshaled.___U3CBitrateU3Ek__BackingField_4;
	unmarshaled.set_U3CBitrateU3Ek__BackingField_4(unmarshaled_U3CBitrateU3Ek__BackingField_temp_4);
	int32_t unmarshaled_U3CWidthU3Ek__BackingField_temp_5 = 0;
	unmarshaled_U3CWidthU3Ek__BackingField_temp_5 = marshaled.___U3CWidthU3Ek__BackingField_5;
	unmarshaled.set_U3CWidthU3Ek__BackingField_5(unmarshaled_U3CWidthU3Ek__BackingField_temp_5);
	int32_t unmarshaled_U3CHeightU3Ek__BackingField_temp_6 = 0;
	unmarshaled_U3CHeightU3Ek__BackingField_temp_6 = marshaled.___U3CHeightU3Ek__BackingField_6;
	unmarshaled.set_U3CHeightU3Ek__BackingField_6(unmarshaled_U3CHeightU3Ek__BackingField_temp_6);
	int32_t unmarshaled_U3CFPSU3Ek__BackingField_temp_7 = 0;
	unmarshaled_U3CFPSU3Ek__BackingField_temp_7 = marshaled.___U3CFPSU3Ek__BackingField_7;
	unmarshaled.set_U3CFPSU3Ek__BackingField_7(unmarshaled_U3CFPSU3Ek__BackingField_temp_7);
	int32_t unmarshaled_U3CKeyFrameIntU3Ek__BackingField_temp_8 = 0;
	unmarshaled_U3CKeyFrameIntU3Ek__BackingField_temp_8 = marshaled.___U3CKeyFrameIntU3Ek__BackingField_8;
	unmarshaled.set_U3CKeyFrameIntU3Ek__BackingField_8(unmarshaled_U3CKeyFrameIntU3Ek__BackingField_temp_8);
	if (marshaled.___U3CUserDataU3Ek__BackingField_9 != NULL)
	{
		unmarshaled.set_U3CUserDataU3Ek__BackingField_9(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___U3CUserDataU3Ek__BackingField_9, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_U3CUserDataU3Ek__BackingField_9()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get_U3CUserDataU3Ek__BackingField_9()), Il2CppIUnknown::IID, marshaled.___U3CUserDataU3Ek__BackingField_9);
		}
	}
	else
	{
		unmarshaled.set_U3CUserDataU3Ek__BackingField_9(NULL);
	}
}
// Conversion method for clean up from marshalling of: Photon.Voice.VoiceInfo
IL2CPP_EXTERN_C void VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740_marshal_pinvoke_cleanup(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740_marshaled_pinvoke& marshaled)
{
	if (marshaled.___U3CUserDataU3Ek__BackingField_9 != NULL)
	{
		(marshaled.___U3CUserDataU3Ek__BackingField_9)->Release();
		marshaled.___U3CUserDataU3Ek__BackingField_9 = NULL;
	}
}
// Conversion methods for marshalling of: Photon.Voice.VoiceInfo
IL2CPP_EXTERN_C void VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740_marshal_com(const VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740& unmarshaled, VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740_marshaled_com& marshaled)
{
	marshaled.___U3CCodecU3Ek__BackingField_0 = unmarshaled.get_U3CCodecU3Ek__BackingField_0();
	marshaled.___U3CSamplingRateU3Ek__BackingField_1 = unmarshaled.get_U3CSamplingRateU3Ek__BackingField_1();
	marshaled.___U3CChannelsU3Ek__BackingField_2 = unmarshaled.get_U3CChannelsU3Ek__BackingField_2();
	marshaled.___U3CFrameDurationUsU3Ek__BackingField_3 = unmarshaled.get_U3CFrameDurationUsU3Ek__BackingField_3();
	marshaled.___U3CBitrateU3Ek__BackingField_4 = unmarshaled.get_U3CBitrateU3Ek__BackingField_4();
	marshaled.___U3CWidthU3Ek__BackingField_5 = unmarshaled.get_U3CWidthU3Ek__BackingField_5();
	marshaled.___U3CHeightU3Ek__BackingField_6 = unmarshaled.get_U3CHeightU3Ek__BackingField_6();
	marshaled.___U3CFPSU3Ek__BackingField_7 = unmarshaled.get_U3CFPSU3Ek__BackingField_7();
	marshaled.___U3CKeyFrameIntU3Ek__BackingField_8 = unmarshaled.get_U3CKeyFrameIntU3Ek__BackingField_8();
	if (unmarshaled.get_U3CUserDataU3Ek__BackingField_9() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_U3CUserDataU3Ek__BackingField_9()))
		{
			marshaled.___U3CUserDataU3Ek__BackingField_9 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get_U3CUserDataU3Ek__BackingField_9()));
			(marshaled.___U3CUserDataU3Ek__BackingField_9)->AddRef();
		}
		else
		{
			marshaled.___U3CUserDataU3Ek__BackingField_9 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get_U3CUserDataU3Ek__BackingField_9());
		}
	}
	else
	{
		marshaled.___U3CUserDataU3Ek__BackingField_9 = NULL;
	}
}
IL2CPP_EXTERN_C void VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740_marshal_com_back(const VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740_marshaled_com& marshaled, VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_U3CCodecU3Ek__BackingField_temp_0 = 0;
	unmarshaled_U3CCodecU3Ek__BackingField_temp_0 = marshaled.___U3CCodecU3Ek__BackingField_0;
	unmarshaled.set_U3CCodecU3Ek__BackingField_0(unmarshaled_U3CCodecU3Ek__BackingField_temp_0);
	int32_t unmarshaled_U3CSamplingRateU3Ek__BackingField_temp_1 = 0;
	unmarshaled_U3CSamplingRateU3Ek__BackingField_temp_1 = marshaled.___U3CSamplingRateU3Ek__BackingField_1;
	unmarshaled.set_U3CSamplingRateU3Ek__BackingField_1(unmarshaled_U3CSamplingRateU3Ek__BackingField_temp_1);
	int32_t unmarshaled_U3CChannelsU3Ek__BackingField_temp_2 = 0;
	unmarshaled_U3CChannelsU3Ek__BackingField_temp_2 = marshaled.___U3CChannelsU3Ek__BackingField_2;
	unmarshaled.set_U3CChannelsU3Ek__BackingField_2(unmarshaled_U3CChannelsU3Ek__BackingField_temp_2);
	int32_t unmarshaled_U3CFrameDurationUsU3Ek__BackingField_temp_3 = 0;
	unmarshaled_U3CFrameDurationUsU3Ek__BackingField_temp_3 = marshaled.___U3CFrameDurationUsU3Ek__BackingField_3;
	unmarshaled.set_U3CFrameDurationUsU3Ek__BackingField_3(unmarshaled_U3CFrameDurationUsU3Ek__BackingField_temp_3);
	int32_t unmarshaled_U3CBitrateU3Ek__BackingField_temp_4 = 0;
	unmarshaled_U3CBitrateU3Ek__BackingField_temp_4 = marshaled.___U3CBitrateU3Ek__BackingField_4;
	unmarshaled.set_U3CBitrateU3Ek__BackingField_4(unmarshaled_U3CBitrateU3Ek__BackingField_temp_4);
	int32_t unmarshaled_U3CWidthU3Ek__BackingField_temp_5 = 0;
	unmarshaled_U3CWidthU3Ek__BackingField_temp_5 = marshaled.___U3CWidthU3Ek__BackingField_5;
	unmarshaled.set_U3CWidthU3Ek__BackingField_5(unmarshaled_U3CWidthU3Ek__BackingField_temp_5);
	int32_t unmarshaled_U3CHeightU3Ek__BackingField_temp_6 = 0;
	unmarshaled_U3CHeightU3Ek__BackingField_temp_6 = marshaled.___U3CHeightU3Ek__BackingField_6;
	unmarshaled.set_U3CHeightU3Ek__BackingField_6(unmarshaled_U3CHeightU3Ek__BackingField_temp_6);
	int32_t unmarshaled_U3CFPSU3Ek__BackingField_temp_7 = 0;
	unmarshaled_U3CFPSU3Ek__BackingField_temp_7 = marshaled.___U3CFPSU3Ek__BackingField_7;
	unmarshaled.set_U3CFPSU3Ek__BackingField_7(unmarshaled_U3CFPSU3Ek__BackingField_temp_7);
	int32_t unmarshaled_U3CKeyFrameIntU3Ek__BackingField_temp_8 = 0;
	unmarshaled_U3CKeyFrameIntU3Ek__BackingField_temp_8 = marshaled.___U3CKeyFrameIntU3Ek__BackingField_8;
	unmarshaled.set_U3CKeyFrameIntU3Ek__BackingField_8(unmarshaled_U3CKeyFrameIntU3Ek__BackingField_temp_8);
	if (marshaled.___U3CUserDataU3Ek__BackingField_9 != NULL)
	{
		unmarshaled.set_U3CUserDataU3Ek__BackingField_9(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___U3CUserDataU3Ek__BackingField_9, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_U3CUserDataU3Ek__BackingField_9()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get_U3CUserDataU3Ek__BackingField_9()), Il2CppIUnknown::IID, marshaled.___U3CUserDataU3Ek__BackingField_9);
		}
	}
	else
	{
		unmarshaled.set_U3CUserDataU3Ek__BackingField_9(NULL);
	}
}
// Conversion method for clean up from marshalling of: Photon.Voice.VoiceInfo
IL2CPP_EXTERN_C void VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740_marshal_com_cleanup(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740_marshaled_com& marshaled)
{
	if (marshaled.___U3CUserDataU3Ek__BackingField_9 != NULL)
	{
		(marshaled.___U3CUserDataU3Ek__BackingField_9)->Release();
		marshaled.___U3CUserDataU3Ek__BackingField_9 = NULL;
	}
}
// Photon.Voice.VoiceInfo Photon.Voice.VoiceInfo::CreateAudioOpus(POpusCodec.Enums.SamplingRate,System.Int32,Photon.Voice.OpusCodec_FrameDuration,System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  VoiceInfo_CreateAudioOpus_mF54D754603AA09E1C03CB3652ED5E6FA16FCB67D (int32_t ___samplingRate0, int32_t ___channels1, int32_t ___frameDurationUs2, int32_t ___bitrate3, RuntimeObject * ___userdata4, const RuntimeMethod* method)
{
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  V_0;
	memset((&V_0), 0, sizeof(V_0));
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return new VoiceInfo()
		// {
		//     Codec = Codec.AudioOpus,
		//     SamplingRate = (int)samplingRate,
		//     Channels = channels,
		//     FrameDurationUs = (int)frameDurationUs,
		//     Bitrate = bitrate,
		//     UserData = userdata
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 ));
		VoiceInfo_set_Codec_mE2F6EF39D929159A040E7D54A3D1F0F6E5193D60_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)(&V_0), ((int32_t)11), /*hidden argument*/NULL);
		int32_t L_0 = ___samplingRate0;
		VoiceInfo_set_SamplingRate_mFD9A827BF89AEE753031B4E9989450B610D38ED7_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)(&V_0), L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___channels1;
		VoiceInfo_set_Channels_m1D24F473872C247719FCDF25BFC069560C2A7119_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)(&V_0), L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___frameDurationUs2;
		VoiceInfo_set_FrameDurationUs_mED9CBABB82E4C4E9C2D8B3E0DEC3DEF9A1F77E50_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)(&V_0), L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___bitrate3;
		VoiceInfo_set_Bitrate_m33B8EAAEB3F83BA8F32AA8E4D6691DF3B881E983_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)(&V_0), L_3, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___userdata4;
		VoiceInfo_set_UserData_m2A0E95B290393D7D38CBDCBE17899BDCE7DD9674_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)(&V_0), L_4, /*hidden argument*/NULL);
		VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  L_5 = V_0;
		V_1 = L_5;
		goto IL_0045;
	}

IL_0045:
	{
		// }
		VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  L_6 = V_1;
		return L_6;
	}
}
// Photon.Voice.VoiceInfo Photon.Voice.VoiceInfo::CreateAudio(Photon.Voice.Codec,System.Int32,System.Int32,System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  VoiceInfo_CreateAudio_m45D6258F4C2CA763779B8CC62979F56E9609A8D6 (int32_t ___codec0, int32_t ___samplingRate1, int32_t ___channels2, int32_t ___frameDurationUs3, RuntimeObject * ___userdata4, const RuntimeMethod* method)
{
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  V_0;
	memset((&V_0), 0, sizeof(V_0));
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return new VoiceInfo()
		// {
		//     Codec = codec,
		//     SamplingRate = (int)samplingRate,
		//     Channels = channels,
		//     FrameDurationUs = (int)frameDurationUs,
		//     UserData = userdata
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 ));
		int32_t L_0 = ___codec0;
		VoiceInfo_set_Codec_mE2F6EF39D929159A040E7D54A3D1F0F6E5193D60_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)(&V_0), L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___samplingRate1;
		VoiceInfo_set_SamplingRate_mFD9A827BF89AEE753031B4E9989450B610D38ED7_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)(&V_0), L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___channels2;
		VoiceInfo_set_Channels_m1D24F473872C247719FCDF25BFC069560C2A7119_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)(&V_0), L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___frameDurationUs3;
		VoiceInfo_set_FrameDurationUs_mED9CBABB82E4C4E9C2D8B3E0DEC3DEF9A1F77E50_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)(&V_0), L_3, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___userdata4;
		VoiceInfo_set_UserData_m2A0E95B290393D7D38CBDCBE17899BDCE7DD9674_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)(&V_0), L_4, /*hidden argument*/NULL);
		VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  L_5 = V_0;
		V_1 = L_5;
		goto IL_003b;
	}

IL_003b:
	{
		// }
		VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  L_6 = V_1;
		return L_6;
	}
}
// System.String Photon.Voice.VoiceInfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VoiceInfo_ToString_m83A234C40AF2AFF955ABD69DE7F49A5E3C52F72C (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VoiceInfo_ToString_m83A234C40AF2AFF955ABD69DE7F49A5E3C52F72C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return "c=" + Codec + " f=" + SamplingRate + " ch=" + Channels + " d=" + FrameDurationUs + " s=" + FrameSize + " b=" + Bitrate + " w=" + Width + " h=" + Height + " fps=" + FPS + " kfi=" + KeyFrameInt + " ud=" + UserData;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)22));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralDE65E3610887956DB5708A5C24B397A4EDA96C7E);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralDE65E3610887956DB5708A5C24B397A4EDA96C7E);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		int32_t L_3 = VoiceInfo_get_Codec_m75D36C2F23671F6E2236A7E86F32B5C645F98268_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Codec_tD177CC2C38203F5AB2E612E0E36F2DA1CB222D0C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1133E4375ABCDBD942AB590E80C672D594E11E9D);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral1133E4375ABCDBD942AB590E80C672D594E11E9D);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_6;
		int32_t L_8 = VoiceInfo_get_SamplingRate_m9D617B430547DE230A31AD21379D7E823C144832_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)__this, /*hidden argument*/NULL);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_7;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralE576926A40B4C1EDEFCAA5878CC5DA99FBAA5B0C);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralE576926A40B4C1EDEFCAA5878CC5DA99FBAA5B0C);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_11;
		int32_t L_13 = VoiceInfo_get_Channels_m54796F2353DE7853164099D9E2B9F2C4D245B6ED_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_15);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = L_12;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralCC732911121A99D16F7B4E395735F6B301DDA6DE);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteralCC732911121A99D16F7B4E395735F6B301DDA6DE);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_16;
		int32_t L_18 = VoiceInfo_get_FrameDurationUs_mFD847A0412A4F679882877FC30F5CFDDD5AEB45C_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)__this, /*hidden argument*/NULL);
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_20);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = L_17;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralA4B530CCBC40E0046638CFE2E77A5BAB794C3B8F);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)_stringLiteralA4B530CCBC40E0046638CFE2E77A5BAB794C3B8F);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = L_21;
		int32_t L_23 = VoiceInfo_get_FrameSize_m8999A370968B57CA3AB12F1067500069A1483209((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)__this, /*hidden argument*/NULL);
		int32_t L_24 = L_23;
		RuntimeObject * L_25 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_25);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = L_22;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteralB1E2758CE468BBC76AFC68D064BBED850561F0FC);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject *)_stringLiteralB1E2758CE468BBC76AFC68D064BBED850561F0FC);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_27 = L_26;
		int32_t L_28 = VoiceInfo_get_Bitrate_mD7CE0F9D49F705629F35ACAAFD94B94FEA93EC10_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)__this, /*hidden argument*/NULL);
		int32_t L_29 = L_28;
		RuntimeObject * L_30 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject *)L_30);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_31 = L_27;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteralC5D6EB9D023E3D0AD6A5CE66E23D9D799588B02F);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject *)_stringLiteralC5D6EB9D023E3D0AD6A5CE66E23D9D799588B02F);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_32 = L_31;
		int32_t L_33 = VoiceInfo_get_Width_mA885EAB6AF205DD4FF02D227E34095AFFD16BAA7_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)__this, /*hidden argument*/NULL);
		int32_t L_34 = L_33;
		RuntimeObject * L_35 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (RuntimeObject *)L_35);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_36 = L_32;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteralA1A08CE86D8A2AF150E903536E8229B24F185D5F);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (RuntimeObject *)_stringLiteralA1A08CE86D8A2AF150E903536E8229B24F185D5F);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_37 = L_36;
		int32_t L_38 = VoiceInfo_get_Height_mC24A2C9366949E6DA1CD41B034068A676BE9D9C8_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)__this, /*hidden argument*/NULL);
		int32_t L_39 = L_38;
		RuntimeObject * L_40 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_40);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (RuntimeObject *)L_40);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_41 = L_37;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, _stringLiteral9528931236125C82D28B276D4ADB03399050D743);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (RuntimeObject *)_stringLiteral9528931236125C82D28B276D4ADB03399050D743);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_42 = L_41;
		int32_t L_43 = VoiceInfo_get_FPS_m7F99240ED4764ACD0A43C3F054F425BD304B62DB_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)__this, /*hidden argument*/NULL);
		int32_t L_44 = L_43;
		RuntimeObject * L_45 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_45);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (RuntimeObject *)L_45);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_46 = L_42;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, _stringLiteral342FE9D5EE8B2C39D5F136A27F9E58EB4A8F4DAF);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (RuntimeObject *)_stringLiteral342FE9D5EE8B2C39D5F136A27F9E58EB4A8F4DAF);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_47 = L_46;
		int32_t L_48 = VoiceInfo_get_KeyFrameInt_m6208E1FF83FF48C217AE13E35E2939EB832BAA93_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)__this, /*hidden argument*/NULL);
		int32_t L_49 = L_48;
		RuntimeObject * L_50 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_49);
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_50);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (RuntimeObject *)L_50);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_51 = L_47;
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, _stringLiteral7B0A5966A88414D3790BB8E2B29E110B6BFD049C);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (RuntimeObject *)_stringLiteral7B0A5966A88414D3790BB8E2B29E110B6BFD049C);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_52 = L_51;
		RuntimeObject * L_53 = VoiceInfo_get_UserData_m47264239C6EFD622B9B403448D956EC29743C460_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)__this, /*hidden argument*/NULL);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_53);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (RuntimeObject *)L_53);
		String_t* L_54 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_52, /*hidden argument*/NULL);
		V_0 = L_54;
		goto IL_010a;
	}

IL_010a:
	{
		// }
		String_t* L_55 = V_0;
		return L_55;
	}
}
IL2CPP_EXTERN_C  String_t* VoiceInfo_ToString_m83A234C40AF2AFF955ABD69DE7F49A5E3C52F72C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * _thisAdjusted = reinterpret_cast<VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *>(__this + _offset);
	return VoiceInfo_ToString_m83A234C40AF2AFF955ABD69DE7F49A5E3C52F72C(_thisAdjusted, method);
}
// Photon.Voice.Codec Photon.Voice.VoiceInfo::get_Codec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_Codec_m75D36C2F23671F6E2236A7E86F32B5C645F98268 (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method)
{
	{
		// public Codec Codec { get; set; }
		int32_t L_0 = __this->get_U3CCodecU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t VoiceInfo_get_Codec_m75D36C2F23671F6E2236A7E86F32B5C645F98268_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * _thisAdjusted = reinterpret_cast<VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *>(__this + _offset);
	return VoiceInfo_get_Codec_m75D36C2F23671F6E2236A7E86F32B5C645F98268_inline(_thisAdjusted, method);
}
// System.Void Photon.Voice.VoiceInfo::set_Codec(Photon.Voice.Codec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceInfo_set_Codec_mE2F6EF39D929159A040E7D54A3D1F0F6E5193D60 (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public Codec Codec { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CCodecU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void VoiceInfo_set_Codec_mE2F6EF39D929159A040E7D54A3D1F0F6E5193D60_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * _thisAdjusted = reinterpret_cast<VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *>(__this + _offset);
	VoiceInfo_set_Codec_mE2F6EF39D929159A040E7D54A3D1F0F6E5193D60_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 Photon.Voice.VoiceInfo::get_SamplingRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_SamplingRate_m9D617B430547DE230A31AD21379D7E823C144832 (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method)
{
	{
		// public int SamplingRate { get; set; }
		int32_t L_0 = __this->get_U3CSamplingRateU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t VoiceInfo_get_SamplingRate_m9D617B430547DE230A31AD21379D7E823C144832_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * _thisAdjusted = reinterpret_cast<VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *>(__this + _offset);
	return VoiceInfo_get_SamplingRate_m9D617B430547DE230A31AD21379D7E823C144832_inline(_thisAdjusted, method);
}
// System.Void Photon.Voice.VoiceInfo::set_SamplingRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceInfo_set_SamplingRate_mFD9A827BF89AEE753031B4E9989450B610D38ED7 (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int SamplingRate { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CSamplingRateU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void VoiceInfo_set_SamplingRate_mFD9A827BF89AEE753031B4E9989450B610D38ED7_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * _thisAdjusted = reinterpret_cast<VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *>(__this + _offset);
	VoiceInfo_set_SamplingRate_mFD9A827BF89AEE753031B4E9989450B610D38ED7_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 Photon.Voice.VoiceInfo::get_Channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_Channels_m54796F2353DE7853164099D9E2B9F2C4D245B6ED (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method)
{
	{
		// public int Channels { get; set; }
		int32_t L_0 = __this->get_U3CChannelsU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t VoiceInfo_get_Channels_m54796F2353DE7853164099D9E2B9F2C4D245B6ED_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * _thisAdjusted = reinterpret_cast<VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *>(__this + _offset);
	return VoiceInfo_get_Channels_m54796F2353DE7853164099D9E2B9F2C4D245B6ED_inline(_thisAdjusted, method);
}
// System.Void Photon.Voice.VoiceInfo::set_Channels(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceInfo_set_Channels_m1D24F473872C247719FCDF25BFC069560C2A7119 (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Channels { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CChannelsU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void VoiceInfo_set_Channels_m1D24F473872C247719FCDF25BFC069560C2A7119_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * _thisAdjusted = reinterpret_cast<VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *>(__this + _offset);
	VoiceInfo_set_Channels_m1D24F473872C247719FCDF25BFC069560C2A7119_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 Photon.Voice.VoiceInfo::get_FrameDurationUs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_FrameDurationUs_mFD847A0412A4F679882877FC30F5CFDDD5AEB45C (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method)
{
	{
		// public int FrameDurationUs { get; set; }
		int32_t L_0 = __this->get_U3CFrameDurationUsU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t VoiceInfo_get_FrameDurationUs_mFD847A0412A4F679882877FC30F5CFDDD5AEB45C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * _thisAdjusted = reinterpret_cast<VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *>(__this + _offset);
	return VoiceInfo_get_FrameDurationUs_mFD847A0412A4F679882877FC30F5CFDDD5AEB45C_inline(_thisAdjusted, method);
}
// System.Void Photon.Voice.VoiceInfo::set_FrameDurationUs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceInfo_set_FrameDurationUs_mED9CBABB82E4C4E9C2D8B3E0DEC3DEF9A1F77E50 (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int FrameDurationUs { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CFrameDurationUsU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void VoiceInfo_set_FrameDurationUs_mED9CBABB82E4C4E9C2D8B3E0DEC3DEF9A1F77E50_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * _thisAdjusted = reinterpret_cast<VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *>(__this + _offset);
	VoiceInfo_set_FrameDurationUs_mED9CBABB82E4C4E9C2D8B3E0DEC3DEF9A1F77E50_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 Photon.Voice.VoiceInfo::get_Bitrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_Bitrate_mD7CE0F9D49F705629F35ACAAFD94B94FEA93EC10 (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method)
{
	{
		// public int Bitrate { get; set; }
		int32_t L_0 = __this->get_U3CBitrateU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t VoiceInfo_get_Bitrate_mD7CE0F9D49F705629F35ACAAFD94B94FEA93EC10_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * _thisAdjusted = reinterpret_cast<VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *>(__this + _offset);
	return VoiceInfo_get_Bitrate_mD7CE0F9D49F705629F35ACAAFD94B94FEA93EC10_inline(_thisAdjusted, method);
}
// System.Void Photon.Voice.VoiceInfo::set_Bitrate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceInfo_set_Bitrate_m33B8EAAEB3F83BA8F32AA8E4D6691DF3B881E983 (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Bitrate { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CBitrateU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void VoiceInfo_set_Bitrate_m33B8EAAEB3F83BA8F32AA8E4D6691DF3B881E983_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * _thisAdjusted = reinterpret_cast<VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *>(__this + _offset);
	VoiceInfo_set_Bitrate_m33B8EAAEB3F83BA8F32AA8E4D6691DF3B881E983_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 Photon.Voice.VoiceInfo::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_Width_mA885EAB6AF205DD4FF02D227E34095AFFD16BAA7 (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method)
{
	{
		// public int Width { get; set; }
		int32_t L_0 = __this->get_U3CWidthU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t VoiceInfo_get_Width_mA885EAB6AF205DD4FF02D227E34095AFFD16BAA7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * _thisAdjusted = reinterpret_cast<VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *>(__this + _offset);
	return VoiceInfo_get_Width_mA885EAB6AF205DD4FF02D227E34095AFFD16BAA7_inline(_thisAdjusted, method);
}
// System.Void Photon.Voice.VoiceInfo::set_Width(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceInfo_set_Width_mB5EE2D104B7413416F84EECB9E9E1BDFC91DBC88 (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Width { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CWidthU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void VoiceInfo_set_Width_mB5EE2D104B7413416F84EECB9E9E1BDFC91DBC88_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * _thisAdjusted = reinterpret_cast<VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *>(__this + _offset);
	VoiceInfo_set_Width_mB5EE2D104B7413416F84EECB9E9E1BDFC91DBC88_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 Photon.Voice.VoiceInfo::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_Height_mC24A2C9366949E6DA1CD41B034068A676BE9D9C8 (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method)
{
	{
		// public int Height { get; set; }
		int32_t L_0 = __this->get_U3CHeightU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t VoiceInfo_get_Height_mC24A2C9366949E6DA1CD41B034068A676BE9D9C8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * _thisAdjusted = reinterpret_cast<VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *>(__this + _offset);
	return VoiceInfo_get_Height_mC24A2C9366949E6DA1CD41B034068A676BE9D9C8_inline(_thisAdjusted, method);
}
// System.Void Photon.Voice.VoiceInfo::set_Height(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceInfo_set_Height_m834A6A637AEFADF9531E2C47BBEB683C77FBF9A5 (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Height { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CHeightU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void VoiceInfo_set_Height_m834A6A637AEFADF9531E2C47BBEB683C77FBF9A5_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * _thisAdjusted = reinterpret_cast<VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *>(__this + _offset);
	VoiceInfo_set_Height_m834A6A637AEFADF9531E2C47BBEB683C77FBF9A5_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 Photon.Voice.VoiceInfo::get_FPS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_FPS_m7F99240ED4764ACD0A43C3F054F425BD304B62DB (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method)
{
	{
		// public int FPS { get; set; }
		int32_t L_0 = __this->get_U3CFPSU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t VoiceInfo_get_FPS_m7F99240ED4764ACD0A43C3F054F425BD304B62DB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * _thisAdjusted = reinterpret_cast<VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *>(__this + _offset);
	return VoiceInfo_get_FPS_m7F99240ED4764ACD0A43C3F054F425BD304B62DB_inline(_thisAdjusted, method);
}
// System.Void Photon.Voice.VoiceInfo::set_FPS(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceInfo_set_FPS_mE44747AC77FE9492A1122BA07CFD1AAEEBF6BEE0 (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int FPS { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CFPSU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void VoiceInfo_set_FPS_mE44747AC77FE9492A1122BA07CFD1AAEEBF6BEE0_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * _thisAdjusted = reinterpret_cast<VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *>(__this + _offset);
	VoiceInfo_set_FPS_mE44747AC77FE9492A1122BA07CFD1AAEEBF6BEE0_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 Photon.Voice.VoiceInfo::get_KeyFrameInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_KeyFrameInt_m6208E1FF83FF48C217AE13E35E2939EB832BAA93 (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method)
{
	{
		// public int KeyFrameInt { get; set; }
		int32_t L_0 = __this->get_U3CKeyFrameIntU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t VoiceInfo_get_KeyFrameInt_m6208E1FF83FF48C217AE13E35E2939EB832BAA93_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * _thisAdjusted = reinterpret_cast<VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *>(__this + _offset);
	return VoiceInfo_get_KeyFrameInt_m6208E1FF83FF48C217AE13E35E2939EB832BAA93_inline(_thisAdjusted, method);
}
// System.Void Photon.Voice.VoiceInfo::set_KeyFrameInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceInfo_set_KeyFrameInt_m9D40D6580068B64286558C71CC0D80A2D76FD9C3 (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int KeyFrameInt { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CKeyFrameIntU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void VoiceInfo_set_KeyFrameInt_m9D40D6580068B64286558C71CC0D80A2D76FD9C3_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * _thisAdjusted = reinterpret_cast<VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *>(__this + _offset);
	VoiceInfo_set_KeyFrameInt_m9D40D6580068B64286558C71CC0D80A2D76FD9C3_inline(_thisAdjusted, ___value0, method);
}
// System.Object Photon.Voice.VoiceInfo::get_UserData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VoiceInfo_get_UserData_m47264239C6EFD622B9B403448D956EC29743C460 (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method)
{
	{
		// public object UserData { get; set; }
		RuntimeObject * L_0 = __this->get_U3CUserDataU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * VoiceInfo_get_UserData_m47264239C6EFD622B9B403448D956EC29743C460_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * _thisAdjusted = reinterpret_cast<VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *>(__this + _offset);
	return VoiceInfo_get_UserData_m47264239C6EFD622B9B403448D956EC29743C460_inline(_thisAdjusted, method);
}
// System.Void Photon.Voice.VoiceInfo::set_UserData(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceInfo_set_UserData_m2A0E95B290393D7D38CBDCBE17899BDCE7DD9674 (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public object UserData { get; set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CUserDataU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void VoiceInfo_set_UserData_m2A0E95B290393D7D38CBDCBE17899BDCE7DD9674_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * _thisAdjusted = reinterpret_cast<VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *>(__this + _offset);
	VoiceInfo_set_UserData_m2A0E95B290393D7D38CBDCBE17899BDCE7DD9674_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 Photon.Voice.VoiceInfo::get_FrameDurationSamples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_FrameDurationSamples_mA40D7D1A45DD7104BCF1B82B11E3775D882EA2E1 (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public int FrameDurationSamples { get { return (int)(this.SamplingRate * (long)this.FrameDurationUs / 1000000); } }
		int32_t L_0 = VoiceInfo_get_SamplingRate_m9D617B430547DE230A31AD21379D7E823C144832_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)__this, /*hidden argument*/NULL);
		int32_t L_1 = VoiceInfo_get_FrameDurationUs_mFD847A0412A4F679882877FC30F5CFDDD5AEB45C_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)__this, /*hidden argument*/NULL);
		V_0 = (((int32_t)((int32_t)((int64_t)((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_0))), (int64_t)(((int64_t)((int64_t)L_1)))))/(int64_t)(((int64_t)((int64_t)((int32_t)1000000)))))))));
		goto IL_001b;
	}

IL_001b:
	{
		// public int FrameDurationSamples { get { return (int)(this.SamplingRate * (long)this.FrameDurationUs / 1000000); } }
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t VoiceInfo_get_FrameDurationSamples_mA40D7D1A45DD7104BCF1B82B11E3775D882EA2E1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * _thisAdjusted = reinterpret_cast<VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *>(__this + _offset);
	return VoiceInfo_get_FrameDurationSamples_mA40D7D1A45DD7104BCF1B82B11E3775D882EA2E1(_thisAdjusted, method);
}
// System.Int32 Photon.Voice.VoiceInfo::get_FrameSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_FrameSize_m8999A370968B57CA3AB12F1067500069A1483209 (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public int FrameSize { get { return this.FrameDurationSamples * this.Channels; } }
		int32_t L_0 = VoiceInfo_get_FrameDurationSamples_mA40D7D1A45DD7104BCF1B82B11E3775D882EA2E1((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)__this, /*hidden argument*/NULL);
		int32_t L_1 = VoiceInfo_get_Channels_m54796F2353DE7853164099D9E2B9F2C4D245B6ED_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1));
		goto IL_0011;
	}

IL_0011:
	{
		// public int FrameSize { get { return this.FrameDurationSamples * this.Channels; } }
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t VoiceInfo_get_FrameSize_m8999A370968B57CA3AB12F1067500069A1483209_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * _thisAdjusted = reinterpret_cast<VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *>(__this + _offset);
	return VoiceInfo_get_FrameSize_m8999A370968B57CA3AB12F1067500069A1483209(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL webrtc_audio_processor_create(int32_t, int32_t, int32_t, int32_t, int32_t);
#endif
// System.IntPtr Photon.Voice.WebRTCAudioLib::webrtc_audio_processor_create(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WebRTCAudioLib_webrtc_audio_processor_create_mD49D60638BADDA1ACD1B83A10DE0A5CF2CC4EFBD (int32_t ___samplingRate0, int32_t ___channels1, int32_t ___frameSize2, int32_t ___revSamplingRate3, int32_t ___revChannels4, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (int32_t, int32_t, int32_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc-audio"), "webrtc_audio_processor_create", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(webrtc_audio_processor_create)(___samplingRate0, ___channels1, ___frameSize2, ___revSamplingRate3, ___revChannels4);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___samplingRate0, ___channels1, ___frameSize2, ___revSamplingRate3, ___revChannels4);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL webrtc_audio_processor_init(intptr_t);
#endif
// System.Int32 Photon.Voice.WebRTCAudioLib::webrtc_audio_processor_init(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRTCAudioLib_webrtc_audio_processor_init_m9127C594502D09AE236B1BC363CDE94F954076C4 (intptr_t ___proc0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc-audio"), "webrtc_audio_processor_init", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(webrtc_audio_processor_init)(___proc0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___proc0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL webrtc_audio_processor_set_param(intptr_t, int32_t, int32_t);
#endif
// System.Int32 Photon.Voice.WebRTCAudioLib::webrtc_audio_processor_set_param(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRTCAudioLib_webrtc_audio_processor_set_param_m805534FCA93A6714F0F99F00A81EA966B453F8C9 (intptr_t ___proc0, int32_t ___param1, int32_t ___v2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc-audio"), "webrtc_audio_processor_set_param", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(webrtc_audio_processor_set_param)(___proc0, ___param1, ___v2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___proc0, ___param1, ___v2);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL webrtc_audio_processor_process(intptr_t, int16_t*, int32_t, int32_t*);
#endif
// System.Int32 Photon.Voice.WebRTCAudioLib::webrtc_audio_processor_process(System.IntPtr,System.Int16[],System.Int32,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRTCAudioLib_webrtc_audio_processor_process_mBAF14A4F31EDDC8E254A2A976377B577286A8858 (intptr_t ___proc0, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___buffer1, int32_t ___offset2, bool* ___voiceDetected3, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int16_t*, int32_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc-audio"), "webrtc_audio_processor_process", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___buffer1' to native representation
	int16_t* ____buffer1_marshaled = NULL;
	if (___buffer1 != NULL)
	{
		____buffer1_marshaled = reinterpret_cast<int16_t*>((___buffer1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___voiceDetected3' to native representation
	int32_t ____voiceDetected3_empty = 0;
	int32_t* ____voiceDetected3_marshaled = &____voiceDetected3_empty;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(webrtc_audio_processor_process)(___proc0, ____buffer1_marshaled, ___offset2, ____voiceDetected3_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___proc0, ____buffer1_marshaled, ___offset2, ____voiceDetected3_marshaled);
	#endif

	// Marshaling of parameter '___voiceDetected3' back from native representation
	bool _____voiceDetected3_marshaled_unmarshaled_dereferenced = false;
	_____voiceDetected3_marshaled_unmarshaled_dereferenced = static_cast<bool>(*____voiceDetected3_marshaled);
	*___voiceDetected3 = _____voiceDetected3_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL webrtc_audio_processor_process_reverse(intptr_t, int16_t*, int32_t);
#endif
// System.Int32 Photon.Voice.WebRTCAudioLib::webrtc_audio_processor_process_reverse(System.IntPtr,System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRTCAudioLib_webrtc_audio_processor_process_reverse_m736FE6AB282F19A0FA3C8CB6FF81524DF278B886 (intptr_t ___proc0, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___buffer1, int32_t ___bufferSize2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, int16_t*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc-audio"), "webrtc_audio_processor_process_reverse", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___buffer1' to native representation
	int16_t* ____buffer1_marshaled = NULL;
	if (___buffer1 != NULL)
	{
		____buffer1_marshaled = reinterpret_cast<int16_t*>((___buffer1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(webrtc_audio_processor_process_reverse)(___proc0, ____buffer1_marshaled, ___bufferSize2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___proc0, ____buffer1_marshaled, ___bufferSize2);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void CDECL webrtc_audio_processor_destroy(intptr_t);
#endif
// System.Void Photon.Voice.WebRTCAudioLib::webrtc_audio_processor_destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioLib_webrtc_audio_processor_destroy_m8463BA01FBDF672DDA44CC4DA2C372BD4A2BB391 (intptr_t ___proc0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc-audio"), "webrtc_audio_processor_destroy", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(webrtc_audio_processor_destroy)(___proc0);
	#else
	il2cppPInvokeFunc(___proc0);
	#endif

}
// System.Void Photon.Voice.WebRTCAudioLib::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioLib__ctor_mFC867AE76AB7D9A12ECFC07C7325A0FABB809628 (WebRTCAudioLib_t1E26D463A18D0FCACE38B6CCEDBE9AFDEAEF2A89 * __this, const RuntimeMethod* method)
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
// System.Void Photon.Voice.WebRTCAudioProcessor::set_AECStreamDelayMs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_AECStreamDelayMs_mF8A183FD7A5A4060DC5170E27F2564B7208939B7 (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRTCAudioProcessor_set_AECStreamDelayMs_mF8A183FD7A5A4060DC5170E27F2564B7208939B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// public int AECStreamDelayMs { set { if (reverseStreamDelayMs != value) { reverseStreamDelayMs = value; if (proc != IntPtr.Zero) setParam(Param.REVERSE_STREAM_DELAY_MS, value); } } }
		int32_t L_0 = __this->get_reverseStreamDelayMs_2();
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// public int AECStreamDelayMs { set { if (reverseStreamDelayMs != value) { reverseStreamDelayMs = value; if (proc != IntPtr.Zero) setParam(Param.REVERSE_STREAM_DELAY_MS, value); } } }
		int32_t L_3 = ___value0;
		__this->set_reverseStreamDelayMs_2(L_3);
		// public int AECStreamDelayMs { set { if (reverseStreamDelayMs != value) { reverseStreamDelayMs = value; if (proc != IntPtr.Zero) setParam(Param.REVERSE_STREAM_DELAY_MS, value); } } }
		intptr_t L_4 = __this->get_proc_22();
		bool L_5 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		// public int AECStreamDelayMs { set { if (reverseStreamDelayMs != value) { reverseStreamDelayMs = value; if (proc != IntPtr.Zero) setParam(Param.REVERSE_STREAM_DELAY_MS, value); } } }
		int32_t L_7 = ___value0;
		WebRTCAudioProcessor_setParam_m5C1609843F1640EC9A1B3C01482BD3C3224932E9(__this, 1, L_7, /*hidden argument*/NULL);
	}

IL_0036:
	{
	}

IL_0037:
	{
		// public int AECStreamDelayMs { set { if (reverseStreamDelayMs != value) { reverseStreamDelayMs = value; if (proc != IntPtr.Zero) setParam(Param.REVERSE_STREAM_DELAY_MS, value); } } }
		return;
	}
}
// System.Void Photon.Voice.WebRTCAudioProcessor::set_AEC(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_AEC_mB6E0B6EC6DC70CBF8B59E6E1524EFCC965E480D8 (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRTCAudioProcessor_set_AEC_mB6E0B6EC6DC70CBF8B59E6E1524EFCC965E480D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B4_1 = NULL;
	int32_t G_B3_0 = 0;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B5_2 = NULL;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B8_0 = NULL;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B9_1 = NULL;
	{
		// if (aec != value)
		bool L_0 = __this->get_aec_3();
		bool L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0061;
		}
	}
	{
		// aec = value;
		bool L_3 = ___value0;
		__this->set_aec_3(L_3);
		// InitReverseStream();
		WebRTCAudioProcessor_InitReverseStream_m78FBF4ECCEA760160E948263C7A9941EAB7FB8FE(__this, /*hidden argument*/NULL);
		// if (proc != IntPtr.Zero) setParam(Param.AEC, aec ? 1 : 0);
		intptr_t L_4 = __this->get_proc_22();
		bool L_5 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		// if (proc != IntPtr.Zero) setParam(Param.AEC, aec ? 1 : 0);
		bool L_7 = __this->get_aec_3();
		G_B3_0 = ((int32_t)10);
		G_B3_1 = __this;
		if (L_7)
		{
			G_B4_0 = ((int32_t)10);
			G_B4_1 = __this;
			goto IL_0042;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0043;
	}

IL_0042:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0043:
	{
		NullCheck(G_B5_2);
		WebRTCAudioProcessor_setParam_m5C1609843F1640EC9A1B3C01482BD3C3224932E9(G_B5_2, G_B5_1, G_B5_0, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// aecm = aec ? false : aecm;
		bool L_8 = __this->get_aec_3();
		G_B7_0 = __this;
		if (L_8)
		{
			G_B8_0 = __this;
			goto IL_005a;
		}
	}
	{
		bool L_9 = __this->get_aecm_5();
		G_B9_0 = ((int32_t)(L_9));
		G_B9_1 = G_B7_0;
		goto IL_005b;
	}

IL_005a:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_005b:
	{
		NullCheck(G_B9_1);
		G_B9_1->set_aecm_5((bool)G_B9_0);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.WebRTCAudioProcessor::set_AECHighPass(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_AECHighPass_m1A9F7E7ED3767E8FFA4784442BC7F912BE2B7E69 (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRTCAudioProcessor_set_AECHighPass_m1A9F7E7ED3767E8FFA4784442BC7F912BE2B7E69_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B4_1 = NULL;
	int32_t G_B3_0 = 0;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B5_2 = NULL;
	{
		// public bool AECHighPass { set { if (aecHighPass != value) { aecHighPass = value; if (proc != IntPtr.Zero) setParam(Param.AEC_HIGH_PASS_FILTER, value ? 1 : 0); } } }
		bool L_0 = __this->get_aecHighPass_4();
		bool L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		// public bool AECHighPass { set { if (aecHighPass != value) { aecHighPass = value; if (proc != IntPtr.Zero) setParam(Param.AEC_HIGH_PASS_FILTER, value ? 1 : 0); } } }
		bool L_3 = ___value0;
		__this->set_aecHighPass_4(L_3);
		// public bool AECHighPass { set { if (aecHighPass != value) { aecHighPass = value; if (proc != IntPtr.Zero) setParam(Param.AEC_HIGH_PASS_FILTER, value ? 1 : 0); } } }
		intptr_t L_4 = __this->get_proc_22();
		bool L_5 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// public bool AECHighPass { set { if (aecHighPass != value) { aecHighPass = value; if (proc != IntPtr.Zero) setParam(Param.AEC_HIGH_PASS_FILTER, value ? 1 : 0); } } }
		bool L_7 = ___value0;
		G_B3_0 = ((int32_t)11);
		G_B3_1 = __this;
		if (L_7)
		{
			G_B4_0 = ((int32_t)11);
			G_B4_1 = __this;
			goto IL_0036;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0037;
	}

IL_0036:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0037:
	{
		NullCheck(G_B5_2);
		WebRTCAudioProcessor_setParam_m5C1609843F1640EC9A1B3C01482BD3C3224932E9(G_B5_2, G_B5_1, G_B5_0, /*hidden argument*/NULL);
	}

IL_003d:
	{
	}

IL_003e:
	{
		// public bool AECHighPass { set { if (aecHighPass != value) { aecHighPass = value; if (proc != IntPtr.Zero) setParam(Param.AEC_HIGH_PASS_FILTER, value ? 1 : 0); } } }
		return;
	}
}
// System.Void Photon.Voice.WebRTCAudioProcessor::set_AECMobile(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_AECMobile_mFA2C38993A756AFDB37F36C72CA2049E534DDDD2 (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRTCAudioProcessor_set_AECMobile_mFA2C38993A756AFDB37F36C72CA2049E534DDDD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B4_1 = NULL;
	int32_t G_B3_0 = 0;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B5_2 = NULL;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B8_0 = NULL;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B9_1 = NULL;
	{
		// if (aecm != value)
		bool L_0 = __this->get_aecm_5();
		bool L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0061;
		}
	}
	{
		// aecm = value;
		bool L_3 = ___value0;
		__this->set_aecm_5(L_3);
		// InitReverseStream();
		WebRTCAudioProcessor_InitReverseStream_m78FBF4ECCEA760160E948263C7A9941EAB7FB8FE(__this, /*hidden argument*/NULL);
		// if (proc != IntPtr.Zero) setParam(Param.AECM, aecm ? 1 : 0);
		intptr_t L_4 = __this->get_proc_22();
		bool L_5 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		// if (proc != IntPtr.Zero) setParam(Param.AECM, aecm ? 1 : 0);
		bool L_7 = __this->get_aecm_5();
		G_B3_0 = ((int32_t)20);
		G_B3_1 = __this;
		if (L_7)
		{
			G_B4_0 = ((int32_t)20);
			G_B4_1 = __this;
			goto IL_0042;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0043;
	}

IL_0042:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0043:
	{
		NullCheck(G_B5_2);
		WebRTCAudioProcessor_setParam_m5C1609843F1640EC9A1B3C01482BD3C3224932E9(G_B5_2, G_B5_1, G_B5_0, /*hidden argument*/NULL);
	}

IL_0049:
	{
		// aec = aecm ? false : aec;
		bool L_8 = __this->get_aecm_5();
		G_B7_0 = __this;
		if (L_8)
		{
			G_B8_0 = __this;
			goto IL_005a;
		}
	}
	{
		bool L_9 = __this->get_aec_3();
		G_B9_0 = ((int32_t)(L_9));
		G_B9_1 = G_B7_0;
		goto IL_005b;
	}

IL_005a:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_005b:
	{
		NullCheck(G_B9_1);
		G_B9_1->set_aec_3((bool)G_B9_0);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.WebRTCAudioProcessor::set_HighPass(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_HighPass_mDB5C0FC80430A979F853D88F0A7D27C78425045B (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRTCAudioProcessor_set_HighPass_mDB5C0FC80430A979F853D88F0A7D27C78425045B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B4_1 = NULL;
	int32_t G_B3_0 = 0;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B5_2 = NULL;
	{
		// public bool HighPass { set { if (highPass != value) { highPass = value; if (proc != IntPtr.Zero) setParam(Param.HIGH_PASS_FILTER, value ? 1 : 0); } } }
		bool L_0 = __this->get_highPass_6();
		bool L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		// public bool HighPass { set { if (highPass != value) { highPass = value; if (proc != IntPtr.Zero) setParam(Param.HIGH_PASS_FILTER, value ? 1 : 0); } } }
		bool L_3 = ___value0;
		__this->set_highPass_6(L_3);
		// public bool HighPass { set { if (highPass != value) { highPass = value; if (proc != IntPtr.Zero) setParam(Param.HIGH_PASS_FILTER, value ? 1 : 0); } } }
		intptr_t L_4 = __this->get_proc_22();
		bool L_5 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// public bool HighPass { set { if (highPass != value) { highPass = value; if (proc != IntPtr.Zero) setParam(Param.HIGH_PASS_FILTER, value ? 1 : 0); } } }
		bool L_7 = ___value0;
		G_B3_0 = ((int32_t)31);
		G_B3_1 = __this;
		if (L_7)
		{
			G_B4_0 = ((int32_t)31);
			G_B4_1 = __this;
			goto IL_0036;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0037;
	}

IL_0036:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0037:
	{
		NullCheck(G_B5_2);
		WebRTCAudioProcessor_setParam_m5C1609843F1640EC9A1B3C01482BD3C3224932E9(G_B5_2, G_B5_1, G_B5_0, /*hidden argument*/NULL);
	}

IL_003d:
	{
	}

IL_003e:
	{
		// public bool HighPass { set { if (highPass != value) { highPass = value; if (proc != IntPtr.Zero) setParam(Param.HIGH_PASS_FILTER, value ? 1 : 0); } } }
		return;
	}
}
// System.Void Photon.Voice.WebRTCAudioProcessor::set_NoiseSuppression(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_NoiseSuppression_mD54F08549A8878E95B6E92FEC258D21BFFA99A9D (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRTCAudioProcessor_set_NoiseSuppression_mD54F08549A8878E95B6E92FEC258D21BFFA99A9D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B4_1 = NULL;
	int32_t G_B3_0 = 0;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B5_2 = NULL;
	{
		// public bool NoiseSuppression { set { if (ns != value) { ns = value; if (proc != IntPtr.Zero) setParam(Param.NS, value ? 1 : 0); } } }
		bool L_0 = __this->get_ns_7();
		bool L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		// public bool NoiseSuppression { set { if (ns != value) { ns = value; if (proc != IntPtr.Zero) setParam(Param.NS, value ? 1 : 0); } } }
		bool L_3 = ___value0;
		__this->set_ns_7(L_3);
		// public bool NoiseSuppression { set { if (ns != value) { ns = value; if (proc != IntPtr.Zero) setParam(Param.NS, value ? 1 : 0); } } }
		intptr_t L_4 = __this->get_proc_22();
		bool L_5 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// public bool NoiseSuppression { set { if (ns != value) { ns = value; if (proc != IntPtr.Zero) setParam(Param.NS, value ? 1 : 0); } } }
		bool L_7 = ___value0;
		G_B3_0 = ((int32_t)41);
		G_B3_1 = __this;
		if (L_7)
		{
			G_B4_0 = ((int32_t)41);
			G_B4_1 = __this;
			goto IL_0036;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0037;
	}

IL_0036:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0037:
	{
		NullCheck(G_B5_2);
		WebRTCAudioProcessor_setParam_m5C1609843F1640EC9A1B3C01482BD3C3224932E9(G_B5_2, G_B5_1, G_B5_0, /*hidden argument*/NULL);
	}

IL_003d:
	{
	}

IL_003e:
	{
		// public bool NoiseSuppression { set { if (ns != value) { ns = value; if (proc != IntPtr.Zero) setParam(Param.NS, value ? 1 : 0); } } }
		return;
	}
}
// System.Void Photon.Voice.WebRTCAudioProcessor::set_AGC(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_AGC_m94F321CCC61C28B78E863601BB428D75C6A43520 (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRTCAudioProcessor_set_AGC_m94F321CCC61C28B78E863601BB428D75C6A43520_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B4_1 = NULL;
	int32_t G_B3_0 = 0;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B5_2 = NULL;
	{
		// public bool AGC { set { if (agc != value) { agc = value; if (proc != IntPtr.Zero) setParam(Param.AGC, value ? 1 : 0); } } }
		bool L_0 = __this->get_agc_8();
		bool L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		// public bool AGC { set { if (agc != value) { agc = value; if (proc != IntPtr.Zero) setParam(Param.AGC, value ? 1 : 0); } } }
		bool L_3 = ___value0;
		__this->set_agc_8(L_3);
		// public bool AGC { set { if (agc != value) { agc = value; if (proc != IntPtr.Zero) setParam(Param.AGC, value ? 1 : 0); } } }
		intptr_t L_4 = __this->get_proc_22();
		bool L_5 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// public bool AGC { set { if (agc != value) { agc = value; if (proc != IntPtr.Zero) setParam(Param.AGC, value ? 1 : 0); } } }
		bool L_7 = ___value0;
		G_B3_0 = ((int32_t)51);
		G_B3_1 = __this;
		if (L_7)
		{
			G_B4_0 = ((int32_t)51);
			G_B4_1 = __this;
			goto IL_0036;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0037;
	}

IL_0036:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0037:
	{
		NullCheck(G_B5_2);
		WebRTCAudioProcessor_setParam_m5C1609843F1640EC9A1B3C01482BD3C3224932E9(G_B5_2, G_B5_1, G_B5_0, /*hidden argument*/NULL);
	}

IL_003d:
	{
	}

IL_003e:
	{
		// public bool AGC { set { if (agc != value) { agc = value; if (proc != IntPtr.Zero) setParam(Param.AGC, value ? 1 : 0); } } }
		return;
	}
}
// System.Void Photon.Voice.WebRTCAudioProcessor::set_AGCCompressionGain(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_AGCCompressionGain_m7442CBA872899D5D18F787A080C5401B23BF2638 (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRTCAudioProcessor_set_AGCCompressionGain_m7442CBA872899D5D18F787A080C5401B23BF2638_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	{
		// if (agcCompressionGain != value)
		int32_t L_0 = __this->get_agcCompressionGain_9();
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0070;
		}
	}
	{
		// if (value < 0 || value > 90)
		int32_t L_3 = ___value0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_4 = ___value0;
		G_B4_0 = ((((int32_t)L_4) > ((int32_t)((int32_t)90)))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B4_0 = 1;
	}

IL_001e:
	{
		V_1 = (bool)G_B4_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		// logger.LogError("[PV] WebRTCAudioProcessor: new AGCCompressionGain value {0} not in range [0..90]", value);
		RuntimeObject* L_6 = __this->get_logger_27();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_7;
		int32_t L_9 = ___value0;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
		NullCheck(L_6);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_t1D376534F7B46D24792BF8A70751D4B75719C345_il2cpp_TypeInfo_var, L_6, _stringLiteral43098AF404A40855136AF1D2634F0768E13D8152, L_8);
		goto IL_006f;
	}

IL_0046:
	{
		// agcCompressionGain = value;
		int32_t L_12 = ___value0;
		__this->set_agcCompressionGain_9(L_12);
		// if (proc != IntPtr.Zero)
		intptr_t L_13 = __this->get_proc_22();
		bool L_14 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_13, (intptr_t)(0), /*hidden argument*/NULL);
		V_2 = L_14;
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_006e;
		}
	}
	{
		// setParam(Param.AGC_COMPRESSION_GAIN, value);
		int32_t L_16 = ___value0;
		WebRTCAudioProcessor_setParam_m5C1609843F1640EC9A1B3C01482BD3C3224932E9(__this, ((int32_t)56), L_16, /*hidden argument*/NULL);
	}

IL_006e:
	{
	}

IL_006f:
	{
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.WebRTCAudioProcessor::set_AGCTargetLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_AGCTargetLevel_mB42B872BDF22F82EE772657F80F0556A09869A16 (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRTCAudioProcessor_set_AGCTargetLevel_mB42B872BDF22F82EE772657F80F0556A09869A16_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	{
		// if (agcTargetLevel != value)
		int32_t L_0 = __this->get_agcTargetLevel_10();
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_006e;
		}
	}
	{
		// if (value > 31 || value < 0)
		int32_t L_3 = ___value0;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)31))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_4 = ___value0;
		G_B4_0 = ((((int32_t)L_4) < ((int32_t)0))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B4_0 = 1;
	}

IL_001e:
	{
		V_1 = (bool)G_B4_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		// logger.LogError("[PV] WebRTCAudioProcessor: new AGCTargetLevel value {0} not in range [0..31]", value);
		RuntimeObject* L_6 = __this->get_logger_27();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_7;
		int32_t L_9 = ___value0;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
		NullCheck(L_6);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_t1D376534F7B46D24792BF8A70751D4B75719C345_il2cpp_TypeInfo_var, L_6, _stringLiteralBEB42EFF96DE600339DAD246E1A49AEAC2F9A770, L_8);
		goto IL_006d;
	}

IL_0046:
	{
		// agcTargetLevel = value;
		int32_t L_12 = ___value0;
		__this->set_agcTargetLevel_10(L_12);
		// if (proc != IntPtr.Zero)
		intptr_t L_13 = __this->get_proc_22();
		bool L_14 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_13, (intptr_t)(0), /*hidden argument*/NULL);
		V_2 = L_14;
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_006c;
		}
	}
	{
		// setParam(Param.AGC_TARGET_LEVEL_DBFS, value);
		int32_t L_16 = ___value0;
		WebRTCAudioProcessor_setParam_m5C1609843F1640EC9A1B3C01482BD3C3224932E9(__this, ((int32_t)55), L_16, /*hidden argument*/NULL);
	}

IL_006c:
	{
	}

IL_006d:
	{
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.WebRTCAudioProcessor::set_AGC2(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_AGC2_mBB980A035865D41C8C94473A39A7D6FD97982760 (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRTCAudioProcessor_set_AGC2_mBB980A035865D41C8C94473A39A7D6FD97982760_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B4_1 = NULL;
	int32_t G_B3_0 = 0;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B5_2 = NULL;
	{
		// public bool AGC2 { set { if (agc2 != value) { agc2 = value; if (proc != IntPtr.Zero) setParam(Param.AGC2, value ? 1 : 0); } } }
		bool L_0 = __this->get_agc2_11();
		bool L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		// public bool AGC2 { set { if (agc2 != value) { agc2 = value; if (proc != IntPtr.Zero) setParam(Param.AGC2, value ? 1 : 0); } } }
		bool L_3 = ___value0;
		__this->set_agc2_11(L_3);
		// public bool AGC2 { set { if (agc2 != value) { agc2 = value; if (proc != IntPtr.Zero) setParam(Param.AGC2, value ? 1 : 0); } } }
		intptr_t L_4 = __this->get_proc_22();
		bool L_5 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// public bool AGC2 { set { if (agc2 != value) { agc2 = value; if (proc != IntPtr.Zero) setParam(Param.AGC2, value ? 1 : 0); } } }
		bool L_7 = ___value0;
		G_B3_0 = ((int32_t)71);
		G_B3_1 = __this;
		if (L_7)
		{
			G_B4_0 = ((int32_t)71);
			G_B4_1 = __this;
			goto IL_0036;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0037;
	}

IL_0036:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0037:
	{
		NullCheck(G_B5_2);
		WebRTCAudioProcessor_setParam_m5C1609843F1640EC9A1B3C01482BD3C3224932E9(G_B5_2, G_B5_1, G_B5_0, /*hidden argument*/NULL);
	}

IL_003d:
	{
	}

IL_003e:
	{
		// public bool AGC2 { set { if (agc2 != value) { agc2 = value; if (proc != IntPtr.Zero) setParam(Param.AGC2, value ? 1 : 0); } } }
		return;
	}
}
// System.Void Photon.Voice.WebRTCAudioProcessor::set_VAD(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_VAD_m81F796A653F539E6B3DFC8FEC8C55FA5BC2D157D (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRTCAudioProcessor_set_VAD_m81F796A653F539E6B3DFC8FEC8C55FA5BC2D157D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B4_1 = NULL;
	int32_t G_B3_0 = 0;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * G_B5_2 = NULL;
	{
		// public bool VAD { set { if (vad != value) { vad = value; if (proc != IntPtr.Zero) setParam(Param.VAD, value ? 1 : 0); } } }
		bool L_0 = __this->get_vad_12();
		bool L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		// public bool VAD { set { if (vad != value) { vad = value; if (proc != IntPtr.Zero) setParam(Param.VAD, value ? 1 : 0); } } }
		bool L_3 = ___value0;
		__this->set_vad_12(L_3);
		// public bool VAD { set { if (vad != value) { vad = value; if (proc != IntPtr.Zero) setParam(Param.VAD, value ? 1 : 0); } } }
		intptr_t L_4 = __this->get_proc_22();
		bool L_5 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// public bool VAD { set { if (vad != value) { vad = value; if (proc != IntPtr.Zero) setParam(Param.VAD, value ? 1 : 0); } } }
		bool L_7 = ___value0;
		G_B3_0 = ((int32_t)61);
		G_B3_1 = __this;
		if (L_7)
		{
			G_B4_0 = ((int32_t)61);
			G_B4_1 = __this;
			goto IL_0036;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0037;
	}

IL_0036:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0037:
	{
		NullCheck(G_B5_2);
		WebRTCAudioProcessor_setParam_m5C1609843F1640EC9A1B3C01482BD3C3224932E9(G_B5_2, G_B5_1, G_B5_0, /*hidden argument*/NULL);
	}

IL_003d:
	{
	}

IL_003e:
	{
		// public bool VAD { set { if (vad != value) { vad = value; if (proc != IntPtr.Zero) setParam(Param.VAD, value ? 1 : 0); } } }
		return;
	}
}
// System.Void Photon.Voice.WebRTCAudioProcessor::set_Bypass(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_Bypass_m8587D0FEC885E0825AF99071B621A0DAEE97913E (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRTCAudioProcessor_set_Bypass_m8587D0FEC885E0825AF99071B621A0DAEE97913E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (bypass != value) logger.LogInfo("[PV] WebRTCAudioProcessor: setting bypass=" + value);
		bool L_0 = __this->get_bypass_17();
		bool L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// if (bypass != value) logger.LogInfo("[PV] WebRTCAudioProcessor: setting bypass=" + value);
		RuntimeObject* L_3 = __this->get_logger_27();
		String_t* L_4 = Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301((bool*)(&___value0), /*hidden argument*/NULL);
		String_t* L_5 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralE0B21B636C9DAC9314E35835A40D10ADEBD8F491, L_4, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_3);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_t1D376534F7B46D24792BF8A70751D4B75719C345_il2cpp_TypeInfo_var, L_3, L_5, L_6);
	}

IL_0033:
	{
		// bypass = value;
		bool L_7 = ___value0;
		__this->set_bypass_17(L_7);
		// }
		return;
	}
}
// System.Boolean Photon.Voice.WebRTCAudioProcessor::get_Bypass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRTCAudioProcessor_get_Bypass_m40975EE93F06ADC6937A65533C74A902BAA7398A (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// private get { return bypass; }
		bool L_0 = __this->get_bypass_17();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// private get { return bypass; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Voice.WebRTCAudioProcessor::.ctor(Photon.Voice.ILogger,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor__ctor_m65304840759D8AC2DC7195625043D0D289EEB6FB (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, RuntimeObject* ___logger0, int32_t ___frameSize1, int32_t ___samplingRate2, int32_t ___channels3, int32_t ___reverseSamplingRate4, int32_t ___reverseChannels5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRTCAudioProcessor__ctor_m65304840759D8AC2DC7195625043D0D289EEB6FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		// bool aec = false;
		__this->set_aec_3((bool)0);
		// bool aecHighPass = true;
		__this->set_aecHighPass_4((bool)1);
		// bool aecm = false;
		__this->set_aecm_5((bool)0);
		// bool highPass = false;
		__this->set_highPass_6((bool)0);
		// bool ns = false;
		__this->set_ns_7((bool)0);
		// bool agc = true;
		__this->set_agc_8((bool)1);
		// int agcCompressionGain = 9;
		__this->set_agcCompressionGain_9(((int32_t)9));
		// int agcTargetLevel = 3;
		__this->set_agcTargetLevel_10(3);
		// bool agc2 = false;
		__this->set_agc2_11((bool)0);
		// bool reverseStreamThreadRunning = false;
		__this->set_reverseStreamThreadRunning_13((bool)0);
		// Queue<short[]> reverseStreamQueue = new Queue<short[]>();
		Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C * L_0 = (Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C *)il2cpp_codegen_object_new(Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C_il2cpp_TypeInfo_var);
		Queue_1__ctor_mD71406C9A28EE99DDE07C8FFD0CC458936F23430(L_0, /*hidden argument*/Queue_1__ctor_mD71406C9A28EE99DDE07C8FFD0CC458936F23430_RuntimeMethod_var);
		__this->set_reverseStreamQueue_14(L_0);
		// AutoResetEvent reverseStreamQueueReady = new AutoResetEvent(false);
		AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_1 = (AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 *)il2cpp_codegen_object_new(AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7_il2cpp_TypeInfo_var);
		AutoResetEvent__ctor_m2A6F4D44E005E07021957D5134037747AE9890BE(L_1, (bool)0, /*hidden argument*/NULL);
		__this->set_reverseStreamQueueReady_15(L_1);
		// bool bypass = false;
		__this->set_bypass_17((bool)0);
		// int lastProcessErr = 0;
		__this->set_lastProcessErr_31(0);
		// int lastProcessReverseErr = 0;
		__this->set_lastProcessReverseErr_32(0);
		// public WebRTCAudioProcessor(ILogger logger, int frameSize, int samplingRate, int channels, int reverseSamplingRate, int reverseChannels)
		WebRTCAudioLib__ctor_mFC867AE76AB7D9A12ECFC07C7325A0FABB809628(__this, /*hidden argument*/NULL);
		// bool ok = false;
		V_0 = (bool)0;
		// foreach (var s in SupportedSamplingRates)
		IL2CPP_RUNTIME_CLASS_INIT(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE_il2cpp_TypeInfo_var);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_2 = ((WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE_StaticFields*)il2cpp_codegen_static_fields_for(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE_il2cpp_TypeInfo_var))->get_SupportedSamplingRates_29();
		V_1 = L_2;
		V_2 = 0;
		goto IL_00a1;
	}

IL_0088:
	{
		// foreach (var s in SupportedSamplingRates)
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		// if (samplingRate == s)
		int32_t L_7 = ___samplingRate2;
		int32_t L_8 = V_3;
		V_4 = (bool)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_009c;
		}
	}
	{
		// ok = true;
		V_0 = (bool)1;
		// break;
		goto IL_00a7;
	}

IL_009c:
	{
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_00a1:
	{
		// foreach (var s in SupportedSamplingRates)
		int32_t L_11 = V_2;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))))
		{
			goto IL_0088;
		}
	}

IL_00a7:
	{
		// if (!ok)
		bool L_13 = V_0;
		V_5 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_00d9;
		}
	}
	{
		// logger.LogError("[PV] WebRTCAudioProcessor: input sampling rate ({0}) must be 8000, 16000, 32000 or 48000", samplingRate);
		RuntimeObject* L_15 = ___logger0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_16;
		int32_t L_18 = ___samplingRate2;
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		NullCheck(L_15);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_t1D376534F7B46D24792BF8A70751D4B75719C345_il2cpp_TypeInfo_var, L_15, _stringLiteralE5001DE73850166462BE7E176F72C4A8F9F03E83, L_17);
		// disposed = true;
		__this->set_disposed_23((bool)1);
		// return;
		goto IL_0207;
	}

IL_00d9:
	{
		// this.logger = logger;
		RuntimeObject* L_21 = ___logger0;
		__this->set_logger_27(L_21);
		// this.inFrameSize = frameSize;
		int32_t L_22 = ___frameSize1;
		__this->set_inFrameSize_18(L_22);
		// this.processFrameSize = samplingRate * supportedFrameLenMs / 1000;
		int32_t L_23 = ___samplingRate2;
		__this->set_processFrameSize_19(((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_23, (int32_t)((int32_t)10)))/(int32_t)((int32_t)1000))));
		// if (this.inFrameSize / this.processFrameSize * this.processFrameSize != this.inFrameSize)
		int32_t L_24 = __this->get_inFrameSize_18();
		int32_t L_25 = __this->get_processFrameSize_19();
		int32_t L_26 = __this->get_processFrameSize_19();
		int32_t L_27 = __this->get_inFrameSize_18();
		V_6 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_24/(int32_t)L_25)), (int32_t)L_26))) == ((int32_t)L_27))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_016f;
		}
	}
	{
		// logger.LogError("[PV] WebRTCAudioProcessor: input frame size ({0} samples / {1} ms) must be equal to or N times more than webrtc processing frame size ({2} samples / 10 ms)", this.inFrameSize, 1000f * this.inFrameSize / samplingRate, processFrameSize);
		RuntimeObject* L_29 = ___logger0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_30 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_31 = L_30;
		int32_t L_32 = __this->get_inFrameSize_18();
		int32_t L_33 = L_32;
		RuntimeObject * L_34 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_34);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_34);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_35 = L_31;
		int32_t L_36 = __this->get_inFrameSize_18();
		int32_t L_37 = ___samplingRate2;
		float L_38 = ((float)((float)((float)il2cpp_codegen_multiply((float)(1000.0f), (float)(((float)((float)L_36)))))/(float)(((float)((float)L_37)))));
		RuntimeObject * L_39 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_39);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_39);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_40 = L_35;
		int32_t L_41 = __this->get_processFrameSize_19();
		int32_t L_42 = L_41;
		RuntimeObject * L_43 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_43);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_43);
		NullCheck(L_29);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_t1D376534F7B46D24792BF8A70751D4B75719C345_il2cpp_TypeInfo_var, L_29, _stringLiteral1E4B7A55286AE48B98EE19B33C7E47014369ED39, L_40);
		// disposed = true;
		__this->set_disposed_23((bool)1);
		// return;
		goto IL_0207;
	}

IL_016f:
	{
		// this.samplingRate = samplingRate;
		int32_t L_44 = ___samplingRate2;
		__this->set_samplingRate_20(L_44);
		// this.channels = channels;
		int32_t L_45 = ___channels3;
		__this->set_channels_21(L_45);
		// this.reverseSamplingRate = reverseSamplingRate;
		int32_t L_46 = ___reverseSamplingRate4;
		__this->set_reverseSamplingRate_25(L_46);
		// this.reverseChannels = reverseChannels;
		int32_t L_47 = ___reverseChannels5;
		__this->set_reverseChannels_26(L_47);
		// this.proc = webrtc_audio_processor_create(samplingRate, channels, this.processFrameSize, samplingRate /* reverseSamplingRate to be converted */, reverseChannels);
		int32_t L_48 = ___samplingRate2;
		int32_t L_49 = ___channels3;
		int32_t L_50 = __this->get_processFrameSize_19();
		int32_t L_51 = ___samplingRate2;
		int32_t L_52 = ___reverseChannels5;
		intptr_t L_53 = WebRTCAudioLib_webrtc_audio_processor_create_mD49D60638BADDA1ACD1B83A10DE0A5CF2CC4EFBD(L_48, L_49, L_50, L_51, L_52, /*hidden argument*/NULL);
		__this->set_proc_22((intptr_t)L_53);
		// webrtc_audio_processor_init(this.proc);
		intptr_t L_54 = __this->get_proc_22();
		WebRTCAudioLib_webrtc_audio_processor_init_m9127C594502D09AE236B1BC363CDE94F954076C4((intptr_t)L_54, /*hidden argument*/NULL);
		// logger.LogInfo("[PV] WebRTCAudioProcessor create sampling rate {0}, channels{1}, frame size {2}, frame samples {3}, reverseChannels {4}", samplingRate, channels, this.processFrameSize, this.inFrameSize / this.channels, this.reverseChannels);
		RuntimeObject* L_55 = ___logger0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_56 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_57 = L_56;
		int32_t L_58 = ___samplingRate2;
		int32_t L_59 = L_58;
		RuntimeObject * L_60 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_59);
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_60);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_60);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_61 = L_57;
		int32_t L_62 = ___channels3;
		int32_t L_63 = L_62;
		RuntimeObject * L_64 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_63);
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_64);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_64);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_65 = L_61;
		int32_t L_66 = __this->get_processFrameSize_19();
		int32_t L_67 = L_66;
		RuntimeObject * L_68 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_67);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_68);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_68);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_69 = L_65;
		int32_t L_70 = __this->get_inFrameSize_18();
		int32_t L_71 = __this->get_channels_21();
		int32_t L_72 = ((int32_t)((int32_t)L_70/(int32_t)L_71));
		RuntimeObject * L_73 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_72);
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, L_73);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_73);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_74 = L_69;
		int32_t L_75 = __this->get_reverseChannels_26();
		int32_t L_76 = L_75;
		RuntimeObject * L_77 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_76);
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, L_77);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_77);
		NullCheck(L_55);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_t1D376534F7B46D24792BF8A70751D4B75719C345_il2cpp_TypeInfo_var, L_55, _stringLiteral3B52BDC686C8A120A771C894679FF85E28425030, L_74);
	}

IL_0207:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.WebRTCAudioProcessor::InitReverseStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_InitReverseStream_m78FBF4ECCEA760160E948263C7A9941EAB7FB8FE (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRTCAudioProcessor_InitReverseStream_m78FBF4ECCEA760160E948263C7A9941EAB7FB8FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * V_6 = NULL;
	bool V_7 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0005:
	try
	{ // begin try (depth: 1)
		{
			WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_0 = V_0;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
			// if (!aecInited)
			bool L_1 = __this->get_aecInited_30();
			V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
			bool L_2 = V_2;
			if (!L_2)
			{
				goto IL_013b;
			}
		}

IL_001f:
		{
			// if (disposed)
			bool L_3 = __this->get_disposed_23();
			V_4 = L_3;
			bool L_4 = V_4;
			if (!L_4)
			{
				goto IL_0032;
			}
		}

IL_002c:
		{
			// return;
			IL2CPP_LEAVE(0x149, FINALLY_013e);
		}

IL_0032:
		{
			// int size = processFrameSize * reverseSamplingRate / samplingRate * reverseChannels;
			int32_t L_5 = __this->get_processFrameSize_19();
			int32_t L_6 = __this->get_reverseSamplingRate_25();
			int32_t L_7 = __this->get_samplingRate_20();
			int32_t L_8 = __this->get_reverseChannels_26();
			V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)L_6))/(int32_t)L_7)), (int32_t)L_8));
			// reverseFramer = new Framer<float>(size);
			int32_t L_9 = V_3;
			Framer_1_t9E72DFCCE1F62F49B9F5C9E0574B98EA19BDC847 * L_10 = (Framer_1_t9E72DFCCE1F62F49B9F5C9E0574B98EA19BDC847 *)il2cpp_codegen_object_new(Framer_1_t9E72DFCCE1F62F49B9F5C9E0574B98EA19BDC847_il2cpp_TypeInfo_var);
			Framer_1__ctor_mB44E93DA6F91465BDE36FA57B9CB3D98D4F14CDA(L_10, L_9, /*hidden argument*/Framer_1__ctor_mB44E93DA6F91465BDE36FA57B9CB3D98D4F14CDA_RuntimeMethod_var);
			__this->set_reverseFramer_24(L_10);
			// reverseBufferFactory = new FactoryPrimitiveArrayPool<short>(REVERSE_BUFFER_POOL_CAPACITY, "WebRTCAudioProcessor Reverse Buffers", this.inFrameSize);
			int32_t L_11 = __this->get_inFrameSize_18();
			FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF * L_12 = (FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF *)il2cpp_codegen_object_new(FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF_il2cpp_TypeInfo_var);
			FactoryPrimitiveArrayPool_1__ctor_m8BF2472EF468272ACE5B5F0A48339A3957E97D34(L_12, ((int32_t)50), _stringLiteralEBE6C44F4B0C805E88334B1B1C86EED08285E6D7, L_11, /*hidden argument*/FactoryPrimitiveArrayPool_1__ctor_m8BF2472EF468272ACE5B5F0A48339A3957E97D34_RuntimeMethod_var);
			__this->set_reverseBufferFactory_16(L_12);
			// logger.LogInfo("[PV] WebRTCAudioProcessor Init reverse stream: frame size {0}, reverseSamplingRate {1}, reverseChannels {2}", size, reverseSamplingRate, reverseChannels);
			RuntimeObject* L_13 = __this->get_logger_27();
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_14;
			int32_t L_16 = V_3;
			int32_t L_17 = L_16;
			RuntimeObject * L_18 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_17);
			NullCheck(L_15);
			ArrayElementTypeCheck (L_15, L_18);
			(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_18);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = L_15;
			int32_t L_20 = __this->get_reverseSamplingRate_25();
			int32_t L_21 = L_20;
			RuntimeObject * L_22 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_21);
			NullCheck(L_19);
			ArrayElementTypeCheck (L_19, L_22);
			(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_22);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = L_19;
			int32_t L_24 = __this->get_reverseChannels_26();
			int32_t L_25 = L_24;
			RuntimeObject * L_26 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_25);
			NullCheck(L_23);
			ArrayElementTypeCheck (L_23, L_26);
			(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_26);
			NullCheck(L_13);
			InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_t1D376534F7B46D24792BF8A70751D4B75719C345_il2cpp_TypeInfo_var, L_13, _stringLiteral1D1D20E00F9F5C15C3A3C00E2FBCD1D90D31999C, L_23);
			// if (!reverseStreamThreadRunning)
			bool L_27 = __this->get_reverseStreamThreadRunning_13();
			V_5 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
			bool L_28 = V_5;
			if (!L_28)
			{
				goto IL_00e7;
			}
		}

IL_00bd:
		{
			// var t = new Thread(ReverseStreamThread);
			ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF * L_29 = (ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF *)il2cpp_codegen_object_new(ThreadStart_t09FFA4371E4B2A713F212B157CC9B8B61983B5BF_il2cpp_TypeInfo_var);
			ThreadStart__ctor_m692348FEAEBAF381D62984EE95B217CC024A77D5(L_29, __this, (intptr_t)((intptr_t)WebRTCAudioProcessor_ReverseStreamThread_mB5385F957C0A4B1A31F8746763FFE36D569852C1_RuntimeMethod_var), /*hidden argument*/NULL);
			Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_30 = (Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 *)il2cpp_codegen_object_new(Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7_il2cpp_TypeInfo_var);
			Thread__ctor_m36A33B990160C4499E991D288341CA325AE66DDD(L_30, L_29, /*hidden argument*/NULL);
			V_6 = L_30;
			// t.Start();
			Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_31 = V_6;
			NullCheck(L_31);
			Thread_Start_mE2AC4744AFD147FDC84E8D9317B4E3AB890BC2D6(L_31, /*hidden argument*/NULL);
			// t.Name = "WebRTCAudioProcessor reverse stream";
			Thread_tF60E0A146CD3B5480CB65FF9B6016E84C5460CC7 * L_32 = V_6;
			NullCheck(L_32);
			Thread_set_Name_mEBD0DF20D69C49612949EA6F24E8E4EADB7F5E77(L_32, _stringLiteral1035F51824C7291A85F61C471422D7379DA39454, /*hidden argument*/NULL);
		}

IL_00e7:
		{
			// if (reverseSamplingRate != samplingRate)
			int32_t L_33 = __this->get_reverseSamplingRate_25();
			int32_t L_34 = __this->get_samplingRate_20();
			V_7 = (bool)((((int32_t)((((int32_t)L_33) == ((int32_t)L_34))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_35 = V_7;
			if (!L_35)
			{
				goto IL_0133;
			}
		}

IL_00fe:
		{
			// logger.LogWarning("[PV] WebRTCAudioProcessor AEC: output sampling rate {0} != {1} capture sampling rate. For better AEC, set audio source (microphone) and audio output samping rates to the same value.", reverseSamplingRate, samplingRate);
			RuntimeObject* L_36 = __this->get_logger_27();
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_37 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_38 = L_37;
			int32_t L_39 = __this->get_reverseSamplingRate_25();
			int32_t L_40 = L_39;
			RuntimeObject * L_41 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_40);
			NullCheck(L_38);
			ArrayElementTypeCheck (L_38, L_41);
			(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_41);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_42 = L_38;
			int32_t L_43 = __this->get_samplingRate_20();
			int32_t L_44 = L_43;
			RuntimeObject * L_45 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_44);
			NullCheck(L_42);
			ArrayElementTypeCheck (L_42, L_45);
			(L_42)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_45);
			NullCheck(L_36);
			InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_t1D376534F7B46D24792BF8A70751D4B75719C345_il2cpp_TypeInfo_var, L_36, _stringLiteralC69A4735FB44C982E3D72F243F7F53842D6E503B, L_42);
		}

IL_0133:
		{
			// aecInited = true;
			__this->set_aecInited_30((bool)1);
		}

IL_013b:
		{
			IL2CPP_LEAVE(0x149, FINALLY_013e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_013e;
	}

FINALLY_013e:
	{ // begin finally (depth: 1)
		{
			bool L_46 = V_1;
			if (!L_46)
			{
				goto IL_0148;
			}
		}

IL_0141:
		{
			WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_47 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_47, /*hidden argument*/NULL);
		}

IL_0148:
		{
			IL2CPP_END_FINALLY(318)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(318)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x149, IL_0149)
	}

IL_0149:
	{
		// }
		return;
	}
}
// System.Int16[] Photon.Voice.WebRTCAudioProcessor::Process(System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* WebRTCAudioProcessor_Process_mD833606D163A70328C2641A3494E1C7187B3B255 (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___buf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRTCAudioProcessor_Process_mD833606D163A70328C2641A3494E1C7187B3B255_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B18_0 = 0;
	{
		// if (Bypass) return buf;
		bool L_0 = WebRTCAudioProcessor_get_Bypass_m40975EE93F06ADC6937A65533C74A902BAA7398A(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (Bypass) return buf;
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_2 = ___buf0;
		V_2 = L_2;
		goto IL_0128;
	}

IL_0012:
	{
		// if (disposed) return buf;
		bool L_3 = __this->get_disposed_23();
		V_3 = L_3;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// if (disposed) return buf;
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_5 = ___buf0;
		V_2 = L_5;
		goto IL_0128;
	}

IL_0023:
	{
		// if (proc == IntPtr.Zero) return buf;
		intptr_t L_6 = __this->get_proc_22();
		bool L_7 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_6, (intptr_t)(0), /*hidden argument*/NULL);
		V_4 = L_7;
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		// if (proc == IntPtr.Zero) return buf;
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_9 = ___buf0;
		V_2 = L_9;
		goto IL_0128;
	}

IL_0040:
	{
		// if (buf.Length != this.inFrameSize)
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_10 = ___buf0;
		NullCheck(L_10);
		int32_t L_11 = __this->get_inFrameSize_18();
		V_5 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))) == ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0085;
		}
	}
	{
		// this.logger.LogError("[PV] WebRTCAudioProcessor Process: frame size expected: {0}, passed: {1}", this.inFrameSize, buf);
		RuntimeObject* L_13 = __this->get_logger_27();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_14;
		int32_t L_16 = __this->get_inFrameSize_18();
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_18);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = L_15;
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_20 = ___buf0;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_20);
		NullCheck(L_13);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_t1D376534F7B46D24792BF8A70751D4B75719C345_il2cpp_TypeInfo_var, L_13, _stringLiteralC09B2B6E6179C669C9DCE1EE566E2A47A682DFA7, L_19);
		// return buf;
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_21 = ___buf0;
		V_2 = L_21;
		goto IL_0128;
	}

IL_0085:
	{
		// bool voiceDetected = false;
		V_0 = (bool)0;
		// for (int offset = 0; offset < inFrameSize; offset += processFrameSize)
		V_6 = 0;
		goto IL_00f9;
	}

IL_008c:
	{
		// bool vd = true;
		V_7 = (bool)1;
		// int err = webrtc_audio_processor_process(proc, buf, offset, out vd);
		intptr_t L_22 = __this->get_proc_22();
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_23 = ___buf0;
		int32_t L_24 = V_6;
		int32_t L_25 = WebRTCAudioLib_webrtc_audio_processor_process_mBAF14A4F31EDDC8E254A2A976377B577286A8858((intptr_t)L_22, L_23, L_24, (bool*)(&V_7), /*hidden argument*/NULL);
		V_8 = L_25;
		// if (vd)
		bool L_26 = V_7;
		V_9 = L_26;
		bool L_27 = V_9;
		if (!L_27)
		{
			goto IL_00ac;
		}
	}
	{
		// voiceDetected = true;
		V_0 = (bool)1;
	}

IL_00ac:
	{
		// if (lastProcessErr != err)
		int32_t L_28 = __this->get_lastProcessErr_31();
		int32_t L_29 = V_8;
		V_10 = (bool)((((int32_t)((((int32_t)L_28) == ((int32_t)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_10;
		if (!L_30)
		{
			goto IL_00ed;
		}
	}
	{
		// lastProcessErr = err;
		int32_t L_31 = V_8;
		__this->set_lastProcessErr_31(L_31);
		// this.logger.LogError("[PV] WebRTCAudioProcessor Process: webrtc_audio_processor_process() error {0}", err);
		RuntimeObject* L_32 = __this->get_logger_27();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_33 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_34 = L_33;
		int32_t L_35 = V_8;
		int32_t L_36 = L_35;
		RuntimeObject * L_37 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_37);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_37);
		NullCheck(L_32);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_t1D376534F7B46D24792BF8A70751D4B75719C345_il2cpp_TypeInfo_var, L_32, _stringLiteral0D3F48B826672C0315E426FB8044B0EF887CE290, L_34);
		// return buf;
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_38 = ___buf0;
		V_2 = L_38;
		goto IL_0128;
	}

IL_00ed:
	{
		// for (int offset = 0; offset < inFrameSize; offset += processFrameSize)
		int32_t L_39 = V_6;
		int32_t L_40 = __this->get_processFrameSize_19();
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)L_40));
	}

IL_00f9:
	{
		// for (int offset = 0; offset < inFrameSize; offset += processFrameSize)
		int32_t L_41 = V_6;
		int32_t L_42 = __this->get_inFrameSize_18();
		V_11 = (bool)((((int32_t)L_41) < ((int32_t)L_42))? 1 : 0);
		bool L_43 = V_11;
		if (L_43)
		{
			goto IL_008c;
		}
	}
	{
		// if (vad && !voiceDetected)
		bool L_44 = __this->get_vad_12();
		if (!L_44)
		{
			goto IL_0117;
		}
	}
	{
		bool L_45 = V_0;
		G_B18_0 = ((((int32_t)L_45) == ((int32_t)0))? 1 : 0);
		goto IL_0118;
	}

IL_0117:
	{
		G_B18_0 = 0;
	}

IL_0118:
	{
		V_12 = (bool)G_B18_0;
		bool L_46 = V_12;
		if (!L_46)
		{
			goto IL_0123;
		}
	}
	{
		// return null;
		V_2 = (Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*)NULL;
		goto IL_0128;
	}

IL_0123:
	{
		// return buf;
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_47 = ___buf0;
		V_2 = L_47;
		goto IL_0128;
	}

IL_0128:
	{
		// }
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_48 = V_2;
		return L_48;
	}
}
// System.Void Photon.Voice.WebRTCAudioProcessor::OnAudioOutFrameFloat(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_OnAudioOutFrameFloat_mDA88595564B6F8047BF8863239D3A6C3C11E1105 (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRTCAudioProcessor_OnAudioOutFrameFloat_mDA88595564B6F8047BF8863239D3A6C3C11E1105_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_3 = NULL;
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* V_4 = NULL;
	bool V_5 = false;
	Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (disposed) return;
		bool L_0 = __this->get_disposed_23();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (disposed) return;
		goto IL_0126;
	}

IL_0010:
	{
		// if (proc == IntPtr.Zero) return;
		intptr_t L_2 = __this->get_proc_22();
		bool L_3 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// if (proc == IntPtr.Zero) return;
		goto IL_0126;
	}

IL_0029:
	{
		// foreach (var reverseBufFloat in reverseFramer.Frame(data))
		Framer_1_t9E72DFCCE1F62F49B9F5C9E0574B98EA19BDC847 * L_5 = __this->get_reverseFramer_24();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_6 = ___data0;
		NullCheck(L_5);
		RuntimeObject* L_7 = Framer_1_Frame_m18D4AE6AF9BC39BF578ADC00C24019E6D28CC51C(L_5, L_6, /*hidden argument*/Framer_1_Frame_m18D4AE6AF9BC39BF578ADC00C24019E6D28CC51C_RuntimeMethod_var);
		NullCheck(L_7);
		RuntimeObject* L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Single[]>::GetEnumerator() */, IEnumerable_1_tC2BAE12154B72C377B9AD70CE709436B5FABABEB_il2cpp_TypeInfo_var, L_7);
		V_2 = L_8;
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_010e;
		}

IL_0041:
		{
			// foreach (var reverseBufFloat in reverseFramer.Frame(data))
			RuntimeObject* L_9 = V_2;
			NullCheck(L_9);
			SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_10 = InterfaceFuncInvoker0< SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Single[]>::get_Current() */, IEnumerator_1_t8C9BC05090AF8E2A1A53BC3F98B08B31603E8A85_il2cpp_TypeInfo_var, L_9);
			V_3 = L_10;
			// var reverseBuf = reverseBufferFactory.New();
			FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF * L_11 = __this->get_reverseBufferFactory_16();
			NullCheck(L_11);
			Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_12 = FactoryPrimitiveArrayPool_1_New_m55E13ACEC576100A9A6380E5E200F0EA8E6C4A85(L_11, /*hidden argument*/FactoryPrimitiveArrayPool_1_New_m55E13ACEC576100A9A6380E5E200F0EA8E6C4A85_RuntimeMethod_var);
			V_4 = L_12;
			// if (reverseBufFloat.Length != reverseBuf.Length)
			SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_13 = V_3;
			NullCheck(L_13);
			Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_14 = V_4;
			NullCheck(L_14);
			V_5 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_15 = V_5;
			if (!L_15)
			{
				goto IL_007f;
			}
		}

IL_0068:
		{
			// AudioUtil.ResampleAndConvert(reverseBufFloat, reverseBuf, reverseBuf.Length, this.reverseChannels);
			SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_16 = V_3;
			Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_17 = V_4;
			Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_18 = V_4;
			NullCheck(L_18);
			int32_t L_19 = __this->get_reverseChannels_26();
			AudioUtil_ResampleAndConvert_m0F2DCB855E451CA3A743A9186582DE1957711FAB(L_16, L_17, (((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))), L_19, /*hidden argument*/NULL);
			goto IL_008e;
		}

IL_007f:
		{
			// AudioUtil.Convert(reverseBufFloat, reverseBuf, reverseBuf.Length);
			SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_20 = V_3;
			Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_21 = V_4;
			Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_22 = V_4;
			NullCheck(L_22);
			AudioUtil_Convert_mD9329A97EDC298B5434E80A9DDA8D9935DF2EE7A(L_20, L_21, (((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))), /*hidden argument*/NULL);
		}

IL_008e:
		{
			// lock (reverseStreamQueue)
			Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C * L_23 = __this->get_reverseStreamQueue_14();
			V_6 = L_23;
			V_7 = (bool)0;
		}

IL_0099:
		try
		{ // begin try (depth: 2)
			{
				Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C * L_24 = V_6;
				Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_24, (bool*)(&V_7), /*hidden argument*/NULL);
				// if (reverseStreamQueue.Count < REVERSE_BUFFER_POOL_CAPACITY - 1)
				Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C * L_25 = __this->get_reverseStreamQueue_14();
				NullCheck(L_25);
				int32_t L_26 = Queue_1_get_Count_m14436A3E2747030960ED9C388F570A402777FA7D_inline(L_25, /*hidden argument*/Queue_1_get_Count_m14436A3E2747030960ED9C388F570A402777FA7D_RuntimeMethod_var);
				V_8 = (bool)((((int32_t)L_26) < ((int32_t)((int32_t)49)))? 1 : 0);
				bool L_27 = V_8;
				if (!L_27)
				{
					goto IL_00d7;
				}
			}

IL_00b9:
			{
				// reverseStreamQueue.Enqueue(reverseBuf);
				Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C * L_28 = __this->get_reverseStreamQueue_14();
				Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_29 = V_4;
				NullCheck(L_28);
				Queue_1_Enqueue_m67A298CFA555767E45845FF2C9E441F85EA86CB2(L_28, L_29, /*hidden argument*/Queue_1_Enqueue_m67A298CFA555767E45845FF2C9E441F85EA86CB2_RuntimeMethod_var);
				// reverseStreamQueueReady.Set();
				AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_30 = __this->get_reverseStreamQueueReady_15();
				NullCheck(L_30);
				EventWaitHandle_Set_m7959A86A39735296FC949EC86FDA42A6CFAAB94C(L_30, /*hidden argument*/NULL);
				goto IL_00fd;
			}

IL_00d7:
			{
				// this.logger.LogError("[PV] WebRTCAudioProcessor Reverse stream queue overflow");
				RuntimeObject* L_31 = __this->get_logger_27();
				ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_32 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
				NullCheck(L_31);
				InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_t1D376534F7B46D24792BF8A70751D4B75719C345_il2cpp_TypeInfo_var, L_31, _stringLiteral1EFADD5C561FC41BDB462E41E51E0EEA344F94D4, L_32);
				// this.reverseBufferFactory.Free(reverseBuf);
				FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF * L_33 = __this->get_reverseBufferFactory_16();
				Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_34 = V_4;
				NullCheck(L_33);
				FactoryPrimitiveArrayPool_1_Free_m5C953DE8CD2CBC136E1C8995A04F8325AEA3C01B(L_33, L_34, /*hidden argument*/FactoryPrimitiveArrayPool_1_Free_m5C953DE8CD2CBC136E1C8995A04F8325AEA3C01B_RuntimeMethod_var);
			}

IL_00fd:
			{
				IL2CPP_LEAVE(0x10D, FINALLY_0100);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0100;
		}

FINALLY_0100:
		{ // begin finally (depth: 2)
			{
				bool L_35 = V_7;
				if (!L_35)
				{
					goto IL_010c;
				}
			}

IL_0104:
			{
				Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C * L_36 = V_6;
				Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_36, /*hidden argument*/NULL);
			}

IL_010c:
			{
				IL2CPP_END_FINALLY(256)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(256)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x10D, IL_010d)
		}

IL_010d:
		{
		}

IL_010e:
		{
			// foreach (var reverseBufFloat in reverseFramer.Frame(data))
			RuntimeObject* L_37 = V_2;
			NullCheck(L_37);
			bool L_38 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_37);
			if (L_38)
			{
				goto IL_0041;
			}
		}

IL_0119:
		{
			IL2CPP_LEAVE(0x126, FINALLY_011b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_011b;
	}

FINALLY_011b:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_39 = V_2;
			if (!L_39)
			{
				goto IL_0125;
			}
		}

IL_011e:
		{
			RuntimeObject* L_40 = V_2;
			NullCheck(L_40);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_40);
		}

IL_0125:
		{
			IL2CPP_END_FINALLY(283)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(283)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x126, IL_0126)
	}

IL_0126:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.WebRTCAudioProcessor::ReverseStreamThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_ReverseStreamThread_mB5385F957C0A4B1A31F8746763FFE36D569852C1 (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRTCAudioProcessor_ReverseStreamThread_mB5385F957C0A4B1A31F8746763FFE36D569852C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* V_0 = NULL;
	Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	Exception_t * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// logger.LogInfo("[PV] WebRTCAudioProcessor: Starting reverse stream thread");
		RuntimeObject* L_0 = __this->get_logger_27();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_t1D376534F7B46D24792BF8A70751D4B75719C345_il2cpp_TypeInfo_var, L_0, _stringLiteral3FAFB8170F7B02CCB1A2BEC38CD43F2B540EBB44, L_1);
		// reverseStreamThreadRunning = true;
		__this->set_reverseStreamThreadRunning_13((bool)1);
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				goto IL_00f1;
			}

IL_0024:
			{
				// reverseStreamQueueReady.WaitOne(); 
				AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_2 = __this->get_reverseStreamQueueReady_15();
				NullCheck(L_2);
				VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_2);
				goto IL_00e8;
			}

IL_0036:
			{
				// short[] reverseBuf = null;
				V_0 = (Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*)NULL;
				// lock (reverseStreamQueue)
				Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C * L_3 = __this->get_reverseStreamQueue_14();
				V_1 = L_3;
				V_2 = (bool)0;
			}

IL_0042:
			try
			{ // begin try (depth: 3)
				{
					Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C * L_4 = V_1;
					Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_4, (bool*)(&V_2), /*hidden argument*/NULL);
					// if (reverseStreamQueue.Count > 0)
					Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C * L_5 = __this->get_reverseStreamQueue_14();
					NullCheck(L_5);
					int32_t L_6 = Queue_1_get_Count_m14436A3E2747030960ED9C388F570A402777FA7D_inline(L_5, /*hidden argument*/Queue_1_get_Count_m14436A3E2747030960ED9C388F570A402777FA7D_RuntimeMethod_var);
					V_3 = (bool)((((int32_t)L_6) > ((int32_t)0))? 1 : 0);
					bool L_7 = V_3;
					if (!L_7)
					{
						goto IL_006c;
					}
				}

IL_005e:
				{
					// reverseBuf = reverseStreamQueue.Dequeue();
					Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C * L_8 = __this->get_reverseStreamQueue_14();
					NullCheck(L_8);
					Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_9 = Queue_1_Dequeue_m74586FE2340B2DD558E02835DC485D181991A21A(L_8, /*hidden argument*/Queue_1_Dequeue_m74586FE2340B2DD558E02835DC485D181991A21A_RuntimeMethod_var);
					V_0 = L_9;
				}

IL_006c:
				{
					IL2CPP_LEAVE(0x7A, FINALLY_006f);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_006f;
			}

FINALLY_006f:
			{ // begin finally (depth: 3)
				{
					bool L_10 = V_2;
					if (!L_10)
					{
						goto IL_0079;
					}
				}

IL_0072:
				{
					Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C * L_11 = V_1;
					Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_11, /*hidden argument*/NULL);
				}

IL_0079:
				{
					IL2CPP_END_FINALLY(111)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(111)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x7A, IL_007a)
			}

IL_007a:
			{
				// if (reverseBuf != null)
				Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_12 = V_0;
				V_4 = (bool)((!(((RuntimeObject*)(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*)L_12) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
				bool L_13 = V_4;
				if (!L_13)
				{
					goto IL_00e4;
				}
			}

IL_0084:
			{
				// int err = webrtc_audio_processor_process_reverse(proc, reverseBuf, reverseBuf.Length);
				intptr_t L_14 = __this->get_proc_22();
				Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_15 = V_0;
				Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_16 = V_0;
				NullCheck(L_16);
				int32_t L_17 = WebRTCAudioLib_webrtc_audio_processor_process_reverse_m736FE6AB282F19A0FA3C8CB6FF81524DF278B886((intptr_t)L_14, L_15, (((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))), /*hidden argument*/NULL);
				V_5 = L_17;
				// this.reverseBufferFactory.Free(reverseBuf);
				FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF * L_18 = __this->get_reverseBufferFactory_16();
				Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_19 = V_0;
				NullCheck(L_18);
				FactoryPrimitiveArrayPool_1_Free_m5C953DE8CD2CBC136E1C8995A04F8325AEA3C01B(L_18, L_19, /*hidden argument*/FactoryPrimitiveArrayPool_1_Free_m5C953DE8CD2CBC136E1C8995A04F8325AEA3C01B_RuntimeMethod_var);
				// if (lastProcessReverseErr != err)
				int32_t L_20 = __this->get_lastProcessReverseErr_32();
				int32_t L_21 = V_5;
				V_6 = (bool)((((int32_t)((((int32_t)L_20) == ((int32_t)L_21))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_22 = V_6;
				if (!L_22)
				{
					goto IL_00e1;
				}
			}

IL_00b6:
			{
				// lastProcessReverseErr = err;
				int32_t L_23 = V_5;
				__this->set_lastProcessReverseErr_32(L_23);
				// this.logger.LogError("[PV] WebRTCAudioProcessor: OnAudioOutFrameFloat: webrtc_audio_processor_process_reverse() error {0}", err);
				RuntimeObject* L_24 = __this->get_logger_27();
				ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_25 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = L_25;
				int32_t L_27 = V_5;
				int32_t L_28 = L_27;
				RuntimeObject * L_29 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_28);
				NullCheck(L_26);
				ArrayElementTypeCheck (L_26, L_29);
				(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_29);
				NullCheck(L_24);
				InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_t1D376534F7B46D24792BF8A70751D4B75719C345_il2cpp_TypeInfo_var, L_24, _stringLiteral5B3E51230F720022A7F6B3F4ECFB61C665E97961, L_26);
			}

IL_00e1:
			{
				goto IL_00e7;
			}

IL_00e4:
			{
				// break;
				goto IL_00f0;
			}

IL_00e7:
			{
			}

IL_00e8:
			{
				// while (true) 
				V_7 = (bool)1;
				goto IL_0036;
			}

IL_00f0:
			{
			}

IL_00f1:
			{
				// while (!disposed)
				bool L_30 = __this->get_disposed_23();
				V_8 = (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
				bool L_31 = V_8;
				if (L_31)
				{
					goto IL_0024;
				}
			}

IL_0103:
			{
				goto IL_0129;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0106;
			throw e;
		}

CATCH_0106:
		{ // begin catch(System.Exception)
			// catch (Exception e)
			V_9 = ((Exception_t *)__exception_local);
			// this.logger.LogError("[PV] WebRTCAudioProcessor: ReverseStreamThread Exceptions: " + e);
			RuntimeObject* L_32 = __this->get_logger_27();
			Exception_t * L_33 = V_9;
			String_t* L_34 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralA6DC1E1054DDEAE3C225EF83CCB0AAD18CE5A6DA, L_33, /*hidden argument*/NULL);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_35 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
			NullCheck(L_32);
			InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_t1D376534F7B46D24792BF8A70751D4B75719C345_il2cpp_TypeInfo_var, L_32, L_34, L_35);
			goto IL_0129;
		} // end catch (depth: 2)

IL_0129:
		{
			IL2CPP_LEAVE(0x14B, FINALLY_012b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_012b;
	}

FINALLY_012b:
	{ // begin finally (depth: 1)
		// logger.LogInfo("[PV] WebRTCAudioProcessor: Exiting reverse stream thread");
		RuntimeObject* L_36 = __this->get_logger_27();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_37 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_36);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_t1D376534F7B46D24792BF8A70751D4B75719C345_il2cpp_TypeInfo_var, L_36, _stringLiteral5F3624B516C84B80F8F15D29D591B2F5CD54F3BB, L_37);
		// reverseStreamThreadRunning = false;
		__this->set_reverseStreamThreadRunning_13((bool)0);
		IL2CPP_END_FINALLY(299)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(299)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14B, IL_014b)
	}

IL_014b:
	{
		// }
		return;
	}
}
// System.Int32 Photon.Voice.WebRTCAudioProcessor::setParam(Photon.Voice.WebRTCAudioLib_Param,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRTCAudioProcessor_setParam_m5C1609843F1640EC9A1B3C01482BD3C3224932E9 (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, int32_t ___param0, int32_t ___v1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRTCAudioProcessor_setParam_m5C1609843F1640EC9A1B3C01482BD3C3224932E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// logger.LogInfo("[PV] WebRTCAudioProcessor: setting param " + param + "=" + v);
		RuntimeObject* L_0 = __this->get_logger_27();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralB398F0EACFB4FC434E7394B6D0E8CEA831DF4B7B);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralB398F0EACFB4FC434E7394B6D0E8CEA831DF4B7B);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_2;
		int32_t L_4 = ___param0;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Param_t8B3DC3D8B33F289FD0D8D2E5A3F840C19CDBD652_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral21606782C65E44CAC7AFBB90977D8B6F82140E76);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral21606782C65E44CAC7AFBB90977D8B6F82140E76);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_7;
		int32_t L_9 = ___v1;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_11);
		String_t* L_12 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_8, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_t1D376534F7B46D24792BF8A70751D4B75719C345_il2cpp_TypeInfo_var, L_0, L_12, L_13);
		// return webrtc_audio_processor_set_param(proc, (int)param, v);
		intptr_t L_14 = __this->get_proc_22();
		int32_t L_15 = ___param0;
		int32_t L_16 = ___v1;
		int32_t L_17 = WebRTCAudioLib_webrtc_audio_processor_set_param_m805534FCA93A6714F0F99F00A81EA966B453F8C9((intptr_t)L_14, L_15, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		goto IL_004f;
	}

IL_004f:
	{
		// }
		int32_t L_18 = V_0;
		return L_18;
	}
}
// System.Void Photon.Voice.WebRTCAudioProcessor::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_Dispose_m7445F7D4480F6FC55F1FB693FCEE8ED421148491 (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRTCAudioProcessor_Dispose_m7445F7D4480F6FC55F1FB693FCEE8ED421148491_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// lock (this)
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_0005:
	try
	{ // begin try (depth: 1)
		{
			WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_0 = V_0;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_0, (bool*)(&V_1), /*hidden argument*/NULL);
			// if (!disposed)
			bool L_1 = __this->get_disposed_23();
			V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
			bool L_2 = V_2;
			if (!L_2)
			{
				goto IL_0096;
			}
		}

IL_001c:
		{
			// disposed = true;
			__this->set_disposed_23((bool)1);
			// logger.LogInfo("[PV] WebRTCAudioProcessor: destroying...");
			RuntimeObject* L_3 = __this->get_logger_27();
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
			NullCheck(L_3);
			InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_t1D376534F7B46D24792BF8A70751D4B75719C345_il2cpp_TypeInfo_var, L_3, _stringLiteral8396B00FF8239467BF90455265FA52CF47904843, L_4);
			// reverseStreamQueueReady.Set();
			AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7 * L_5 = __this->get_reverseStreamQueueReady_15();
			NullCheck(L_5);
			EventWaitHandle_Set_m7959A86A39735296FC949EC86FDA42A6CFAAB94C(L_5, /*hidden argument*/NULL);
			// if (proc != IntPtr.Zero)
			intptr_t L_6 = __this->get_proc_22();
			bool L_7 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_6, (intptr_t)(0), /*hidden argument*/NULL);
			V_3 = L_7;
			bool L_8 = V_3;
			if (!L_8)
			{
				goto IL_0095;
			}
		}

IL_005a:
		{
			goto IL_0066;
		}

IL_005d:
		{
			// Thread.Sleep(1);
			Thread_Sleep_m2CD320EAB7BE02CC1F395EAFE9970D53A5F9EAEF(1, /*hidden argument*/NULL);
		}

IL_0066:
		{
			// while (reverseStreamThreadRunning)
			bool L_9 = __this->get_reverseStreamThreadRunning_13();
			V_4 = L_9;
			bool L_10 = V_4;
			if (L_10)
			{
				goto IL_005d;
			}
		}

IL_0072:
		{
			// webrtc_audio_processor_destroy(proc);
			intptr_t L_11 = __this->get_proc_22();
			WebRTCAudioLib_webrtc_audio_processor_destroy_m8463BA01FBDF672DDA44CC4DA2C372BD4A2BB391((intptr_t)L_11, /*hidden argument*/NULL);
			// logger.LogInfo("[PV] WebRTCAudioProcessor: destroyed");
			RuntimeObject* L_12 = __this->get_logger_27();
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
			NullCheck(L_12);
			InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_t1D376534F7B46D24792BF8A70751D4B75719C345_il2cpp_TypeInfo_var, L_12, _stringLiteral5AAC9D556F7904ED56FEBA666318B8A790C6A12D, L_13);
		}

IL_0095:
		{
		}

IL_0096:
		{
			IL2CPP_LEAVE(0xA4, FINALLY_0099);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0099;
	}

FINALLY_0099:
	{ // begin finally (depth: 1)
		{
			bool L_14 = V_1;
			if (!L_14)
			{
				goto IL_00a3;
			}
		}

IL_009c:
		{
			WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_15 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_15, /*hidden argument*/NULL);
		}

IL_00a3:
		{
			IL2CPP_END_FINALLY(153)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(153)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xA4, IL_00a4)
	}

IL_00a4:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.WebRTCAudioProcessor::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor__cctor_m77F09971D6E4F4A670AAB3067AB0299E0E104466 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRTCAudioProcessor__cctor_m77F09971D6E4F4A670AAB3067AB0299E0E104466_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly int[] SupportedSamplingRates = { 8000, 16000, 32000, 48000 };
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = L_0;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tF81834743BA3008C119EFE0241CD0B42D8F539AC____990752441D5A39D66F916F6D91562D3673B4333A_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE_StaticFields*)il2cpp_codegen_static_fields_for(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE_il2cpp_TypeInfo_var))->set_SupportedSamplingRates_29(L_1);
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
// System.Void Photon.Voice.Windows.MonoPInvokeCallbackAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_m429FA1B8C60F212E4C3581063A9AA637FBD4A6C4 (MonoPInvokeCallbackAttribute_t3BB49D06B906DAFF1EA7DF66BC74543E29EF63BE * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		// public MonoPInvokeCallbackAttribute(Type t) { type = t; }
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		// public MonoPInvokeCallbackAttribute(Type t) { type = t; }
		Type_t * L_0 = ___t0;
		__this->set_type_0(L_0);
		// public MonoPInvokeCallbackAttribute(Type t) { type = t; }
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WindowsAudioInPusher_nativePushCallback_mAB59AE24CB58FF72A0AEA487A6541254C1961D95(int32_t ___instanceID0, intptr_t ___buf1, int32_t ___len2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WindowsAudioInPusher_nativePushCallback_mAB59AE24CB58FF72A0AEA487A6541254C1961D95(___instanceID0, ___buf1, ___len2, NULL);

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Photon_Audio_In_Create(int32_t, int32_t, int32_t, int32_t, Il2CppMethodPointer, int32_t, int32_t, int32_t, int32_t);
#endif
// System.IntPtr Photon.Voice.Windows.WindowsAudioInPusher::Photon_Audio_In_Create(System.Int32,Photon.Voice.Windows.WindowsAudioInPusher_SystemMode,System.Int32,System.Int32,System.Action`3<System.Int32,System.IntPtr,System.Int32>,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsAudioInPusher_Photon_Audio_In_Create_mE98C9C2A080D0D45E4973A1774C20760E0096273 (int32_t ___instanceID0, int32_t ___systemMode1, int32_t ___micDevIdx2, int32_t ___spkDevIdx3, Action_3_tA3B470E9D4FEF30C8329D94BF79F47D8F0EFC367 * ___callback4, bool ___featrModeOn5, bool ___noiseSup6, bool ___agc7, bool ___cntrClip8, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, int32_t, int32_t, Il2CppMethodPointer, int32_t, int32_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(Il2CppMethodPointer) + 4 + 4 + 4 + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AudioIn"), "Photon_Audio_In_Create", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___callback4' to native representation
	Il2CppMethodPointer ____callback4_marshaled = NULL;
	____callback4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback4));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Photon_Audio_In_Create)(___instanceID0, ___systemMode1, ___micDevIdx2, ___spkDevIdx3, ____callback4_marshaled, static_cast<int32_t>(___featrModeOn5), static_cast<int32_t>(___noiseSup6), static_cast<int32_t>(___agc7), static_cast<int32_t>(___cntrClip8));
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___instanceID0, ___systemMode1, ___micDevIdx2, ___spkDevIdx3, ____callback4_marshaled, static_cast<int32_t>(___featrModeOn5), static_cast<int32_t>(___noiseSup6), static_cast<int32_t>(___agc7), static_cast<int32_t>(___cntrClip8));
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Photon_Audio_In_Destroy(intptr_t);
#endif
// System.Void Photon.Voice.Windows.WindowsAudioInPusher::Photon_Audio_In_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsAudioInPusher_Photon_Audio_In_Destroy_m1F528876105B63C4BED99A91911999E5DA0C8748 (intptr_t ___handler0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("AudioIn"), "Photon_Audio_In_Destroy", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(Photon_Audio_In_Destroy)(___handler0);
	#else
	il2cppPInvokeFunc(___handler0);
	#endif

}
// System.Void Photon.Voice.Windows.WindowsAudioInPusher::.ctor(System.Int32,Photon.Voice.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsAudioInPusher__ctor_mEC0FCD6DE967AEC0F3D19413017CC5074F1A7C90 (WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038 * __this, int32_t ___deviceID0, RuntimeObject* ___logger1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsAudioInPusher__ctor_mEC0FCD6DE967AEC0F3D19413017CC5074F1A7C90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E * V_0 = NULL;
	bool V_1 = false;
	Exception_t * V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// public WindowsAudioInPusher(int deviceID, ILogger logger)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			// lock (instancePerHandle)
			IL2CPP_RUNTIME_CLASS_INIT(WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_il2cpp_TypeInfo_var);
			Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E * L_0 = ((WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_StaticFields*)il2cpp_codegen_static_fields_for(WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_il2cpp_TypeInfo_var))->get_instancePerHandle_5();
			V_0 = L_0;
			V_1 = (bool)0;
		}

IL_0011:
		try
		{ // begin try (depth: 2)
			Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E * L_1 = V_0;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			// handle = Photon_Audio_In_Create(instanceCnt, SystemMode.SINGLE_CHANNEL_AEC, deviceID, -1, nativePushCallback, true, true, true, true); 
			IL2CPP_RUNTIME_CLASS_INIT(WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_il2cpp_TypeInfo_var);
			int32_t L_2 = ((WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_StaticFields*)il2cpp_codegen_static_fields_for(WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_il2cpp_TypeInfo_var))->get_instanceCnt_4();
			int32_t L_3 = ___deviceID0;
			Action_3_tA3B470E9D4FEF30C8329D94BF79F47D8F0EFC367 * L_4 = (Action_3_tA3B470E9D4FEF30C8329D94BF79F47D8F0EFC367 *)il2cpp_codegen_object_new(Action_3_tA3B470E9D4FEF30C8329D94BF79F47D8F0EFC367_il2cpp_TypeInfo_var);
			Action_3__ctor_mCA5F9BDBF11CA0BC604BC63CAAB894D5EAE08A09(L_4, NULL, (intptr_t)((intptr_t)WindowsAudioInPusher_nativePushCallback_mAB59AE24CB58FF72A0AEA487A6541254C1961D95_RuntimeMethod_var), /*hidden argument*/Action_3__ctor_mCA5F9BDBF11CA0BC604BC63CAAB894D5EAE08A09_RuntimeMethod_var);
			intptr_t L_5 = WindowsAudioInPusher_Photon_Audio_In_Create_mE98C9C2A080D0D45E4973A1774C20760E0096273(L_2, 0, L_3, (-1), L_4, (bool)1, (bool)1, (bool)1, (bool)1, /*hidden argument*/NULL);
			__this->set_handle_0((intptr_t)L_5);
			// this.instanceID = instanceCnt;
			int32_t L_6 = ((WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_StaticFields*)il2cpp_codegen_static_fields_for(WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_il2cpp_TypeInfo_var))->get_instanceCnt_4();
			__this->set_instanceID_1(L_6);
			// instancePerHandle.Add(instanceCnt++, this);
			Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E * L_7 = ((WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_StaticFields*)il2cpp_codegen_static_fields_for(WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_il2cpp_TypeInfo_var))->get_instancePerHandle_5();
			int32_t L_8 = ((WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_StaticFields*)il2cpp_codegen_static_fields_for(WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_il2cpp_TypeInfo_var))->get_instanceCnt_4();
			int32_t L_9 = L_8;
			((WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_StaticFields*)il2cpp_codegen_static_fields_for(WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_il2cpp_TypeInfo_var))->set_instanceCnt_4(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
			NullCheck(L_7);
			Dictionary_2_Add_mA08AF9299C3E6C6CCB54C761D2A0C31D00512053(L_7, L_9, __this, /*hidden argument*/Dictionary_2_Add_mA08AF9299C3E6C6CCB54C761D2A0C31D00512053_RuntimeMethod_var);
			IL2CPP_LEAVE(0x70, FINALLY_0065);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0065;
		}

FINALLY_0065:
		{ // begin finally (depth: 2)
			{
				bool L_10 = V_1;
				if (!L_10)
				{
					goto IL_006f;
				}
			}

IL_0068:
			{
				Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E * L_11 = V_0;
				Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_11, /*hidden argument*/NULL);
			}

IL_006f:
			{
				IL2CPP_END_FINALLY(101)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(101)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x70, IL_0070)
		}

IL_0070:
		{
			goto IL_00bc;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0073;
		throw e;
	}

CATCH_0073:
	{ // begin catch(System.Exception)
		{
			// catch (Exception e)
			V_2 = ((Exception_t *)__exception_local);
			// Error = e.ToString();
			Exception_t * L_12 = V_2;
			NullCheck(L_12);
			String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
			WindowsAudioInPusher_set_Error_m095167EA557E2970CA59FB5A31F106F499605684_inline(__this, L_13, /*hidden argument*/NULL);
			// if (Error == null) 
			String_t* L_14 = WindowsAudioInPusher_get_Error_m91B3D4BECC25331EBE4BDF9C012C7708C11123AF_inline(__this, /*hidden argument*/NULL);
			V_3 = (bool)((((RuntimeObject*)(String_t*)L_14) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_15 = V_3;
			if (!L_15)
			{
				goto IL_009d;
			}
		}

IL_008f:
		{
			// Error = "Exception in WindowsAudioInPusher constructor";
			WindowsAudioInPusher_set_Error_m095167EA557E2970CA59FB5A31F106F499605684_inline(__this, _stringLiteral5950B2514EF161E3CE2127993890A1100E1B76A8, /*hidden argument*/NULL);
		}

IL_009d:
		{
			// logger.LogError("[PV] WindowsAudioInPusher: " + Error);
			RuntimeObject* L_16 = ___logger1;
			String_t* L_17 = WindowsAudioInPusher_get_Error_m91B3D4BECC25331EBE4BDF9C012C7708C11123AF_inline(__this, /*hidden argument*/NULL);
			String_t* L_18 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralC1FAF8D32C867A061B567F81710C5AB58469814B, L_17, /*hidden argument*/NULL);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
			NullCheck(L_16);
			InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_t1D376534F7B46D24792BF8A70751D4B75719C345_il2cpp_TypeInfo_var, L_16, L_18, L_19);
			goto IL_00bc;
		}
	} // end catch (depth: 1)

IL_00bc:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Windows.WindowsAudioInPusher::nativePushCallback(System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsAudioInPusher_nativePushCallback_mAB59AE24CB58FF72A0AEA487A6541254C1961D95 (int32_t ___instanceID0, intptr_t ___buf1, int32_t ___len2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsAudioInPusher_nativePushCallback_mAB59AE24CB58FF72A0AEA487A6541254C1961D95_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038 * V_0 = NULL;
	bool V_1 = false;
	Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// lock (instancePerHandle)
		IL2CPP_RUNTIME_CLASS_INIT(WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_il2cpp_TypeInfo_var);
		Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E * L_0 = ((WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_StaticFields*)il2cpp_codegen_static_fields_for(WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_il2cpp_TypeInfo_var))->get_instancePerHandle_5();
		V_2 = L_0;
		V_3 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E * L_1 = V_2;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_3), /*hidden argument*/NULL);
		// ok = instancePerHandle.TryGetValue(instanceID, out instance);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_il2cpp_TypeInfo_var);
		Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E * L_2 = ((WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_StaticFields*)il2cpp_codegen_static_fields_for(WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_il2cpp_TypeInfo_var))->get_instancePerHandle_5();
		int32_t L_3 = ___instanceID0;
		NullCheck(L_2);
		bool L_4 = Dictionary_2_TryGetValue_m509D1745CA295DEE22CB804D470B94E7A116750A(L_2, L_3, (WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m509D1745CA295DEE22CB804D470B94E7A116750A_RuntimeMethod_var);
		V_1 = L_4;
		IL2CPP_LEAVE(0x2F, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		{
			bool L_5 = V_3;
			if (!L_5)
			{
				goto IL_002e;
			}
		}

IL_0027:
		{
			Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E * L_6 = V_2;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_6, /*hidden argument*/NULL);
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(36)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		// if (ok)
		bool L_7 = V_1;
		V_4 = L_7;
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0041;
		}
	}
	{
		// instance.push(buf, len);
		WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038 * L_9 = V_0;
		intptr_t L_10 = ___buf1;
		int32_t L_11 = ___len2;
		NullCheck(L_9);
		WindowsAudioInPusher_push_mED1E1EA2D3B2B1C76814E25F6E044E455EDB9E2D(L_9, (intptr_t)L_10, L_11, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Windows.WindowsAudioInPusher::SetCallback(System.Action`1<System.Int16[]>,Photon.Voice.ObjectFactory`2<System.Int16[],System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsAudioInPusher_SetCallback_m6C53DE8CBEE17499E0722DF58DBF54100BF406CC (WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038 * __this, Action_1_tB6E8E8CB26C84B16959C0CA9F3E9958D027263C3 * ___callback0, RuntimeObject* ___bufferFactory1, const RuntimeMethod* method)
{
	{
		// this.bufferFactory = bufferFactory;
		RuntimeObject* L_0 = ___bufferFactory1;
		__this->set_bufferFactory_3(L_0);
		// this.pushCallback = callback;
		Action_1_tB6E8E8CB26C84B16959C0CA9F3E9958D027263C3 * L_1 = ___callback0;
		__this->set_pushCallback_2(L_1);
		// }
		return;
	}
}
// System.Void Photon.Voice.Windows.WindowsAudioInPusher::push(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsAudioInPusher_push_mED1E1EA2D3B2B1C76814E25F6E044E455EDB9E2D (WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038 * __this, intptr_t ___buf0, int32_t ___lenBytes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsAudioInPusher_push_mED1E1EA2D3B2B1C76814E25F6E044E455EDB9E2D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* V_2 = NULL;
	{
		// if (pushCallback != null)
		Action_1_tB6E8E8CB26C84B16959C0CA9F3E9958D027263C3 * L_0 = __this->get_pushCallback_2();
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_tB6E8E8CB26C84B16959C0CA9F3E9958D027263C3 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		// var len = lenBytes / sizeof(short);
		int32_t L_2 = ___lenBytes1;
		V_1 = ((int32_t)((int32_t)L_2/(int32_t)2));
		// var bufManaged = this.bufferFactory.New(len);
		RuntimeObject* L_3 = __this->get_bufferFactory_3();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_5 = InterfaceFuncInvoker1< Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*, int32_t >::Invoke(2 /* TType Photon.Voice.ObjectFactory`2<System.Int16[],System.Int32>::New(TInfo) */, ObjectFactory_2_t1375185CBB63DADBA9D49449027035BE22EBDE4F_il2cpp_TypeInfo_var, L_3, L_4);
		V_2 = L_5;
		// Marshal.Copy(buf, bufManaged, 0, len);
		intptr_t L_6 = ___buf0;
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_7 = V_2;
		int32_t L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_Copy_m9959F27D111045D5003ED1791897BDF6AC01F332((intptr_t)L_6, L_7, 0, L_8, /*hidden argument*/NULL);
		// pushCallback(bufManaged);
		Action_1_tB6E8E8CB26C84B16959C0CA9F3E9958D027263C3 * L_9 = __this->get_pushCallback_2();
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_10 = V_2;
		NullCheck(L_9);
		Action_1_Invoke_m420EECC0794DD9644AEF360F0309109F0989857A(L_9, L_10, /*hidden argument*/Action_1_Invoke_m420EECC0794DD9644AEF360F0309109F0989857A_RuntimeMethod_var);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Int32 Photon.Voice.Windows.WindowsAudioInPusher::get_Channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsAudioInPusher_get_Channels_mE1D3E4F7647A39E29D507D26A88B6827B0A1704F (WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public int Channels { get { return 1; } }
		V_0 = 1;
		goto IL_0005;
	}

IL_0005:
	{
		// public int Channels { get { return 1; } }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Int32 Photon.Voice.Windows.WindowsAudioInPusher::get_SamplingRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsAudioInPusher_get_SamplingRate_m92846556429B6D7E170B52AC9A4B742BB49CC3F7 (WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// public int SamplingRate { get { return 16000; } }
		V_0 = ((int32_t)16000);
		goto IL_0009;
	}

IL_0009:
	{
		// public int SamplingRate { get { return 16000; } }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.String Photon.Voice.Windows.WindowsAudioInPusher::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WindowsAudioInPusher_get_Error_m91B3D4BECC25331EBE4BDF9C012C7708C11123AF (WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038 * __this, const RuntimeMethod* method)
{
	{
		// public string Error { get; private set; }
		String_t* L_0 = __this->get_U3CErrorU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Photon.Voice.Windows.WindowsAudioInPusher::set_Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsAudioInPusher_set_Error_m095167EA557E2970CA59FB5A31F106F499605684 (WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Error { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CErrorU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void Photon.Voice.Windows.WindowsAudioInPusher::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsAudioInPusher_Dispose_mEC26FD89A1FCF5D958CE54EE5E1E292615CC63AA (WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsAudioInPusher_Dispose_mEC26FD89A1FCF5D958CE54EE5E1E292615CC63AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// lock (instancePerHandle)
		IL2CPP_RUNTIME_CLASS_INIT(WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_il2cpp_TypeInfo_var);
		Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E * L_0 = ((WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_StaticFields*)il2cpp_codegen_static_fields_for(WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_il2cpp_TypeInfo_var))->get_instancePerHandle_5();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E * L_1 = V_0;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		// instancePerHandle.Remove(instanceID);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_il2cpp_TypeInfo_var);
		Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E * L_2 = ((WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_StaticFields*)il2cpp_codegen_static_fields_for(WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_il2cpp_TypeInfo_var))->get_instancePerHandle_5();
		int32_t L_3 = __this->get_instanceID_1();
		NullCheck(L_2);
		Dictionary_2_Remove_m3D2340424BA571726ED5B3AAE0E64316D21A87EF(L_2, L_3, /*hidden argument*/Dictionary_2_Remove_m3D2340424BA571726ED5B3AAE0E64316D21A87EF_RuntimeMethod_var);
		IL2CPP_LEAVE(0x32, FINALLY_0027);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0027;
	}

FINALLY_0027:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0031;
			}
		}

IL_002a:
		{
			Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E * L_5 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_5, /*hidden argument*/NULL);
		}

IL_0031:
		{
			IL2CPP_END_FINALLY(39)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(39)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x32, IL_0032)
	}

IL_0032:
	{
		// if (handle != IntPtr.Zero)
		intptr_t L_6 = __this->get_handle_0();
		bool L_7 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_6, (intptr_t)(0), /*hidden argument*/NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_005f;
		}
	}
	{
		// Photon_Audio_In_Destroy(handle);
		intptr_t L_9 = __this->get_handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_il2cpp_TypeInfo_var);
		WindowsAudioInPusher_Photon_Audio_In_Destroy_m1F528876105B63C4BED99A91911999E5DA0C8748((intptr_t)L_9, /*hidden argument*/NULL);
		// handle = IntPtr.Zero;
		__this->set_handle_0((intptr_t)(0));
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Windows.WindowsAudioInPusher::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsAudioInPusher__cctor_m56B4618921BB879FF065CAE5F0712F5E10EB8300 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsAudioInPusher__cctor_m56B4618921BB879FF065CAE5F0712F5E10EB8300_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<int, WindowsAudioInPusher> instancePerHandle = new Dictionary<int, WindowsAudioInPusher>();
		Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E * L_0 = (Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E *)il2cpp_codegen_object_new(Dictionary_2_t8D5C2A1BB70F80838344855F63A4EBB9E73D092E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m85308C069B94E44BF6E0C29D6D0CA01E2BF7A570(L_0, /*hidden argument*/Dictionary_2__ctor_m85308C069B94E44BF6E0C29D6D0CA01E2BF7A570_RuntimeMethod_var);
		((WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_StaticFields*)il2cpp_codegen_static_fields_for(WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038_il2cpp_TypeInfo_var))->set_instancePerHandle_5(L_0);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CallbackDelegate_t4514EFCDF9110C72DCC6DBA745B6DD429C888FF8 (CallbackDelegate_t4514EFCDF9110C72DCC6DBA745B6DD429C888FF8 * __this, int32_t ___instanceID0, intptr_t ___buf1, int32_t ___len2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___instanceID0, ___buf1, ___len2);

}
// System.Void Photon.Voice.Windows.WindowsAudioInPusher_CallbackDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackDelegate__ctor_m73029E35290FD63234555A8DA8A806DB63887916 (CallbackDelegate_t4514EFCDF9110C72DCC6DBA745B6DD429C888FF8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Photon.Voice.Windows.WindowsAudioInPusher_CallbackDelegate::Invoke(System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackDelegate_Invoke_mC758EA70092626AABF36EDB79CDAD427834561FF (CallbackDelegate_t4514EFCDF9110C72DCC6DBA745B6DD429C888FF8 * __this, int32_t ___instanceID0, intptr_t ___buf1, int32_t ___len2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, intptr_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___instanceID0, ___buf1, ___len2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceID0, ___buf1, ___len2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___instanceID0, ___buf1, ___len2);
					else
						GenericVirtActionInvoker3< int32_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___instanceID0, ___buf1, ___len2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___instanceID0, ___buf1, ___len2);
					else
						VirtActionInvoker3< int32_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___instanceID0, ___buf1, ___len2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___instanceID0) - 1), ___buf1, ___len2, targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceID0, ___buf1, ___len2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Photon.Voice.Windows.WindowsAudioInPusher_CallbackDelegate::BeginInvoke(System.Int32,System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CallbackDelegate_BeginInvoke_m1552D6F7361C7058FD311BEE8F3D3169915E65CE (CallbackDelegate_t4514EFCDF9110C72DCC6DBA745B6DD429C888FF8 * __this, int32_t ___instanceID0, intptr_t ___buf1, int32_t ___len2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CallbackDelegate_BeginInvoke_m1552D6F7361C7058FD311BEE8F3D3169915E65CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___instanceID0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___buf1);
	__d_args[2] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___len2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Photon.Voice.Windows.WindowsAudioInPusher_CallbackDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackDelegate_EndInvoke_m6A5440B9993AD6FB20844BFC2DD24D4AAE1FE17A (CallbackDelegate_t4514EFCDF9110C72DCC6DBA745B6DD429C888FF8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  RemoteVoice_get_Info_m0E8DC5364A52540F8FB31D18004700CB0EDC8D5F_inline (RemoteVoice_tFB7B418D0495B703F0EBB5E8F950768A6A48D39B * __this, const RuntimeMethod* method)
{
	{
		// internal VoiceInfo Info { get; private set; }
		VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  L_0 = __this->get_U3CInfoU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VoiceInfo_set_Codec_mE2F6EF39D929159A040E7D54A3D1F0F6E5193D60_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public Codec Codec { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CCodecU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VoiceInfo_set_SamplingRate_mFD9A827BF89AEE753031B4E9989450B610D38ED7_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int SamplingRate { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CSamplingRateU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VoiceInfo_set_Channels_m1D24F473872C247719FCDF25BFC069560C2A7119_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Channels { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CChannelsU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VoiceInfo_set_FrameDurationUs_mED9CBABB82E4C4E9C2D8B3E0DEC3DEF9A1F77E50_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int FrameDurationUs { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CFrameDurationUsU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VoiceInfo_set_Bitrate_m33B8EAAEB3F83BA8F32AA8E4D6691DF3B881E983_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Bitrate { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CBitrateU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VoiceInfo_set_UserData_m2A0E95B290393D7D38CBDCBE17899BDCE7DD9674_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public object UserData { get; set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CUserDataU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_Codec_m75D36C2F23671F6E2236A7E86F32B5C645F98268_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method)
{
	{
		// public Codec Codec { get; set; }
		int32_t L_0 = __this->get_U3CCodecU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_SamplingRate_m9D617B430547DE230A31AD21379D7E823C144832_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method)
{
	{
		// public int SamplingRate { get; set; }
		int32_t L_0 = __this->get_U3CSamplingRateU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_Channels_m54796F2353DE7853164099D9E2B9F2C4D245B6ED_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method)
{
	{
		// public int Channels { get; set; }
		int32_t L_0 = __this->get_U3CChannelsU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_FrameDurationUs_mFD847A0412A4F679882877FC30F5CFDDD5AEB45C_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method)
{
	{
		// public int FrameDurationUs { get; set; }
		int32_t L_0 = __this->get_U3CFrameDurationUsU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_Bitrate_mD7CE0F9D49F705629F35ACAAFD94B94FEA93EC10_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method)
{
	{
		// public int Bitrate { get; set; }
		int32_t L_0 = __this->get_U3CBitrateU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_Width_mA885EAB6AF205DD4FF02D227E34095AFFD16BAA7_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method)
{
	{
		// public int Width { get; set; }
		int32_t L_0 = __this->get_U3CWidthU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_Height_mC24A2C9366949E6DA1CD41B034068A676BE9D9C8_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method)
{
	{
		// public int Height { get; set; }
		int32_t L_0 = __this->get_U3CHeightU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_FPS_m7F99240ED4764ACD0A43C3F054F425BD304B62DB_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method)
{
	{
		// public int FPS { get; set; }
		int32_t L_0 = __this->get_U3CFPSU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_KeyFrameInt_m6208E1FF83FF48C217AE13E35E2939EB832BAA93_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method)
{
	{
		// public int KeyFrameInt { get; set; }
		int32_t L_0 = __this->get_U3CKeyFrameIntU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * VoiceInfo_get_UserData_m47264239C6EFD622B9B403448D956EC29743C460_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method)
{
	{
		// public object UserData { get; set; }
		RuntimeObject * L_0 = __this->get_U3CUserDataU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VoiceInfo_set_Width_mB5EE2D104B7413416F84EECB9E9E1BDFC91DBC88_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Width { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CWidthU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VoiceInfo_set_Height_m834A6A637AEFADF9531E2C47BBEB683C77FBF9A5_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Height { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CHeightU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VoiceInfo_set_FPS_mE44747AC77FE9492A1122BA07CFD1AAEEBF6BEE0_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int FPS { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CFPSU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VoiceInfo_set_KeyFrameInt_m9D40D6580068B64286558C71CC0D80A2D76FD9C3_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int KeyFrameInt { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CKeyFrameIntU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WindowsAudioInPusher_set_Error_m095167EA557E2970CA59FB5A31F106F499605684_inline (WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Error { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CErrorU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* WindowsAudioInPusher_get_Error_m91B3D4BECC25331EBE4BDF9C012C7708C11123AF_inline (WindowsAudioInPusher_t667EEA31B6EEDDD5739AC2EB4EC923373F52F038 * __this, const RuntimeMethod* method)
{
	{
		// public string Error { get; private set; }
		String_t* L_0 = __this->get_U3CErrorU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C  Enumerator_get_Current_m73F8FC135A20BDFEA0846D8FC876863ED85FEA49_gshared_inline (Enumerator_tC0410598D958D8FA61F7F1A803A0B7F242CEF1C6 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C  L_0 = (KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C )__this->get_current_3();
		return (KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mAD6801F3BC9BA1E99D4E0F72B2B420182D0494FC_gshared_inline (KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_t98F624736AE86A14B9AD84D588449356C07782F8  Enumerator_get_Current_m336681D81D4875B6AA910C3EDC850D1F1CE08C23_gshared_inline (Enumerator_t6FAB3A88A9B87F97CFB4D7DEA082CC1CEF975FF7 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t98F624736AE86A14B9AD84D588449356C07782F8  L_0 = (KeyValuePair_2_t98F624736AE86A14B9AD84D588449356C07782F8 )__this->get_current_3();
		return (KeyValuePair_2_t98F624736AE86A14B9AD84D588449356C07782F8 )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mFFDB1DCFD724D3C287979F171E334E48D2D21217_gshared_inline (KeyValuePair_2_t98F624736AE86A14B9AD84D588449356C07782F8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m89B687D373FBE3D230647CA0C536235E12AD829C_gshared_inline (KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR uint8_t KeyValuePair_2_get_Key_mFBFAFF2B44214677B4F6BB23BF32AB56FA35415E_gshared_inline (KeyValuePair_2_t98F624736AE86A14B9AD84D588449356C07782F8 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = (uint8_t)__this->get_key_0();
		return (uint8_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m0CE0B6919A09EFFBB1EBA5B5DFEF50E4F8A89CFA_gshared_inline (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
