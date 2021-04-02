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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB;
// Photon.Realtime.AppSettings
struct AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8;
// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A;
// Photon.Realtime.Player
struct Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202;
// Photon.Realtime.SupportLogger
struct SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA;
// Photon.Voice.AudioInChangeNotifier
struct AudioInChangeNotifier_tF9840235D61D525C96B81ACC7F3B0308B54A25EF;
// Photon.Voice.AudioInEnumerator
struct AudioInEnumerator_tDC4812F752210FC1729388E243E2CEC07EA25CD5;
// Photon.Voice.AudioUtil/LevelMeter`1<System.Int16>
struct LevelMeter_1_t4B8A3F8A829C902E37A4586895E2409DA5191AAB;
// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Int16>
struct VoiceDetectorCalibration_1_tA0B8E0360AFA342823133C34C47FD8528EE2323E;
// Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>
struct VoiceDetector_1_tC1EA6413FAEC07048E59AB2B41250322208BB53F;
// Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16>
struct FactoryPrimitiveArrayPool_1_t2E584252D15EE14F864CB4443B5C6C17489967FF;
// Photon.Voice.Framer`1<System.Int16>
struct Framer_1_tFA4A125073CBA54E0B5C3EE99831A9C12BED8751;
// Photon.Voice.Framer`1<System.Single>
struct Framer_1_t9E72DFCCE1F62F49B9F5C9E0574B98EA19BDC847;
// Photon.Voice.IAudioDesc
struct IAudioDesc_t1D30C76AF63F7484497DB0D027B8FD6737E4A90E;
// Photon.Voice.IAudioOut`1<System.Single>
struct IAudioOut_1_t17D3947C5FC4126BB48B7E0DC2D0576D8415A5DC;
// Photon.Voice.IEncoder
struct IEncoder_tAB85482F12DE70245C151D00C3BE79085F365876;
// Photon.Voice.ILogger
struct ILogger_t1D376534F7B46D24792BF8A70751D4B75719C345;
// Photon.Voice.IProcessor`1<System.Int16>
struct IProcessor_1_t50C8F9815C0696A6377D36DE6EFA79E715D374D1;
// Photon.Voice.IProcessor`1<System.Int16>[]
struct IProcessor_1U5BU5D_tFF6E0C19B6FF67D84A38DD099F2DFFE6BB23C0EF;
// Photon.Voice.IServiceable
struct IServiceable_t494B8C6576F0623D8242FBDA637DC4C8B0345AF2;
// Photon.Voice.LoadBalancingTransport
struct LoadBalancingTransport_tE7424753F1B6BCC3FCAE3AF13E78A43A1E369E78;
// Photon.Voice.LocalVoice
struct LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501;
// Photon.Voice.LocalVoiceFramed`1<System.Int16>
struct LocalVoiceFramed_1_t631B3C25EBF711BB5E2EB03387F85C8BB662853E;
// Photon.Voice.Unity.AudioOutCapture
struct AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794;
// Photon.Voice.Unity.PhotonVoiceCreatedParams
struct PhotonVoiceCreatedParams_t57D3C5049A283334F8ED09F38CCBBE10CE413675;
// Photon.Voice.Unity.Recorder
struct Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2;
// Photon.Voice.Unity.RemoteVoiceLink
struct RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD;
// Photon.Voice.Unity.RemoteVoiceLink[]
struct RemoteVoiceLinkU5BU5D_t2750E6CC18A637D0AB51E8E555230101014AD552;
// Photon.Voice.Unity.Speaker
struct Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00;
// Photon.Voice.Unity.Speaker[]
struct SpeakerU5BU5D_tEB0E373D55E61F4FFF19D0713E780A46AC2479A7;
// Photon.Voice.Unity.VoiceComponent
struct VoiceComponent_t0F536901C0B0CE8BAB210607825A35C725D6199D;
// Photon.Voice.Unity.VoiceConnection
struct VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421;
// Photon.Voice.Unity.VoiceConnection/<>c__DisplayClass95_0
struct U3CU3Ec__DisplayClass95_0_t95C1D6FE3B5757B6D816868648A1C25A81339C79;
// Photon.Voice.Unity.VoiceConnection/<>c__DisplayClass99_0
struct U3CU3Ec__DisplayClass99_0_tED5E957F49BB90A5EBAA7D08EEB7405D83762AA0;
// Photon.Voice.Unity.VoiceLogger
struct VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B;
// Photon.Voice.Unity.WebRtcAudioDsp
struct WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F;
// Photon.Voice.VoiceClient
struct VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33;
// Photon.Voice.WebRTCAudioProcessor
struct WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<Photon.Voice.FrameOut`1<System.Single>>
struct Action_1_t6EE717F8A600B68A4037D934C6643807CE31B78A;
// System.Action`1<Photon.Voice.Unity.RemoteVoiceLink>
struct Action_1_t4A26E01CB2B16CD6FDA9DA9BC9C82212DB2897BD;
// System.Action`1<Photon.Voice.Unity.Speaker>
struct Action_1_tB56B05E225CEB0E8865008C5AEE87252E6AF644C;
// System.Action`2<System.Object,System.Int32>
struct Action_2_t699B8ADE08CA24319E2BF9872EC0569593196AED;
// System.Action`2<System.Single[],System.Int32>
struct Action_2_t1F689749CB5BC369F8420F1B13E67C7DA1243CB6;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.AudioSpeakerMode,System.Int32>[]
struct EntryU5BU5D_tAD51D996340DEB64C0BEDD90E785C43B9853658B;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.AudioSpeakerMode,System.Int32>
struct KeyCollection_t3260029F87F02823B952F9E781A849454A7F0745;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.AudioSpeakerMode,System.Int32>
struct ValueCollection_t8D3176DA714E670A277FBE5084930C607C7D0368;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>
struct Dictionary_2_t3B77FDE09068A7905F58AAC0DB3B58971B40A516;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>
struct Dictionary_2_t93FEB43EAD2A563D654B55CE47109701F85721DE;
// System.Collections.Generic.Dictionary`2<UnityEngine.AudioSpeakerMode,System.Int32>
struct Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.AudioSpeakerMode>
struct IEqualityComparer_1_tF06FCD7A7BE3563B199C23880093492CAE796062;
// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<System.Int16>>
struct List_1_tC560187189515692BF61CAA4B783247B8B1FDC40;
// System.Collections.Generic.List`1<Photon.Voice.Unity.RemoteVoiceLink>
struct List_1_t99D97AA37DA23A7D3CF6A39A5C91AB1ABD89354E;
// System.Collections.Generic.List`1<Photon.Voice.Unity.Speaker>
struct List_1_t787D0BABE1C1B25F7256FAD1A3991B201544210D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.Queue`1<System.Int16[]>
struct Queue_1_t079C5FFAE29C9CE680AD814530FEAE239FB6B69C;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Func`1<Photon.Voice.IAudioDesc>
struct Func_1_t8B6480D8941CDD37BFDB2C1FBEF03C111B5F6115;
// System.Func`4<System.Int32,System.Byte,System.Object,Photon.Voice.Unity.Speaker>
struct Func_4_tF8E5C8C732D4E47EB7B0A69014E829E5B4C6CF00;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.BinaryWriter
struct BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3;
// System.IO.DirectoryInfo
struct DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F;
// System.IO.FileStream
struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.Encoder
struct Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t2A1182CEEE4E184587D4DEAA4F382B810B21D3B7;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AudioClip
struct AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801;
// UnityEngine.AudioListener
struct AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099;
// UnityEngine.AudioListener[]
struct AudioListenerU5BU5D_t48A54D58EA8EBA3C494B83DB5CFA54B7A1A6BA30;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;

IL2CPP_EXTERN_C RuntimeClass* Action_2_t1F689749CB5BC369F8420F1B13E67C7DA1243CB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProcessor_1U5BU5D_tFF6E0C19B6FF67D84A38DD099F2DFFE6BB23C0EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalVoiceAudioShort_tB824E4F1A8817C958BFECC7B524C6FFB2A98BA28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02B0CDC185B2A318FD02505C06409ED894E31A97;
IL2CPP_EXTERN_C String_t* _stringLiteral0CC6BA950274530D106ED3475BEE37C8476984C4;
IL2CPP_EXTERN_C String_t* _stringLiteral26AC5E37D496DE00BF60E19D042275381E3527B3;
IL2CPP_EXTERN_C String_t* _stringLiteral324F60140FA96BB012F7A67A1B4461FB4A6C89D0;
IL2CPP_EXTERN_C String_t* _stringLiteral5D424748DC7BA7F1436BEE6745884FC83B53EED8;
IL2CPP_EXTERN_C String_t* _stringLiteral5E63A8040542E49E33BEE8784D11AF4375F88833;
IL2CPP_EXTERN_C String_t* _stringLiteral63736A5F4173739A57718C6B893F522D1466A37A;
IL2CPP_EXTERN_C String_t* _stringLiteral6CA0A12C23F03719E0229FE85E34C98DE7079397;
IL2CPP_EXTERN_C String_t* _stringLiteral6CC40AEBCA3458CDF17D2339D17F6C843843C912;
IL2CPP_EXTERN_C String_t* _stringLiteral8910C171760FE65D86FBC96EE91CAB2AFABD984C;
IL2CPP_EXTERN_C String_t* _stringLiteral896A50ECF8B4DF2FF949092C9A5E30E5B51EEF72;
IL2CPP_EXTERN_C String_t* _stringLiteral8978901ADA576B5359390659F5D0C73D8429E56B;
IL2CPP_EXTERN_C String_t* _stringLiteral90482CCC2DEBBC9F5A56C001DBE878DBFD1F0733;
IL2CPP_EXTERN_C String_t* _stringLiteralA17C9AAA61E80A1BF71D0D850AF4E5BAA9800BBD;
IL2CPP_EXTERN_C String_t* _stringLiteralA486D57987651DC24A28A4F5A1D492B63E543333;
IL2CPP_EXTERN_C String_t* _stringLiteralA53AF748DAA4771B2E2800B7E09B897BB9110AC7;
IL2CPP_EXTERN_C String_t* _stringLiteralA9DB473FE7C6F914130E6421024D40BE4E62402B;
IL2CPP_EXTERN_C String_t* _stringLiteralAA5A30688516013E529EBDE57999A1B2ECEA2CA8;
IL2CPP_EXTERN_C String_t* _stringLiteralAB8035E43EA159B553E80D0A57068CCF7A47BCA1;
IL2CPP_EXTERN_C String_t* _stringLiteralABE66D6818BF4A12CB292BD1281BAB5172C3665A;
IL2CPP_EXTERN_C String_t* _stringLiteralAD5A4B3AB9D08A98F5D654C1EEA3801AE546A2EC;
IL2CPP_EXTERN_C String_t* _stringLiteralBE03C0114D118CB7D44AD3A4B854CF5CF40F6A1C;
IL2CPP_EXTERN_C String_t* _stringLiteralC5EF9B806CBD2BFA0D6C179FE35E3AB475BF5AAF;
IL2CPP_EXTERN_C String_t* _stringLiteralCE28645609BB3E651E752748077E2A318F6D31D8;
IL2CPP_EXTERN_C String_t* _stringLiteralD37FB1735AC431CABF0512F9D1D8D7D0794B76C1;
IL2CPP_EXTERN_C String_t* _stringLiteralF903EF48357BBF1DC0B9050C893467D5D29813B1;
IL2CPP_EXTERN_C String_t* _stringLiteralFB914D3CA1348F0C104408C5794FE186EA61F9B4;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m4611A9CDDB94F544852F89AC940C667017C4DFEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099_mAB9201E964DE4BDE85D8A9BC485E463FB3B82A0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794_m7BB3E3CE56FF332D20A793F95C474B66CE22050D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRecorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2_m50ADE012D583A8E393B0901A0BAC84381CF4AB3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mF891D8C47B5B965BC34348B75D198880D817AE07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD230FE00B9E0CEA4FF957CA6FE1F2F5024CEF77F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mF9A10544F97231C4E035FB8A4C3F4E0053D2D1DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794_m69A0C328F9DEBDA0B4719BD0E3866AFE1C834B18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m1F1DA250AACDAE8C02CD468408BF36E9F197683E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mCC401391444A9F56964D9E9BCB1A67980DE57130_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalVoiceFramed_1_AddPostProcessor_mB520A7B0A5EC84ABDEB077198556200AE48813B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisAudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099_mF313DD53951547CA4CC6A12F0285C6D58A497CCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SavWav_ConvertAndWrite_m80854E7224A3C1AF9CAEC479B2164D319ADAF7DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRtcAudioDsp_OnAudioOutFrameFloat_m218AB055C9853373EB7A6FF3399480101EFD9754_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t SavWav_ConvertAndWrite_m80854E7224A3C1AF9CAEC479B2164D319ADAF7DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SavWav_Save_m908FACD4A0438191343FB1813566AD094E563337_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SavWav_WriteHeader_m8FA4FCA85375416840A6D6EF76D45924F52715B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass95_0_U3COnRemoteVoiceInfoU3Eb__0_m64EEDBFD54B0EF78F038B234D7604A8E7036D5E5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass99_0_U3CLinkSpeakerU3Eb__0_m2C0500F26C5CAD45386B115A14BEFC46AD09FE80_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VoiceLogger_GetFormatString_mCB2D4C4A7E0FA0F437B48A4695488591895DCAB1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VoiceLogger_GetTimestamp_m70A9E2E08D4278A8598693F2C65E227E20C0DDB8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VoiceLogger_LogError_mF9B207BF2A3A66B02DFE7BF856A3E3D3D8C55600_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VoiceLogger_LogInfo_mB846D4177FB2FBC7D8484EC81A32F25AC09554FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VoiceLogger_LogWarning_m3A0FA7DDC7D3EB01D06F38A877F1935F1045E61D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRtcAudioDsp_Awake_mD69EEB134E4D3D5346B8CCD793959BF0CFA8789A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRtcAudioDsp_Init_m485162BB3A2C1633EAF8601FD6BD633B198DF0A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRtcAudioDsp_OnAudioOutFrameFloat_m218AB055C9853373EB7A6FF3399480101EFD9754_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRtcAudioDsp_OnEnable_mF292B1085C6397AB7BAD3696DCC93BA07BE00DAC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRtcAudioDsp_PhotonVoiceCreated_mF1E829254F771E2E44CE9F79C3AED2C4CC3F90F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRtcAudioDsp_SetOrSwitchAudioListener_m96EE851DD1B891F79CE8DCC95D126E454CAE91D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRtcAudioDsp_SetOrSwitchAudioOutCapture_m6296F0BF3AA9D3BD0CE87009C7D87AE719C9A214_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRtcAudioDsp_SetOutputListener_mCB5CB6A8E7DD1B82921511599E9E6BCE3FACC5C7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRtcAudioDsp__cctor_m549A6F4F10BEBA6173A5E5B86B9058AA645567EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRtcAudioDsp_set_AgcCompressionGain_m07F7BFD2BA7963E3927A398011C8831C452FB2BC_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct IProcessor_1U5BU5D_tFF6E0C19B6FF67D84A38DD099F2DFFE6BB23C0EF;
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct AudioListenerU5BU5D_t48A54D58EA8EBA3C494B83DB5CFA54B7A1A6BA30;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Photon.Voice.Unity.PhotonVoiceCreatedParams
struct  PhotonVoiceCreatedParams_t57D3C5049A283334F8ED09F38CCBBE10CE413675  : public RuntimeObject
{
public:
	// Photon.Voice.LocalVoice Photon.Voice.Unity.PhotonVoiceCreatedParams::<Voice>k__BackingField
	LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * ___U3CVoiceU3Ek__BackingField_0;
	// Photon.Voice.IAudioDesc Photon.Voice.Unity.PhotonVoiceCreatedParams::<AudioDesc>k__BackingField
	RuntimeObject* ___U3CAudioDescU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CVoiceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PhotonVoiceCreatedParams_t57D3C5049A283334F8ED09F38CCBBE10CE413675, ___U3CVoiceU3Ek__BackingField_0)); }
	inline LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * get_U3CVoiceU3Ek__BackingField_0() const { return ___U3CVoiceU3Ek__BackingField_0; }
	inline LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 ** get_address_of_U3CVoiceU3Ek__BackingField_0() { return &___U3CVoiceU3Ek__BackingField_0; }
	inline void set_U3CVoiceU3Ek__BackingField_0(LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * value)
	{
		___U3CVoiceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVoiceU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAudioDescU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PhotonVoiceCreatedParams_t57D3C5049A283334F8ED09F38CCBBE10CE413675, ___U3CAudioDescU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CAudioDescU3Ek__BackingField_1() const { return ___U3CAudioDescU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CAudioDescU3Ek__BackingField_1() { return &___U3CAudioDescU3Ek__BackingField_1; }
	inline void set_U3CAudioDescU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CAudioDescU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAudioDescU3Ek__BackingField_1), (void*)value);
	}
};


// Photon.Voice.Unity.VoiceConnection_<>c__DisplayClass99_0
struct  U3CU3Ec__DisplayClass99_0_tED5E957F49BB90A5EBAA7D08EEB7405D83762AA0  : public RuntimeObject
{
public:
	// Photon.Voice.Unity.VoiceConnection Photon.Voice.Unity.VoiceConnection_<>c__DisplayClass99_0::<>4__this
	VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 * ___U3CU3E4__this_0;
	// Photon.Voice.Unity.Speaker Photon.Voice.Unity.VoiceConnection_<>c__DisplayClass99_0::speaker
	Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * ___speaker_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass99_0_tED5E957F49BB90A5EBAA7D08EEB7405D83762AA0, ___U3CU3E4__this_0)); }
	inline VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_speaker_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass99_0_tED5E957F49BB90A5EBAA7D08EEB7405D83762AA0, ___speaker_1)); }
	inline Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * get_speaker_1() const { return ___speaker_1; }
	inline Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 ** get_address_of_speaker_1() { return &___speaker_1; }
	inline void set_speaker_1(Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * value)
	{
		___speaker_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speaker_1), (void*)value);
	}
};


// Photon.Voice.WebRTCAudioLib
struct  WebRTCAudioLib_t1E26D463A18D0FCACE38B6CCEDBE9AFDEAEF2A89  : public RuntimeObject
{
public:

public:
};


// SavWav
struct  SavWav_t795043A4DB23292A8D5317D886ECCF621666D69D  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<UnityEngine.AudioSpeakerMode,System.Int32>
struct  Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tAD51D996340DEB64C0BEDD90E785C43B9853658B* ___entries_1;
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
	KeyCollection_t3260029F87F02823B952F9E781A849454A7F0745 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t8D3176DA714E670A277FBE5084930C607C7D0368 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D, ___entries_1)); }
	inline EntryU5BU5D_tAD51D996340DEB64C0BEDD90E785C43B9853658B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tAD51D996340DEB64C0BEDD90E785C43B9853658B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tAD51D996340DEB64C0BEDD90E785C43B9853658B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D, ___keys_7)); }
	inline KeyCollection_t3260029F87F02823B952F9E781A849454A7F0745 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t3260029F87F02823B952F9E781A849454A7F0745 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t3260029F87F02823B952F9E781A849454A7F0745 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D, ___values_8)); }
	inline ValueCollection_t8D3176DA714E670A277FBE5084930C607C7D0368 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t8D3176DA714E670A277FBE5084930C607C7D0368 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t8D3176DA714E670A277FBE5084930C607C7D0368 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Voice.Unity.RemoteVoiceLink>
struct  List_1_t99D97AA37DA23A7D3CF6A39A5C91AB1ABD89354E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RemoteVoiceLinkU5BU5D_t2750E6CC18A637D0AB51E8E555230101014AD552* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t99D97AA37DA23A7D3CF6A39A5C91AB1ABD89354E, ____items_1)); }
	inline RemoteVoiceLinkU5BU5D_t2750E6CC18A637D0AB51E8E555230101014AD552* get__items_1() const { return ____items_1; }
	inline RemoteVoiceLinkU5BU5D_t2750E6CC18A637D0AB51E8E555230101014AD552** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RemoteVoiceLinkU5BU5D_t2750E6CC18A637D0AB51E8E555230101014AD552* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t99D97AA37DA23A7D3CF6A39A5C91AB1ABD89354E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t99D97AA37DA23A7D3CF6A39A5C91AB1ABD89354E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t99D97AA37DA23A7D3CF6A39A5C91AB1ABD89354E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t99D97AA37DA23A7D3CF6A39A5C91AB1ABD89354E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RemoteVoiceLinkU5BU5D_t2750E6CC18A637D0AB51E8E555230101014AD552* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t99D97AA37DA23A7D3CF6A39A5C91AB1ABD89354E_StaticFields, ____emptyArray_5)); }
	inline RemoteVoiceLinkU5BU5D_t2750E6CC18A637D0AB51E8E555230101014AD552* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RemoteVoiceLinkU5BU5D_t2750E6CC18A637D0AB51E8E555230101014AD552** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RemoteVoiceLinkU5BU5D_t2750E6CC18A637D0AB51E8E555230101014AD552* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Voice.Unity.Speaker>
struct  List_1_t787D0BABE1C1B25F7256FAD1A3991B201544210D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SpeakerU5BU5D_tEB0E373D55E61F4FFF19D0713E780A46AC2479A7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t787D0BABE1C1B25F7256FAD1A3991B201544210D, ____items_1)); }
	inline SpeakerU5BU5D_tEB0E373D55E61F4FFF19D0713E780A46AC2479A7* get__items_1() const { return ____items_1; }
	inline SpeakerU5BU5D_tEB0E373D55E61F4FFF19D0713E780A46AC2479A7** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SpeakerU5BU5D_tEB0E373D55E61F4FFF19D0713E780A46AC2479A7* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t787D0BABE1C1B25F7256FAD1A3991B201544210D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t787D0BABE1C1B25F7256FAD1A3991B201544210D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t787D0BABE1C1B25F7256FAD1A3991B201544210D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t787D0BABE1C1B25F7256FAD1A3991B201544210D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SpeakerU5BU5D_tEB0E373D55E61F4FFF19D0713E780A46AC2479A7* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t787D0BABE1C1B25F7256FAD1A3991B201544210D_StaticFields, ____emptyArray_5)); }
	inline SpeakerU5BU5D_tEB0E373D55E61F4FFF19D0713E780A46AC2479A7* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SpeakerU5BU5D_tEB0E373D55E61F4FFF19D0713E780A46AC2479A7** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SpeakerU5BU5D_tEB0E373D55E61F4FFF19D0713E780A46AC2479A7* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
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


// System.IO.BinaryWriter
struct  BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Char[] System.IO.BinaryWriter::_tmpOneCharBuffer
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ____tmpOneCharBuffer_6;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____largeByteBuffer_7;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_8;

public:
	inline static int32_t get_offset_of_OutStream_1() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ___OutStream_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_OutStream_1() const { return ___OutStream_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_OutStream_1() { return &___OutStream_1; }
	inline void set_OutStream_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___OutStream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutStream_1), (void*)value);
	}

	inline static int32_t get_offset_of__buffer_2() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____buffer_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__buffer_2() const { return ____buffer_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__buffer_2() { return &____buffer_2; }
	inline void set__buffer_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____buffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_2), (void*)value);
	}

	inline static int32_t get_offset_of__encoding_3() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get__encoding_3() const { return ____encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of__encoding_3() { return &____encoding_3; }
	inline void set__encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		____encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of__encoder_4() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____encoder_4)); }
	inline Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * get__encoder_4() const { return ____encoder_4; }
	inline Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 ** get_address_of__encoder_4() { return &____encoder_4; }
	inline void set__encoder_4(Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * value)
	{
		____encoder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoder_4), (void*)value);
	}

	inline static int32_t get_offset_of__leaveOpen_5() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____leaveOpen_5)); }
	inline bool get__leaveOpen_5() const { return ____leaveOpen_5; }
	inline bool* get_address_of__leaveOpen_5() { return &____leaveOpen_5; }
	inline void set__leaveOpen_5(bool value)
	{
		____leaveOpen_5 = value;
	}

	inline static int32_t get_offset_of__tmpOneCharBuffer_6() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____tmpOneCharBuffer_6)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get__tmpOneCharBuffer_6() const { return ____tmpOneCharBuffer_6; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of__tmpOneCharBuffer_6() { return &____tmpOneCharBuffer_6; }
	inline void set__tmpOneCharBuffer_6(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		____tmpOneCharBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tmpOneCharBuffer_6), (void*)value);
	}

	inline static int32_t get_offset_of__largeByteBuffer_7() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____largeByteBuffer_7)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__largeByteBuffer_7() const { return ____largeByteBuffer_7; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__largeByteBuffer_7() { return &____largeByteBuffer_7; }
	inline void set__largeByteBuffer_7(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____largeByteBuffer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____largeByteBuffer_7), (void*)value);
	}

	inline static int32_t get_offset_of__maxChars_8() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____maxChars_8)); }
	inline int32_t get__maxChars_8() const { return ____maxChars_8; }
	inline int32_t* get_address_of__maxChars_8() { return &____maxChars_8; }
	inline void set__maxChars_8(int32_t value)
	{
		____maxChars_8 = value;
	}
};

struct BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_StaticFields
{
public:
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_StaticFields, ___Null_0)); }
	inline BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * get_Null_0() const { return ___Null_0; }
	inline BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_0), (void*)value);
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


// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_60;

public:
	inline static int32_t get_offset_of_m_codePage_55() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_55)); }
	inline int32_t get_m_codePage_55() const { return ___m_codePage_55; }
	inline int32_t* get_address_of_m_codePage_55() { return &___m_codePage_55; }
	inline void set_m_codePage_55(int32_t value)
	{
		___m_codePage_55 = value;
	}

	inline static int32_t get_offset_of_dataItem_56() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_56)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_56() const { return ___dataItem_56; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_56() { return &___dataItem_56; }
	inline void set_dataItem_56(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_56), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_57() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_57)); }
	inline bool get_m_deserializedFromEverett_57() const { return ___m_deserializedFromEverett_57; }
	inline bool* get_address_of_m_deserializedFromEverett_57() { return &___m_deserializedFromEverett_57; }
	inline void set_m_deserializedFromEverett_57(bool value)
	{
		___m_deserializedFromEverett_57 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_58() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_58)); }
	inline bool get_m_isReadOnly_58() const { return ___m_isReadOnly_58; }
	inline bool* get_address_of_m_isReadOnly_58() { return &___m_isReadOnly_58; }
	inline void set_m_isReadOnly_58(bool value)
	{
		___m_isReadOnly_58 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_59() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_59)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_59() const { return ___encoderFallback_59; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_59() { return &___encoderFallback_59; }
	inline void set_encoderFallback_59(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_59), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_60() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_60)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_60() const { return ___decoderFallback_60; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_60() { return &___decoderFallback_60; }
	inline void set_decoderFallback_60(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_60), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_61;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_61() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_61)); }
	inline RuntimeObject * get_s_InternalSyncObject_61() const { return ___s_InternalSyncObject_61; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_61() { return &___s_InternalSyncObject_61; }
	inline void set_s_InternalSyncObject_61(RuntimeObject * value)
	{
		___s_InternalSyncObject_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_61), (void*)value);
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

// Photon.Voice.Unity.PlaybackDelaySettings
struct  PlaybackDelaySettings_t05D2E7CA93D8F3F144181EAEF811F08FAB29B968 
{
public:
	// System.Int32 Photon.Voice.Unity.PlaybackDelaySettings::MinDelaySoft
	int32_t ___MinDelaySoft_3;
	// System.Int32 Photon.Voice.Unity.PlaybackDelaySettings::MaxDelaySoft
	int32_t ___MaxDelaySoft_4;
	// System.Int32 Photon.Voice.Unity.PlaybackDelaySettings::MaxDelayHard
	int32_t ___MaxDelayHard_5;

public:
	inline static int32_t get_offset_of_MinDelaySoft_3() { return static_cast<int32_t>(offsetof(PlaybackDelaySettings_t05D2E7CA93D8F3F144181EAEF811F08FAB29B968, ___MinDelaySoft_3)); }
	inline int32_t get_MinDelaySoft_3() const { return ___MinDelaySoft_3; }
	inline int32_t* get_address_of_MinDelaySoft_3() { return &___MinDelaySoft_3; }
	inline void set_MinDelaySoft_3(int32_t value)
	{
		___MinDelaySoft_3 = value;
	}

	inline static int32_t get_offset_of_MaxDelaySoft_4() { return static_cast<int32_t>(offsetof(PlaybackDelaySettings_t05D2E7CA93D8F3F144181EAEF811F08FAB29B968, ___MaxDelaySoft_4)); }
	inline int32_t get_MaxDelaySoft_4() const { return ___MaxDelaySoft_4; }
	inline int32_t* get_address_of_MaxDelaySoft_4() { return &___MaxDelaySoft_4; }
	inline void set_MaxDelaySoft_4(int32_t value)
	{
		___MaxDelaySoft_4 = value;
	}

	inline static int32_t get_offset_of_MaxDelayHard_5() { return static_cast<int32_t>(offsetof(PlaybackDelaySettings_t05D2E7CA93D8F3F144181EAEF811F08FAB29B968, ___MaxDelayHard_5)); }
	inline int32_t get_MaxDelayHard_5() const { return ___MaxDelayHard_5; }
	inline int32_t* get_address_of_MaxDelayHard_5() { return &___MaxDelayHard_5; }
	inline void set_MaxDelayHard_5(int32_t value)
	{
		___MaxDelayHard_5 = value;
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


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
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

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
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


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
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


// Photon.Voice.Unity.Recorder_InputSourceType
struct  InputSourceType_t530745A5DA72DF113DFED34F92D350C7F916D31D 
{
public:
	// System.Int32 Photon.Voice.Unity.Recorder_InputSourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSourceType_t530745A5DA72DF113DFED34F92D350C7F916D31D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.Unity.Recorder_MicType
struct  MicType_t446950D741BCAFC62F5A0CAE012104A82DF643F8 
{
public:
	// System.Int32 Photon.Voice.Unity.Recorder_MicType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MicType_t446950D741BCAFC62F5A0CAE012104A82DF643F8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Voice.Unity.Recorder_SampleTypeConv
struct  SampleTypeConv_t6D07030A6F68BF5E784A41B0EE96E34EACF71C4D 
{
public:
	// System.Int32 Photon.Voice.Unity.Recorder_SampleTypeConv::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SampleTypeConv_t6D07030A6F68BF5E784A41B0EE96E34EACF71C4D, ___value___2)); }
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

// System.IO.FileAccess
struct  FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileAttributes
struct  FileAttributes_t224B42F6F82954C94B51791913857C005C559876 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t224B42F6F82954C94B51791913857C005C559876, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileMode
struct  FileMode_tD19D05B1E6CAF201F88401B04FDB25227664C419 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileMode_tD19D05B1E6CAF201F88401B04FDB25227664C419, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioSpeakerMode
struct  AudioSpeakerMode_t054EC3AC7CF95E2929F927039FCAEDF7AD95858C 
{
public:
	// System.Int32 UnityEngine.AudioSpeakerMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioSpeakerMode_t054EC3AC7CF95E2929F927039FCAEDF7AD95858C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Photon.Voice.Unity.VoiceLogger
struct  VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B  : public RuntimeObject
{
public:
	// System.String Photon.Voice.Unity.VoiceLogger::<Tag>k__BackingField
	String_t* ___U3CTagU3Ek__BackingField_0;
	// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceLogger::<LogLevel>k__BackingField
	uint8_t ___U3CLogLevelU3Ek__BackingField_1;
	// UnityEngine.Object Photon.Voice.Unity.VoiceLogger::context
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___context_2;

public:
	inline static int32_t get_offset_of_U3CTagU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B, ___U3CTagU3Ek__BackingField_0)); }
	inline String_t* get_U3CTagU3Ek__BackingField_0() const { return ___U3CTagU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTagU3Ek__BackingField_0() { return &___U3CTagU3Ek__BackingField_0; }
	inline void set_U3CTagU3Ek__BackingField_0(String_t* value)
	{
		___U3CTagU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTagU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLogLevelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B, ___U3CLogLevelU3Ek__BackingField_1)); }
	inline uint8_t get_U3CLogLevelU3Ek__BackingField_1() const { return ___U3CLogLevelU3Ek__BackingField_1; }
	inline uint8_t* get_address_of_U3CLogLevelU3Ek__BackingField_1() { return &___U3CLogLevelU3Ek__BackingField_1; }
	inline void set_U3CLogLevelU3Ek__BackingField_1(uint8_t value)
	{
		___U3CLogLevelU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_context_2() { return static_cast<int32_t>(offsetof(VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B, ___context_2)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_context_2() const { return ___context_2; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_context_2() { return &___context_2; }
	inline void set_context_2(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___context_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___context_2), (void*)value);
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

// System.IO.FileStream
struct  FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_7;
	// System.String System.IO.FileStream::name
	String_t* ___name_8;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * ___safeHandle_9;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_10;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_11;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_12;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_13;
	// System.Boolean System.IO.FileStream::async
	bool ___async_14;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_15;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_16;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_17;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_18;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_19;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_20;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_21;

public:
	inline static int32_t get_offset_of_buf_7() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_7)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_7() const { return ___buf_7; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_7() { return &___buf_7; }
	inline void set_buf_7(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_7), (void*)value);
	}

	inline static int32_t get_offset_of_name_8() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___name_8)); }
	inline String_t* get_name_8() const { return ___name_8; }
	inline String_t** get_address_of_name_8() { return &___name_8; }
	inline void set_name_8(String_t* value)
	{
		___name_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_8), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_9() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___safeHandle_9)); }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * get_safeHandle_9() const { return ___safeHandle_9; }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB ** get_address_of_safeHandle_9() { return &___safeHandle_9; }
	inline void set_safeHandle_9(SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * value)
	{
		___safeHandle_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_9), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_10() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___isExposed_10)); }
	inline bool get_isExposed_10() const { return ___isExposed_10; }
	inline bool* get_address_of_isExposed_10() { return &___isExposed_10; }
	inline void set_isExposed_10(bool value)
	{
		___isExposed_10 = value;
	}

	inline static int32_t get_offset_of_append_startpos_11() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___append_startpos_11)); }
	inline int64_t get_append_startpos_11() const { return ___append_startpos_11; }
	inline int64_t* get_address_of_append_startpos_11() { return &___append_startpos_11; }
	inline void set_append_startpos_11(int64_t value)
	{
		___append_startpos_11 = value;
	}

	inline static int32_t get_offset_of_access_12() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___access_12)); }
	inline int32_t get_access_12() const { return ___access_12; }
	inline int32_t* get_address_of_access_12() { return &___access_12; }
	inline void set_access_12(int32_t value)
	{
		___access_12 = value;
	}

	inline static int32_t get_offset_of_owner_13() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___owner_13)); }
	inline bool get_owner_13() const { return ___owner_13; }
	inline bool* get_address_of_owner_13() { return &___owner_13; }
	inline void set_owner_13(bool value)
	{
		___owner_13 = value;
	}

	inline static int32_t get_offset_of_async_14() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___async_14)); }
	inline bool get_async_14() const { return ___async_14; }
	inline bool* get_address_of_async_14() { return &___async_14; }
	inline void set_async_14(bool value)
	{
		___async_14 = value;
	}

	inline static int32_t get_offset_of_canseek_15() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___canseek_15)); }
	inline bool get_canseek_15() const { return ___canseek_15; }
	inline bool* get_address_of_canseek_15() { return &___canseek_15; }
	inline void set_canseek_15(bool value)
	{
		___canseek_15 = value;
	}

	inline static int32_t get_offset_of_anonymous_16() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___anonymous_16)); }
	inline bool get_anonymous_16() const { return ___anonymous_16; }
	inline bool* get_address_of_anonymous_16() { return &___anonymous_16; }
	inline void set_anonymous_16(bool value)
	{
		___anonymous_16 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_17() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_dirty_17)); }
	inline bool get_buf_dirty_17() const { return ___buf_dirty_17; }
	inline bool* get_address_of_buf_dirty_17() { return &___buf_dirty_17; }
	inline void set_buf_dirty_17(bool value)
	{
		___buf_dirty_17 = value;
	}

	inline static int32_t get_offset_of_buf_size_18() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_size_18)); }
	inline int32_t get_buf_size_18() const { return ___buf_size_18; }
	inline int32_t* get_address_of_buf_size_18() { return &___buf_size_18; }
	inline void set_buf_size_18(int32_t value)
	{
		___buf_size_18 = value;
	}

	inline static int32_t get_offset_of_buf_length_19() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_length_19)); }
	inline int32_t get_buf_length_19() const { return ___buf_length_19; }
	inline int32_t* get_address_of_buf_length_19() { return &___buf_length_19; }
	inline void set_buf_length_19(int32_t value)
	{
		___buf_length_19 = value;
	}

	inline static int32_t get_offset_of_buf_offset_20() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_offset_20)); }
	inline int32_t get_buf_offset_20() const { return ___buf_offset_20; }
	inline int32_t* get_address_of_buf_offset_20() { return &___buf_offset_20; }
	inline void set_buf_offset_20(int32_t value)
	{
		___buf_offset_20 = value;
	}

	inline static int32_t get_offset_of_buf_start_21() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_start_21)); }
	inline int64_t get_buf_start_21() const { return ___buf_start_21; }
	inline int64_t* get_address_of_buf_start_21() { return &___buf_start_21; }
	inline void set_buf_start_21(int64_t value)
	{
		___buf_start_21 = value;
	}
};

struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_recycle_5;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_6;

public:
	inline static int32_t get_offset_of_buf_recycle_5() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_recycle_5() const { return ___buf_recycle_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_recycle_5() { return &___buf_recycle_5; }
	inline void set_buf_recycle_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_recycle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_5), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_6() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_lock_6)); }
	inline RuntimeObject * get_buf_recycle_lock_6() const { return ___buf_recycle_lock_6; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_6() { return &___buf_recycle_lock_6; }
	inline void set_buf_recycle_lock_6(RuntimeObject * value)
	{
		___buf_recycle_lock_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_6), (void*)value);
	}
};


// System.IO.MonoIOStat
struct  MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124 
{
public:
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
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

// UnityEngine.AudioClip
struct  AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:
	// UnityEngine.AudioClip_PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip_PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
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


// Photon.Voice.Unity.RemoteVoiceLink
struct  RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD  : public RuntimeObject
{
public:
	// Photon.Voice.VoiceInfo Photon.Voice.Unity.RemoteVoiceLink::<Info>k__BackingField
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  ___U3CInfoU3Ek__BackingField_0;
	// System.Int32 Photon.Voice.Unity.RemoteVoiceLink::<PlayerId>k__BackingField
	int32_t ___U3CPlayerIdU3Ek__BackingField_1;
	// System.Int32 Photon.Voice.Unity.RemoteVoiceLink::<VoiceId>k__BackingField
	int32_t ___U3CVoiceIdU3Ek__BackingField_2;
	// System.Int32 Photon.Voice.Unity.RemoteVoiceLink::<ChannelId>k__BackingField
	int32_t ___U3CChannelIdU3Ek__BackingField_3;
	// System.Action`1<Photon.Voice.FrameOut`1<System.Single>> Photon.Voice.Unity.RemoteVoiceLink::FloatFrameDecoded
	Action_1_t6EE717F8A600B68A4037D934C6643807CE31B78A * ___FloatFrameDecoded_4;
	// System.Action Photon.Voice.Unity.RemoteVoiceLink::RemoteVoiceRemoved
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___RemoteVoiceRemoved_5;

public:
	inline static int32_t get_offset_of_U3CInfoU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD, ___U3CInfoU3Ek__BackingField_0)); }
	inline VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  get_U3CInfoU3Ek__BackingField_0() const { return ___U3CInfoU3Ek__BackingField_0; }
	inline VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * get_address_of_U3CInfoU3Ek__BackingField_0() { return &___U3CInfoU3Ek__BackingField_0; }
	inline void set_U3CInfoU3Ek__BackingField_0(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  value)
	{
		___U3CInfoU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CInfoU3Ek__BackingField_0))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CPlayerIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD, ___U3CPlayerIdU3Ek__BackingField_1)); }
	inline int32_t get_U3CPlayerIdU3Ek__BackingField_1() const { return ___U3CPlayerIdU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CPlayerIdU3Ek__BackingField_1() { return &___U3CPlayerIdU3Ek__BackingField_1; }
	inline void set_U3CPlayerIdU3Ek__BackingField_1(int32_t value)
	{
		___U3CPlayerIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CVoiceIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD, ___U3CVoiceIdU3Ek__BackingField_2)); }
	inline int32_t get_U3CVoiceIdU3Ek__BackingField_2() const { return ___U3CVoiceIdU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CVoiceIdU3Ek__BackingField_2() { return &___U3CVoiceIdU3Ek__BackingField_2; }
	inline void set_U3CVoiceIdU3Ek__BackingField_2(int32_t value)
	{
		___U3CVoiceIdU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CChannelIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD, ___U3CChannelIdU3Ek__BackingField_3)); }
	inline int32_t get_U3CChannelIdU3Ek__BackingField_3() const { return ___U3CChannelIdU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CChannelIdU3Ek__BackingField_3() { return &___U3CChannelIdU3Ek__BackingField_3; }
	inline void set_U3CChannelIdU3Ek__BackingField_3(int32_t value)
	{
		___U3CChannelIdU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_FloatFrameDecoded_4() { return static_cast<int32_t>(offsetof(RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD, ___FloatFrameDecoded_4)); }
	inline Action_1_t6EE717F8A600B68A4037D934C6643807CE31B78A * get_FloatFrameDecoded_4() const { return ___FloatFrameDecoded_4; }
	inline Action_1_t6EE717F8A600B68A4037D934C6643807CE31B78A ** get_address_of_FloatFrameDecoded_4() { return &___FloatFrameDecoded_4; }
	inline void set_FloatFrameDecoded_4(Action_1_t6EE717F8A600B68A4037D934C6643807CE31B78A * value)
	{
		___FloatFrameDecoded_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FloatFrameDecoded_4), (void*)value);
	}

	inline static int32_t get_offset_of_RemoteVoiceRemoved_5() { return static_cast<int32_t>(offsetof(RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD, ___RemoteVoiceRemoved_5)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_RemoteVoiceRemoved_5() const { return ___RemoteVoiceRemoved_5; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_RemoteVoiceRemoved_5() { return &___RemoteVoiceRemoved_5; }
	inline void set_RemoteVoiceRemoved_5(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___RemoteVoiceRemoved_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RemoteVoiceRemoved_5), (void*)value);
	}
};


// Photon.Voice.Unity.VoiceConnection_<>c__DisplayClass95_0
struct  U3CU3Ec__DisplayClass95_0_t95C1D6FE3B5757B6D816868648A1C25A81339C79  : public RuntimeObject
{
public:
	// Photon.Voice.Unity.VoiceConnection Photon.Voice.Unity.VoiceConnection_<>c__DisplayClass95_0::<>4__this
	VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 * ___U3CU3E4__this_0;
	// System.Int32 Photon.Voice.Unity.VoiceConnection_<>c__DisplayClass95_0::channelId
	int32_t ___channelId_1;
	// System.Int32 Photon.Voice.Unity.VoiceConnection_<>c__DisplayClass95_0::playerId
	int32_t ___playerId_2;
	// System.Byte Photon.Voice.Unity.VoiceConnection_<>c__DisplayClass95_0::voiceId
	uint8_t ___voiceId_3;
	// Photon.Voice.VoiceInfo Photon.Voice.Unity.VoiceConnection_<>c__DisplayClass95_0::voiceInfo
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  ___voiceInfo_4;
	// Photon.Voice.Unity.RemoteVoiceLink Photon.Voice.Unity.VoiceConnection_<>c__DisplayClass95_0::remoteVoice
	RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * ___remoteVoice_5;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass95_0_t95C1D6FE3B5757B6D816868648A1C25A81339C79, ___U3CU3E4__this_0)); }
	inline VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_channelId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass95_0_t95C1D6FE3B5757B6D816868648A1C25A81339C79, ___channelId_1)); }
	inline int32_t get_channelId_1() const { return ___channelId_1; }
	inline int32_t* get_address_of_channelId_1() { return &___channelId_1; }
	inline void set_channelId_1(int32_t value)
	{
		___channelId_1 = value;
	}

	inline static int32_t get_offset_of_playerId_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass95_0_t95C1D6FE3B5757B6D816868648A1C25A81339C79, ___playerId_2)); }
	inline int32_t get_playerId_2() const { return ___playerId_2; }
	inline int32_t* get_address_of_playerId_2() { return &___playerId_2; }
	inline void set_playerId_2(int32_t value)
	{
		___playerId_2 = value;
	}

	inline static int32_t get_offset_of_voiceId_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass95_0_t95C1D6FE3B5757B6D816868648A1C25A81339C79, ___voiceId_3)); }
	inline uint8_t get_voiceId_3() const { return ___voiceId_3; }
	inline uint8_t* get_address_of_voiceId_3() { return &___voiceId_3; }
	inline void set_voiceId_3(uint8_t value)
	{
		___voiceId_3 = value;
	}

	inline static int32_t get_offset_of_voiceInfo_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass95_0_t95C1D6FE3B5757B6D816868648A1C25A81339C79, ___voiceInfo_4)); }
	inline VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  get_voiceInfo_4() const { return ___voiceInfo_4; }
	inline VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * get_address_of_voiceInfo_4() { return &___voiceInfo_4; }
	inline void set_voiceInfo_4(VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  value)
	{
		___voiceInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___voiceInfo_4))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
	}

	inline static int32_t get_offset_of_remoteVoice_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass95_0_t95C1D6FE3B5757B6D816868648A1C25A81339C79, ___remoteVoice_5)); }
	inline RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * get_remoteVoice_5() const { return ___remoteVoice_5; }
	inline RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD ** get_address_of_remoteVoice_5() { return &___remoteVoice_5; }
	inline void set_remoteVoice_5(RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * value)
	{
		___remoteVoice_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteVoice_5), (void*)value);
	}
};


// System.Action`2<System.Single[],System.Int32>
struct  Action_2_t1F689749CB5BC369F8420F1B13E67C7DA1243CB6  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.FileSystemInfo
struct  FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_5;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_6;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_7;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____data_1)); }
	inline MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ___FullPath_5)); }
	inline String_t* get_FullPath_5() const { return ___FullPath_5; }
	inline String_t** get_address_of_FullPath_5() { return &___FullPath_5; }
	inline void set_FullPath_5(String_t* value)
	{
		___FullPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullPath_5), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalPath_6() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ___OriginalPath_6)); }
	inline String_t* get_OriginalPath_6() const { return ___OriginalPath_6; }
	inline String_t** get_address_of_OriginalPath_6() { return &___OriginalPath_6; }
	inline void set_OriginalPath_6(String_t* value)
	{
		___OriginalPath_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginalPath_6), (void*)value);
	}

	inline static int32_t get_offset_of__displayPath_7() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____displayPath_7)); }
	inline String_t* get__displayPath_7() const { return ____displayPath_7; }
	inline String_t** get_address_of__displayPath_7() { return &____displayPath_7; }
	inline void set__displayPath_7(String_t* value)
	{
		____displayPath_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayPath_7), (void*)value);
	}
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
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


// System.IO.DirectoryInfo
struct  DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F  : public FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_8;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_9;

public:
	inline static int32_t get_offset_of_current_8() { return static_cast<int32_t>(offsetof(DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F, ___current_8)); }
	inline String_t* get_current_8() const { return ___current_8; }
	inline String_t** get_address_of_current_8() { return &___current_8; }
	inline void set_current_8(String_t* value)
	{
		___current_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_8), (void*)value);
	}

	inline static int32_t get_offset_of_parent_9() { return static_cast<int32_t>(offsetof(DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F, ___parent_9)); }
	inline String_t* get_parent_9() const { return ___parent_9; }
	inline String_t** get_address_of_parent_9() { return &___parent_9; }
	inline void set_parent_9(String_t* value)
	{
		___parent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_9), (void*)value);
	}
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Photon.Realtime.ConnectionHandler
struct  ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.ConnectionHandler::<Client>k__BackingField
	LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___U3CClientU3Ek__BackingField_4;
	// System.Byte Photon.Realtime.ConnectionHandler::fallbackThreadId
	uint8_t ___fallbackThreadId_5;
	// System.Boolean Photon.Realtime.ConnectionHandler::didSendAcks
	bool ___didSendAcks_6;
	// System.Int32 Photon.Realtime.ConnectionHandler::startedAckingTimestamp
	int32_t ___startedAckingTimestamp_7;
	// System.Int32 Photon.Realtime.ConnectionHandler::deltaSinceStartedToAck
	int32_t ___deltaSinceStartedToAck_8;
	// System.Int32 Photon.Realtime.ConnectionHandler::KeepAliveInBackground
	int32_t ___KeepAliveInBackground_9;
	// System.Int32 Photon.Realtime.ConnectionHandler::<CountSendAcksOnly>k__BackingField
	int32_t ___U3CCountSendAcksOnlyU3Ek__BackingField_10;
	// System.Boolean Photon.Realtime.ConnectionHandler::ApplyDontDestroyOnLoad
	bool ___ApplyDontDestroyOnLoad_11;

public:
	inline static int32_t get_offset_of_U3CClientU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0, ___U3CClientU3Ek__BackingField_4)); }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * get_U3CClientU3Ek__BackingField_4() const { return ___U3CClientU3Ek__BackingField_4; }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A ** get_address_of_U3CClientU3Ek__BackingField_4() { return &___U3CClientU3Ek__BackingField_4; }
	inline void set_U3CClientU3Ek__BackingField_4(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * value)
	{
		___U3CClientU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_fallbackThreadId_5() { return static_cast<int32_t>(offsetof(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0, ___fallbackThreadId_5)); }
	inline uint8_t get_fallbackThreadId_5() const { return ___fallbackThreadId_5; }
	inline uint8_t* get_address_of_fallbackThreadId_5() { return &___fallbackThreadId_5; }
	inline void set_fallbackThreadId_5(uint8_t value)
	{
		___fallbackThreadId_5 = value;
	}

	inline static int32_t get_offset_of_didSendAcks_6() { return static_cast<int32_t>(offsetof(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0, ___didSendAcks_6)); }
	inline bool get_didSendAcks_6() const { return ___didSendAcks_6; }
	inline bool* get_address_of_didSendAcks_6() { return &___didSendAcks_6; }
	inline void set_didSendAcks_6(bool value)
	{
		___didSendAcks_6 = value;
	}

	inline static int32_t get_offset_of_startedAckingTimestamp_7() { return static_cast<int32_t>(offsetof(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0, ___startedAckingTimestamp_7)); }
	inline int32_t get_startedAckingTimestamp_7() const { return ___startedAckingTimestamp_7; }
	inline int32_t* get_address_of_startedAckingTimestamp_7() { return &___startedAckingTimestamp_7; }
	inline void set_startedAckingTimestamp_7(int32_t value)
	{
		___startedAckingTimestamp_7 = value;
	}

	inline static int32_t get_offset_of_deltaSinceStartedToAck_8() { return static_cast<int32_t>(offsetof(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0, ___deltaSinceStartedToAck_8)); }
	inline int32_t get_deltaSinceStartedToAck_8() const { return ___deltaSinceStartedToAck_8; }
	inline int32_t* get_address_of_deltaSinceStartedToAck_8() { return &___deltaSinceStartedToAck_8; }
	inline void set_deltaSinceStartedToAck_8(int32_t value)
	{
		___deltaSinceStartedToAck_8 = value;
	}

	inline static int32_t get_offset_of_KeepAliveInBackground_9() { return static_cast<int32_t>(offsetof(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0, ___KeepAliveInBackground_9)); }
	inline int32_t get_KeepAliveInBackground_9() const { return ___KeepAliveInBackground_9; }
	inline int32_t* get_address_of_KeepAliveInBackground_9() { return &___KeepAliveInBackground_9; }
	inline void set_KeepAliveInBackground_9(int32_t value)
	{
		___KeepAliveInBackground_9 = value;
	}

	inline static int32_t get_offset_of_U3CCountSendAcksOnlyU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0, ___U3CCountSendAcksOnlyU3Ek__BackingField_10)); }
	inline int32_t get_U3CCountSendAcksOnlyU3Ek__BackingField_10() const { return ___U3CCountSendAcksOnlyU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CCountSendAcksOnlyU3Ek__BackingField_10() { return &___U3CCountSendAcksOnlyU3Ek__BackingField_10; }
	inline void set_U3CCountSendAcksOnlyU3Ek__BackingField_10(int32_t value)
	{
		___U3CCountSendAcksOnlyU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_ApplyDontDestroyOnLoad_11() { return static_cast<int32_t>(offsetof(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0, ___ApplyDontDestroyOnLoad_11)); }
	inline bool get_ApplyDontDestroyOnLoad_11() const { return ___ApplyDontDestroyOnLoad_11; }
	inline bool* get_address_of_ApplyDontDestroyOnLoad_11() { return &___ApplyDontDestroyOnLoad_11; }
	inline void set_ApplyDontDestroyOnLoad_11(bool value)
	{
		___ApplyDontDestroyOnLoad_11 = value;
	}
};

struct ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0_StaticFields
{
public:
	// System.Boolean Photon.Realtime.ConnectionHandler::AppQuits
	bool ___AppQuits_12;

public:
	inline static int32_t get_offset_of_AppQuits_12() { return static_cast<int32_t>(offsetof(ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0_StaticFields, ___AppQuits_12)); }
	inline bool get_AppQuits_12() const { return ___AppQuits_12; }
	inline bool* get_address_of_AppQuits_12() { return &___AppQuits_12; }
	inline void set_AppQuits_12(bool value)
	{
		___AppQuits_12 = value;
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


// Photon.Voice.Unity.AudioOutCapture
struct  AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Action`2<System.Single[],System.Int32> Photon.Voice.Unity.AudioOutCapture::OnAudioFrame
	Action_2_t1F689749CB5BC369F8420F1B13E67C7DA1243CB6 * ___OnAudioFrame_4;

public:
	inline static int32_t get_offset_of_OnAudioFrame_4() { return static_cast<int32_t>(offsetof(AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794, ___OnAudioFrame_4)); }
	inline Action_2_t1F689749CB5BC369F8420F1B13E67C7DA1243CB6 * get_OnAudioFrame_4() const { return ___OnAudioFrame_4; }
	inline Action_2_t1F689749CB5BC369F8420F1B13E67C7DA1243CB6 ** get_address_of_OnAudioFrame_4() { return &___OnAudioFrame_4; }
	inline void set_OnAudioFrame_4(Action_2_t1F689749CB5BC369F8420F1B13E67C7DA1243CB6 * value)
	{
		___OnAudioFrame_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAudioFrame_4), (void*)value);
	}
};


// Photon.Voice.Unity.VoiceComponent
struct  VoiceComponent_t0F536901C0B0CE8BAB210607825A35C725D6199D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Photon.Voice.Unity.VoiceLogger Photon.Voice.Unity.VoiceComponent::logger
	VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * ___logger_4;
	// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceComponent::logLevel
	uint8_t ___logLevel_5;
	// System.Boolean Photon.Voice.Unity.VoiceComponent::ignoreGlobalLogLevel
	bool ___ignoreGlobalLogLevel_6;

public:
	inline static int32_t get_offset_of_logger_4() { return static_cast<int32_t>(offsetof(VoiceComponent_t0F536901C0B0CE8BAB210607825A35C725D6199D, ___logger_4)); }
	inline VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * get_logger_4() const { return ___logger_4; }
	inline VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B ** get_address_of_logger_4() { return &___logger_4; }
	inline void set_logger_4(VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * value)
	{
		___logger_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_4), (void*)value);
	}

	inline static int32_t get_offset_of_logLevel_5() { return static_cast<int32_t>(offsetof(VoiceComponent_t0F536901C0B0CE8BAB210607825A35C725D6199D, ___logLevel_5)); }
	inline uint8_t get_logLevel_5() const { return ___logLevel_5; }
	inline uint8_t* get_address_of_logLevel_5() { return &___logLevel_5; }
	inline void set_logLevel_5(uint8_t value)
	{
		___logLevel_5 = value;
	}

	inline static int32_t get_offset_of_ignoreGlobalLogLevel_6() { return static_cast<int32_t>(offsetof(VoiceComponent_t0F536901C0B0CE8BAB210607825A35C725D6199D, ___ignoreGlobalLogLevel_6)); }
	inline bool get_ignoreGlobalLogLevel_6() const { return ___ignoreGlobalLogLevel_6; }
	inline bool* get_address_of_ignoreGlobalLogLevel_6() { return &___ignoreGlobalLogLevel_6; }
	inline void set_ignoreGlobalLogLevel_6(bool value)
	{
		___ignoreGlobalLogLevel_6 = value;
	}
};


// UnityEngine.AudioListener
struct  AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099  : public AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7
{
public:

public:
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


// Photon.Voice.Unity.Recorder
struct  Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2  : public VoiceComponent_t0F536901C0B0CE8BAB210607825A35C725D6199D
{
public:
	// System.Boolean Photon.Voice.Unity.Recorder::voiceDetection
	bool ___voiceDetection_10;
	// System.Single Photon.Voice.Unity.Recorder::voiceDetectionThreshold
	float ___voiceDetectionThreshold_11;
	// System.Int32 Photon.Voice.Unity.Recorder::voiceDetectionDelayMs
	int32_t ___voiceDetectionDelayMs_12;
	// System.Object Photon.Voice.Unity.Recorder::userData
	RuntimeObject * ___userData_13;
	// Photon.Voice.LocalVoice Photon.Voice.Unity.Recorder::voice
	LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * ___voice_14;
	// System.String Photon.Voice.Unity.Recorder::unityMicrophoneDevice
	String_t* ___unityMicrophoneDevice_15;
	// System.Int32 Photon.Voice.Unity.Recorder::photonMicrophoneDeviceId
	int32_t ___photonMicrophoneDeviceId_16;
	// Photon.Voice.IAudioDesc Photon.Voice.Unity.Recorder::inputSource
	RuntimeObject* ___inputSource_17;
	// Photon.Voice.VoiceClient Photon.Voice.Unity.Recorder::client
	VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 * ___client_18;
	// System.Byte Photon.Voice.Unity.Recorder::interestGroup
	uint8_t ___interestGroup_19;
	// System.Boolean Photon.Voice.Unity.Recorder::debugEchoMode
	bool ___debugEchoMode_20;
	// System.Boolean Photon.Voice.Unity.Recorder::reliableMode
	bool ___reliableMode_21;
	// System.Boolean Photon.Voice.Unity.Recorder::encrypt
	bool ___encrypt_22;
	// System.Boolean Photon.Voice.Unity.Recorder::transmitEnabled
	bool ___transmitEnabled_23;
	// POpusCodec.Enums.SamplingRate Photon.Voice.Unity.Recorder::samplingRate
	int32_t ___samplingRate_24;
	// Photon.Voice.OpusCodec_FrameDuration Photon.Voice.Unity.Recorder::frameDuration
	int32_t ___frameDuration_25;
	// System.Int32 Photon.Voice.Unity.Recorder::bitrate
	int32_t ___bitrate_26;
	// Photon.Voice.Unity.Recorder_InputSourceType Photon.Voice.Unity.Recorder::sourceType
	int32_t ___sourceType_27;
	// Photon.Voice.Unity.Recorder_MicType Photon.Voice.Unity.Recorder::microphoneType
	int32_t ___microphoneType_28;
	// UnityEngine.AudioClip Photon.Voice.Unity.Recorder::audioClip
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___audioClip_29;
	// System.Boolean Photon.Voice.Unity.Recorder::loopAudioClip
	bool ___loopAudioClip_30;
	// System.Boolean Photon.Voice.Unity.Recorder::isRecording
	bool ___isRecording_31;
	// System.Func`1<Photon.Voice.IAudioDesc> Photon.Voice.Unity.Recorder::inputFactory
	Func_1_t8B6480D8941CDD37BFDB2C1FBEF03C111B5F6115 * ___inputFactory_32;
	// Photon.Voice.AudioInChangeNotifier Photon.Voice.Unity.Recorder::photonMicChangeNotifier
	AudioInChangeNotifier_tF9840235D61D525C96B81ACC7F3B0308B54A25EF * ___photonMicChangeNotifier_34;
	// System.Boolean Photon.Voice.Unity.Recorder::reactOnSystemChanges
	bool ___reactOnSystemChanges_35;
	// System.Boolean Photon.Voice.Unity.Recorder::subscribedToSystemChangesPhoton
	bool ___subscribedToSystemChangesPhoton_36;
	// System.Boolean Photon.Voice.Unity.Recorder::subscribedToSystemChangesUnity
	bool ___subscribedToSystemChangesUnity_37;
	// System.Boolean Photon.Voice.Unity.Recorder::autoStart
	bool ___autoStart_38;
	// System.Boolean Photon.Voice.Unity.Recorder::recordOnlyWhenEnabled
	bool ___recordOnlyWhenEnabled_39;
	// System.Boolean Photon.Voice.Unity.Recorder::skipDeviceChangeChecks
	bool ___skipDeviceChangeChecks_40;
	// System.Boolean Photon.Voice.Unity.Recorder::wasRecordingBeforePause
	bool ___wasRecordingBeforePause_41;
	// System.Boolean Photon.Voice.Unity.Recorder::stopRecordingWhenPaused
	bool ___stopRecordingWhenPaused_42;
	// System.Boolean Photon.Voice.Unity.Recorder::useOnAudioFilterRead
	bool ___useOnAudioFilterRead_43;
	// System.Boolean Photon.Voice.Unity.Recorder::trySamplingRateMatch
	bool ___trySamplingRateMatch_44;
	// System.Boolean Photon.Voice.Unity.Recorder::useMicrophoneTypeFallback
	bool ___useMicrophoneTypeFallback_45;
	// System.Boolean Photon.Voice.Unity.Recorder::<RequiresRestart>k__BackingField
	bool ___U3CRequiresRestartU3Ek__BackingField_46;
	// Photon.Voice.Unity.Recorder_SampleTypeConv Photon.Voice.Unity.Recorder::<TypeConvert>k__BackingField
	int32_t ___U3CTypeConvertU3Ek__BackingField_47;

public:
	inline static int32_t get_offset_of_voiceDetection_10() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___voiceDetection_10)); }
	inline bool get_voiceDetection_10() const { return ___voiceDetection_10; }
	inline bool* get_address_of_voiceDetection_10() { return &___voiceDetection_10; }
	inline void set_voiceDetection_10(bool value)
	{
		___voiceDetection_10 = value;
	}

	inline static int32_t get_offset_of_voiceDetectionThreshold_11() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___voiceDetectionThreshold_11)); }
	inline float get_voiceDetectionThreshold_11() const { return ___voiceDetectionThreshold_11; }
	inline float* get_address_of_voiceDetectionThreshold_11() { return &___voiceDetectionThreshold_11; }
	inline void set_voiceDetectionThreshold_11(float value)
	{
		___voiceDetectionThreshold_11 = value;
	}

	inline static int32_t get_offset_of_voiceDetectionDelayMs_12() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___voiceDetectionDelayMs_12)); }
	inline int32_t get_voiceDetectionDelayMs_12() const { return ___voiceDetectionDelayMs_12; }
	inline int32_t* get_address_of_voiceDetectionDelayMs_12() { return &___voiceDetectionDelayMs_12; }
	inline void set_voiceDetectionDelayMs_12(int32_t value)
	{
		___voiceDetectionDelayMs_12 = value;
	}

	inline static int32_t get_offset_of_userData_13() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___userData_13)); }
	inline RuntimeObject * get_userData_13() const { return ___userData_13; }
	inline RuntimeObject ** get_address_of_userData_13() { return &___userData_13; }
	inline void set_userData_13(RuntimeObject * value)
	{
		___userData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userData_13), (void*)value);
	}

	inline static int32_t get_offset_of_voice_14() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___voice_14)); }
	inline LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * get_voice_14() const { return ___voice_14; }
	inline LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 ** get_address_of_voice_14() { return &___voice_14; }
	inline void set_voice_14(LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * value)
	{
		___voice_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voice_14), (void*)value);
	}

	inline static int32_t get_offset_of_unityMicrophoneDevice_15() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___unityMicrophoneDevice_15)); }
	inline String_t* get_unityMicrophoneDevice_15() const { return ___unityMicrophoneDevice_15; }
	inline String_t** get_address_of_unityMicrophoneDevice_15() { return &___unityMicrophoneDevice_15; }
	inline void set_unityMicrophoneDevice_15(String_t* value)
	{
		___unityMicrophoneDevice_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityMicrophoneDevice_15), (void*)value);
	}

	inline static int32_t get_offset_of_photonMicrophoneDeviceId_16() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___photonMicrophoneDeviceId_16)); }
	inline int32_t get_photonMicrophoneDeviceId_16() const { return ___photonMicrophoneDeviceId_16; }
	inline int32_t* get_address_of_photonMicrophoneDeviceId_16() { return &___photonMicrophoneDeviceId_16; }
	inline void set_photonMicrophoneDeviceId_16(int32_t value)
	{
		___photonMicrophoneDeviceId_16 = value;
	}

	inline static int32_t get_offset_of_inputSource_17() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___inputSource_17)); }
	inline RuntimeObject* get_inputSource_17() const { return ___inputSource_17; }
	inline RuntimeObject** get_address_of_inputSource_17() { return &___inputSource_17; }
	inline void set_inputSource_17(RuntimeObject* value)
	{
		___inputSource_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSource_17), (void*)value);
	}

	inline static int32_t get_offset_of_client_18() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___client_18)); }
	inline VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 * get_client_18() const { return ___client_18; }
	inline VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 ** get_address_of_client_18() { return &___client_18; }
	inline void set_client_18(VoiceClient_tD30F3CE3058BAB9BB2BB36978536169D38FE2B33 * value)
	{
		___client_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_18), (void*)value);
	}

	inline static int32_t get_offset_of_interestGroup_19() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___interestGroup_19)); }
	inline uint8_t get_interestGroup_19() const { return ___interestGroup_19; }
	inline uint8_t* get_address_of_interestGroup_19() { return &___interestGroup_19; }
	inline void set_interestGroup_19(uint8_t value)
	{
		___interestGroup_19 = value;
	}

	inline static int32_t get_offset_of_debugEchoMode_20() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___debugEchoMode_20)); }
	inline bool get_debugEchoMode_20() const { return ___debugEchoMode_20; }
	inline bool* get_address_of_debugEchoMode_20() { return &___debugEchoMode_20; }
	inline void set_debugEchoMode_20(bool value)
	{
		___debugEchoMode_20 = value;
	}

	inline static int32_t get_offset_of_reliableMode_21() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___reliableMode_21)); }
	inline bool get_reliableMode_21() const { return ___reliableMode_21; }
	inline bool* get_address_of_reliableMode_21() { return &___reliableMode_21; }
	inline void set_reliableMode_21(bool value)
	{
		___reliableMode_21 = value;
	}

	inline static int32_t get_offset_of_encrypt_22() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___encrypt_22)); }
	inline bool get_encrypt_22() const { return ___encrypt_22; }
	inline bool* get_address_of_encrypt_22() { return &___encrypt_22; }
	inline void set_encrypt_22(bool value)
	{
		___encrypt_22 = value;
	}

	inline static int32_t get_offset_of_transmitEnabled_23() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___transmitEnabled_23)); }
	inline bool get_transmitEnabled_23() const { return ___transmitEnabled_23; }
	inline bool* get_address_of_transmitEnabled_23() { return &___transmitEnabled_23; }
	inline void set_transmitEnabled_23(bool value)
	{
		___transmitEnabled_23 = value;
	}

	inline static int32_t get_offset_of_samplingRate_24() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___samplingRate_24)); }
	inline int32_t get_samplingRate_24() const { return ___samplingRate_24; }
	inline int32_t* get_address_of_samplingRate_24() { return &___samplingRate_24; }
	inline void set_samplingRate_24(int32_t value)
	{
		___samplingRate_24 = value;
	}

	inline static int32_t get_offset_of_frameDuration_25() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___frameDuration_25)); }
	inline int32_t get_frameDuration_25() const { return ___frameDuration_25; }
	inline int32_t* get_address_of_frameDuration_25() { return &___frameDuration_25; }
	inline void set_frameDuration_25(int32_t value)
	{
		___frameDuration_25 = value;
	}

	inline static int32_t get_offset_of_bitrate_26() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___bitrate_26)); }
	inline int32_t get_bitrate_26() const { return ___bitrate_26; }
	inline int32_t* get_address_of_bitrate_26() { return &___bitrate_26; }
	inline void set_bitrate_26(int32_t value)
	{
		___bitrate_26 = value;
	}

	inline static int32_t get_offset_of_sourceType_27() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___sourceType_27)); }
	inline int32_t get_sourceType_27() const { return ___sourceType_27; }
	inline int32_t* get_address_of_sourceType_27() { return &___sourceType_27; }
	inline void set_sourceType_27(int32_t value)
	{
		___sourceType_27 = value;
	}

	inline static int32_t get_offset_of_microphoneType_28() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___microphoneType_28)); }
	inline int32_t get_microphoneType_28() const { return ___microphoneType_28; }
	inline int32_t* get_address_of_microphoneType_28() { return &___microphoneType_28; }
	inline void set_microphoneType_28(int32_t value)
	{
		___microphoneType_28 = value;
	}

	inline static int32_t get_offset_of_audioClip_29() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___audioClip_29)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_audioClip_29() const { return ___audioClip_29; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_audioClip_29() { return &___audioClip_29; }
	inline void set_audioClip_29(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___audioClip_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioClip_29), (void*)value);
	}

	inline static int32_t get_offset_of_loopAudioClip_30() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___loopAudioClip_30)); }
	inline bool get_loopAudioClip_30() const { return ___loopAudioClip_30; }
	inline bool* get_address_of_loopAudioClip_30() { return &___loopAudioClip_30; }
	inline void set_loopAudioClip_30(bool value)
	{
		___loopAudioClip_30 = value;
	}

	inline static int32_t get_offset_of_isRecording_31() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___isRecording_31)); }
	inline bool get_isRecording_31() const { return ___isRecording_31; }
	inline bool* get_address_of_isRecording_31() { return &___isRecording_31; }
	inline void set_isRecording_31(bool value)
	{
		___isRecording_31 = value;
	}

	inline static int32_t get_offset_of_inputFactory_32() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___inputFactory_32)); }
	inline Func_1_t8B6480D8941CDD37BFDB2C1FBEF03C111B5F6115 * get_inputFactory_32() const { return ___inputFactory_32; }
	inline Func_1_t8B6480D8941CDD37BFDB2C1FBEF03C111B5F6115 ** get_address_of_inputFactory_32() { return &___inputFactory_32; }
	inline void set_inputFactory_32(Func_1_t8B6480D8941CDD37BFDB2C1FBEF03C111B5F6115 * value)
	{
		___inputFactory_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputFactory_32), (void*)value);
	}

	inline static int32_t get_offset_of_photonMicChangeNotifier_34() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___photonMicChangeNotifier_34)); }
	inline AudioInChangeNotifier_tF9840235D61D525C96B81ACC7F3B0308B54A25EF * get_photonMicChangeNotifier_34() const { return ___photonMicChangeNotifier_34; }
	inline AudioInChangeNotifier_tF9840235D61D525C96B81ACC7F3B0308B54A25EF ** get_address_of_photonMicChangeNotifier_34() { return &___photonMicChangeNotifier_34; }
	inline void set_photonMicChangeNotifier_34(AudioInChangeNotifier_tF9840235D61D525C96B81ACC7F3B0308B54A25EF * value)
	{
		___photonMicChangeNotifier_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonMicChangeNotifier_34), (void*)value);
	}

	inline static int32_t get_offset_of_reactOnSystemChanges_35() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___reactOnSystemChanges_35)); }
	inline bool get_reactOnSystemChanges_35() const { return ___reactOnSystemChanges_35; }
	inline bool* get_address_of_reactOnSystemChanges_35() { return &___reactOnSystemChanges_35; }
	inline void set_reactOnSystemChanges_35(bool value)
	{
		___reactOnSystemChanges_35 = value;
	}

	inline static int32_t get_offset_of_subscribedToSystemChangesPhoton_36() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___subscribedToSystemChangesPhoton_36)); }
	inline bool get_subscribedToSystemChangesPhoton_36() const { return ___subscribedToSystemChangesPhoton_36; }
	inline bool* get_address_of_subscribedToSystemChangesPhoton_36() { return &___subscribedToSystemChangesPhoton_36; }
	inline void set_subscribedToSystemChangesPhoton_36(bool value)
	{
		___subscribedToSystemChangesPhoton_36 = value;
	}

	inline static int32_t get_offset_of_subscribedToSystemChangesUnity_37() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___subscribedToSystemChangesUnity_37)); }
	inline bool get_subscribedToSystemChangesUnity_37() const { return ___subscribedToSystemChangesUnity_37; }
	inline bool* get_address_of_subscribedToSystemChangesUnity_37() { return &___subscribedToSystemChangesUnity_37; }
	inline void set_subscribedToSystemChangesUnity_37(bool value)
	{
		___subscribedToSystemChangesUnity_37 = value;
	}

	inline static int32_t get_offset_of_autoStart_38() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___autoStart_38)); }
	inline bool get_autoStart_38() const { return ___autoStart_38; }
	inline bool* get_address_of_autoStart_38() { return &___autoStart_38; }
	inline void set_autoStart_38(bool value)
	{
		___autoStart_38 = value;
	}

	inline static int32_t get_offset_of_recordOnlyWhenEnabled_39() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___recordOnlyWhenEnabled_39)); }
	inline bool get_recordOnlyWhenEnabled_39() const { return ___recordOnlyWhenEnabled_39; }
	inline bool* get_address_of_recordOnlyWhenEnabled_39() { return &___recordOnlyWhenEnabled_39; }
	inline void set_recordOnlyWhenEnabled_39(bool value)
	{
		___recordOnlyWhenEnabled_39 = value;
	}

	inline static int32_t get_offset_of_skipDeviceChangeChecks_40() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___skipDeviceChangeChecks_40)); }
	inline bool get_skipDeviceChangeChecks_40() const { return ___skipDeviceChangeChecks_40; }
	inline bool* get_address_of_skipDeviceChangeChecks_40() { return &___skipDeviceChangeChecks_40; }
	inline void set_skipDeviceChangeChecks_40(bool value)
	{
		___skipDeviceChangeChecks_40 = value;
	}

	inline static int32_t get_offset_of_wasRecordingBeforePause_41() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___wasRecordingBeforePause_41)); }
	inline bool get_wasRecordingBeforePause_41() const { return ___wasRecordingBeforePause_41; }
	inline bool* get_address_of_wasRecordingBeforePause_41() { return &___wasRecordingBeforePause_41; }
	inline void set_wasRecordingBeforePause_41(bool value)
	{
		___wasRecordingBeforePause_41 = value;
	}

	inline static int32_t get_offset_of_stopRecordingWhenPaused_42() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___stopRecordingWhenPaused_42)); }
	inline bool get_stopRecordingWhenPaused_42() const { return ___stopRecordingWhenPaused_42; }
	inline bool* get_address_of_stopRecordingWhenPaused_42() { return &___stopRecordingWhenPaused_42; }
	inline void set_stopRecordingWhenPaused_42(bool value)
	{
		___stopRecordingWhenPaused_42 = value;
	}

	inline static int32_t get_offset_of_useOnAudioFilterRead_43() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___useOnAudioFilterRead_43)); }
	inline bool get_useOnAudioFilterRead_43() const { return ___useOnAudioFilterRead_43; }
	inline bool* get_address_of_useOnAudioFilterRead_43() { return &___useOnAudioFilterRead_43; }
	inline void set_useOnAudioFilterRead_43(bool value)
	{
		___useOnAudioFilterRead_43 = value;
	}

	inline static int32_t get_offset_of_trySamplingRateMatch_44() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___trySamplingRateMatch_44)); }
	inline bool get_trySamplingRateMatch_44() const { return ___trySamplingRateMatch_44; }
	inline bool* get_address_of_trySamplingRateMatch_44() { return &___trySamplingRateMatch_44; }
	inline void set_trySamplingRateMatch_44(bool value)
	{
		___trySamplingRateMatch_44 = value;
	}

	inline static int32_t get_offset_of_useMicrophoneTypeFallback_45() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___useMicrophoneTypeFallback_45)); }
	inline bool get_useMicrophoneTypeFallback_45() const { return ___useMicrophoneTypeFallback_45; }
	inline bool* get_address_of_useMicrophoneTypeFallback_45() { return &___useMicrophoneTypeFallback_45; }
	inline void set_useMicrophoneTypeFallback_45(bool value)
	{
		___useMicrophoneTypeFallback_45 = value;
	}

	inline static int32_t get_offset_of_U3CRequiresRestartU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___U3CRequiresRestartU3Ek__BackingField_46)); }
	inline bool get_U3CRequiresRestartU3Ek__BackingField_46() const { return ___U3CRequiresRestartU3Ek__BackingField_46; }
	inline bool* get_address_of_U3CRequiresRestartU3Ek__BackingField_46() { return &___U3CRequiresRestartU3Ek__BackingField_46; }
	inline void set_U3CRequiresRestartU3Ek__BackingField_46(bool value)
	{
		___U3CRequiresRestartU3Ek__BackingField_46 = value;
	}

	inline static int32_t get_offset_of_U3CTypeConvertU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2, ___U3CTypeConvertU3Ek__BackingField_47)); }
	inline int32_t get_U3CTypeConvertU3Ek__BackingField_47() const { return ___U3CTypeConvertU3Ek__BackingField_47; }
	inline int32_t* get_address_of_U3CTypeConvertU3Ek__BackingField_47() { return &___U3CTypeConvertU3Ek__BackingField_47; }
	inline void set_U3CTypeConvertU3Ek__BackingField_47(int32_t value)
	{
		___U3CTypeConvertU3Ek__BackingField_47 = value;
	}
};

struct Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2_StaticFields
{
public:
	// System.Array Photon.Voice.Unity.Recorder::samplingRateValues
	RuntimeArray * ___samplingRateValues_9;
	// Photon.Voice.AudioInEnumerator Photon.Voice.Unity.Recorder::photonMicrophoneEnumerator
	AudioInEnumerator_tDC4812F752210FC1729388E243E2CEC07EA25CD5 * ___photonMicrophoneEnumerator_33;

public:
	inline static int32_t get_offset_of_samplingRateValues_9() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2_StaticFields, ___samplingRateValues_9)); }
	inline RuntimeArray * get_samplingRateValues_9() const { return ___samplingRateValues_9; }
	inline RuntimeArray ** get_address_of_samplingRateValues_9() { return &___samplingRateValues_9; }
	inline void set_samplingRateValues_9(RuntimeArray * value)
	{
		___samplingRateValues_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___samplingRateValues_9), (void*)value);
	}

	inline static int32_t get_offset_of_photonMicrophoneEnumerator_33() { return static_cast<int32_t>(offsetof(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2_StaticFields, ___photonMicrophoneEnumerator_33)); }
	inline AudioInEnumerator_tDC4812F752210FC1729388E243E2CEC07EA25CD5 * get_photonMicrophoneEnumerator_33() const { return ___photonMicrophoneEnumerator_33; }
	inline AudioInEnumerator_tDC4812F752210FC1729388E243E2CEC07EA25CD5 ** get_address_of_photonMicrophoneEnumerator_33() { return &___photonMicrophoneEnumerator_33; }
	inline void set_photonMicrophoneEnumerator_33(AudioInEnumerator_tDC4812F752210FC1729388E243E2CEC07EA25CD5 * value)
	{
		___photonMicrophoneEnumerator_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonMicrophoneEnumerator_33), (void*)value);
	}
};


// Photon.Voice.Unity.Speaker
struct  Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00  : public VoiceComponent_t0F536901C0B0CE8BAB210607825A35C725D6199D
{
public:
	// Photon.Voice.IAudioOut`1<System.Single> Photon.Voice.Unity.Speaker::audioOutput
	RuntimeObject* ___audioOutput_7;
	// Photon.Voice.Unity.RemoteVoiceLink Photon.Voice.Unity.Speaker::remoteVoiceLink
	RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * ___remoteVoiceLink_8;
	// System.Boolean Photon.Voice.Unity.Speaker::initialized
	bool ___initialized_9;
	// System.Boolean Photon.Voice.Unity.Speaker::playbackOnlyWhenEnabled
	bool ___playbackOnlyWhenEnabled_10;
	// System.Boolean Photon.Voice.Unity.Speaker::useSeparateCoroutine
	bool ___useSeparateCoroutine_11;
	// UnityEngine.Coroutine Photon.Voice.Unity.Speaker::playbackCoroutine
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___playbackCoroutine_12;
	// System.Int32 Photon.Voice.Unity.Speaker::playDelayMs
	int32_t ___playDelayMs_13;
	// Photon.Voice.Unity.PlaybackDelaySettings Photon.Voice.Unity.Speaker::playbackDelaySettings
	PlaybackDelaySettings_t05D2E7CA93D8F3F144181EAEF811F08FAB29B968  ___playbackDelaySettings_14;
	// System.Boolean Photon.Voice.Unity.Speaker::playbackExplicitlyStopped
	bool ___playbackExplicitlyStopped_15;
	// System.Action`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.Speaker::<OnRemoteVoiceRemoveAction>k__BackingField
	Action_1_tB56B05E225CEB0E8865008C5AEE87252E6AF644C * ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_16;
	// Photon.Realtime.Player Photon.Voice.Unity.Speaker::<Actor>k__BackingField
	Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * ___U3CActorU3Ek__BackingField_17;
	// System.Boolean Photon.Voice.Unity.Speaker::<PlaybackStarted>k__BackingField
	bool ___U3CPlaybackStartedU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_audioOutput_7() { return static_cast<int32_t>(offsetof(Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00, ___audioOutput_7)); }
	inline RuntimeObject* get_audioOutput_7() const { return ___audioOutput_7; }
	inline RuntimeObject** get_address_of_audioOutput_7() { return &___audioOutput_7; }
	inline void set_audioOutput_7(RuntimeObject* value)
	{
		___audioOutput_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioOutput_7), (void*)value);
	}

	inline static int32_t get_offset_of_remoteVoiceLink_8() { return static_cast<int32_t>(offsetof(Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00, ___remoteVoiceLink_8)); }
	inline RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * get_remoteVoiceLink_8() const { return ___remoteVoiceLink_8; }
	inline RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD ** get_address_of_remoteVoiceLink_8() { return &___remoteVoiceLink_8; }
	inline void set_remoteVoiceLink_8(RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * value)
	{
		___remoteVoiceLink_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteVoiceLink_8), (void*)value);
	}

	inline static int32_t get_offset_of_initialized_9() { return static_cast<int32_t>(offsetof(Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00, ___initialized_9)); }
	inline bool get_initialized_9() const { return ___initialized_9; }
	inline bool* get_address_of_initialized_9() { return &___initialized_9; }
	inline void set_initialized_9(bool value)
	{
		___initialized_9 = value;
	}

	inline static int32_t get_offset_of_playbackOnlyWhenEnabled_10() { return static_cast<int32_t>(offsetof(Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00, ___playbackOnlyWhenEnabled_10)); }
	inline bool get_playbackOnlyWhenEnabled_10() const { return ___playbackOnlyWhenEnabled_10; }
	inline bool* get_address_of_playbackOnlyWhenEnabled_10() { return &___playbackOnlyWhenEnabled_10; }
	inline void set_playbackOnlyWhenEnabled_10(bool value)
	{
		___playbackOnlyWhenEnabled_10 = value;
	}

	inline static int32_t get_offset_of_useSeparateCoroutine_11() { return static_cast<int32_t>(offsetof(Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00, ___useSeparateCoroutine_11)); }
	inline bool get_useSeparateCoroutine_11() const { return ___useSeparateCoroutine_11; }
	inline bool* get_address_of_useSeparateCoroutine_11() { return &___useSeparateCoroutine_11; }
	inline void set_useSeparateCoroutine_11(bool value)
	{
		___useSeparateCoroutine_11 = value;
	}

	inline static int32_t get_offset_of_playbackCoroutine_12() { return static_cast<int32_t>(offsetof(Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00, ___playbackCoroutine_12)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_playbackCoroutine_12() const { return ___playbackCoroutine_12; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_playbackCoroutine_12() { return &___playbackCoroutine_12; }
	inline void set_playbackCoroutine_12(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___playbackCoroutine_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playbackCoroutine_12), (void*)value);
	}

	inline static int32_t get_offset_of_playDelayMs_13() { return static_cast<int32_t>(offsetof(Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00, ___playDelayMs_13)); }
	inline int32_t get_playDelayMs_13() const { return ___playDelayMs_13; }
	inline int32_t* get_address_of_playDelayMs_13() { return &___playDelayMs_13; }
	inline void set_playDelayMs_13(int32_t value)
	{
		___playDelayMs_13 = value;
	}

	inline static int32_t get_offset_of_playbackDelaySettings_14() { return static_cast<int32_t>(offsetof(Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00, ___playbackDelaySettings_14)); }
	inline PlaybackDelaySettings_t05D2E7CA93D8F3F144181EAEF811F08FAB29B968  get_playbackDelaySettings_14() const { return ___playbackDelaySettings_14; }
	inline PlaybackDelaySettings_t05D2E7CA93D8F3F144181EAEF811F08FAB29B968 * get_address_of_playbackDelaySettings_14() { return &___playbackDelaySettings_14; }
	inline void set_playbackDelaySettings_14(PlaybackDelaySettings_t05D2E7CA93D8F3F144181EAEF811F08FAB29B968  value)
	{
		___playbackDelaySettings_14 = value;
	}

	inline static int32_t get_offset_of_playbackExplicitlyStopped_15() { return static_cast<int32_t>(offsetof(Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00, ___playbackExplicitlyStopped_15)); }
	inline bool get_playbackExplicitlyStopped_15() const { return ___playbackExplicitlyStopped_15; }
	inline bool* get_address_of_playbackExplicitlyStopped_15() { return &___playbackExplicitlyStopped_15; }
	inline void set_playbackExplicitlyStopped_15(bool value)
	{
		___playbackExplicitlyStopped_15 = value;
	}

	inline static int32_t get_offset_of_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00, ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_16)); }
	inline Action_1_tB56B05E225CEB0E8865008C5AEE87252E6AF644C * get_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_16() const { return ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_16; }
	inline Action_1_tB56B05E225CEB0E8865008C5AEE87252E6AF644C ** get_address_of_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_16() { return &___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_16; }
	inline void set_U3COnRemoteVoiceRemoveActionU3Ek__BackingField_16(Action_1_tB56B05E225CEB0E8865008C5AEE87252E6AF644C * value)
	{
		___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CActorU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00, ___U3CActorU3Ek__BackingField_17)); }
	inline Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * get_U3CActorU3Ek__BackingField_17() const { return ___U3CActorU3Ek__BackingField_17; }
	inline Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 ** get_address_of_U3CActorU3Ek__BackingField_17() { return &___U3CActorU3Ek__BackingField_17; }
	inline void set_U3CActorU3Ek__BackingField_17(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * value)
	{
		___U3CActorU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CActorU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlaybackStartedU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00, ___U3CPlaybackStartedU3Ek__BackingField_18)); }
	inline bool get_U3CPlaybackStartedU3Ek__BackingField_18() const { return ___U3CPlaybackStartedU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CPlaybackStartedU3Ek__BackingField_18() { return &___U3CPlaybackStartedU3Ek__BackingField_18; }
	inline void set_U3CPlaybackStartedU3Ek__BackingField_18(bool value)
	{
		___U3CPlaybackStartedU3Ek__BackingField_18 = value;
	}
};


// Photon.Voice.Unity.VoiceConnection
struct  VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421  : public ConnectionHandler_tF5BF60817D048DB87BEEAEE436A4BA77E4BAC0C0
{
public:
	// Photon.Voice.Unity.VoiceLogger Photon.Voice.Unity.VoiceConnection::logger
	VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * ___logger_13;
	// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceConnection::logLevel
	uint8_t ___logLevel_14;
	// Photon.Voice.LoadBalancingTransport Photon.Voice.Unity.VoiceConnection::client
	LoadBalancingTransport_tE7424753F1B6BCC3FCAE3AF13E78A43A1E369E78 * ___client_16;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::enableSupportLogger
	bool ___enableSupportLogger_17;
	// Photon.Realtime.SupportLogger Photon.Voice.Unity.VoiceConnection::supportLoggerComponent
	SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * ___supportLoggerComponent_18;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::updateInterval
	int32_t ___updateInterval_19;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::nextSendTickCount
	int32_t ___nextSendTickCount_20;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::runInBackground
	bool ___runInBackground_21;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::statsResetInterval
	int32_t ___statsResetInterval_22;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::nextStatsTickCount
	int32_t ___nextStatsTickCount_23;
	// System.Single Photon.Voice.Unity.VoiceConnection::statsReferenceTime
	float ___statsReferenceTime_24;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::referenceFramesLost
	int32_t ___referenceFramesLost_25;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::referenceFramesReceived
	int32_t ___referenceFramesReceived_26;
	// UnityEngine.GameObject Photon.Voice.Unity.VoiceConnection::speakerPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___speakerPrefab_27;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::cleanedUp
	bool ___cleanedUp_28;
	// System.Collections.Generic.List`1<Photon.Voice.Unity.RemoteVoiceLink> Photon.Voice.Unity.VoiceConnection::cachedRemoteVoices
	List_1_t99D97AA37DA23A7D3CF6A39A5C91AB1ABD89354E * ___cachedRemoteVoices_29;
	// Photon.Voice.Unity.Recorder Photon.Voice.Unity.VoiceConnection::primaryRecorder
	Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * ___primaryRecorder_30;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::primaryRecorderInitialized
	bool ___primaryRecorderInitialized_31;
	// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceConnection::globalRecordersLogLevel
	uint8_t ___globalRecordersLogLevel_32;
	// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceConnection::globalSpeakersLogLevel
	uint8_t ___globalSpeakersLogLevel_33;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::globalPlaybackDelay
	int32_t ___globalPlaybackDelay_34;
	// Photon.Voice.Unity.PlaybackDelaySettings Photon.Voice.Unity.VoiceConnection::globalPlaybackDelaySettings
	PlaybackDelaySettings_t05D2E7CA93D8F3F144181EAEF811F08FAB29B968  ___globalPlaybackDelaySettings_35;
	// System.Collections.Generic.List`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.VoiceConnection::linkedSpeakers
	List_1_t787D0BABE1C1B25F7256FAD1A3991B201544210D * ___linkedSpeakers_36;
	// Photon.Realtime.AppSettings Photon.Voice.Unity.VoiceConnection::Settings
	AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8 * ___Settings_37;
	// System.Func`4<System.Int32,System.Byte,System.Object,Photon.Voice.Unity.Speaker> Photon.Voice.Unity.VoiceConnection::SpeakerFactory
	Func_4_tF8E5C8C732D4E47EB7B0A69014E829E5B4C6CF00 * ___SpeakerFactory_38;
	// System.Action`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.VoiceConnection::SpeakerLinked
	Action_1_tB56B05E225CEB0E8865008C5AEE87252E6AF644C * ___SpeakerLinked_39;
	// System.Action`1<Photon.Voice.Unity.RemoteVoiceLink> Photon.Voice.Unity.VoiceConnection::RemoteVoiceAdded
	Action_1_t4A26E01CB2B16CD6FDA9DA9BC9C82212DB2897BD * ___RemoteVoiceAdded_40;
	// System.Single Photon.Voice.Unity.VoiceConnection::MinimalTimeScaleToDispatchInFixedUpdate
	float ___MinimalTimeScaleToDispatchInFixedUpdate_41;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::AutoCreateSpeakerIfNotFound
	bool ___AutoCreateSpeakerIfNotFound_42;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesReceivedPerSecond>k__BackingField
	float ___U3CFramesReceivedPerSecondU3Ek__BackingField_43;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesLostPerSecond>k__BackingField
	float ___U3CFramesLostPerSecondU3Ek__BackingField_44;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesLostPercent>k__BackingField
	float ___U3CFramesLostPercentU3Ek__BackingField_45;

public:
	inline static int32_t get_offset_of_logger_13() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___logger_13)); }
	inline VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * get_logger_13() const { return ___logger_13; }
	inline VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B ** get_address_of_logger_13() { return &___logger_13; }
	inline void set_logger_13(VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * value)
	{
		___logger_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_13), (void*)value);
	}

	inline static int32_t get_offset_of_logLevel_14() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___logLevel_14)); }
	inline uint8_t get_logLevel_14() const { return ___logLevel_14; }
	inline uint8_t* get_address_of_logLevel_14() { return &___logLevel_14; }
	inline void set_logLevel_14(uint8_t value)
	{
		___logLevel_14 = value;
	}

	inline static int32_t get_offset_of_client_16() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___client_16)); }
	inline LoadBalancingTransport_tE7424753F1B6BCC3FCAE3AF13E78A43A1E369E78 * get_client_16() const { return ___client_16; }
	inline LoadBalancingTransport_tE7424753F1B6BCC3FCAE3AF13E78A43A1E369E78 ** get_address_of_client_16() { return &___client_16; }
	inline void set_client_16(LoadBalancingTransport_tE7424753F1B6BCC3FCAE3AF13E78A43A1E369E78 * value)
	{
		___client_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_16), (void*)value);
	}

	inline static int32_t get_offset_of_enableSupportLogger_17() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___enableSupportLogger_17)); }
	inline bool get_enableSupportLogger_17() const { return ___enableSupportLogger_17; }
	inline bool* get_address_of_enableSupportLogger_17() { return &___enableSupportLogger_17; }
	inline void set_enableSupportLogger_17(bool value)
	{
		___enableSupportLogger_17 = value;
	}

	inline static int32_t get_offset_of_supportLoggerComponent_18() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___supportLoggerComponent_18)); }
	inline SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * get_supportLoggerComponent_18() const { return ___supportLoggerComponent_18; }
	inline SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA ** get_address_of_supportLoggerComponent_18() { return &___supportLoggerComponent_18; }
	inline void set_supportLoggerComponent_18(SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * value)
	{
		___supportLoggerComponent_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___supportLoggerComponent_18), (void*)value);
	}

	inline static int32_t get_offset_of_updateInterval_19() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___updateInterval_19)); }
	inline int32_t get_updateInterval_19() const { return ___updateInterval_19; }
	inline int32_t* get_address_of_updateInterval_19() { return &___updateInterval_19; }
	inline void set_updateInterval_19(int32_t value)
	{
		___updateInterval_19 = value;
	}

	inline static int32_t get_offset_of_nextSendTickCount_20() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___nextSendTickCount_20)); }
	inline int32_t get_nextSendTickCount_20() const { return ___nextSendTickCount_20; }
	inline int32_t* get_address_of_nextSendTickCount_20() { return &___nextSendTickCount_20; }
	inline void set_nextSendTickCount_20(int32_t value)
	{
		___nextSendTickCount_20 = value;
	}

	inline static int32_t get_offset_of_runInBackground_21() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___runInBackground_21)); }
	inline bool get_runInBackground_21() const { return ___runInBackground_21; }
	inline bool* get_address_of_runInBackground_21() { return &___runInBackground_21; }
	inline void set_runInBackground_21(bool value)
	{
		___runInBackground_21 = value;
	}

	inline static int32_t get_offset_of_statsResetInterval_22() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___statsResetInterval_22)); }
	inline int32_t get_statsResetInterval_22() const { return ___statsResetInterval_22; }
	inline int32_t* get_address_of_statsResetInterval_22() { return &___statsResetInterval_22; }
	inline void set_statsResetInterval_22(int32_t value)
	{
		___statsResetInterval_22 = value;
	}

	inline static int32_t get_offset_of_nextStatsTickCount_23() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___nextStatsTickCount_23)); }
	inline int32_t get_nextStatsTickCount_23() const { return ___nextStatsTickCount_23; }
	inline int32_t* get_address_of_nextStatsTickCount_23() { return &___nextStatsTickCount_23; }
	inline void set_nextStatsTickCount_23(int32_t value)
	{
		___nextStatsTickCount_23 = value;
	}

	inline static int32_t get_offset_of_statsReferenceTime_24() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___statsReferenceTime_24)); }
	inline float get_statsReferenceTime_24() const { return ___statsReferenceTime_24; }
	inline float* get_address_of_statsReferenceTime_24() { return &___statsReferenceTime_24; }
	inline void set_statsReferenceTime_24(float value)
	{
		___statsReferenceTime_24 = value;
	}

	inline static int32_t get_offset_of_referenceFramesLost_25() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___referenceFramesLost_25)); }
	inline int32_t get_referenceFramesLost_25() const { return ___referenceFramesLost_25; }
	inline int32_t* get_address_of_referenceFramesLost_25() { return &___referenceFramesLost_25; }
	inline void set_referenceFramesLost_25(int32_t value)
	{
		___referenceFramesLost_25 = value;
	}

	inline static int32_t get_offset_of_referenceFramesReceived_26() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___referenceFramesReceived_26)); }
	inline int32_t get_referenceFramesReceived_26() const { return ___referenceFramesReceived_26; }
	inline int32_t* get_address_of_referenceFramesReceived_26() { return &___referenceFramesReceived_26; }
	inline void set_referenceFramesReceived_26(int32_t value)
	{
		___referenceFramesReceived_26 = value;
	}

	inline static int32_t get_offset_of_speakerPrefab_27() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___speakerPrefab_27)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_speakerPrefab_27() const { return ___speakerPrefab_27; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_speakerPrefab_27() { return &___speakerPrefab_27; }
	inline void set_speakerPrefab_27(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___speakerPrefab_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speakerPrefab_27), (void*)value);
	}

	inline static int32_t get_offset_of_cleanedUp_28() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___cleanedUp_28)); }
	inline bool get_cleanedUp_28() const { return ___cleanedUp_28; }
	inline bool* get_address_of_cleanedUp_28() { return &___cleanedUp_28; }
	inline void set_cleanedUp_28(bool value)
	{
		___cleanedUp_28 = value;
	}

	inline static int32_t get_offset_of_cachedRemoteVoices_29() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___cachedRemoteVoices_29)); }
	inline List_1_t99D97AA37DA23A7D3CF6A39A5C91AB1ABD89354E * get_cachedRemoteVoices_29() const { return ___cachedRemoteVoices_29; }
	inline List_1_t99D97AA37DA23A7D3CF6A39A5C91AB1ABD89354E ** get_address_of_cachedRemoteVoices_29() { return &___cachedRemoteVoices_29; }
	inline void set_cachedRemoteVoices_29(List_1_t99D97AA37DA23A7D3CF6A39A5C91AB1ABD89354E * value)
	{
		___cachedRemoteVoices_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedRemoteVoices_29), (void*)value);
	}

	inline static int32_t get_offset_of_primaryRecorder_30() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___primaryRecorder_30)); }
	inline Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * get_primaryRecorder_30() const { return ___primaryRecorder_30; }
	inline Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 ** get_address_of_primaryRecorder_30() { return &___primaryRecorder_30; }
	inline void set_primaryRecorder_30(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * value)
	{
		___primaryRecorder_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___primaryRecorder_30), (void*)value);
	}

	inline static int32_t get_offset_of_primaryRecorderInitialized_31() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___primaryRecorderInitialized_31)); }
	inline bool get_primaryRecorderInitialized_31() const { return ___primaryRecorderInitialized_31; }
	inline bool* get_address_of_primaryRecorderInitialized_31() { return &___primaryRecorderInitialized_31; }
	inline void set_primaryRecorderInitialized_31(bool value)
	{
		___primaryRecorderInitialized_31 = value;
	}

	inline static int32_t get_offset_of_globalRecordersLogLevel_32() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___globalRecordersLogLevel_32)); }
	inline uint8_t get_globalRecordersLogLevel_32() const { return ___globalRecordersLogLevel_32; }
	inline uint8_t* get_address_of_globalRecordersLogLevel_32() { return &___globalRecordersLogLevel_32; }
	inline void set_globalRecordersLogLevel_32(uint8_t value)
	{
		___globalRecordersLogLevel_32 = value;
	}

	inline static int32_t get_offset_of_globalSpeakersLogLevel_33() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___globalSpeakersLogLevel_33)); }
	inline uint8_t get_globalSpeakersLogLevel_33() const { return ___globalSpeakersLogLevel_33; }
	inline uint8_t* get_address_of_globalSpeakersLogLevel_33() { return &___globalSpeakersLogLevel_33; }
	inline void set_globalSpeakersLogLevel_33(uint8_t value)
	{
		___globalSpeakersLogLevel_33 = value;
	}

	inline static int32_t get_offset_of_globalPlaybackDelay_34() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___globalPlaybackDelay_34)); }
	inline int32_t get_globalPlaybackDelay_34() const { return ___globalPlaybackDelay_34; }
	inline int32_t* get_address_of_globalPlaybackDelay_34() { return &___globalPlaybackDelay_34; }
	inline void set_globalPlaybackDelay_34(int32_t value)
	{
		___globalPlaybackDelay_34 = value;
	}

	inline static int32_t get_offset_of_globalPlaybackDelaySettings_35() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___globalPlaybackDelaySettings_35)); }
	inline PlaybackDelaySettings_t05D2E7CA93D8F3F144181EAEF811F08FAB29B968  get_globalPlaybackDelaySettings_35() const { return ___globalPlaybackDelaySettings_35; }
	inline PlaybackDelaySettings_t05D2E7CA93D8F3F144181EAEF811F08FAB29B968 * get_address_of_globalPlaybackDelaySettings_35() { return &___globalPlaybackDelaySettings_35; }
	inline void set_globalPlaybackDelaySettings_35(PlaybackDelaySettings_t05D2E7CA93D8F3F144181EAEF811F08FAB29B968  value)
	{
		___globalPlaybackDelaySettings_35 = value;
	}

	inline static int32_t get_offset_of_linkedSpeakers_36() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___linkedSpeakers_36)); }
	inline List_1_t787D0BABE1C1B25F7256FAD1A3991B201544210D * get_linkedSpeakers_36() const { return ___linkedSpeakers_36; }
	inline List_1_t787D0BABE1C1B25F7256FAD1A3991B201544210D ** get_address_of_linkedSpeakers_36() { return &___linkedSpeakers_36; }
	inline void set_linkedSpeakers_36(List_1_t787D0BABE1C1B25F7256FAD1A3991B201544210D * value)
	{
		___linkedSpeakers_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linkedSpeakers_36), (void*)value);
	}

	inline static int32_t get_offset_of_Settings_37() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___Settings_37)); }
	inline AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8 * get_Settings_37() const { return ___Settings_37; }
	inline AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8 ** get_address_of_Settings_37() { return &___Settings_37; }
	inline void set_Settings_37(AppSettings_t6277B2AD0A574551E9746ED04FA848B0049A75A8 * value)
	{
		___Settings_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Settings_37), (void*)value);
	}

	inline static int32_t get_offset_of_SpeakerFactory_38() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___SpeakerFactory_38)); }
	inline Func_4_tF8E5C8C732D4E47EB7B0A69014E829E5B4C6CF00 * get_SpeakerFactory_38() const { return ___SpeakerFactory_38; }
	inline Func_4_tF8E5C8C732D4E47EB7B0A69014E829E5B4C6CF00 ** get_address_of_SpeakerFactory_38() { return &___SpeakerFactory_38; }
	inline void set_SpeakerFactory_38(Func_4_tF8E5C8C732D4E47EB7B0A69014E829E5B4C6CF00 * value)
	{
		___SpeakerFactory_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpeakerFactory_38), (void*)value);
	}

	inline static int32_t get_offset_of_SpeakerLinked_39() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___SpeakerLinked_39)); }
	inline Action_1_tB56B05E225CEB0E8865008C5AEE87252E6AF644C * get_SpeakerLinked_39() const { return ___SpeakerLinked_39; }
	inline Action_1_tB56B05E225CEB0E8865008C5AEE87252E6AF644C ** get_address_of_SpeakerLinked_39() { return &___SpeakerLinked_39; }
	inline void set_SpeakerLinked_39(Action_1_tB56B05E225CEB0E8865008C5AEE87252E6AF644C * value)
	{
		___SpeakerLinked_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpeakerLinked_39), (void*)value);
	}

	inline static int32_t get_offset_of_RemoteVoiceAdded_40() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___RemoteVoiceAdded_40)); }
	inline Action_1_t4A26E01CB2B16CD6FDA9DA9BC9C82212DB2897BD * get_RemoteVoiceAdded_40() const { return ___RemoteVoiceAdded_40; }
	inline Action_1_t4A26E01CB2B16CD6FDA9DA9BC9C82212DB2897BD ** get_address_of_RemoteVoiceAdded_40() { return &___RemoteVoiceAdded_40; }
	inline void set_RemoteVoiceAdded_40(Action_1_t4A26E01CB2B16CD6FDA9DA9BC9C82212DB2897BD * value)
	{
		___RemoteVoiceAdded_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RemoteVoiceAdded_40), (void*)value);
	}

	inline static int32_t get_offset_of_MinimalTimeScaleToDispatchInFixedUpdate_41() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___MinimalTimeScaleToDispatchInFixedUpdate_41)); }
	inline float get_MinimalTimeScaleToDispatchInFixedUpdate_41() const { return ___MinimalTimeScaleToDispatchInFixedUpdate_41; }
	inline float* get_address_of_MinimalTimeScaleToDispatchInFixedUpdate_41() { return &___MinimalTimeScaleToDispatchInFixedUpdate_41; }
	inline void set_MinimalTimeScaleToDispatchInFixedUpdate_41(float value)
	{
		___MinimalTimeScaleToDispatchInFixedUpdate_41 = value;
	}

	inline static int32_t get_offset_of_AutoCreateSpeakerIfNotFound_42() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___AutoCreateSpeakerIfNotFound_42)); }
	inline bool get_AutoCreateSpeakerIfNotFound_42() const { return ___AutoCreateSpeakerIfNotFound_42; }
	inline bool* get_address_of_AutoCreateSpeakerIfNotFound_42() { return &___AutoCreateSpeakerIfNotFound_42; }
	inline void set_AutoCreateSpeakerIfNotFound_42(bool value)
	{
		___AutoCreateSpeakerIfNotFound_42 = value;
	}

	inline static int32_t get_offset_of_U3CFramesReceivedPerSecondU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___U3CFramesReceivedPerSecondU3Ek__BackingField_43)); }
	inline float get_U3CFramesReceivedPerSecondU3Ek__BackingField_43() const { return ___U3CFramesReceivedPerSecondU3Ek__BackingField_43; }
	inline float* get_address_of_U3CFramesReceivedPerSecondU3Ek__BackingField_43() { return &___U3CFramesReceivedPerSecondU3Ek__BackingField_43; }
	inline void set_U3CFramesReceivedPerSecondU3Ek__BackingField_43(float value)
	{
		___U3CFramesReceivedPerSecondU3Ek__BackingField_43 = value;
	}

	inline static int32_t get_offset_of_U3CFramesLostPerSecondU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___U3CFramesLostPerSecondU3Ek__BackingField_44)); }
	inline float get_U3CFramesLostPerSecondU3Ek__BackingField_44() const { return ___U3CFramesLostPerSecondU3Ek__BackingField_44; }
	inline float* get_address_of_U3CFramesLostPerSecondU3Ek__BackingField_44() { return &___U3CFramesLostPerSecondU3Ek__BackingField_44; }
	inline void set_U3CFramesLostPerSecondU3Ek__BackingField_44(float value)
	{
		___U3CFramesLostPerSecondU3Ek__BackingField_44 = value;
	}

	inline static int32_t get_offset_of_U3CFramesLostPercentU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421, ___U3CFramesLostPercentU3Ek__BackingField_45)); }
	inline float get_U3CFramesLostPercentU3Ek__BackingField_45() const { return ___U3CFramesLostPercentU3Ek__BackingField_45; }
	inline float* get_address_of_U3CFramesLostPercentU3Ek__BackingField_45() { return &___U3CFramesLostPercentU3Ek__BackingField_45; }
	inline void set_U3CFramesLostPercentU3Ek__BackingField_45(float value)
	{
		___U3CFramesLostPercentU3Ek__BackingField_45 = value;
	}
};


// Photon.Voice.Unity.WebRtcAudioDsp
struct  WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F  : public VoiceComponent_t0F536901C0B0CE8BAB210607825A35C725D6199D
{
public:
	// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::aec
	bool ___aec_7;
	// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::aecHighPass
	bool ___aecHighPass_8;
	// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::agc
	bool ___agc_9;
	// System.Int32 Photon.Voice.Unity.WebRtcAudioDsp::agcCompressionGain
	int32_t ___agcCompressionGain_10;
	// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::vad
	bool ___vad_11;
	// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::highPass
	bool ___highPass_12;
	// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::bypass
	bool ___bypass_13;
	// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::noiseSuppression
	bool ___noiseSuppression_14;
	// System.Int32 Photon.Voice.Unity.WebRtcAudioDsp::reverseStreamDelayMs
	int32_t ___reverseStreamDelayMs_15;
	// System.Int32 Photon.Voice.Unity.WebRtcAudioDsp::reverseChannels
	int32_t ___reverseChannels_16;
	// Photon.Voice.WebRTCAudioProcessor Photon.Voice.Unity.WebRtcAudioDsp::proc
	WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * ___proc_17;
	// Photon.Voice.Unity.AudioOutCapture Photon.Voice.Unity.WebRtcAudioDsp::ac
	AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * ___ac_18;
	// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::started
	bool ___started_19;
	// Photon.Voice.LocalVoice Photon.Voice.Unity.WebRtcAudioDsp::localVoice
	LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * ___localVoice_21;
	// System.Int32 Photon.Voice.Unity.WebRtcAudioDsp::outputSampleRate
	int32_t ___outputSampleRate_22;
	// Photon.Voice.Unity.Recorder Photon.Voice.Unity.WebRtcAudioDsp::recorder
	Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * ___recorder_23;
	// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::forceNormalAecInMobile
	bool ___forceNormalAecInMobile_24;
	// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::AECMobileComfortNoise
	bool ___AECMobileComfortNoise_25;

public:
	inline static int32_t get_offset_of_aec_7() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F, ___aec_7)); }
	inline bool get_aec_7() const { return ___aec_7; }
	inline bool* get_address_of_aec_7() { return &___aec_7; }
	inline void set_aec_7(bool value)
	{
		___aec_7 = value;
	}

	inline static int32_t get_offset_of_aecHighPass_8() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F, ___aecHighPass_8)); }
	inline bool get_aecHighPass_8() const { return ___aecHighPass_8; }
	inline bool* get_address_of_aecHighPass_8() { return &___aecHighPass_8; }
	inline void set_aecHighPass_8(bool value)
	{
		___aecHighPass_8 = value;
	}

	inline static int32_t get_offset_of_agc_9() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F, ___agc_9)); }
	inline bool get_agc_9() const { return ___agc_9; }
	inline bool* get_address_of_agc_9() { return &___agc_9; }
	inline void set_agc_9(bool value)
	{
		___agc_9 = value;
	}

	inline static int32_t get_offset_of_agcCompressionGain_10() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F, ___agcCompressionGain_10)); }
	inline int32_t get_agcCompressionGain_10() const { return ___agcCompressionGain_10; }
	inline int32_t* get_address_of_agcCompressionGain_10() { return &___agcCompressionGain_10; }
	inline void set_agcCompressionGain_10(int32_t value)
	{
		___agcCompressionGain_10 = value;
	}

	inline static int32_t get_offset_of_vad_11() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F, ___vad_11)); }
	inline bool get_vad_11() const { return ___vad_11; }
	inline bool* get_address_of_vad_11() { return &___vad_11; }
	inline void set_vad_11(bool value)
	{
		___vad_11 = value;
	}

	inline static int32_t get_offset_of_highPass_12() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F, ___highPass_12)); }
	inline bool get_highPass_12() const { return ___highPass_12; }
	inline bool* get_address_of_highPass_12() { return &___highPass_12; }
	inline void set_highPass_12(bool value)
	{
		___highPass_12 = value;
	}

	inline static int32_t get_offset_of_bypass_13() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F, ___bypass_13)); }
	inline bool get_bypass_13() const { return ___bypass_13; }
	inline bool* get_address_of_bypass_13() { return &___bypass_13; }
	inline void set_bypass_13(bool value)
	{
		___bypass_13 = value;
	}

	inline static int32_t get_offset_of_noiseSuppression_14() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F, ___noiseSuppression_14)); }
	inline bool get_noiseSuppression_14() const { return ___noiseSuppression_14; }
	inline bool* get_address_of_noiseSuppression_14() { return &___noiseSuppression_14; }
	inline void set_noiseSuppression_14(bool value)
	{
		___noiseSuppression_14 = value;
	}

	inline static int32_t get_offset_of_reverseStreamDelayMs_15() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F, ___reverseStreamDelayMs_15)); }
	inline int32_t get_reverseStreamDelayMs_15() const { return ___reverseStreamDelayMs_15; }
	inline int32_t* get_address_of_reverseStreamDelayMs_15() { return &___reverseStreamDelayMs_15; }
	inline void set_reverseStreamDelayMs_15(int32_t value)
	{
		___reverseStreamDelayMs_15 = value;
	}

	inline static int32_t get_offset_of_reverseChannels_16() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F, ___reverseChannels_16)); }
	inline int32_t get_reverseChannels_16() const { return ___reverseChannels_16; }
	inline int32_t* get_address_of_reverseChannels_16() { return &___reverseChannels_16; }
	inline void set_reverseChannels_16(int32_t value)
	{
		___reverseChannels_16 = value;
	}

	inline static int32_t get_offset_of_proc_17() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F, ___proc_17)); }
	inline WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * get_proc_17() const { return ___proc_17; }
	inline WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE ** get_address_of_proc_17() { return &___proc_17; }
	inline void set_proc_17(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * value)
	{
		___proc_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___proc_17), (void*)value);
	}

	inline static int32_t get_offset_of_ac_18() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F, ___ac_18)); }
	inline AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * get_ac_18() const { return ___ac_18; }
	inline AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 ** get_address_of_ac_18() { return &___ac_18; }
	inline void set_ac_18(AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * value)
	{
		___ac_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ac_18), (void*)value);
	}

	inline static int32_t get_offset_of_started_19() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F, ___started_19)); }
	inline bool get_started_19() const { return ___started_19; }
	inline bool* get_address_of_started_19() { return &___started_19; }
	inline void set_started_19(bool value)
	{
		___started_19 = value;
	}

	inline static int32_t get_offset_of_localVoice_21() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F, ___localVoice_21)); }
	inline LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * get_localVoice_21() const { return ___localVoice_21; }
	inline LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 ** get_address_of_localVoice_21() { return &___localVoice_21; }
	inline void set_localVoice_21(LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * value)
	{
		___localVoice_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localVoice_21), (void*)value);
	}

	inline static int32_t get_offset_of_outputSampleRate_22() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F, ___outputSampleRate_22)); }
	inline int32_t get_outputSampleRate_22() const { return ___outputSampleRate_22; }
	inline int32_t* get_address_of_outputSampleRate_22() { return &___outputSampleRate_22; }
	inline void set_outputSampleRate_22(int32_t value)
	{
		___outputSampleRate_22 = value;
	}

	inline static int32_t get_offset_of_recorder_23() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F, ___recorder_23)); }
	inline Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * get_recorder_23() const { return ___recorder_23; }
	inline Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 ** get_address_of_recorder_23() { return &___recorder_23; }
	inline void set_recorder_23(Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * value)
	{
		___recorder_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recorder_23), (void*)value);
	}

	inline static int32_t get_offset_of_forceNormalAecInMobile_24() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F, ___forceNormalAecInMobile_24)); }
	inline bool get_forceNormalAecInMobile_24() const { return ___forceNormalAecInMobile_24; }
	inline bool* get_address_of_forceNormalAecInMobile_24() { return &___forceNormalAecInMobile_24; }
	inline void set_forceNormalAecInMobile_24(bool value)
	{
		___forceNormalAecInMobile_24 = value;
	}

	inline static int32_t get_offset_of_AECMobileComfortNoise_25() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F, ___AECMobileComfortNoise_25)); }
	inline bool get_AECMobileComfortNoise_25() const { return ___AECMobileComfortNoise_25; }
	inline bool* get_address_of_AECMobileComfortNoise_25() { return &___AECMobileComfortNoise_25; }
	inline void set_AECMobileComfortNoise_25(bool value)
	{
		___AECMobileComfortNoise_25 = value;
	}
};

struct WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.AudioSpeakerMode,System.Int32> Photon.Voice.Unity.WebRtcAudioDsp::channelsMap
	Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D * ___channelsMap_20;

public:
	inline static int32_t get_offset_of_channelsMap_20() { return static_cast<int32_t>(offsetof(WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F_StaticFields, ___channelsMap_20)); }
	inline Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D * get_channelsMap_20() const { return ___channelsMap_20; }
	inline Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D ** get_address_of_channelsMap_20() { return &___channelsMap_20; }
	inline void set_channelsMap_20(Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D * value)
	{
		___channelsMap_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelsMap_20), (void*)value);
	}
};


// Photon.Voice.LocalVoiceAudioShort
struct  LocalVoiceAudioShort_tB824E4F1A8817C958BFECC7B524C6FFB2A98BA28  : public LocalVoiceAudio_1_t5841EE1080E7EF2DF1DF88B18F83C8B883614A34
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.AudioListener[]
struct AudioListenerU5BU5D_t48A54D58EA8EBA3C494B83DB5CFA54B7A1A6BA30  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * m_Items[1];

public:
	inline AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// Photon.Voice.IProcessor`1<System.Int16>[]
struct IProcessor_1U5BU5D_tFF6E0C19B6FF67D84A38DD099F2DFFE6BB23C0EF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Object_FindObjectsOfType_TisRuntimeObject_mE570B614F68E0A19BD5F65061CDA9BEE6EDBD159_gshared (const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m44622BA7D69357894A1A91C4AD5EBCA8A13A5638_gshared (Action_2_t699B8ADE08CA24319E2BF9872EC0569593196AED * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m76860725D68BA4E60B2A9B15DD893EDB538FC905_gshared (Dictionary_2_t93FEB43EAD2A563D654B55CE47109701F85721DE * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Int16>::AddPostProcessor(Photon.Voice.IProcessor`1<!0>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalVoiceFramed_1_AddPostProcessor_mB520A7B0A5EC84ABDEB077198556200AE48813B1_gshared (LocalVoiceFramed_1_t631B3C25EBF711BB5E2EB03387F85C8BB662853E * __this, IProcessor_1U5BU5D_tFF6E0C19B6FF67D84A38DD099F2DFFE6BB23C0EF* ___processors0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC180A4E99F0135EC62E4AEE52FA4FEA40BB50835_gshared (Dictionary_2_t93FEB43EAD2A563D654B55CE47109701F85721DE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m6434C38BC84FD770236241E5A27C245167D36842_gshared (Dictionary_2_t93FEB43EAD2A563D654B55CE47109701F85721DE * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// Photon.Voice.Unity.VoiceLogger Photon.Voice.Unity.VoiceConnection::get_Logger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859 (VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.VoiceLogger::get_IsInfoEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceLogger_get_IsInfoEnabled_m78EE09DFE5D92EA31C08E07632625CB8619F3DD1 (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, const RuntimeMethod* method);
// System.Object Photon.Voice.VoiceInfo::get_UserData()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * VoiceInfo_get_UserData_m47264239C6EFD622B9B403448D956EC29743C460_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceLogger::LogInfo(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger_LogInfo_mB846D4177FB2FBC7D8484EC81A32F25AC09554FA (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, String_t* ___fmt0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<Photon.Voice.Unity.RemoteVoiceLink>::Remove(!0)
inline bool List_1_Remove_mCC401391444A9F56964D9E9BCB1A67980DE57130 (List_1_t99D97AA37DA23A7D3CF6A39A5C91AB1ABD89354E * __this, RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t99D97AA37DA23A7D3CF6A39A5C91AB1ABD89354E *, RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, ___item0, method);
}
// System.Boolean Photon.Voice.Unity.VoiceLogger::get_IsWarningEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceLogger_get_IsWarningEnabled_m55D38FFEE557C0DCEE8B46119A55FC2761F17BFE (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceLogger::LogWarning(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger_LogWarning_m3A0FA7DDC7D3EB01D06F38A877F1935F1045E61D (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, String_t* ___fmt0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<Photon.Voice.Unity.Speaker>::Remove(!0)
inline bool List_1_Remove_m1F1DA250AACDAE8C02CD468408BF36E9F197683E (List_1_t787D0BABE1C1B25F7256FAD1A3991B201544210D * __this, Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t787D0BABE1C1B25F7256FAD1A3991B201544210D *, Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, ___item0, method);
}
// System.Void Photon.Voice.Unity.VoiceLogger::set_Tag(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VoiceLogger_set_Tag_mF86E1C9D81179ED51B03F899881F24EE3E8F9537_inline (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceLogger::set_LogLevel(ExitGames.Client.Photon.DebugLevel)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VoiceLogger_set_LogLevel_mCC6289AF9DCE3D34EA2F800A120D7B0999ACFEA2_inline (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, uint8_t ___value0, const RuntimeMethod* method);
// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceLogger::get_LogLevel()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t VoiceLogger_get_LogLevel_mB4719E673D8B3B76A9AF05E1792B80C61063D15D_inline (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.VoiceLogger::get_IsErrorEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceLogger_get_IsErrorEnabled_m10764A21F77B6B1C63DDCB440E3CD1CEA07884A6 (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, const RuntimeMethod* method);
// System.String Photon.Voice.Unity.VoiceLogger::GetFormatString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VoiceLogger_GetFormatString_mCB2D4C4A7E0FA0F437B48A4695488591895DCAB1 (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, String_t* ___fmt0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_mB54A656B267CF936439D50348FC828921AEDA8A9 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogErrorFormat(UnityEngine.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_m994E4759C25BF0E9DD4179C10E3979558137CCF0 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___context0, String_t* ___format1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarningFormat(UnityEngine.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m4A02CCF91F3A9392F4AA93576DCE2222267E5945 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___context0, String_t* ___format1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_mB23DDD2CD05B2E66F9CF8CA72ECA66C02DCC209E (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogFormat(UnityEngine.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_mC3409F5D24BB739E2A5891DC9539D3DCBA637247 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___context0, String_t* ___format1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args2, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.VoiceLogger::get_IsDebugEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceLogger_get_IsDebugEnabled_m79773791C01FD9C9DB8148EE4366019A1521B350 (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, const RuntimeMethod* method);
// System.String Photon.Voice.Unity.VoiceLogger::get_Tag()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* VoiceLogger_get_Tag_mC5DA0F5FE8637A41D926C9D9FA6CF13EB900B36F_inline (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, const RuntimeMethod* method);
// System.String Photon.Voice.Unity.VoiceLogger::GetTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VoiceLogger_GetTimestamp_m70A9E2E08D4278A8598693F2C65E227E20C0DDB8 (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1 (const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m203C5710CD7AB2F5F1B2D9DA1DFD45BB3774179A (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, String_t* ___format0, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioProcessor::set_AEC(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_AEC_mB6E0B6EC6DC70CBF8B59E6E1524EFCC965E480D8 (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::SetOutputListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_SetOutputListener_mD30656A24B0B1536236B0C91ADC04FF4B9FDD9D7 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_AEC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_AEC_mBC65630ECABC4A5C7FB8E509E03799EC77EAA9D6 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::set_AEC(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_set_AEC_m51326A01ADAE9D567548E84F7E55BF181B5924A8 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioProcessor::set_AECHighPass(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_AECHighPass_m1A9F7E7ED3767E8FFA4784442BC7F912BE2B7E69 (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioProcessor::set_AECStreamDelayMs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_AECStreamDelayMs_mF8A183FD7A5A4060DC5170E27F2564B7208939B7 (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioProcessor::set_NoiseSuppression(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_NoiseSuppression_mD54F08549A8878E95B6E92FEC258D21BFFA99A9D (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioProcessor::set_HighPass(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_HighPass_mDB5C0FC80430A979F853D88F0A7D27C78425045B (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioProcessor::set_Bypass(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_Bypass_m8587D0FEC885E0825AF99071B621A0DAEE97913E (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioProcessor::set_AGC(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_AGC_m94F321CCC61C28B78E863601BB428D75C6A43520 (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, bool ___value0, const RuntimeMethod* method);
// Photon.Voice.Unity.VoiceLogger Photon.Voice.Unity.VoiceComponent::get_Logger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1 (VoiceComponent_t0F536901C0B0CE8BAB210607825A35C725D6199D * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceLogger::LogError(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger_LogError_mF9B207BF2A3A66B02DFE7BF856A3E3D3D8C55600 (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, String_t* ___fmt0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioProcessor::set_AGCCompressionGain(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_AGCCompressionGain_m7442CBA872899D5D18F787A080C5401B23BF2638 (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioProcessor::set_VAD(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_VAD_m81F796A653F539E6B3DFC8FEC8C55FA5BC2D157D (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceComponent::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceComponent_Awake_mE5B20F8E2E558EA142D19628E8E606FD57835765 (VoiceComponent_t0F536901C0B0CE8BAB210607825A35C725D6199D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Photon.Voice.Unity.Recorder>()
inline Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * Component_GetComponent_TisRecorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2_m50ADE012D583A8E393B0901A0BAC84381CF4AB3D (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline)(method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.VoiceComponent::get_IgnoreGlobalLogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceComponent_get_IgnoreGlobalLogLevel_m67A3EBB9144816D62CFBD2A5CCEF29C160C3A4CA (VoiceComponent_t0F536901C0B0CE8BAB210607825A35C725D6199D * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceComponent::get_LogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t VoiceComponent_get_LogLevel_m7226EEA7B5133569E7C8AA366F0CE828D64F9042 (VoiceComponent_t0F536901C0B0CE8BAB210607825A35C725D6199D * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.VoiceComponent::set_LogLevel(ExitGames.Client.Photon.DebugLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceComponent_set_LogLevel_mD976F4CE59121672FB2FC53AFE96FB726F7189D9 (VoiceComponent_t0F536901C0B0CE8BAB210607825A35C725D6199D * __this, uint8_t ___value0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<UnityEngine.AudioListener>()
inline AudioListenerU5BU5D_t48A54D58EA8EBA3C494B83DB5CFA54B7A1A6BA30* Object_FindObjectsOfType_TisAudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099_mF313DD53951547CA4CC6A12F0285C6D58A497CCD (const RuntimeMethod* method)
{
	return ((  AudioListenerU5BU5D_t48A54D58EA8EBA3C494B83DB5CFA54B7A1A6BA30* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_mE570B614F68E0A19BD5F65061CDA9BEE6EDBD159_gshared)(method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::SetOrSwitchAudioListener(UnityEngine.AudioListener,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_SetOrSwitchAudioListener_m96EE851DD1B891F79CE8DCC95D126E454CAE91D4 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * ___audioListener0, bool ___extraChecks1, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.Recorder::get_IsRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recorder_get_IsRecording_m224858A65B5BA3C4C5BC40F1F7065622D0925E2F (Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.Recorder::RestartRecording(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_RestartRecording_mBD2047C44FB94A97B9F828073D8BA3FA43330B0A (Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * __this, bool ___force0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::SetOutputListener(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_SetOutputListener_mCB5CB6A8E7DD1B82921511599E9E6BCE3FACC5C7 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, bool ___on0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Single[],System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m4611A9CDDB94F544852F89AC940C667017C4DFEC (Action_2_t1F689749CB5BC369F8420F1B13E67C7DA1243CB6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t1F689749CB5BC369F8420F1B13E67C7DA1243CB6 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m44622BA7D69357894A1A91C4AD5EBCA8A13A5638_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Photon.Voice.Unity.AudioOutCapture::add_OnAudioFrame(System.Action`2<System.Single[],System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioOutCapture_add_OnAudioFrame_m51ED223C2C2FD72F62DFF83648ACCAF406912A7D (AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * __this, Action_2_t1F689749CB5BC369F8420F1B13E67C7DA1243CB6 * ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.AudioOutCapture::remove_OnAudioFrame(System.Action`2<System.Single[],System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioOutCapture_remove_OnAudioFrame_m49A01CE0D0AC424E0294B915B559BDF10DF91D0D (AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * __this, Action_2_t1F689749CB5BC369F8420F1B13E67C7DA1243CB6 * ___value0, const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_Restart_m15D266F1ECEBC55476DA3FE43CA76B2CB902C85D (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioProcessor::OnAudioOutFrameFloat(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_OnAudioOutFrameFloat_mDA88595564B6F8047BF8863239D3A6C3C11E1105 (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___data0, const RuntimeMethod* method);
// Photon.Voice.Unity.Recorder/InputSourceType Photon.Voice.Unity.Recorder::get_SourceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Recorder_get_SourceType_mBB53D8E232BCFE0944077C5AE68AEB715C903F1F (Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * __this, const RuntimeMethod* method);
// Photon.Voice.LocalVoice Photon.Voice.Unity.PhotonVoiceCreatedParams::get_Voice()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * PhotonVoiceCreatedParams_get_Voice_m6ED7A29855672E2CCCFF46AC1DFE13C1A041C0E2_inline (PhotonVoiceCreatedParams_t57D3C5049A283334F8ED09F38CCBBE10CE413675 * __this, const RuntimeMethod* method);
// Photon.Voice.VoiceInfo Photon.Voice.LocalVoice::get_Info()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  LocalVoice_get_Info_mD6DABB855378471CD002E0A476F144A9AD0F72E4 (LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Voice.VoiceInfo::get_Channels()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_Channels_m54796F2353DE7853164099D9E2B9F2C4D245B6ED_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method);
// UnityEngine.AudioSpeakerMode UnityEngine.AudioSettings::get_speakerMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_get_speakerMode_mFE3A64C54935E53E463624EFD3FF4A83CB504D60 (const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.AudioSpeakerMode,System.Int32>::get_Item(!0)
inline int32_t Dictionary_2_get_Item_mF9A10544F97231C4E035FB8A4C3F4E0053D2D1DD (Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m76860725D68BA4E60B2A9B15DD893EDB538FC905_gshared)(__this, ___key0, method);
}
// System.Int32 UnityEngine.AudioSettings::get_outputSampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_get_outputSampleRate_mA9092240D8A06109EA34644BD7FB239483F9A5F9 (const RuntimeMethod* method);
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_Init_m485162BB3A2C1633EAF8601FD6BD633B198DF0A4 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.LocalVoiceFramed`1<System.Int16>::AddPostProcessor(Photon.Voice.IProcessor`1<!0>[])
inline void LocalVoiceFramed_1_AddPostProcessor_mB520A7B0A5EC84ABDEB077198556200AE48813B1 (LocalVoiceFramed_1_t631B3C25EBF711BB5E2EB03387F85C8BB662853E * __this, IProcessor_1U5BU5D_tFF6E0C19B6FF67D84A38DD099F2DFFE6BB23C0EF* ___processors0, const RuntimeMethod* method)
{
	((  void (*) (LocalVoiceFramed_1_t631B3C25EBF711BB5E2EB03387F85C8BB662853E *, IProcessor_1U5BU5D_tFF6E0C19B6FF67D84A38DD099F2DFFE6BB23C0EF*, const RuntimeMethod*))LocalVoiceFramed_1_AddPostProcessor_mB520A7B0A5EC84ABDEB077198556200AE48813B1_gshared)(__this, ___processors0, method);
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_Reset_m1EEDFD6FC59227D4B5DBA427DE1FB8ABDA84931A (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioProcessor::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_Dispose_m7445F7D4480F6FC55F1FB693FCEE8ED421148491 (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, const RuntimeMethod* method);
// System.Int32 Photon.Voice.VoiceInfo::get_FrameSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_FrameSize_m8999A370968B57CA3AB12F1067500069A1483209 (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Voice.VoiceInfo::get_SamplingRate()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_SamplingRate_m9D617B430547DE230A31AD21379D7E823C144832_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioProcessor::.ctor(Photon.Voice.ILogger,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor__ctor_m65304840759D8AC2DC7195625043D0D289EEB6FB (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, RuntimeObject* ___logger0, int32_t ___frameSize1, int32_t ___samplingRate2, int32_t ___channels3, int32_t ___reverseSamplingRate4, int32_t ___reverseChannels5, const RuntimeMethod* method);
// System.Void Photon.Voice.WebRTCAudioProcessor::set_AECMobile(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRTCAudioProcessor_set_AECMobile_mFA2C38993A756AFDB37F36C72CA2049E534DDDD2 (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 Photon.Voice.Unity.WebRtcAudioDsp::get_ReverseStreamDelayMs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRtcAudioDsp_get_ReverseStreamDelayMs_mDE3D266FD850D0689156B6F0C767E13E78A4699C (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_AecHighPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_AecHighPass_m93260127A8AA4698EF1511B54B7047ECCFABFCDC (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_HighPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_HighPass_m78057AF4EC17B665C65F1D9E19F33E0EBD04E2C8 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_NoiseSuppression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_NoiseSuppression_mE697DFD09A7C03DDEEF96B891EB8EC2093F4A4BD (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_AGC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_AGC_m5A82C88673F6579494295A9F3D73B8189C290A78 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method);
// System.Int32 Photon.Voice.Unity.WebRtcAudioDsp::get_AgcCompressionGain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRtcAudioDsp_get_AgcCompressionGain_mE941D46351F7C4EAE4D5CB9E8F99CE90F15B5192 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_VAD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_VAD_m72ACE9DADDA4E7550DF8491153FA41E2D0CCE271 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method);
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_Bypass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_Bypass_mE7FCE77E1A12B27B8C99BE30476D6DF5D201BEBD (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Photon.Voice.Unity.AudioOutCapture>()
inline AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * Component_GetComponent_TisAudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794_m7BB3E3CE56FF332D20A793F95C474B66CE22050D (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<Photon.Voice.Unity.AudioOutCapture>()
inline AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * GameObject_AddComponent_TisAudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794_m69A0C328F9DEBDA0B4719BD0E3866AFE1C834B18 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared)(__this, method);
}
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::SetOrSwitchAudioOutCapture(Photon.Voice.Unity.AudioOutCapture,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_SetOrSwitchAudioOutCapture_m6296F0BF3AA9D3BD0CE87009C7D87AE719C9A214 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * ___audioOutCapture0, bool ___extraChecks1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioListener>()
inline AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * Component_GetComponent_TisAudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099_mAB9201E964DE4BDE85D8A9BC485E463FB3B82A0F (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// System.Void Photon.Voice.Unity.VoiceComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceComponent__ctor_m923DAB1130753242ACAEE8C4D28E8A07C4DEBFFD (VoiceComponent_t0F536901C0B0CE8BAB210607825A35C725D6199D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.AudioSpeakerMode,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mD230FE00B9E0CEA4FF957CA6FE1F2F5024CEF77F (Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D *, const RuntimeMethod*))Dictionary_2__ctor_mC180A4E99F0135EC62E4AEE52FA4FEA40BB50835_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.AudioSpeakerMode,System.Int32>::Add(!0,!1)
inline void Dictionary_2_Add_mF891D8C47B5B965BC34348B75D198880D817AE07 (Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D *, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_m6434C38BC84FD770236241E5A27C245167D36842_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D (String_t* __this, const RuntimeMethod* method);
// System.String System.IO.Path::GetExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetExtension_mAB8DB12AA3F147A487ED6AFECF8CD0043402957B (String_t* ___path0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_m61922AA6D7B48EACBA36FF41A1B28F506CFB8A97 (String_t* ___path0, const RuntimeMethod* method);
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F * Directory_CreateDirectory_m0C9CAA2ECA801C4D07EA35820DA0907402ED4D41 (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m967EF49BBCD52204BB79BA6E9DA533833B07B800 (FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * __this, String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_m2E92F4E5096905E2E7487E003AB7B3CC5C5EC185 (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___output0, const RuntimeMethod* method);
// System.Byte[] SavWav::GetWav(UnityEngine.AudioClip,System.UInt32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* SavWav_GetWav_m39C9006BAFFE17D61991C236237D4A6BEA8C8DBD (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip0, uint32_t* ___length1, bool ___trim2, const RuntimeMethod* method);
// System.Byte[] SavWav::ConvertAndWrite(UnityEngine.AudioClip,System.UInt32&,System.UInt32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* SavWav_ConvertAndWrite_m80854E7224A3C1AF9CAEC479B2164D319ADAF7DB (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip0, uint32_t* ___length1, uint32_t* ___samplesAfterTrimming2, bool ___trim3, const RuntimeMethod* method);
// System.Void SavWav::WriteHeader(System.Byte[],UnityEngine.AudioClip,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavWav_WriteHeader_m8FA4FCA85375416840A6D6EF76D45924F52715B8 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___stream0, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip1, uint32_t ___length2, uint32_t ___samples3, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioClip::get_samples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_m7AD532D9288680102A452D2949107BDA88268CA0 (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioClip::get_channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_m2CF01E121CEBBF3B69EC7EEE7EC28172AB6078EC (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioClip::GetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_m8150E67D6068CAA88BE4155CB5924B2359272EE0 (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___data0, int32_t ___offsetSamples1, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioClip::get_frequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_frequency_m8CE3C1898AEC71B496092039B233B61EED527661 (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9 (const RuntimeMethod* method);
// System.Void SavWav::AddDataToBuffer(System.Byte[],System.UInt32&,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavWav_AddDataToBuffer_m27F1D5093125396AA7C73801C5402AD38258DD3D (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, uint32_t* ___offset1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___addBytes2, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* BitConverter_GetBytes_m4D19CD2921F098BF2362C17993AC5B5452E5A13F (uint32_t ___value0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* BitConverter_GetBytes_m692444BB12DAE2F46C7DDE67B04CF2073DEE1211 (uint16_t ___value0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Voice.Unity.VoiceConnection_<>c__DisplayClass95_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass95_0__ctor_mB424D7C2621A39CA3DD3F042AF52EAA49D2C629A (U3CU3Ec__DisplayClass95_0_t95C1D6FE3B5757B6D816868648A1C25A81339C79 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.Unity.VoiceConnection_<>c__DisplayClass95_0::<OnRemoteVoiceInfo>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass95_0_U3COnRemoteVoiceInfoU3Eb__0_m64EEDBFD54B0EF78F038B234D7604A8E7036D5E5 (U3CU3Ec__DisplayClass95_0_t95C1D6FE3B5757B6D816868648A1C25A81339C79 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass95_0_U3COnRemoteVoiceInfoU3Eb__0_m64EEDBFD54B0EF78F038B234D7604A8E7036D5E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		// if (this.Logger.IsInfoEnabled)
		VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_1 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = VoiceLogger_get_IsInfoEnabled_m78EE09DFE5D92EA31C08E07632625CB8619F3DD1(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_006b;
		}
	}
	{
		// this.Logger.LogInfo("RemoteVoiceRemoved channel {0} player {1} voice #{2} userData {3}", channelId, playerId, voiceId, voiceInfo.UserData);
		VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 * L_4 = __this->get_U3CU3E4__this_0();
		NullCheck(L_4);
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_5 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(L_4, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_6;
		int32_t L_8 = __this->get_channelId_1();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_7;
		int32_t L_12 = __this->get_playerId_2();
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_14);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_11;
		uint8_t L_16 = __this->get_voiceId_3();
		uint8_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_18);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = L_15;
		VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * L_20 = __this->get_address_of_voiceInfo_4();
		RuntimeObject * L_21 = VoiceInfo_get_UserData_m47264239C6EFD622B9B403448D956EC29743C460_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_21);
		NullCheck(L_5);
		VoiceLogger_LogInfo_mB846D4177FB2FBC7D8484EC81A32F25AC09554FA(L_5, _stringLiteralABE66D6818BF4A12CB292BD1281BAB5172C3665A, L_19, /*hidden argument*/NULL);
	}

IL_006b:
	{
		// if (!this.cachedRemoteVoices.Remove(remoteVoice) && this.Logger.IsWarningEnabled)
		VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 * L_22 = __this->get_U3CU3E4__this_0();
		NullCheck(L_22);
		List_1_t99D97AA37DA23A7D3CF6A39A5C91AB1ABD89354E * L_23 = L_22->get_cachedRemoteVoices_29();
		RemoteVoiceLink_t36CD8149B00A19AAFB5F849E95E1A30CC30095AD * L_24 = __this->get_remoteVoice_5();
		NullCheck(L_23);
		bool L_25 = List_1_Remove_mCC401391444A9F56964D9E9BCB1A67980DE57130(L_23, L_24, /*hidden argument*/List_1_Remove_mCC401391444A9F56964D9E9BCB1A67980DE57130_RuntimeMethod_var);
		if (L_25)
		{
			goto IL_0095;
		}
	}
	{
		VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 * L_26 = __this->get_U3CU3E4__this_0();
		NullCheck(L_26);
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_27 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		bool L_28 = VoiceLogger_get_IsWarningEnabled_m55D38FFEE557C0DCEE8B46119A55FC2761F17BFE(L_27, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_28));
		goto IL_0096;
	}

IL_0095:
	{
		G_B5_0 = 0;
	}

IL_0096:
	{
		V_1 = (bool)G_B5_0;
		bool L_29 = V_1;
		if (!L_29)
		{
			goto IL_00f0;
		}
	}
	{
		// this.Logger.LogWarning("Cached remote voice info not removed for channel {0} player {1} voice #{2} userData {3}", channelId, playerId, voiceId, voiceInfo.UserData);
		VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 * L_30 = __this->get_U3CU3E4__this_0();
		NullCheck(L_30);
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_31 = VoiceConnection_get_Logger_m27A0810CD64C974EE9FF0C0269BF317DF47BF859(L_30, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_32 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_33 = L_32;
		int32_t L_34 = __this->get_channelId_1();
		int32_t L_35 = L_34;
		RuntimeObject * L_36 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_36);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_37 = L_33;
		int32_t L_38 = __this->get_playerId_2();
		int32_t L_39 = L_38;
		RuntimeObject * L_40 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_40);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_40);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_41 = L_37;
		uint8_t L_42 = __this->get_voiceId_3();
		uint8_t L_43 = L_42;
		RuntimeObject * L_44 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_44);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_44);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_45 = L_41;
		VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * L_46 = __this->get_address_of_voiceInfo_4();
		RuntimeObject * L_47 = VoiceInfo_get_UserData_m47264239C6EFD622B9B403448D956EC29743C460_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)L_46, /*hidden argument*/NULL);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_47);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_47);
		NullCheck(L_31);
		VoiceLogger_LogWarning_m3A0FA7DDC7D3EB01D06F38A877F1935F1045E61D(L_31, _stringLiteral896A50ECF8B4DF2FF949092C9A5E30E5B51EEF72, L_45, /*hidden argument*/NULL);
	}

IL_00f0:
	{
		// };
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
// System.Void Photon.Voice.Unity.VoiceConnection_<>c__DisplayClass99_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass99_0__ctor_m178A76303358B0EF2AE44EF47FA94DDD11680C88 (U3CU3Ec__DisplayClass99_0_tED5E957F49BB90A5EBAA7D08EEB7405D83762AA0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.Unity.VoiceConnection_<>c__DisplayClass99_0::<LinkSpeaker>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass99_0_U3CLinkSpeakerU3Eb__0_m2C0500F26C5CAD45386B115A14BEFC46AD09FE80 (U3CU3Ec__DisplayClass99_0_tED5E957F49BB90A5EBAA7D08EEB7405D83762AA0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass99_0_U3CLinkSpeakerU3Eb__0_m2C0500F26C5CAD45386B115A14BEFC46AD09FE80_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.linkedSpeakers.Remove(speaker);
		VoiceConnection_tA56D746BF455AD7A3A1664A04A810ED14CCC8421 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		List_1_t787D0BABE1C1B25F7256FAD1A3991B201544210D * L_1 = L_0->get_linkedSpeakers_36();
		Speaker_tB2EB3B855746BD6C266776472EF3E01E7AF31A00 * L_2 = __this->get_speaker_1();
		NullCheck(L_1);
		List_1_Remove_m1F1DA250AACDAE8C02CD468408BF36E9F197683E(L_1, L_2, /*hidden argument*/List_1_Remove_m1F1DA250AACDAE8C02CD468408BF36E9F197683E_RuntimeMethod_var);
		// };
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
// System.Void Photon.Voice.Unity.VoiceLogger::.ctor(UnityEngine.Object,System.String,ExitGames.Client.Photon.DebugLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger__ctor_m0BA3AF540DB22BF3E3182DC2F02096A83F13267D (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___context0, String_t* ___tag1, uint8_t ___level2, const RuntimeMethod* method)
{
	{
		// public VoiceLogger(Object context, string tag, DebugLevel level = DebugLevel.ERROR)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.context = context;
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_0 = ___context0;
		__this->set_context_2(L_0);
		// this.Tag = tag;
		String_t* L_1 = ___tag1;
		VoiceLogger_set_Tag_mF86E1C9D81179ED51B03F899881F24EE3E8F9537_inline(__this, L_1, /*hidden argument*/NULL);
		// this.LogLevel = level;
		uint8_t L_2 = ___level2;
		VoiceLogger_set_LogLevel_mCC6289AF9DCE3D34EA2F800A120D7B0999ACFEA2_inline(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.VoiceLogger::.ctor(System.String,ExitGames.Client.Photon.DebugLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger__ctor_m0485D3F106D3923D4B7B24905D141320FD01D371 (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, String_t* ___tag0, uint8_t ___level1, const RuntimeMethod* method)
{
	{
		// public VoiceLogger(string tag, DebugLevel level = DebugLevel.ERROR)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.Tag = tag;
		String_t* L_0 = ___tag0;
		VoiceLogger_set_Tag_mF86E1C9D81179ED51B03F899881F24EE3E8F9537_inline(__this, L_0, /*hidden argument*/NULL);
		// this.LogLevel = level;
		uint8_t L_1 = ___level1;
		VoiceLogger_set_LogLevel_mCC6289AF9DCE3D34EA2F800A120D7B0999ACFEA2_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Photon.Voice.Unity.VoiceLogger::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VoiceLogger_get_Tag_mC5DA0F5FE8637A41D926C9D9FA6CF13EB900B36F (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, const RuntimeMethod* method)
{
	{
		// public string Tag { get; set; }
		String_t* L_0 = __this->get_U3CTagU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.VoiceLogger::set_Tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger_set_Tag_mF86E1C9D81179ED51B03F899881F24EE3E8F9537 (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Tag { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CTagU3Ek__BackingField_0(L_0);
		return;
	}
}
// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceLogger::get_LogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t VoiceLogger_get_LogLevel_mB4719E673D8B3B76A9AF05E1792B80C61063D15D (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, const RuntimeMethod* method)
{
	{
		// public DebugLevel LogLevel { get; set; }
		uint8_t L_0 = __this->get_U3CLogLevelU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Photon.Voice.Unity.VoiceLogger::set_LogLevel(ExitGames.Client.Photon.DebugLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger_set_LogLevel_mCC6289AF9DCE3D34EA2F800A120D7B0999ACFEA2 (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// public DebugLevel LogLevel { get; set; }
		uint8_t L_0 = ___value0;
		__this->set_U3CLogLevelU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean Photon.Voice.Unity.VoiceLogger::get_IsErrorEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceLogger_get_IsErrorEnabled_m10764A21F77B6B1C63DDCB440E3CD1CEA07884A6 (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return this.LogLevel >= DebugLevel.ERROR; }
		uint8_t L_0 = VoiceLogger_get_LogLevel_mB4719E673D8B3B76A9AF05E1792B80C61063D15D_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		// get { return this.LogLevel >= DebugLevel.ERROR; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Photon.Voice.Unity.VoiceLogger::get_IsWarningEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceLogger_get_IsWarningEnabled_m55D38FFEE557C0DCEE8B46119A55FC2761F17BFE (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return this.LogLevel >= DebugLevel.WARNING; }
		uint8_t L_0 = VoiceLogger_get_LogLevel_mB4719E673D8B3B76A9AF05E1792B80C61063D15D_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		// get { return this.LogLevel >= DebugLevel.WARNING; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Photon.Voice.Unity.VoiceLogger::get_IsInfoEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceLogger_get_IsInfoEnabled_m78EE09DFE5D92EA31C08E07632625CB8619F3DD1 (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return this.LogLevel >= DebugLevel.INFO; }
		uint8_t L_0 = VoiceLogger_get_LogLevel_mB4719E673D8B3B76A9AF05E1792B80C61063D15D_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		// get { return this.LogLevel >= DebugLevel.INFO; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Photon.Voice.Unity.VoiceLogger::get_IsDebugEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceLogger_get_IsDebugEnabled_m79773791C01FD9C9DB8148EE4366019A1521B350 (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool IsDebugEnabled { get { return this.LogLevel == DebugLevel.ALL; } }
		uint8_t L_0 = VoiceLogger_get_LogLevel_mB4719E673D8B3B76A9AF05E1792B80C61063D15D_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)5))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// public bool IsDebugEnabled { get { return this.LogLevel == DebugLevel.ALL; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Voice.Unity.VoiceLogger::LogError(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger_LogError_mF9B207BF2A3A66B02DFE7BF856A3E3D3D8C55600 (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, String_t* ___fmt0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VoiceLogger_LogError_mF9B207BF2A3A66B02DFE7BF856A3E3D3D8C55600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!this.IsErrorEnabled) return;
		bool L_0 = VoiceLogger_get_IsErrorEnabled_m10764A21F77B6B1C63DDCB440E3CD1CEA07884A6(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (!this.IsErrorEnabled) return;
		goto IL_0045;
	}

IL_0010:
	{
		// fmt = this.GetFormatString(fmt);
		String_t* L_2 = ___fmt0;
		String_t* L_3 = VoiceLogger_GetFormatString_mCB2D4C4A7E0FA0F437B48A4695488591895DCAB1(__this, L_2, /*hidden argument*/NULL);
		___fmt0 = L_3;
		// if (this.context == null)
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_4 = __this->get_context_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		// Debug.LogErrorFormat(fmt, args);
		String_t* L_7 = ___fmt0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mB54A656B267CF936439D50348FC828921AEDA8A9(L_7, L_8, /*hidden argument*/NULL);
		goto IL_0045;
	}

IL_0035:
	{
		// Debug.LogErrorFormat(this.context, fmt, args);
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_9 = __this->get_context_2();
		String_t* L_10 = ___fmt0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m994E4759C25BF0E9DD4179C10E3979558137CCF0(L_9, L_10, L_11, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.VoiceLogger::LogWarning(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger_LogWarning_m3A0FA7DDC7D3EB01D06F38A877F1935F1045E61D (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, String_t* ___fmt0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VoiceLogger_LogWarning_m3A0FA7DDC7D3EB01D06F38A877F1935F1045E61D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!this.IsWarningEnabled) return;
		bool L_0 = VoiceLogger_get_IsWarningEnabled_m55D38FFEE557C0DCEE8B46119A55FC2761F17BFE(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (!this.IsWarningEnabled) return;
		goto IL_0045;
	}

IL_0010:
	{
		// fmt = this.GetFormatString(fmt);
		String_t* L_2 = ___fmt0;
		String_t* L_3 = VoiceLogger_GetFormatString_mCB2D4C4A7E0FA0F437B48A4695488591895DCAB1(__this, L_2, /*hidden argument*/NULL);
		___fmt0 = L_3;
		// if (this.context == null)
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_4 = __this->get_context_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		// Debug.LogWarningFormat(fmt, args);
		String_t* L_7 = ___fmt0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB(L_7, L_8, /*hidden argument*/NULL);
		goto IL_0045;
	}

IL_0035:
	{
		// Debug.LogWarningFormat(this.context, fmt, args);
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_9 = __this->get_context_2();
		String_t* L_10 = ___fmt0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m4A02CCF91F3A9392F4AA93576DCE2222267E5945(L_9, L_10, L_11, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.VoiceLogger::LogInfo(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger_LogInfo_mB846D4177FB2FBC7D8484EC81A32F25AC09554FA (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, String_t* ___fmt0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VoiceLogger_LogInfo_mB846D4177FB2FBC7D8484EC81A32F25AC09554FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!this.IsInfoEnabled) return;
		bool L_0 = VoiceLogger_get_IsInfoEnabled_m78EE09DFE5D92EA31C08E07632625CB8619F3DD1(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (!this.IsInfoEnabled) return;
		goto IL_0045;
	}

IL_0010:
	{
		// fmt = this.GetFormatString(fmt);
		String_t* L_2 = ___fmt0;
		String_t* L_3 = VoiceLogger_GetFormatString_mCB2D4C4A7E0FA0F437B48A4695488591895DCAB1(__this, L_2, /*hidden argument*/NULL);
		___fmt0 = L_3;
		// if (this.context == null)
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_4 = __this->get_context_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		// Debug.LogFormat(fmt, args);
		String_t* L_7 = ___fmt0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogFormat_mB23DDD2CD05B2E66F9CF8CA72ECA66C02DCC209E(L_7, L_8, /*hidden argument*/NULL);
		goto IL_0045;
	}

IL_0035:
	{
		// Debug.LogFormat(this.context, fmt, args);
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_9 = __this->get_context_2();
		String_t* L_10 = ___fmt0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogFormat_mC3409F5D24BB739E2A5891DC9539D3DCBA637247(L_9, L_10, L_11, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.VoiceLogger::LogDebug(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceLogger_LogDebug_m7C44AF0B9A17E90AEA44B66944EBE332937747B9 (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, String_t* ___fmt0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (!this.IsDebugEnabled) return;
		bool L_0 = VoiceLogger_get_IsDebugEnabled_m79773791C01FD9C9DB8148EE4366019A1521B350(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (!this.IsDebugEnabled) return;
		goto IL_0019;
	}

IL_0010:
	{
		// this.LogInfo(fmt, args);
		String_t* L_2 = ___fmt0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___args1;
		VoiceLogger_LogInfo_mB846D4177FB2FBC7D8484EC81A32F25AC09554FA(__this, L_2, L_3, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.String Photon.Voice.Unity.VoiceLogger::GetFormatString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VoiceLogger_GetFormatString_mCB2D4C4A7E0FA0F437B48A4695488591895DCAB1 (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, String_t* ___fmt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VoiceLogger_GetFormatString_mCB2D4C4A7E0FA0F437B48A4695488591895DCAB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Format("[{0}] {1}:{2}", this.Tag, this.GetTimestamp(), fmt);
		String_t* L_0 = VoiceLogger_get_Tag_mC5DA0F5FE8637A41D926C9D9FA6CF13EB900B36F_inline(__this, /*hidden argument*/NULL);
		String_t* L_1 = VoiceLogger_GetTimestamp_m70A9E2E08D4278A8598693F2C65E227E20C0DDB8(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___fmt0;
		String_t* L_3 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteralD37FB1735AC431CABF0512F9D1D8D7D0794B76C1, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Photon.Voice.Unity.VoiceLogger::GetTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VoiceLogger_GetTimestamp_m70A9E2E08D4278A8598693F2C65E227E20C0DDB8 (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VoiceLogger_GetTimestamp_m70A9E2E08D4278A8598693F2C65E227E20C0DDB8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// return System.DateTime.UtcNow.ToString("yyyy'-'MM'-'dd'T'HH':'mm':'ss");
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = DateTime_ToString_m203C5710CD7AB2F5F1B2D9DA1DFD45BB3774179A((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_0), _stringLiteral5D424748DC7BA7F1436BEE6745884FC83B53EED8, /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		String_t* L_2 = V_1;
		return L_2;
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
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_AEC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_AEC_mBC65630ECABC4A5C7FB8E509E03799EC77EAA9D6 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return this.aec; }
		bool L_0 = __this->get_aec_7();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.aec; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::set_AEC(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_set_AEC_m51326A01ADAE9D567548E84F7E55BF181B5924A8 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, bool ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (value == this.aec)
		bool L_0 = ___value0;
		bool L_1 = __this->get_aec_7();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_0040;
	}

IL_0011:
	{
		// this.aec = value;
		bool L_3 = ___value0;
		__this->set_aec_7(L_3);
		// if (this.proc != null)
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_4 = __this->get_proc_17();
		V_1 = (bool)((!(((RuntimeObject*)(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		// this.proc.AEC = this.aec;
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_6 = __this->get_proc_17();
		bool L_7 = __this->get_aec_7();
		NullCheck(L_6);
		WebRTCAudioProcessor_set_AEC_mB6E0B6EC6DC70CBF8B59E6E1524EFCC965E480D8(L_6, L_7, /*hidden argument*/NULL);
		// this.SetOutputListener();
		WebRtcAudioDsp_SetOutputListener_mD30656A24B0B1536236B0C91ADC04FF4B9FDD9D7(__this, /*hidden argument*/NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_AECMobile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_AECMobile_m1D1319504549A5D42BE17CC8AB43FA8A48E4142B (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return this.AEC; }
		bool L_0 = WebRtcAudioDsp_get_AEC_mBC65630ECABC4A5C7FB8E509E03799EC77EAA9D6(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.AEC; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::set_AECMobile(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_set_AECMobile_m99FE620B41B0B3C6BBF6B978BA1A822D886C1E70 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// this.AEC = value;
		bool L_0 = ___value0;
		WebRtcAudioDsp_set_AEC_m51326A01ADAE9D567548E84F7E55BF181B5924A8(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_AecHighPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_AecHighPass_m93260127A8AA4698EF1511B54B7047ECCFABFCDC (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return this.aecHighPass; }
		bool L_0 = __this->get_aecHighPass_8();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.aecHighPass; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::set_AecHighPass(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_set_AecHighPass_mAB3408AE9E3159A628CC405EB2376DA335A6A447 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, bool ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (value == this.aecHighPass)
		bool L_0 = ___value0;
		bool L_1 = __this->get_aecHighPass_8();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_0039;
	}

IL_0011:
	{
		// this.aecHighPass = value;
		bool L_3 = ___value0;
		__this->set_aecHighPass_8(L_3);
		// if (this.proc != null)
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_4 = __this->get_proc_17();
		V_1 = (bool)((!(((RuntimeObject*)(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// this.proc.AECHighPass = this.aecHighPass;
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_6 = __this->get_proc_17();
		bool L_7 = __this->get_aecHighPass_8();
		NullCheck(L_6);
		WebRTCAudioProcessor_set_AECHighPass_m1A9F7E7ED3767E8FFA4784442BC7F912BE2B7E69(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Int32 Photon.Voice.Unity.WebRtcAudioDsp::get_ReverseStreamDelayMs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRtcAudioDsp_get_ReverseStreamDelayMs_mDE3D266FD850D0689156B6F0C767E13E78A4699C (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return this.reverseStreamDelayMs; }
		int32_t L_0 = __this->get_reverseStreamDelayMs_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.reverseStreamDelayMs; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::set_ReverseStreamDelayMs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_set_ReverseStreamDelayMs_mCB1E56A0E5D2B7645CC5AED10A5A2AA5D740EFBB (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (this.reverseStreamDelayMs == value)
		int32_t L_0 = __this->get_reverseStreamDelayMs_15();
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_0039;
	}

IL_0011:
	{
		// this.reverseStreamDelayMs = value;
		int32_t L_3 = ___value0;
		__this->set_reverseStreamDelayMs_15(L_3);
		// if (this.proc != null)
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_4 = __this->get_proc_17();
		V_1 = (bool)((!(((RuntimeObject*)(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// this.proc.AECStreamDelayMs = this.reverseStreamDelayMs;
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_6 = __this->get_proc_17();
		int32_t L_7 = __this->get_reverseStreamDelayMs_15();
		NullCheck(L_6);
		WebRTCAudioProcessor_set_AECStreamDelayMs_mF8A183FD7A5A4060DC5170E27F2564B7208939B7(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_NoiseSuppression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_NoiseSuppression_mE697DFD09A7C03DDEEF96B891EB8EC2093F4A4BD (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return this.noiseSuppression; }
		bool L_0 = __this->get_noiseSuppression_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.noiseSuppression; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::set_NoiseSuppression(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_set_NoiseSuppression_m888281B1F8B5A1353749BC57C47FBD340705CBD9 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, bool ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (value == this.noiseSuppression)
		bool L_0 = ___value0;
		bool L_1 = __this->get_noiseSuppression_14();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_0039;
	}

IL_0011:
	{
		// this.noiseSuppression = value;
		bool L_3 = ___value0;
		__this->set_noiseSuppression_14(L_3);
		// if (this.proc != null)
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_4 = __this->get_proc_17();
		V_1 = (bool)((!(((RuntimeObject*)(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// this.proc.NoiseSuppression = this.noiseSuppression;
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_6 = __this->get_proc_17();
		bool L_7 = __this->get_noiseSuppression_14();
		NullCheck(L_6);
		WebRTCAudioProcessor_set_NoiseSuppression_mD54F08549A8878E95B6E92FEC258D21BFFA99A9D(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_HighPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_HighPass_m78057AF4EC17B665C65F1D9E19F33E0EBD04E2C8 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return this.highPass; }
		bool L_0 = __this->get_highPass_12();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.highPass; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::set_HighPass(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_set_HighPass_m810E6651D2B8B4D2B1C5F148CCC7C27A740629D0 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, bool ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (value == this.highPass)
		bool L_0 = ___value0;
		bool L_1 = __this->get_highPass_12();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_0039;
	}

IL_0011:
	{
		// this.highPass = value;
		bool L_3 = ___value0;
		__this->set_highPass_12(L_3);
		// if (this.proc != null)
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_4 = __this->get_proc_17();
		V_1 = (bool)((!(((RuntimeObject*)(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// this.proc.HighPass = this.highPass;
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_6 = __this->get_proc_17();
		bool L_7 = __this->get_highPass_12();
		NullCheck(L_6);
		WebRTCAudioProcessor_set_HighPass_mDB5C0FC80430A979F853D88F0A7D27C78425045B(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_Bypass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_Bypass_mE7FCE77E1A12B27B8C99BE30476D6DF5D201BEBD (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return this.bypass; }
		bool L_0 = __this->get_bypass_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.bypass; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::set_Bypass(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_set_Bypass_mEDFE8E31264B59621A6C6CA4339A9EEBC185D983 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, bool ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (value == this.bypass)
		bool L_0 = ___value0;
		bool L_1 = __this->get_bypass_13();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_0039;
	}

IL_0011:
	{
		// this.bypass = value;
		bool L_3 = ___value0;
		__this->set_bypass_13(L_3);
		// if (this.proc != null)
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_4 = __this->get_proc_17();
		V_1 = (bool)((!(((RuntimeObject*)(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// this.proc.Bypass = this.bypass;
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_6 = __this->get_proc_17();
		bool L_7 = __this->get_bypass_13();
		NullCheck(L_6);
		WebRTCAudioProcessor_set_Bypass_m8587D0FEC885E0825AF99071B621A0DAEE97913E(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_AGC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_AGC_m5A82C88673F6579494295A9F3D73B8189C290A78 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return this.agc; }
		bool L_0 = __this->get_agc_9();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.agc; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::set_AGC(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_set_AGC_m2C535D14BEA77D4A19E46873F7AB07D8D12ABDE4 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, bool ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (value == this.agc)
		bool L_0 = ___value0;
		bool L_1 = __this->get_agc_9();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_0039;
	}

IL_0011:
	{
		// this.agc = value;
		bool L_3 = ___value0;
		__this->set_agc_9(L_3);
		// if (this.proc != null)
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_4 = __this->get_proc_17();
		V_1 = (bool)((!(((RuntimeObject*)(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// this.proc.AGC = this.agc;
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_6 = __this->get_proc_17();
		bool L_7 = __this->get_agc_9();
		NullCheck(L_6);
		WebRTCAudioProcessor_set_AGC_m94F321CCC61C28B78E863601BB428D75C6A43520(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Int32 Photon.Voice.Unity.WebRtcAudioDsp::get_AgcCompressionGain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRtcAudioDsp_get_AgcCompressionGain_mE941D46351F7C4EAE4D5CB9E8F99CE90F15B5192 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return this.agcCompressionGain;
		int32_t L_0 = __this->get_agcCompressionGain_10();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::set_AgcCompressionGain(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_set_AgcCompressionGain_m07F7BFD2BA7963E3927A398011C8831C452FB2BC (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRtcAudioDsp_set_AgcCompressionGain_m07F7BFD2BA7963E3927A398011C8831C452FB2BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		// if (this.agcCompressionGain == value)
		int32_t L_0 = __this->get_agcCompressionGain_10();
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_007d;
	}

IL_0011:
	{
		// if (value < 0 || value > 90)
		int32_t L_3 = ___value0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_4 = ___value0;
		G_B5_0 = ((((int32_t)L_4) > ((int32_t)((int32_t)90)))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B5_0 = 1;
	}

IL_001d:
	{
		V_1 = (bool)G_B5_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0055;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_6 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7 = VoiceLogger_get_IsErrorEnabled_m10764A21F77B6B1C63DDCB440E3CD1CEA07884A6(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		// this.Logger.LogError("AgcCompressionGain value {0} not in range [0..90]", value);
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_9 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_10;
		int32_t L_12 = ___value0;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_14);
		NullCheck(L_9);
		VoiceLogger_LogError_mF9B207BF2A3A66B02DFE7BF856A3E3D3D8C55600(L_9, _stringLiteral8978901ADA576B5359390659F5D0C73D8429E56B, L_11, /*hidden argument*/NULL);
	}

IL_0053:
	{
		// return;
		goto IL_007d;
	}

IL_0055:
	{
		// this.agcCompressionGain = value;
		int32_t L_15 = ___value0;
		__this->set_agcCompressionGain_10(L_15);
		// if (this.proc != null)
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_16 = __this->get_proc_17();
		V_3 = (bool)((!(((RuntimeObject*)(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_007d;
		}
	}
	{
		// this.proc.AGCCompressionGain = this.agcCompressionGain;
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_18 = __this->get_proc_17();
		int32_t L_19 = __this->get_agcCompressionGain_10();
		NullCheck(L_18);
		WebRTCAudioProcessor_set_AGCCompressionGain_m7442CBA872899D5D18F787A080C5401B23BF2638(L_18, L_19, /*hidden argument*/NULL);
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_VAD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_VAD_m72ACE9DADDA4E7550DF8491153FA41E2D0CCE271 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return this.vad; }
		bool L_0 = __this->get_vad_11();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.vad; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::set_VAD(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_set_VAD_m12077129948350A7344A66AAA15717DF62E322C1 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, bool ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (value == this.vad)
		bool L_0 = ___value0;
		bool L_1 = __this->get_vad_11();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_0039;
	}

IL_0011:
	{
		// this.vad = value;
		bool L_3 = ___value0;
		__this->set_vad_11(L_3);
		// if (this.proc != null)
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_4 = __this->get_proc_17();
		V_1 = (bool)((!(((RuntimeObject*)(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// this.proc.VAD = this.vad;
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_6 = __this->get_proc_17();
		bool L_7 = __this->get_vad_11();
		NullCheck(L_6);
		WebRTCAudioProcessor_set_VAD_m81F796A653F539E6B3DFC8FEC8C55FA5BC2D157D(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::get_ForceNormalAecInMobile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_get_ForceNormalAecInMobile_mC0776A9CA806C9FC311B49899A6AB48A112D5A7D (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return this.forceNormalAecInMobile; }
		bool L_0 = __this->get_forceNormalAecInMobile_24();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.forceNormalAecInMobile; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::set_ForceNormalAecInMobile(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_set_ForceNormalAecInMobile_mBED26C001927683FB19E36D0CE24FB6AD06AB1D1 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { this.forceNormalAecInMobile = value; }
		bool L_0 = ___value0;
		__this->set_forceNormalAecInMobile_24(L_0);
		// set { this.forceNormalAecInMobile = value; }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_Awake_mD69EEB134E4D3D5346B8CCD793959BF0CFA8789A (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRtcAudioDsp_Awake_mD69EEB134E4D3D5346B8CCD793959BF0CFA8789A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioListenerU5BU5D_t48A54D58EA8EBA3C494B83DB5CFA54B7A1A6BA30* V_0 = NULL;
	AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B10_0 = 0;
	{
		// base.Awake();
		VoiceComponent_Awake_mE5B20F8E2E558EA142D19628E8E606FD57835765(__this, /*hidden argument*/NULL);
		// this.recorder = this.GetComponent<Recorder>();
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_0 = Component_GetComponent_TisRecorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2_m50ADE012D583A8E393B0901A0BAC84381CF4AB3D(__this, /*hidden argument*/Component_GetComponent_TisRecorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2_m50ADE012D583A8E393B0901A0BAC84381CF4AB3D_RuntimeMethod_var);
		__this->set_recorder_23(L_0);
		// if (this.recorder == null)
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_1 = __this->get_recorder_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0059;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_4 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = VoiceLogger_get_IsErrorEnabled_m10764A21F77B6B1C63DDCB440E3CD1CEA07884A6(L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		// this.Logger.LogError("A Recorder component needs to be attached to the same GameObject");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_7 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_7);
		VoiceLogger_LogError_mF9B207BF2A3A66B02DFE7BF856A3E3D3D8C55600(L_7, _stringLiteralCE28645609BB3E651E752748077E2A318F6D31D8, L_8, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// this.enabled = false;
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(__this, (bool)0, /*hidden argument*/NULL);
		// return;
		goto IL_010c;
	}

IL_0059:
	{
		// if (!this.IgnoreGlobalLogLevel)
		bool L_9 = VoiceComponent_get_IgnoreGlobalLogLevel_m67A3EBB9144816D62CFBD2A5CCEF29C160C3A4CA(__this, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_007c;
		}
	}
	{
		// this.LogLevel = this.recorder.LogLevel;
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_11 = __this->get_recorder_23();
		NullCheck(L_11);
		uint8_t L_12 = VoiceComponent_get_LogLevel_m7226EEA7B5133569E7C8AA366F0CE828D64F9042(L_11, /*hidden argument*/NULL);
		VoiceComponent_set_LogLevel_mD976F4CE59121672FB2FC53AFE96FB726F7189D9(__this, L_12, /*hidden argument*/NULL);
	}

IL_007c:
	{
		// AudioListener[] audioListeners = FindObjectsOfType<AudioListener>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		AudioListenerU5BU5D_t48A54D58EA8EBA3C494B83DB5CFA54B7A1A6BA30* L_13 = Object_FindObjectsOfType_TisAudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099_mF313DD53951547CA4CC6A12F0285C6D58A497CCD(/*hidden argument*/Object_FindObjectsOfType_TisAudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099_mF313DD53951547CA4CC6A12F0285C6D58A497CCD_RuntimeMethod_var);
		V_0 = L_13;
		// AudioListener audioListener = null;
		V_1 = (AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 *)NULL;
		// for(int i=0; i < audioListeners.Length; i++)
		V_5 = 0;
		goto IL_00bb;
	}

IL_0089:
	{
		// if (audioListeners[i].gameObject.activeInHierarchy && audioListeners[i].enabled)
		AudioListenerU5BU5D_t48A54D58EA8EBA3C494B83DB5CFA54B7A1A6BA30* L_14 = V_0;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		bool L_19 = GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00a5;
		}
	}
	{
		AudioListenerU5BU5D_t48A54D58EA8EBA3C494B83DB5CFA54B7A1A6BA30* L_20 = V_0;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		bool L_24 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(L_23, /*hidden argument*/NULL);
		G_B10_0 = ((int32_t)(L_24));
		goto IL_00a6;
	}

IL_00a5:
	{
		G_B10_0 = 0;
	}

IL_00a6:
	{
		V_6 = (bool)G_B10_0;
		bool L_25 = V_6;
		if (!L_25)
		{
			goto IL_00b4;
		}
	}
	{
		// audioListener = audioListeners[i];
		AudioListenerU5BU5D_t48A54D58EA8EBA3C494B83DB5CFA54B7A1A6BA30* L_26 = V_0;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_1 = L_29;
		// break;
		goto IL_00c8;
	}

IL_00b4:
	{
		// for(int i=0; i < audioListeners.Length; i++)
		int32_t L_30 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00bb:
	{
		// for(int i=0; i < audioListeners.Length; i++)
		int32_t L_31 = V_5;
		AudioListenerU5BU5D_t48A54D58EA8EBA3C494B83DB5CFA54B7A1A6BA30* L_32 = V_0;
		NullCheck(L_32);
		V_7 = (bool)((((int32_t)L_31) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))))))? 1 : 0);
		bool L_33 = V_7;
		if (L_33)
		{
			goto IL_0089;
		}
	}

IL_00c8:
	{
		// if (!this.SetOrSwitchAudioListener(audioListener, false))
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_34 = V_1;
		bool L_35 = WebRtcAudioDsp_SetOrSwitchAudioListener_m96EE851DD1B891F79CE8DCC95D126E454CAE91D4(__this, L_34, (bool)0, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_8;
		if (!L_36)
		{
			goto IL_010c;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_37 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_37);
		bool L_38 = VoiceLogger_get_IsErrorEnabled_m10764A21F77B6B1C63DDCB440E3CD1CEA07884A6(L_37, /*hidden argument*/NULL);
		V_9 = L_38;
		bool L_39 = V_9;
		if (!L_39)
		{
			goto IL_0103;
		}
	}
	{
		// this.Logger.LogError("AudioListener and AudioOutCapture components are required");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_40 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_41 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_40);
		VoiceLogger_LogError_mF9B207BF2A3A66B02DFE7BF856A3E3D3D8C55600(L_40, _stringLiteral8910C171760FE65D86FBC96EE91CAB2AFABD984C, L_41, /*hidden argument*/NULL);
	}

IL_0103:
	{
		// this.enabled = false;
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_010c:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_OnEnable_mF292B1085C6397AB7BAD3696DCC93BA07BE00DAC (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRtcAudioDsp_OnEnable_mF292B1085C6397AB7BAD3696DCC93BA07BE00DAC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (this.recorder.IsRecording && this.proc == null)
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_0 = __this->get_recorder_23();
		NullCheck(L_0);
		bool L_1 = Recorder_get_IsRecording_m224858A65B5BA3C4C5BC40F1F7065622D0925E2F(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_2 = __this->get_proc_17();
		G_B3_0 = ((((RuntimeObject*)(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
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
			goto IL_0054;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_4 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = VoiceLogger_get_IsWarningEnabled_m55D38FFEE557C0DCEE8B46119A55FC2761F17BFE(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		// this.Logger.LogWarning("WebRtcAudioDsp is added after recording has started, restarting recording to take effect");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_7 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_7);
		VoiceLogger_LogWarning_m3A0FA7DDC7D3EB01D06F38A877F1935F1045E61D(L_7, _stringLiteralBE03C0114D118CB7D44AD3A4B854CF5CF40F6A1C, L_8, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// this.recorder.RestartRecording(true);
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_9 = __this->get_recorder_23();
		NullCheck(L_9);
		Recorder_RestartRecording_mBD2047C44FB94A97B9F828073D8BA3FA43330B0A(L_9, (bool)1, /*hidden argument*/NULL);
	}

IL_0054:
	{
		// this.SetOutputListener();
		WebRtcAudioDsp_SetOutputListener_mD30656A24B0B1536236B0C91ADC04FF4B9FDD9D7(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_OnDisable_m6E5CEC6999EF7DAA52CDB3D3BAD36524EC78DAF4 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method)
{
	{
		// this.SetOutputListener(false);
		WebRtcAudioDsp_SetOutputListener_mCB5CB6A8E7DD1B82921511599E9E6BCE3FACC5C7(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::SetOutputListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_SetOutputListener_mD30656A24B0B1536236B0C91ADC04FF4B9FDD9D7 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method)
{
	{
		// this.SetOutputListener(this.AEC);
		bool L_0 = WebRtcAudioDsp_get_AEC_mBC65630ECABC4A5C7FB8E509E03799EC77EAA9D6(__this, /*hidden argument*/NULL);
		WebRtcAudioDsp_SetOutputListener_mCB5CB6A8E7DD1B82921511599E9E6BCE3FACC5C7(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::SetOutputListener(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_SetOutputListener_mCB5CB6A8E7DD1B82921511599E9E6BCE3FACC5C7 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, bool ___on0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRtcAudioDsp_SetOutputListener_mCB5CB6A8E7DD1B82921511599E9E6BCE3FACC5C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		// if (this.ac != null && this.started != on && this.proc != null)
		AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * L_0 = __this->get_ac_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		bool L_2 = __this->get_started_19();
		bool L_3 = ___on0;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0023;
		}
	}
	{
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_4 = __this->get_proc_17();
		G_B4_0 = ((!(((RuntimeObject*)(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B4_0 = 0;
	}

IL_0024:
	{
		V_0 = (bool)G_B4_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0073;
		}
	}
	{
		// if (on)
		bool L_6 = ___on0;
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		// this.started = true;
		__this->set_started_19((bool)1);
		// this.ac.OnAudioFrame += this.OnAudioOutFrameFloat;
		AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * L_8 = __this->get_ac_18();
		Action_2_t1F689749CB5BC369F8420F1B13E67C7DA1243CB6 * L_9 = (Action_2_t1F689749CB5BC369F8420F1B13E67C7DA1243CB6 *)il2cpp_codegen_object_new(Action_2_t1F689749CB5BC369F8420F1B13E67C7DA1243CB6_il2cpp_TypeInfo_var);
		Action_2__ctor_m4611A9CDDB94F544852F89AC940C667017C4DFEC(L_9, __this, (intptr_t)((intptr_t)WebRtcAudioDsp_OnAudioOutFrameFloat_m218AB055C9853373EB7A6FF3399480101EFD9754_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m4611A9CDDB94F544852F89AC940C667017C4DFEC_RuntimeMethod_var);
		NullCheck(L_8);
		AudioOutCapture_add_OnAudioFrame_m51ED223C2C2FD72F62DFF83648ACCAF406912A7D(L_8, L_9, /*hidden argument*/NULL);
		goto IL_0072;
	}

IL_0051:
	{
		// this.started = false;
		__this->set_started_19((bool)0);
		// this.ac.OnAudioFrame -= this.OnAudioOutFrameFloat;
		AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * L_10 = __this->get_ac_18();
		Action_2_t1F689749CB5BC369F8420F1B13E67C7DA1243CB6 * L_11 = (Action_2_t1F689749CB5BC369F8420F1B13E67C7DA1243CB6 *)il2cpp_codegen_object_new(Action_2_t1F689749CB5BC369F8420F1B13E67C7DA1243CB6_il2cpp_TypeInfo_var);
		Action_2__ctor_m4611A9CDDB94F544852F89AC940C667017C4DFEC(L_11, __this, (intptr_t)((intptr_t)WebRtcAudioDsp_OnAudioOutFrameFloat_m218AB055C9853373EB7A6FF3399480101EFD9754_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m4611A9CDDB94F544852F89AC940C667017C4DFEC_RuntimeMethod_var);
		NullCheck(L_10);
		AudioOutCapture_remove_OnAudioFrame_m49A01CE0D0AC424E0294B915B559BDF10DF91D0D(L_10, L_11, /*hidden argument*/NULL);
	}

IL_0072:
	{
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::OnAudioOutFrameFloat(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_OnAudioOutFrameFloat_m218AB055C9853373EB7A6FF3399480101EFD9754 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___data0, int32_t ___outChannels1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRtcAudioDsp_OnAudioOutFrameFloat_m218AB055C9853373EB7A6FF3399480101EFD9754_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (outChannels != this.reverseChannels)
		int32_t L_0 = ___outChannels1;
		int32_t L_1 = __this->get_reverseChannels_16();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0060;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_3 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = VoiceLogger_get_IsErrorEnabled_m10764A21F77B6B1C63DDCB440E3CD1CEA07884A6(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		// this.Logger.LogError("OnAudioOutFrame channel count {0} != initialized {1}.  Switching channels and restarting.", outChannels, this.reverseChannels);
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_6 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_7;
		int32_t L_9 = ___outChannels1;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_8;
		int32_t L_13 = __this->get_reverseChannels_16();
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
		NullCheck(L_6);
		VoiceLogger_LogError_mF9B207BF2A3A66B02DFE7BF856A3E3D3D8C55600(L_6, _stringLiteralA486D57987651DC24A28A4F5A1D492B63E543333, L_12, /*hidden argument*/NULL);
	}

IL_0051:
	{
		// this.reverseChannels = outChannels;
		int32_t L_16 = ___outChannels1;
		__this->set_reverseChannels_16(L_16);
		// this.Restart();
		WebRtcAudioDsp_Restart_m15D266F1ECEBC55476DA3FE43CA76B2CB902C85D(__this, /*hidden argument*/NULL);
	}

IL_0060:
	{
		// this.proc.OnAudioOutFrameFloat(data);
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_17 = __this->get_proc_17();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_18 = ___data0;
		NullCheck(L_17);
		WebRTCAudioProcessor_OnAudioOutFrameFloat_mDA88595564B6F8047BF8863239D3A6C3C11E1105(L_17, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::PhotonVoiceCreated(Photon.Voice.Unity.PhotonVoiceCreatedParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_PhotonVoiceCreated_mF1E829254F771E2E44CE9F79C3AED2C4CC3F90F4 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, PhotonVoiceCreatedParams_t57D3C5049A283334F8ED09F38CCBBE10CE413675 * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRtcAudioDsp_PhotonVoiceCreated_mF1E829254F771E2E44CE9F79C3AED2C4CC3F90F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LocalVoiceAudioShort_tB824E4F1A8817C958BFECC7B524C6FFB2A98BA28 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B5_0 = 0;
	{
		// if (!this.enabled)
		bool L_0 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		goto IL_0187;
	}

IL_0014:
	{
		// if (this.recorder != null && this.recorder.SourceType != Recorder.InputSourceType.Microphone)
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_2 = __this->get_recorder_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		Recorder_tA46A5101D1971121B2B22DC01F00E1DF155765E2 * L_4 = __this->get_recorder_23();
		NullCheck(L_4);
		int32_t L_5 = Recorder_get_SourceType_mBB53D8E232BCFE0944077C5AE68AEB715C903F1F(L_4, /*hidden argument*/NULL);
		G_B5_0 = ((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B5_0 = 0;
	}

IL_0033:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		// if (this.Logger.IsWarningEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_7 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_8 = VoiceLogger_get_IsWarningEnabled_m55D38FFEE557C0DCEE8B46119A55FC2761F17BFE(L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		// this.Logger.LogWarning("WebRtcAudioDsp is better suited to be used with Microphone as Recorder Input Source Type.");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_10 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_10);
		VoiceLogger_LogWarning_m3A0FA7DDC7D3EB01D06F38A877F1935F1045E61D(L_10, _stringLiteralAB8035E43EA159B553E80D0A57068CCF7A47BCA1, L_11, /*hidden argument*/NULL);
	}

IL_005f:
	{
	}

IL_0060:
	{
		// this.localVoice = p.Voice;
		PhotonVoiceCreatedParams_t57D3C5049A283334F8ED09F38CCBBE10CE413675 * L_12 = ___p0;
		NullCheck(L_12);
		LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * L_13 = PhotonVoiceCreatedParams_get_Voice_m6ED7A29855672E2CCCFF46AC1DFE13C1A041C0E2_inline(L_12, /*hidden argument*/NULL);
		__this->set_localVoice_21(L_13);
		// if (this.localVoice.Info.Channels != 1)
		LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * L_14 = __this->get_localVoice_21();
		NullCheck(L_14);
		VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  L_15 = LocalVoice_get_Info_mD6DABB855378471CD002E0A476F144A9AD0F72E4(L_14, /*hidden argument*/NULL);
		V_5 = L_15;
		int32_t L_16 = VoiceInfo_get_Channels_m54796F2353DE7853164099D9E2B9F2C4D245B6ED_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)(&V_5), /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_16) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_18 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		bool L_19 = VoiceLogger_get_IsErrorEnabled_m10764A21F77B6B1C63DDCB440E3CD1CEA07884A6(L_18, /*hidden argument*/NULL);
		V_6 = L_19;
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_00b6;
		}
	}
	{
		// this.Logger.LogError("Only mono audio signals supported.");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_21 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_21);
		VoiceLogger_LogError_mF9B207BF2A3A66B02DFE7BF856A3E3D3D8C55600(L_21, _stringLiteralA53AF748DAA4771B2E2800B7E09B897BB9110AC7, L_22, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		// this.enabled = false;
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(__this, (bool)0, /*hidden argument*/NULL);
		// return;
		goto IL_0187;
	}

IL_00c3:
	{
		// if (!(this.localVoice is LocalVoiceAudioShort))
		LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * L_23 = __this->get_localVoice_21();
		V_7 = (bool)((((int32_t)((!(((RuntimeObject*)(LocalVoiceAudioShort_tB824E4F1A8817C958BFECC7B524C6FFB2A98BA28 *)((LocalVoiceAudioShort_tB824E4F1A8817C958BFECC7B524C6FFB2A98BA28 *)IsInstClass((RuntimeObject*)L_23, LocalVoiceAudioShort_tB824E4F1A8817C958BFECC7B524C6FFB2A98BA28_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_010e;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_25 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		bool L_26 = VoiceLogger_get_IsErrorEnabled_m10764A21F77B6B1C63DDCB440E3CD1CEA07884A6(L_25, /*hidden argument*/NULL);
		V_8 = L_26;
		bool L_27 = V_8;
		if (!L_27)
		{
			goto IL_0104;
		}
	}
	{
		// this.Logger.LogError("Only short audio voice supported.");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_28 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_29 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_28);
		VoiceLogger_LogError_mF9B207BF2A3A66B02DFE7BF856A3E3D3D8C55600(L_28, _stringLiteral6CC40AEBCA3458CDF17D2339D17F6C843843C912, L_29, /*hidden argument*/NULL);
	}

IL_0104:
	{
		// this.enabled = false;
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(__this, (bool)0, /*hidden argument*/NULL);
		// return;
		goto IL_0187;
	}

IL_010e:
	{
		// this.reverseChannels = channelsMap[AudioSettings.speakerMode];
		IL2CPP_RUNTIME_CLASS_INIT(WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F_il2cpp_TypeInfo_var);
		Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D * L_30 = ((WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F_StaticFields*)il2cpp_codegen_static_fields_for(WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F_il2cpp_TypeInfo_var))->get_channelsMap_20();
		int32_t L_31 = AudioSettings_get_speakerMode_mFE3A64C54935E53E463624EFD3FF4A83CB504D60(/*hidden argument*/NULL);
		NullCheck(L_30);
		int32_t L_32 = Dictionary_2_get_Item_mF9A10544F97231C4E035FB8A4C3F4E0053D2D1DD(L_30, L_31, /*hidden argument*/Dictionary_2_get_Item_mF9A10544F97231C4E035FB8A4C3F4E0053D2D1DD_RuntimeMethod_var);
		__this->set_reverseChannels_16(L_32);
		// this.outputSampleRate = AudioSettings.outputSampleRate;
		int32_t L_33 = AudioSettings_get_outputSampleRate_mA9092240D8A06109EA34644BD7FB239483F9A5F9(/*hidden argument*/NULL);
		__this->set_outputSampleRate_22(L_33);
		// this.Init();
		WebRtcAudioDsp_Init_m485162BB3A2C1633EAF8601FD6BD633B198DF0A4(__this, /*hidden argument*/NULL);
		// LocalVoiceAudioShort v = this.localVoice as LocalVoiceAudioShort;
		LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * L_34 = __this->get_localVoice_21();
		V_0 = ((LocalVoiceAudioShort_tB824E4F1A8817C958BFECC7B524C6FFB2A98BA28 *)IsInstClass((RuntimeObject*)L_34, LocalVoiceAudioShort_tB824E4F1A8817C958BFECC7B524C6FFB2A98BA28_il2cpp_TypeInfo_var));
		// v.AddPostProcessor(this.proc);
		LocalVoiceAudioShort_tB824E4F1A8817C958BFECC7B524C6FFB2A98BA28 * L_35 = V_0;
		IProcessor_1U5BU5D_tFF6E0C19B6FF67D84A38DD099F2DFFE6BB23C0EF* L_36 = (IProcessor_1U5BU5D_tFF6E0C19B6FF67D84A38DD099F2DFFE6BB23C0EF*)(IProcessor_1U5BU5D_tFF6E0C19B6FF67D84A38DD099F2DFFE6BB23C0EF*)SZArrayNew(IProcessor_1U5BU5D_tFF6E0C19B6FF67D84A38DD099F2DFFE6BB23C0EF_il2cpp_TypeInfo_var, (uint32_t)1);
		IProcessor_1U5BU5D_tFF6E0C19B6FF67D84A38DD099F2DFFE6BB23C0EF* L_37 = L_36;
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_38 = __this->get_proc_17();
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_38);
		NullCheck(L_35);
		LocalVoiceFramed_1_AddPostProcessor_mB520A7B0A5EC84ABDEB077198556200AE48813B1(L_35, L_37, /*hidden argument*/LocalVoiceFramed_1_AddPostProcessor_mB520A7B0A5EC84ABDEB077198556200AE48813B1_RuntimeMethod_var);
		// this.SetOutputListener();
		WebRtcAudioDsp_SetOutputListener_mD30656A24B0B1536236B0C91ADC04FF4B9FDD9D7(__this, /*hidden argument*/NULL);
		// if (this.Logger.IsInfoEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_39 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		bool L_40 = VoiceLogger_get_IsInfoEnabled_m78EE09DFE5D92EA31C08E07632625CB8619F3DD1(L_39, /*hidden argument*/NULL);
		V_9 = L_40;
		bool L_41 = V_9;
		if (!L_41)
		{
			goto IL_0187;
		}
	}
	{
		// this.Logger.LogInfo("Initialized");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_42 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_43 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_42);
		VoiceLogger_LogInfo_mB846D4177FB2FBC7D8484EC81A32F25AC09554FA(L_42, _stringLiteral26AC5E37D496DE00BF60E19D042275381E3527B3, L_43, /*hidden argument*/NULL);
	}

IL_0187:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::PhotonVoiceRemoved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_PhotonVoiceRemoved_mF75C651EE109C7E402230FC2C10DA9D65F51A5E1 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method)
{
	{
		// this.Reset();
		WebRtcAudioDsp_Reset_m1EEDFD6FC59227D4B5DBA427DE1FB8ABDA84931A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_OnDestroy_m6D1E6C8043BA855627C8D11771761BE0976275D7 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method)
{
	{
		// this.Reset();
		WebRtcAudioDsp_Reset_m1EEDFD6FC59227D4B5DBA427DE1FB8ABDA84931A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_Reset_m1EEDFD6FC59227D4B5DBA427DE1FB8ABDA84931A (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// this.SetOutputListener(false);
		WebRtcAudioDsp_SetOutputListener_mCB5CB6A8E7DD1B82921511599E9E6BCE3FACC5C7(__this, (bool)0, /*hidden argument*/NULL);
		// if (this.proc != null)
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_0 = __this->get_proc_17();
		V_0 = (bool)((!(((RuntimeObject*)(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// this.proc.Dispose();
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_2 = __this->get_proc_17();
		NullCheck(L_2);
		WebRTCAudioProcessor_Dispose_m7445F7D4480F6FC55F1FB693FCEE8ED421148491(L_2, /*hidden argument*/NULL);
		// this.proc = null;
		__this->set_proc_17((WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE *)NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_Restart_m15D266F1ECEBC55476DA3FE43CA76B2CB902C85D (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method)
{
	{
		// this.Reset();
		WebRtcAudioDsp_Reset_m1EEDFD6FC59227D4B5DBA427DE1FB8ABDA84931A(__this, /*hidden argument*/NULL);
		// this.Init();
		WebRtcAudioDsp_Init_m485162BB3A2C1633EAF8601FD6BD633B198DF0A4(__this, /*hidden argument*/NULL);
		// this.SetOutputListener();
		WebRtcAudioDsp_SetOutputListener_mD30656A24B0B1536236B0C91ADC04FF4B9FDD9D7(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp_Init_m485162BB3A2C1633EAF8601FD6BD633B198DF0A4 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRtcAudioDsp_Init_m485162BB3A2C1633EAF8601FD6BD633B198DF0A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// this.proc = new WebRTCAudioProcessor(this.Logger, this.localVoice.Info.FrameSize, this.localVoice.Info.SamplingRate,
		//     this.localVoice.Info.Channels, this.outputSampleRate, this.reverseChannels);
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_0 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * L_1 = __this->get_localVoice_21();
		NullCheck(L_1);
		VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  L_2 = LocalVoice_get_Info_mD6DABB855378471CD002E0A476F144A9AD0F72E4(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = VoiceInfo_get_FrameSize_m8999A370968B57CA3AB12F1067500069A1483209((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)(&V_0), /*hidden argument*/NULL);
		LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * L_4 = __this->get_localVoice_21();
		NullCheck(L_4);
		VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  L_5 = LocalVoice_get_Info_mD6DABB855378471CD002E0A476F144A9AD0F72E4(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = VoiceInfo_get_SamplingRate_m9D617B430547DE230A31AD21379D7E823C144832_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)(&V_0), /*hidden argument*/NULL);
		LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * L_7 = __this->get_localVoice_21();
		NullCheck(L_7);
		VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740  L_8 = LocalVoice_get_Info_mD6DABB855378471CD002E0A476F144A9AD0F72E4(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9 = VoiceInfo_get_Channels_m54796F2353DE7853164099D9E2B9F2C4D245B6ED_inline((VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_10 = __this->get_outputSampleRate_22();
		int32_t L_11 = __this->get_reverseChannels_16();
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_12 = (WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE *)il2cpp_codegen_object_new(WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE_il2cpp_TypeInfo_var);
		WebRTCAudioProcessor__ctor_m65304840759D8AC2DC7195625043D0D289EEB6FB(L_12, L_0, L_3, L_6, L_9, L_10, L_11, /*hidden argument*/NULL);
		__this->set_proc_17(L_12);
		// this.proc.AEC = this.AEC;
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_13 = __this->get_proc_17();
		bool L_14 = WebRtcAudioDsp_get_AEC_mBC65630ECABC4A5C7FB8E509E03799EC77EAA9D6(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		WebRTCAudioProcessor_set_AEC_mB6E0B6EC6DC70CBF8B59E6E1524EFCC965E480D8(L_13, L_14, /*hidden argument*/NULL);
		// this.proc.AECMobile = false;
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_15 = __this->get_proc_17();
		NullCheck(L_15);
		WebRTCAudioProcessor_set_AECMobile_mFA2C38993A756AFDB37F36C72CA2049E534DDDD2(L_15, (bool)0, /*hidden argument*/NULL);
		// this.proc.AECStreamDelayMs = this.ReverseStreamDelayMs;
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_16 = __this->get_proc_17();
		int32_t L_17 = WebRtcAudioDsp_get_ReverseStreamDelayMs_mDE3D266FD850D0689156B6F0C767E13E78A4699C(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		WebRTCAudioProcessor_set_AECStreamDelayMs_mF8A183FD7A5A4060DC5170E27F2564B7208939B7(L_16, L_17, /*hidden argument*/NULL);
		// this.proc.AECHighPass = this.AecHighPass;
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_18 = __this->get_proc_17();
		bool L_19 = WebRtcAudioDsp_get_AecHighPass_m93260127A8AA4698EF1511B54B7047ECCFABFCDC(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		WebRTCAudioProcessor_set_AECHighPass_m1A9F7E7ED3767E8FFA4784442BC7F912BE2B7E69(L_18, L_19, /*hidden argument*/NULL);
		// this.proc.HighPass = this.HighPass;
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_20 = __this->get_proc_17();
		bool L_21 = WebRtcAudioDsp_get_HighPass_m78057AF4EC17B665C65F1D9E19F33E0EBD04E2C8(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		WebRTCAudioProcessor_set_HighPass_mDB5C0FC80430A979F853D88F0A7D27C78425045B(L_20, L_21, /*hidden argument*/NULL);
		// this.proc.NoiseSuppression = this.NoiseSuppression;
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_22 = __this->get_proc_17();
		bool L_23 = WebRtcAudioDsp_get_NoiseSuppression_mE697DFD09A7C03DDEEF96B891EB8EC2093F4A4BD(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		WebRTCAudioProcessor_set_NoiseSuppression_mD54F08549A8878E95B6E92FEC258D21BFFA99A9D(L_22, L_23, /*hidden argument*/NULL);
		// this.proc.AGC = this.AGC;
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_24 = __this->get_proc_17();
		bool L_25 = WebRtcAudioDsp_get_AGC_m5A82C88673F6579494295A9F3D73B8189C290A78(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		WebRTCAudioProcessor_set_AGC_m94F321CCC61C28B78E863601BB428D75C6A43520(L_24, L_25, /*hidden argument*/NULL);
		// this.proc.AGCCompressionGain = this.AgcCompressionGain;
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_26 = __this->get_proc_17();
		int32_t L_27 = WebRtcAudioDsp_get_AgcCompressionGain_mE941D46351F7C4EAE4D5CB9E8F99CE90F15B5192(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		WebRTCAudioProcessor_set_AGCCompressionGain_m7442CBA872899D5D18F787A080C5401B23BF2638(L_26, L_27, /*hidden argument*/NULL);
		// this.proc.VAD = this.VAD;
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_28 = __this->get_proc_17();
		bool L_29 = WebRtcAudioDsp_get_VAD_m72ACE9DADDA4E7550DF8491153FA41E2D0CCE271(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		WebRTCAudioProcessor_set_VAD_m81F796A653F539E6B3DFC8FEC8C55FA5BC2D157D(L_28, L_29, /*hidden argument*/NULL);
		// this.proc.Bypass = this.Bypass;
		WebRTCAudioProcessor_t8B2597EBFE4CC94CE51792288499FAAFE740D9BE * L_30 = __this->get_proc_17();
		bool L_31 = WebRtcAudioDsp_get_Bypass_mE7FCE77E1A12B27B8C99BE30476D6DF5D201BEBD(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		WebRTCAudioProcessor_set_Bypass_m8587D0FEC885E0825AF99071B621A0DAEE97913E(L_30, L_31, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::SetOrSwitchAudioListener(UnityEngine.AudioListener,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_SetOrSwitchAudioListener_m96EE851DD1B891F79CE8DCC95D126E454CAE91D4 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * ___audioListener0, bool ___extraChecks1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRtcAudioDsp_SetOrSwitchAudioListener_m96EE851DD1B891F79CE8DCC95D126E454CAE91D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	{
		// if (audioListener == null)
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_0 = ___audioListener0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_3 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = VoiceLogger_get_IsErrorEnabled_m10764A21F77B6B1C63DDCB440E3CD1CEA07884A6(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// this.Logger.LogError("audioListener passed is null or is being destroyed");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_6 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_6);
		VoiceLogger_LogError_mF9B207BF2A3A66B02DFE7BF856A3E3D3D8C55600(L_6, _stringLiteralF903EF48357BBF1DC0B9050C893467D5D29813B1, L_7, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00f3;
	}

IL_003b:
	{
		// if (extraChecks)
		bool L_8 = ___extraChecks1;
		V_4 = L_8;
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_00c6;
		}
	}
	{
		// if (!audioListener.gameObject.activeInHierarchy)
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_10 = ___audioListener0;
		NullCheck(L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		bool L_12 = GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF(L_11, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0088;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_14 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		bool L_15 = VoiceLogger_get_IsErrorEnabled_m10764A21F77B6B1C63DDCB440E3CD1CEA07884A6(L_14, /*hidden argument*/NULL);
		V_6 = L_15;
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_0084;
		}
	}
	{
		// this.Logger.LogError("The GameObject to which the audioListener is attached is not active in hierarchy");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_17 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_17);
		VoiceLogger_LogError_mF9B207BF2A3A66B02DFE7BF856A3E3D3D8C55600(L_17, _stringLiteral5E63A8040542E49E33BEE8784D11AF4375F88833, L_18, /*hidden argument*/NULL);
	}

IL_0084:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00f3;
	}

IL_0088:
	{
		// if (!audioListener.enabled)
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_19 = ___audioListener0;
		NullCheck(L_19);
		bool L_20 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(L_19, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_00c5;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_22 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		bool L_23 = VoiceLogger_get_IsErrorEnabled_m10764A21F77B6B1C63DDCB440E3CD1CEA07884A6(L_22, /*hidden argument*/NULL);
		V_8 = L_23;
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_00c1;
		}
	}
	{
		// this.Logger.LogError("audioListener passed is disabled");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_25 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_25);
		VoiceLogger_LogError_mF9B207BF2A3A66B02DFE7BF856A3E3D3D8C55600(L_25, _stringLiteralA9DB473FE7C6F914130E6421024D40BE4E62402B, L_26, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00f3;
	}

IL_00c5:
	{
	}

IL_00c6:
	{
		// AudioOutCapture audioOutCapture = audioListener.GetComponent<AudioOutCapture>();
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_27 = ___audioListener0;
		NullCheck(L_27);
		AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * L_28 = Component_GetComponent_TisAudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794_m7BB3E3CE56FF332D20A793F95C474B66CE22050D(L_27, /*hidden argument*/Component_GetComponent_TisAudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794_m7BB3E3CE56FF332D20A793F95C474B66CE22050D_RuntimeMethod_var);
		V_0 = L_28;
		// if (audioOutCapture == null)
		AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_30 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_29, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_9 = L_30;
		bool L_31 = V_9;
		if (!L_31)
		{
			goto IL_00e8;
		}
	}
	{
		// audioOutCapture = audioListener.gameObject.AddComponent<AudioOutCapture>();
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_32 = ___audioListener0;
		NullCheck(L_32);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_33 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * L_34 = GameObject_AddComponent_TisAudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794_m69A0C328F9DEBDA0B4719BD0E3866AFE1C834B18(L_33, /*hidden argument*/GameObject_AddComponent_TisAudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794_m69A0C328F9DEBDA0B4719BD0E3866AFE1C834B18_RuntimeMethod_var);
		V_0 = L_34;
	}

IL_00e8:
	{
		// return this.SetOrSwitchAudioOutCapture(audioOutCapture, false);
		AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * L_35 = V_0;
		bool L_36 = WebRtcAudioDsp_SetOrSwitchAudioOutCapture_m6296F0BF3AA9D3BD0CE87009C7D87AE719C9A214(__this, L_35, (bool)0, /*hidden argument*/NULL);
		V_3 = L_36;
		goto IL_00f3;
	}

IL_00f3:
	{
		// }
		bool L_37 = V_3;
		return L_37;
	}
}
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::SetOrSwitchAudioOutCapture(Photon.Voice.Unity.AudioOutCapture,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_SetOrSwitchAudioOutCapture_m6296F0BF3AA9D3BD0CE87009C7D87AE719C9A214 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * ___audioOutCapture0, bool ___extraChecks1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRtcAudioDsp_SetOrSwitchAudioOutCapture_m6296F0BF3AA9D3BD0CE87009C7D87AE719C9A214_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * V_6 = NULL;
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
	{
		// if (audioOutCapture == null)
		AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * L_0 = ___audioOutCapture0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_3 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = VoiceLogger_get_IsErrorEnabled_m10764A21F77B6B1C63DDCB440E3CD1CEA07884A6(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// this.Logger.LogError("audioOutCapture passed is null or is being destroyed");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_6 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_6);
		VoiceLogger_LogError_mF9B207BF2A3A66B02DFE7BF856A3E3D3D8C55600(L_6, _stringLiteralAA5A30688516013E529EBDE57999A1B2ECEA2CA8, L_7, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0201;
	}

IL_003b:
	{
		// if (!audioOutCapture.enabled)
		AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * L_8 = ___audioOutCapture0;
		NullCheck(L_8);
		bool L_9 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(L_8, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0079;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_11 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		bool L_12 = VoiceLogger_get_IsErrorEnabled_m10764A21F77B6B1C63DDCB440E3CD1CEA07884A6(L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		// this.Logger.LogError("audioOutCapture passed is disabled");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_14 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_14);
		VoiceLogger_LogError_mF9B207BF2A3A66B02DFE7BF856A3E3D3D8C55600(L_14, _stringLiteral324F60140FA96BB012F7A67A1B4461FB4A6C89D0, L_15, /*hidden argument*/NULL);
	}

IL_0072:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0201;
	}

IL_0079:
	{
		// if (extraChecks)
		bool L_16 = ___extraChecks1;
		V_5 = L_16;
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_0152;
		}
	}
	{
		// if (!audioOutCapture.gameObject.activeInHierarchy)
		AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * L_18 = ___audioOutCapture0;
		NullCheck(L_18);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		bool L_20 = GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF(L_19, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_00c9;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_22 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		bool L_23 = VoiceLogger_get_IsErrorEnabled_m10764A21F77B6B1C63DDCB440E3CD1CEA07884A6(L_22, /*hidden argument*/NULL);
		V_8 = L_23;
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_00c2;
		}
	}
	{
		// this.Logger.LogError("The GameObject to which the audioOutCapture is attached is not active in hierarchy");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_25 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_25);
		VoiceLogger_LogError_mF9B207BF2A3A66B02DFE7BF856A3E3D3D8C55600(L_25, _stringLiteral02B0CDC185B2A318FD02505C06409ED894E31A97, L_26, /*hidden argument*/NULL);
	}

IL_00c2:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0201;
	}

IL_00c9:
	{
		// AudioListener audioListener = audioOutCapture.GetComponent<AudioListener>();
		AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * L_27 = ___audioOutCapture0;
		NullCheck(L_27);
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_28 = Component_GetComponent_TisAudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099_mAB9201E964DE4BDE85D8A9BC485E463FB3B82A0F(L_27, /*hidden argument*/Component_GetComponent_TisAudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099_mAB9201E964DE4BDE85D8A9BC485E463FB3B82A0F_RuntimeMethod_var);
		V_6 = L_28;
		// if (audioListener == null)
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_29 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_30 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_29, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_9 = L_30;
		bool L_31 = V_9;
		if (!L_31)
		{
			goto IL_0110;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_32 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		bool L_33 = VoiceLogger_get_IsErrorEnabled_m10764A21F77B6B1C63DDCB440E3CD1CEA07884A6(L_32, /*hidden argument*/NULL);
		V_10 = L_33;
		bool L_34 = V_10;
		if (!L_34)
		{
			goto IL_0109;
		}
	}
	{
		// this.Logger.LogError("The AudioListener attached to the same GameObject as the audioOutCapture is null or being destroyed");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_35 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_36 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_35);
		VoiceLogger_LogError_mF9B207BF2A3A66B02DFE7BF856A3E3D3D8C55600(L_35, _stringLiteral0CC6BA950274530D106ED3475BEE37C8476984C4, L_36, /*hidden argument*/NULL);
	}

IL_0109:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0201;
	}

IL_0110:
	{
		// if (!audioListener.enabled)
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_37 = V_6;
		NullCheck(L_37);
		bool L_38 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(L_37, /*hidden argument*/NULL);
		V_11 = (bool)((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		bool L_39 = V_11;
		if (!L_39)
		{
			goto IL_0151;
		}
	}
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_40 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_40);
		bool L_41 = VoiceLogger_get_IsErrorEnabled_m10764A21F77B6B1C63DDCB440E3CD1CEA07884A6(L_40, /*hidden argument*/NULL);
		V_12 = L_41;
		bool L_42 = V_12;
		if (!L_42)
		{
			goto IL_014a;
		}
	}
	{
		// this.Logger.LogError("The AudioListener attached to the same GameObject as the audioOutCapture is disabled");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_43 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_44 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_43);
		VoiceLogger_LogError_mF9B207BF2A3A66B02DFE7BF856A3E3D3D8C55600(L_43, _stringLiteral63736A5F4173739A57718C6B893F522D1466A37A, L_44, /*hidden argument*/NULL);
	}

IL_014a:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0201;
	}

IL_0151:
	{
	}

IL_0152:
	{
		// if (this.ac != null)
		AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * L_45 = __this->get_ac_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_46 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_45, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_13 = L_46;
		bool L_47 = V_13;
		if (!L_47)
		{
			goto IL_01d0;
		}
	}
	{
		// if (this.ac != audioOutCapture)
		AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * L_48 = __this->get_ac_18();
		AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * L_49 = ___audioOutCapture0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_50 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_48, L_49, /*hidden argument*/NULL);
		V_14 = L_50;
		bool L_51 = V_14;
		if (!L_51)
		{
			goto IL_01a1;
		}
	}
	{
		// if (this.started)
		bool L_52 = __this->get_started_19();
		V_15 = L_52;
		bool L_53 = V_15;
		if (!L_53)
		{
			goto IL_019e;
		}
	}
	{
		// this.ac.OnAudioFrame -= this.OnAudioOutFrameFloat;
		AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * L_54 = __this->get_ac_18();
		Action_2_t1F689749CB5BC369F8420F1B13E67C7DA1243CB6 * L_55 = (Action_2_t1F689749CB5BC369F8420F1B13E67C7DA1243CB6 *)il2cpp_codegen_object_new(Action_2_t1F689749CB5BC369F8420F1B13E67C7DA1243CB6_il2cpp_TypeInfo_var);
		Action_2__ctor_m4611A9CDDB94F544852F89AC940C667017C4DFEC(L_55, __this, (intptr_t)((intptr_t)WebRtcAudioDsp_OnAudioOutFrameFloat_m218AB055C9853373EB7A6FF3399480101EFD9754_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m4611A9CDDB94F544852F89AC940C667017C4DFEC_RuntimeMethod_var);
		NullCheck(L_54);
		AudioOutCapture_remove_OnAudioFrame_m49A01CE0D0AC424E0294B915B559BDF10DF91D0D(L_54, L_55, /*hidden argument*/NULL);
	}

IL_019e:
	{
		goto IL_01cf;
	}

IL_01a1:
	{
		// if (this.Logger.IsErrorEnabled)
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_56 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		NullCheck(L_56);
		bool L_57 = VoiceLogger_get_IsErrorEnabled_m10764A21F77B6B1C63DDCB440E3CD1CEA07884A6(L_56, /*hidden argument*/NULL);
		V_16 = L_57;
		bool L_58 = V_16;
		if (!L_58)
		{
			goto IL_01cb;
		}
	}
	{
		// this.Logger.LogError("The same audioOutCapture is being used already");
		VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * L_59 = VoiceComponent_get_Logger_m6BE4D15957797EF53506D21BB887B3D9AA52F6F1(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_60 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_59);
		VoiceLogger_LogError_mF9B207BF2A3A66B02DFE7BF856A3E3D3D8C55600(L_59, _stringLiteralAD5A4B3AB9D08A98F5D654C1EEA3801AE546A2EC, L_60, /*hidden argument*/NULL);
	}

IL_01cb:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0201;
	}

IL_01cf:
	{
	}

IL_01d0:
	{
		// this.ac = audioOutCapture;
		AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * L_61 = ___audioOutCapture0;
		__this->set_ac_18(L_61);
		// if (this.started)
		bool L_62 = __this->get_started_19();
		V_17 = L_62;
		bool L_63 = V_17;
		if (!L_63)
		{
			goto IL_01fd;
		}
	}
	{
		// this.ac.OnAudioFrame += this.OnAudioOutFrameFloat;
		AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * L_64 = __this->get_ac_18();
		Action_2_t1F689749CB5BC369F8420F1B13E67C7DA1243CB6 * L_65 = (Action_2_t1F689749CB5BC369F8420F1B13E67C7DA1243CB6 *)il2cpp_codegen_object_new(Action_2_t1F689749CB5BC369F8420F1B13E67C7DA1243CB6_il2cpp_TypeInfo_var);
		Action_2__ctor_m4611A9CDDB94F544852F89AC940C667017C4DFEC(L_65, __this, (intptr_t)((intptr_t)WebRtcAudioDsp_OnAudioOutFrameFloat_m218AB055C9853373EB7A6FF3399480101EFD9754_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m4611A9CDDB94F544852F89AC940C667017C4DFEC_RuntimeMethod_var);
		NullCheck(L_64);
		AudioOutCapture_add_OnAudioFrame_m51ED223C2C2FD72F62DFF83648ACCAF406912A7D(L_64, L_65, /*hidden argument*/NULL);
	}

IL_01fd:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_0201;
	}

IL_0201:
	{
		// }
		bool L_66 = V_2;
		return L_66;
	}
}
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::SetOrSwitchAudioListener(UnityEngine.AudioListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_SetOrSwitchAudioListener_m8CB9DD8658DC0CEC75E03522814D89B60E2AD7B4 (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * ___audioListener0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.SetOrSwitchAudioListener(audioListener, true);
		AudioListener_tE3E1467B84A4AFD509947B44A7C8ACFB67FF2099 * L_0 = ___audioListener0;
		bool L_1 = WebRtcAudioDsp_SetOrSwitchAudioListener_m96EE851DD1B891F79CE8DCC95D126E454CAE91D4(__this, L_0, (bool)1, /*hidden argument*/NULL);
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
// System.Boolean Photon.Voice.Unity.WebRtcAudioDsp::SetOrSwitchAudioOutCapture(Photon.Voice.Unity.AudioOutCapture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebRtcAudioDsp_SetOrSwitchAudioOutCapture_m8578745AC2E8EBEB722E8B431775D456FF6A13BC (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * ___audioOutCapture0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return this.SetOrSwitchAudioOutCapture(audioOutCapture, true);
		AudioOutCapture_tFAD50ECF3CDD5C195D155008487F94EBE0928794 * L_0 = ___audioOutCapture0;
		bool L_1 = WebRtcAudioDsp_SetOrSwitchAudioOutCapture_m6296F0BF3AA9D3BD0CE87009C7D87AE719C9A214(__this, L_0, (bool)1, /*hidden argument*/NULL);
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
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp__ctor_m4D921C09A6AC898F931BA21799AFAE6F45520BAF (WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F * __this, const RuntimeMethod* method)
{
	{
		// private bool aec = true;
		__this->set_aec_7((bool)1);
		// private bool agc = true;
		__this->set_agc_9((bool)1);
		// private int agcCompressionGain = 9;
		__this->set_agcCompressionGain_10(((int32_t)9));
		// private bool vad = true;
		__this->set_vad_11((bool)1);
		// private int reverseStreamDelayMs = 120;
		__this->set_reverseStreamDelayMs_15(((int32_t)120));
		VoiceComponent__ctor_m923DAB1130753242ACAEE8C4D28E8A07C4DEBFFD(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Voice.Unity.WebRtcAudioDsp::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRtcAudioDsp__cctor_m549A6F4F10BEBA6173A5E5B86B9058AA645567EA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRtcAudioDsp__cctor_m549A6F4F10BEBA6173A5E5B86B9058AA645567EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Dictionary<AudioSpeakerMode, int> channelsMap = new Dictionary<AudioSpeakerMode, int>
		// {
		//     #if !UNITY_2019_2_OR_NEWER
		//     {AudioSpeakerMode.Raw, 0},
		//     #endif
		//     {AudioSpeakerMode.Mono, 1},
		//     {AudioSpeakerMode.Stereo, 2},
		//     {AudioSpeakerMode.Quad, 4},
		//     {AudioSpeakerMode.Surround, 5},
		//     {AudioSpeakerMode.Mode5point1, 6},
		//     {AudioSpeakerMode.Mode7point1, 8},
		//     {AudioSpeakerMode.Prologic, 2}
		// };
		Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D * L_0 = (Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D *)il2cpp_codegen_object_new(Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD230FE00B9E0CEA4FF957CA6FE1F2F5024CEF77F(L_0, /*hidden argument*/Dictionary_2__ctor_mD230FE00B9E0CEA4FF957CA6FE1F2F5024CEF77F_RuntimeMethod_var);
		Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D * L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_mF891D8C47B5B965BC34348B75D198880D817AE07(L_1, 1, 1, /*hidden argument*/Dictionary_2_Add_mF891D8C47B5B965BC34348B75D198880D817AE07_RuntimeMethod_var);
		Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D * L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_mF891D8C47B5B965BC34348B75D198880D817AE07(L_2, 2, 2, /*hidden argument*/Dictionary_2_Add_mF891D8C47B5B965BC34348B75D198880D817AE07_RuntimeMethod_var);
		Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D * L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_mF891D8C47B5B965BC34348B75D198880D817AE07(L_3, 3, 4, /*hidden argument*/Dictionary_2_Add_mF891D8C47B5B965BC34348B75D198880D817AE07_RuntimeMethod_var);
		Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D * L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_mF891D8C47B5B965BC34348B75D198880D817AE07(L_4, 4, 5, /*hidden argument*/Dictionary_2_Add_mF891D8C47B5B965BC34348B75D198880D817AE07_RuntimeMethod_var);
		Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D * L_5 = L_4;
		NullCheck(L_5);
		Dictionary_2_Add_mF891D8C47B5B965BC34348B75D198880D817AE07(L_5, 5, 6, /*hidden argument*/Dictionary_2_Add_mF891D8C47B5B965BC34348B75D198880D817AE07_RuntimeMethod_var);
		Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D * L_6 = L_5;
		NullCheck(L_6);
		Dictionary_2_Add_mF891D8C47B5B965BC34348B75D198880D817AE07(L_6, 6, 8, /*hidden argument*/Dictionary_2_Add_mF891D8C47B5B965BC34348B75D198880D817AE07_RuntimeMethod_var);
		Dictionary_2_tA8332BC22C4C82C81826C2BB6FA147B6D26E3E8D * L_7 = L_6;
		NullCheck(L_7);
		Dictionary_2_Add_mF891D8C47B5B965BC34348B75D198880D817AE07(L_7, 7, 2, /*hidden argument*/Dictionary_2_Add_mF891D8C47B5B965BC34348B75D198880D817AE07_RuntimeMethod_var);
		((WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F_StaticFields*)il2cpp_codegen_static_fields_for(WebRtcAudioDsp_t66D6532CB1FBCA993E4A2580C2062A34D01CBF2F_il2cpp_TypeInfo_var))->set_channelsMap_20(L_7);
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
// System.Boolean SavWav::Save(System.String,UnityEngine.AudioClip,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavWav_Save_m908FACD4A0438191343FB1813566AD094E563337 (String_t* ___filename0, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip1, bool ___trim2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SavWav_Save_m908FACD4A0438191343FB1813566AD094E563337_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * V_7 = NULL;
	BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * V_8 = NULL;
	uint32_t V_9 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (string.IsNullOrEmpty(filename))
		String_t* L_0 = ___filename0;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00cb;
	}

IL_0013:
	{
		// if (clip == null)
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_3 = ___clip1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_4 = L_4;
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00cb;
	}

IL_0028:
	{
		// filename = filename.Trim();
		String_t* L_6 = ___filename0;
		NullCheck(L_6);
		String_t* L_7 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_6, /*hidden argument*/NULL);
		___filename0 = L_7;
		// if (string.IsNullOrEmpty(Path.GetExtension(filename)))
		String_t* L_8 = ___filename0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_9 = Path_GetExtension_mAB8DB12AA3F147A487ED6AFECF8CD0043402957B(L_8, /*hidden argument*/NULL);
		bool L_10 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_9, /*hidden argument*/NULL);
		V_5 = L_10;
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0050;
		}
	}
	{
		// filename = string.Concat(filename, ".wav");
		String_t* L_12 = ___filename0;
		String_t* L_13 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_12, _stringLiteralC5EF9B806CBD2BFA0D6C179FE35E3AB475BF5AAF, /*hidden argument*/NULL);
		___filename0 = L_13;
	}

IL_0050:
	{
		// var filepath = Path.Combine(Application.persistentDataPath, filename);
		String_t* L_14 = Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B(/*hidden argument*/NULL);
		String_t* L_15 = ___filename0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_16 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_14, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		// string directoryPath = Path.GetDirectoryName(filepath);
		String_t* L_17 = V_0;
		String_t* L_18 = Path_GetDirectoryName_m61922AA6D7B48EACBA36FF41A1B28F506CFB8A97(L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		// if (!string.IsNullOrEmpty(directoryPath))
		String_t* L_19 = V_1;
		bool L_20 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_19, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_007b;
		}
	}
	{
		// Directory.CreateDirectory(directoryPath);
		String_t* L_22 = V_1;
		Directory_CreateDirectory_m0C9CAA2ECA801C4D07EA35820DA0907402ED4D41(L_22, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// using (var fileStream = new FileStream(filepath, FileMode.Create))
		String_t* L_23 = V_0;
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_24 = (FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 *)il2cpp_codegen_object_new(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_il2cpp_TypeInfo_var);
		FileStream__ctor_m967EF49BBCD52204BB79BA6E9DA533833B07B800(L_24, L_23, 2, /*hidden argument*/NULL);
		V_7 = L_24;
	}

IL_0084:
	try
	{ // begin try (depth: 1)
		{
			// using (var writer = new BinaryWriter(fileStream))
			FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_25 = V_7;
			BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_26 = (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 *)il2cpp_codegen_object_new(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_il2cpp_TypeInfo_var);
			BinaryWriter__ctor_m2E92F4E5096905E2E7487E003AB7B3CC5C5EC185(L_26, L_25, /*hidden argument*/NULL);
			V_8 = L_26;
		}

IL_008e:
		try
		{ // begin try (depth: 2)
			// var wav = GetWav(clip, out length, trim);
			AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_27 = ___clip1;
			bool L_28 = ___trim2;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_29 = SavWav_GetWav_m39C9006BAFFE17D61991C236237D4A6BEA8C8DBD(L_27, (uint32_t*)(&V_9), L_28, /*hidden argument*/NULL);
			V_10 = L_29;
			// writer.Write(wav, 0, (int)length);
			BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_30 = V_8;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_31 = V_10;
			uint32_t L_32 = V_9;
			NullCheck(L_30);
			VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(11 /* System.Void System.IO.BinaryWriter::Write(System.Byte[],System.Int32,System.Int32) */, L_30, L_31, 0, L_32);
			IL2CPP_LEAVE(0xB7, FINALLY_00aa);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00aa;
		}

FINALLY_00aa:
		{ // begin finally (depth: 2)
			{
				BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_33 = V_8;
				if (!L_33)
				{
					goto IL_00b6;
				}
			}

IL_00ae:
			{
				BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_34 = V_8;
				NullCheck(L_34);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_34);
			}

IL_00b6:
			{
				IL2CPP_END_FINALLY(170)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(170)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xB7, IL_00b7)
		}

IL_00b7:
		{
			IL2CPP_LEAVE(0xC7, FINALLY_00ba);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ba;
	}

FINALLY_00ba:
	{ // begin finally (depth: 1)
		{
			FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_35 = V_7;
			if (!L_35)
			{
				goto IL_00c6;
			}
		}

IL_00be:
		{
			FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_36 = V_7;
			NullCheck(L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_36);
		}

IL_00c6:
		{
			IL2CPP_END_FINALLY(186)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(186)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC7, IL_00c7)
	}

IL_00c7:
	{
		// return true;
		V_3 = (bool)1;
		goto IL_00cb;
	}

IL_00cb:
	{
		// }
		bool L_37 = V_3;
		return L_37;
	}
}
// System.Byte[] SavWav::GetWav(UnityEngine.AudioClip,System.UInt32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* SavWav_GetWav_m39C9006BAFFE17D61991C236237D4A6BEA8C8DBD (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip0, uint32_t* ___length1, bool ___trim2, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	{
		// var data = ConvertAndWrite(clip, out length, out samples, trim);
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_0 = ___clip0;
		uint32_t* L_1 = ___length1;
		bool L_2 = ___trim2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = SavWav_ConvertAndWrite_m80854E7224A3C1AF9CAEC479B2164D319ADAF7DB(L_0, (uint32_t*)L_1, (uint32_t*)(&V_0), L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// WriteHeader(data, clip, length, samples);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = V_1;
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_5 = ___clip0;
		uint32_t* L_6 = ___length1;
		int32_t L_7 = *((uint32_t*)L_6);
		uint32_t L_8 = V_0;
		SavWav_WriteHeader_m8FA4FCA85375416840A6D6EF76D45924F52715B8(L_4, L_5, L_7, L_8, /*hidden argument*/NULL);
		// return data;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = V_1;
		V_2 = L_9;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = V_2;
		return L_10;
	}
}
// System.Byte[] SavWav::ConvertAndWrite(UnityEngine.AudioClip,System.UInt32&,System.UInt32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* SavWav_ConvertAndWrite_m80854E7224A3C1AF9CAEC479B2164D319ADAF7DB (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip0, uint32_t* ___length1, uint32_t* ___samplesAfterTrimming2, bool ___trim3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SavWav_ConvertAndWrite_m80854E7224A3C1AF9CAEC479B2164D319ADAF7DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_4 = NULL;
	uint32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	int16_t V_14 = 0;
	bool V_15 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_16 = NULL;
	{
		// var samples = new float[clip.samples * clip.channels];
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_0 = ___clip0;
		NullCheck(L_0);
		int32_t L_1 = AudioClip_get_samples_m7AD532D9288680102A452D2949107BDA88268CA0(L_0, /*hidden argument*/NULL);
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_2 = ___clip0;
		NullCheck(L_2);
		int32_t L_3 = AudioClip_get_channels_m2CF01E121CEBBF3B69EC7EEE7EC28172AB6078EC(L_2, /*hidden argument*/NULL);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_4 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_3)));
		V_0 = L_4;
		// clip.GetData(samples, 0);
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_5 = ___clip0;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_6 = V_0;
		NullCheck(L_5);
		AudioClip_GetData_m8150E67D6068CAA88BE4155CB5924B2359272EE0(L_5, L_6, 0, /*hidden argument*/NULL);
		// var sampleCount = samples.Length;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_7 = V_0;
		NullCheck(L_7);
		V_1 = (((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))));
		// var start = 0;
		V_2 = 0;
		// var end = sampleCount - 1;
		int32_t L_8 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
		// if (trim)
		bool L_9 = ___trim3;
		V_6 = L_9;
		bool L_10 = V_6;
		if (!L_10)
		{
			goto IL_0099;
		}
	}
	{
		// for (var i = 0; i < sampleCount; i++)
		V_7 = 0;
		goto IL_0056;
	}

IL_0034:
	{
		// if ((short)(samples[i] * RescaleFactor) == 0)
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_11 = V_0;
		int32_t L_12 = V_7;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		float L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_8 = (bool)((((int32_t)(((int16_t)((int16_t)((float)il2cpp_codegen_multiply((float)L_14, (float)(32767.0f))))))) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_8;
		if (!L_15)
		{
			goto IL_004b;
		}
	}
	{
		// continue;
		goto IL_0050;
	}

IL_004b:
	{
		// start = i;
		int32_t L_16 = V_7;
		V_2 = L_16;
		// break;
		goto IL_0061;
	}

IL_0050:
	{
		// for (var i = 0; i < sampleCount; i++)
		int32_t L_17 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0056:
	{
		// for (var i = 0; i < sampleCount; i++)
		int32_t L_18 = V_7;
		int32_t L_19 = V_1;
		V_9 = (bool)((((int32_t)L_18) < ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_9;
		if (L_20)
		{
			goto IL_0034;
		}
	}

IL_0061:
	{
		// for (var i = sampleCount -1; i >= 0; i--)
		int32_t L_21 = V_1;
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1));
		goto IL_008a;
	}

IL_0068:
	{
		// if ((short)(samples[i] * RescaleFactor) == 0)
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_22 = V_0;
		int32_t L_23 = V_10;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		float L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_11 = (bool)((((int32_t)(((int16_t)((int16_t)((float)il2cpp_codegen_multiply((float)L_25, (float)(32767.0f))))))) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_11;
		if (!L_26)
		{
			goto IL_007f;
		}
	}
	{
		// continue;
		goto IL_0084;
	}

IL_007f:
	{
		// end = i;
		int32_t L_27 = V_10;
		V_3 = L_27;
		// break;
		goto IL_0098;
	}

IL_0084:
	{
		// for (var i = sampleCount -1; i >= 0; i--)
		int32_t L_28 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1));
	}

IL_008a:
	{
		// for (var i = sampleCount -1; i >= 0; i--)
		int32_t L_29 = V_10;
		V_12 = (bool)((((int32_t)((((int32_t)L_29) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_12;
		if (L_30)
		{
			goto IL_0068;
		}
	}

IL_0098:
	{
	}

IL_0099:
	{
		// var buffer = new byte[sampleCount * 2 + HeaderSize];
		int32_t L_31 = V_1;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_31, (int32_t)2))))), (int64_t)(((int64_t)((int64_t)((int32_t)44))))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SavWav_ConvertAndWrite_m80854E7224A3C1AF9CAEC479B2164D319ADAF7DB_RuntimeMethod_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_32 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_31, (int32_t)2))))), (int64_t)(((int64_t)((int64_t)((int32_t)44)))))))));
		V_4 = L_32;
		// var p = HeaderSize;
		V_5 = ((int32_t)44);
		// for (var i = start; i <= end; i++)
		int32_t L_33 = V_2;
		V_13 = L_33;
		goto IL_00e3;
	}

IL_00b2:
	{
		// var value = (short) (samples[i] * RescaleFactor);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_34 = V_0;
		int32_t L_35 = V_13;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		float L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_14 = (((int16_t)((int16_t)((float)il2cpp_codegen_multiply((float)L_37, (float)(32767.0f))))));
		// buffer[p++] = (byte) (value >> 0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_38 = V_4;
		uint32_t L_39 = V_5;
		uint32_t L_40 = L_39;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
		int16_t L_41 = V_14;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (uint8_t)(((int32_t)((uint8_t)L_41))));
		// buffer[p++] = (byte) (value >> 8);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_42 = V_4;
		uint32_t L_43 = V_5;
		uint32_t L_44 = L_43;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		int16_t L_45 = V_14;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_45>>(int32_t)8))))));
		// for (var i = start; i <= end; i++)
		int32_t L_46 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_00e3:
	{
		// for (var i = start; i <= end; i++)
		int32_t L_47 = V_13;
		int32_t L_48 = V_3;
		V_15 = (bool)((((int32_t)((((int32_t)L_47) > ((int32_t)L_48))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_49 = V_15;
		if (L_49)
		{
			goto IL_00b2;
		}
	}
	{
		// length = p;
		uint32_t* L_50 = ___length1;
		uint32_t L_51 = V_5;
		*((int32_t*)L_50) = (int32_t)L_51;
		// samplesAfterTrimming = (uint) (end - start + 1);
		uint32_t* L_52 = ___samplesAfterTrimming2;
		int32_t L_53 = V_3;
		int32_t L_54 = V_2;
		*((int32_t*)L_52) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_53, (int32_t)L_54)), (int32_t)1));
		// return buffer;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_55 = V_4;
		V_16 = L_55;
		goto IL_0102;
	}

IL_0102:
	{
		// }
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_56 = V_16;
		return L_56;
	}
}
// System.Void SavWav::AddDataToBuffer(System.Byte[],System.UInt32&,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavWav_AddDataToBuffer_m27F1D5093125396AA7C73801C5402AD38258DD3D (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, uint32_t* ___offset1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___addBytes2, const RuntimeMethod* method)
{
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	uint32_t V_3 = 0;
	{
		// foreach (var b in addBytes)
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___addBytes2;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001e;
	}

IL_0008:
	{
		// foreach (var b in addBytes)
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// buffer[offset++] = b;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___buffer0;
		uint32_t* L_6 = ___offset1;
		uint32_t* L_7 = ___offset1;
		int32_t L_8 = *((uint32_t*)L_7);
		V_3 = L_8;
		uint32_t L_9 = V_3;
		*((int32_t*)L_6) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		uint32_t L_10 = V_3;
		uint8_t L_11 = V_2;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint8_t)L_11);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_001e:
	{
		// foreach (var b in addBytes)
		int32_t L_13 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))))
		{
			goto IL_0008;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SavWav::WriteHeader(System.Byte[],UnityEngine.AudioClip,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavWav_WriteHeader_m8FA4FCA85375416840A6D6EF76D45924F52715B8 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___stream0, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip1, uint32_t ___length2, uint32_t ___samples3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SavWav_WriteHeader_m8FA4FCA85375416840A6D6EF76D45924F52715B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint16_t V_1 = 0;
	uint32_t V_2 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_3 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_4 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_5 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_6 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_7 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_8 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_9 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_10 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_11 = NULL;
	uint16_t V_12 = 0;
	uint16_t V_13 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_14 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_15 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_16 = NULL;
	{
		// var hz = (uint)clip.frequency;
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_0 = ___clip1;
		NullCheck(L_0);
		int32_t L_1 = AudioClip_get_frequency_m8CE3C1898AEC71B496092039B233B61EED527661(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var channels = (ushort)clip.channels;
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_2 = ___clip1;
		NullCheck(L_2);
		int32_t L_3 = AudioClip_get_channels_m2CF01E121CEBBF3B69EC7EEE7EC28172AB6078EC(L_2, /*hidden argument*/NULL);
		V_1 = (uint16_t)(((int32_t)((uint16_t)L_3)));
		// var offset = 0u;
		V_2 = 0;
		// var riff = Encoding.UTF8.GetBytes("RIFF");
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_4 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		NullCheck(L_4);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, _stringLiteral6CA0A12C23F03719E0229FE85E34C98DE7079397);
		V_3 = L_5;
		// AddDataToBuffer(stream, ref offset, riff);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = ___stream0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_3;
		SavWav_AddDataToBuffer_m27F1D5093125396AA7C73801C5402AD38258DD3D(L_6, (uint32_t*)(&V_2), L_7, /*hidden argument*/NULL);
		// var chunkSize = BitConverter.GetBytes(length - 8);
		uint32_t L_8 = ___length2;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_tD5DF1CB5C5A5CB087D90BD881C8E75A332E546EE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = BitConverter_GetBytes_m4D19CD2921F098BF2362C17993AC5B5452E5A13F(((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)8)), /*hidden argument*/NULL);
		V_4 = L_9;
		// AddDataToBuffer(stream, ref offset, chunkSize);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ___stream0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = V_4;
		SavWav_AddDataToBuffer_m27F1D5093125396AA7C73801C5402AD38258DD3D(L_10, (uint32_t*)(&V_2), L_11, /*hidden argument*/NULL);
		// var wave = Encoding.UTF8.GetBytes("WAVE");
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_12 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		NullCheck(L_12);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_12, _stringLiteralFB914D3CA1348F0C104408C5794FE186EA61F9B4);
		V_5 = L_13;
		// AddDataToBuffer(stream, ref offset, wave);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = ___stream0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = V_5;
		SavWav_AddDataToBuffer_m27F1D5093125396AA7C73801C5402AD38258DD3D(L_14, (uint32_t*)(&V_2), L_15, /*hidden argument*/NULL);
		// var fmt = Encoding.UTF8.GetBytes("fmt ");
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_16 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		NullCheck(L_16);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_16, _stringLiteral90482CCC2DEBBC9F5A56C001DBE878DBFD1F0733);
		V_6 = L_17;
		// AddDataToBuffer(stream, ref offset, fmt);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = ___stream0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = V_6;
		SavWav_AddDataToBuffer_m27F1D5093125396AA7C73801C5402AD38258DD3D(L_18, (uint32_t*)(&V_2), L_19, /*hidden argument*/NULL);
		// var subChunk1 = BitConverter.GetBytes(16u);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_20 = BitConverter_GetBytes_m4D19CD2921F098BF2362C17993AC5B5452E5A13F(((int32_t)16), /*hidden argument*/NULL);
		V_7 = L_20;
		// AddDataToBuffer(stream, ref offset, subChunk1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = ___stream0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = V_7;
		SavWav_AddDataToBuffer_m27F1D5093125396AA7C73801C5402AD38258DD3D(L_21, (uint32_t*)(&V_2), L_22, /*hidden argument*/NULL);
		// var audioFormat = BitConverter.GetBytes(one);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_23 = BitConverter_GetBytes_m692444BB12DAE2F46C7DDE67B04CF2073DEE1211((uint16_t)1, /*hidden argument*/NULL);
		V_8 = L_23;
		// AddDataToBuffer(stream, ref offset, audioFormat);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_24 = ___stream0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_25 = V_8;
		SavWav_AddDataToBuffer_m27F1D5093125396AA7C73801C5402AD38258DD3D(L_24, (uint32_t*)(&V_2), L_25, /*hidden argument*/NULL);
		// var numChannels = BitConverter.GetBytes(channels);
		uint16_t L_26 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_27 = BitConverter_GetBytes_m692444BB12DAE2F46C7DDE67B04CF2073DEE1211(L_26, /*hidden argument*/NULL);
		V_9 = L_27;
		// AddDataToBuffer(stream, ref offset, numChannels);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_28 = ___stream0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_29 = V_9;
		SavWav_AddDataToBuffer_m27F1D5093125396AA7C73801C5402AD38258DD3D(L_28, (uint32_t*)(&V_2), L_29, /*hidden argument*/NULL);
		// var sampleRate = BitConverter.GetBytes(hz);
		uint32_t L_30 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_31 = BitConverter_GetBytes_m4D19CD2921F098BF2362C17993AC5B5452E5A13F(L_30, /*hidden argument*/NULL);
		V_10 = L_31;
		// AddDataToBuffer(stream, ref offset, sampleRate);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_32 = ___stream0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_33 = V_10;
		SavWav_AddDataToBuffer_m27F1D5093125396AA7C73801C5402AD38258DD3D(L_32, (uint32_t*)(&V_2), L_33, /*hidden argument*/NULL);
		// var byteRate = BitConverter.GetBytes(hz * channels * 2); 
		uint32_t L_34 = V_0;
		uint16_t L_35 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_36 = BitConverter_GetBytes_m4D19CD2921F098BF2362C17993AC5B5452E5A13F(((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_34, (int32_t)L_35)), (int32_t)2)), /*hidden argument*/NULL);
		V_11 = L_36;
		// AddDataToBuffer(stream, ref offset, byteRate);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_37 = ___stream0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_38 = V_11;
		SavWav_AddDataToBuffer_m27F1D5093125396AA7C73801C5402AD38258DD3D(L_37, (uint32_t*)(&V_2), L_38, /*hidden argument*/NULL);
		// var blockAlign = (ushort)(channels * 2);
		uint16_t L_39 = V_1;
		V_12 = (uint16_t)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_39, (int32_t)2)))));
		// AddDataToBuffer(stream, ref offset, BitConverter.GetBytes(blockAlign));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_40 = ___stream0;
		uint16_t L_41 = V_12;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_42 = BitConverter_GetBytes_m692444BB12DAE2F46C7DDE67B04CF2073DEE1211(L_41, /*hidden argument*/NULL);
		SavWav_AddDataToBuffer_m27F1D5093125396AA7C73801C5402AD38258DD3D(L_40, (uint32_t*)(&V_2), L_42, /*hidden argument*/NULL);
		// ushort bps = 16;
		V_13 = (uint16_t)((int32_t)16);
		// var bitsPerSample = BitConverter.GetBytes(bps);
		uint16_t L_43 = V_13;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_44 = BitConverter_GetBytes_m692444BB12DAE2F46C7DDE67B04CF2073DEE1211(L_43, /*hidden argument*/NULL);
		V_14 = L_44;
		// AddDataToBuffer(stream, ref offset, bitsPerSample);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_45 = ___stream0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_46 = V_14;
		SavWav_AddDataToBuffer_m27F1D5093125396AA7C73801C5402AD38258DD3D(L_45, (uint32_t*)(&V_2), L_46, /*hidden argument*/NULL);
		// var dataString = Encoding.UTF8.GetBytes("data");
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_47 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		NullCheck(L_47);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_48 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_47, _stringLiteralA17C9AAA61E80A1BF71D0D850AF4E5BAA9800BBD);
		V_15 = L_48;
		// AddDataToBuffer(stream, ref offset, dataString);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_49 = ___stream0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_50 = V_15;
		SavWav_AddDataToBuffer_m27F1D5093125396AA7C73801C5402AD38258DD3D(L_49, (uint32_t*)(&V_2), L_50, /*hidden argument*/NULL);
		// var subChunk2 = BitConverter.GetBytes(samples * 2);
		uint32_t L_51 = ___samples3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_52 = BitConverter_GetBytes_m4D19CD2921F098BF2362C17993AC5B5452E5A13F(((int32_t)il2cpp_codegen_multiply((int32_t)L_51, (int32_t)2)), /*hidden argument*/NULL);
		V_16 = L_52;
		// AddDataToBuffer(stream, ref offset, subChunk2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_53 = ___stream0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_54 = V_16;
		SavWav_AddDataToBuffer_m27F1D5093125396AA7C73801C5402AD38258DD3D(L_53, (uint32_t*)(&V_2), L_54, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * VoiceInfo_get_UserData_m47264239C6EFD622B9B403448D956EC29743C460_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method)
{
	{
		// public object UserData { get; set; }
		RuntimeObject * L_0 = __this->get_U3CUserDataU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VoiceLogger_set_Tag_mF86E1C9D81179ED51B03F899881F24EE3E8F9537_inline (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Tag { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CTagU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void VoiceLogger_set_LogLevel_mCC6289AF9DCE3D34EA2F800A120D7B0999ACFEA2_inline (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// public DebugLevel LogLevel { get; set; }
		uint8_t L_0 = ___value0;
		__this->set_U3CLogLevelU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t VoiceLogger_get_LogLevel_mB4719E673D8B3B76A9AF05E1792B80C61063D15D_inline (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, const RuntimeMethod* method)
{
	{
		// public DebugLevel LogLevel { get; set; }
		uint8_t L_0 = __this->get_U3CLogLevelU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* VoiceLogger_get_Tag_mC5DA0F5FE8637A41D926C9D9FA6CF13EB900B36F_inline (VoiceLogger_tA5AB24B450E623ADBD71533D16BC48E75EDB2C6B * __this, const RuntimeMethod* method)
{
	{
		// public string Tag { get; set; }
		String_t* L_0 = __this->get_U3CTagU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * PhotonVoiceCreatedParams_get_Voice_m6ED7A29855672E2CCCFF46AC1DFE13C1A041C0E2_inline (PhotonVoiceCreatedParams_t57D3C5049A283334F8ED09F38CCBBE10CE413675 * __this, const RuntimeMethod* method)
{
	{
		// public Voice.LocalVoice Voice { get; set; }
		LocalVoice_t88C1ADA5BCA44FE277109AA9299F7A9481570501 * L_0 = __this->get_U3CVoiceU3Ek__BackingField_0();
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_SamplingRate_m9D617B430547DE230A31AD21379D7E823C144832_inline (VoiceInfo_tAE36560D6C1463A6B46F8170849699CBA5AAF740 * __this, const RuntimeMethod* method)
{
	{
		// public int SamplingRate { get; set; }
		int32_t L_0 = __this->get_U3CSamplingRateU3Ek__BackingField_1();
		return L_0;
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
