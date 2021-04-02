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

// System.String
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


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


// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>
struct  InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>
struct  InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::get_name()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m699DA5870A9BF21E697FACFC6589A3F2370F039B_gshared_inline (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::set_name(System.String)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m2D93EEC13BF0AD5F0368EB7FC94EE7A0BBD801A3_gshared_inline (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m8D45A935C96C0C635D2CAE69913C0CBA008BDCE3_gshared (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m1D7B7ACAA8DB8A12CD63C4C5EC8E173C15402A01_gshared (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m1E7DEF80A8743FD014505EDD2AB776F59897DFDD_gshared (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_mADF72423508FEA9E58E717C94021FAEE8CCCD597_gshared (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::get_name()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_mB9B1E3F3BDC0D763D76A6C24B2971F3645F738FB_gshared_inline (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::set_name(System.String)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m9EF61B0529C323B6516D53487886B4E31FD68ED0_gshared_inline (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m64DE4780A339D8989009F70CC22C910EC3F28C6F_gshared (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m5E36D2B168BB2BE17A6B595AA19524E25E43EB23_gshared (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_mC60CA85D6903AADCCFE24F2B47FBCA38912CA3BA_gshared (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_mC5069ABE58109235CBD00DBC3AE9E14FE9464F7B_gshared (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, const RuntimeMethod* method);

// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::get_name()
inline String_t* InputFeatureUsage_1_get_name_m699DA5870A9BF21E697FACFC6589A3F2370F039B_inline (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *, const RuntimeMethod*))InputFeatureUsage_1_get_name_m699DA5870A9BF21E697FACFC6589A3F2370F039B_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::set_name(System.String)
inline void InputFeatureUsage_1_set_name_m2D93EEC13BF0AD5F0368EB7FC94EE7A0BBD801A3_inline (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1_set_name_m2D93EEC13BF0AD5F0368EB7FC94EE7A0BBD801A3_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_m8D45A935C96C0C635D2CAE69913C0CBA008BDCE3 (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m8D45A935C96C0C635D2CAE69913C0CBA008BDCE3_gshared)(__this, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
inline bool InputFeatureUsage_1_Equals_m1D7B7ACAA8DB8A12CD63C4C5EC8E173C15402A01 (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *, InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 , const RuntimeMethod*))InputFeatureUsage_1_Equals_m1D7B7ACAA8DB8A12CD63C4C5EC8E173C15402A01_gshared)(__this, ___other0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::Equals(System.Object)
inline bool InputFeatureUsage_1_Equals_m1E7DEF80A8743FD014505EDD2AB776F59897DFDD (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *, RuntimeObject *, const RuntimeMethod*))InputFeatureUsage_1_Equals_m1E7DEF80A8743FD014505EDD2AB776F59897DFDD_gshared)(__this, ___obj0, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::GetHashCode()
inline int32_t InputFeatureUsage_1_GetHashCode_mADF72423508FEA9E58E717C94021FAEE8CCCD597 (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *, const RuntimeMethod*))InputFeatureUsage_1_GetHashCode_mADF72423508FEA9E58E717C94021FAEE8CCCD597_gshared)(__this, method);
}
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::get_name()
inline String_t* InputFeatureUsage_1_get_name_mB9B1E3F3BDC0D763D76A6C24B2971F3645F738FB_inline (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *, const RuntimeMethod*))InputFeatureUsage_1_get_name_mB9B1E3F3BDC0D763D76A6C24B2971F3645F738FB_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::set_name(System.String)
inline void InputFeatureUsage_1_set_name_m9EF61B0529C323B6516D53487886B4E31FD68ED0_inline (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *, String_t*, const RuntimeMethod*))InputFeatureUsage_1_set_name_m9EF61B0529C323B6516D53487886B4E31FD68ED0_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_m64DE4780A339D8989009F70CC22C910EC3F28C6F (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m64DE4780A339D8989009F70CC22C910EC3F28C6F_gshared)(__this, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
inline bool InputFeatureUsage_1_Equals_m5E36D2B168BB2BE17A6B595AA19524E25E43EB23 (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *, InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF , const RuntimeMethod*))InputFeatureUsage_1_Equals_m5E36D2B168BB2BE17A6B595AA19524E25E43EB23_gshared)(__this, ___other0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::Equals(System.Object)
inline bool InputFeatureUsage_1_Equals_mC60CA85D6903AADCCFE24F2B47FBCA38912CA3BA (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *, RuntimeObject *, const RuntimeMethod*))InputFeatureUsage_1_Equals_mC60CA85D6903AADCCFE24F2B47FBCA38912CA3BA_gshared)(__this, ___obj0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::GetHashCode()
inline int32_t InputFeatureUsage_1_GetHashCode_mC5069ABE58109235CBD00DBC3AE9E14FE9464F7B (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *, const RuntimeMethod*))InputFeatureUsage_1_GetHashCode_mC5069ABE58109235CBD00DBC3AE9E14FE9464F7B_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m699DA5870A9BF21E697FACFC6589A3F2370F039B_gshared (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C  String_t* InputFeatureUsage_1_get_name_m699DA5870A9BF21E697FACFC6589A3F2370F039B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *>(__this + _offset);
	return InputFeatureUsage_1_get_name_m699DA5870A9BF21E697FACFC6589A3F2370F039B_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m2D93EEC13BF0AD5F0368EB7FC94EE7A0BBD801A3_gshared (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1_set_name_m2D93EEC13BF0AD5F0368EB7FC94EE7A0BBD801A3_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *>(__this + _offset);
	InputFeatureUsage_1_set_name_m2D93EEC13BF0AD5F0368EB7FC94EE7A0BBD801A3_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m8D45A935C96C0C635D2CAE69913C0CBA008BDCE3_gshared (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___usageName0;
		InputFeatureUsage_1_set_name_m2D93EEC13BF0AD5F0368EB7FC94EE7A0BBD801A3_inline((InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *)(InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *)__this, (String_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1__ctor_m8D45A935C96C0C635D2CAE69913C0CBA008BDCE3_AdjustorThunk (RuntimeObject * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *>(__this + _offset);
	InputFeatureUsage_1__ctor_m8D45A935C96C0C635D2CAE69913C0CBA008BDCE3(_thisAdjusted, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m1E7DEF80A8743FD014505EDD2AB776F59897DFDD_gshared (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3 = InputFeatureUsage_1_Equals_m1D7B7ACAA8DB8A12CD63C4C5EC8E173C15402A01((InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *)(InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *)__this, (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 )((*(InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *)((InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_1 = (bool)L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return (bool)L_4;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_m1E7DEF80A8743FD014505EDD2AB776F59897DFDD_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *>(__this + _offset);
	return InputFeatureUsage_1_Equals_m1E7DEF80A8743FD014505EDD2AB776F59897DFDD(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m1D7B7ACAA8DB8A12CD63C4C5EC8E173C15402A01_gshared (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_m699DA5870A9BF21E697FACFC6589A3F2370F039B_inline((InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *)(InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		String_t* L_1 = InputFeatureUsage_1_get_name_m699DA5870A9BF21E697FACFC6589A3F2370F039B_inline((InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *)(InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *)(&___other0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE((String_t*)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		V_0 = (bool)L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_m1D7B7ACAA8DB8A12CD63C4C5EC8E173C15402A01_AdjustorThunk (RuntimeObject * __this, InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *>(__this + _offset);
	return InputFeatureUsage_1_Equals_m1D7B7ACAA8DB8A12CD63C4C5EC8E173C15402A01(_thisAdjusted, ___other0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_mADF72423508FEA9E58E717C94021FAEE8CCCD597_gshared (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_m699DA5870A9BF21E697FACFC6589A3F2370F039B_inline((InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *)(InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		NullCheck((RuntimeObject *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_0);
		V_0 = (int32_t)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
IL2CPP_EXTERN_C  int32_t InputFeatureUsage_1_GetHashCode_mADF72423508FEA9E58E717C94021FAEE8CCCD597_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 *>(__this + _offset);
	return InputFeatureUsage_1_GetHashCode_mADF72423508FEA9E58E717C94021FAEE8CCCD597(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_mB9B1E3F3BDC0D763D76A6C24B2971F3645F738FB_gshared (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C  String_t* InputFeatureUsage_1_get_name_mB9B1E3F3BDC0D763D76A6C24B2971F3645F738FB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *>(__this + _offset);
	return InputFeatureUsage_1_get_name_mB9B1E3F3BDC0D763D76A6C24B2971F3645F738FB_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m9EF61B0529C323B6516D53487886B4E31FD68ED0_gshared (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1_set_name_m9EF61B0529C323B6516D53487886B4E31FD68ED0_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *>(__this + _offset);
	InputFeatureUsage_1_set_name_m9EF61B0529C323B6516D53487886B4E31FD68ED0_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m64DE4780A339D8989009F70CC22C910EC3F28C6F_gshared (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___usageName0;
		InputFeatureUsage_1_set_name_m9EF61B0529C323B6516D53487886B4E31FD68ED0_inline((InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *)(InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *)__this, (String_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1__ctor_m64DE4780A339D8989009F70CC22C910EC3F28C6F_AdjustorThunk (RuntimeObject * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *>(__this + _offset);
	InputFeatureUsage_1__ctor_m64DE4780A339D8989009F70CC22C910EC3F28C6F(_thisAdjusted, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_mC60CA85D6903AADCCFE24F2B47FBCA38912CA3BA_gshared (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3 = InputFeatureUsage_1_Equals_m5E36D2B168BB2BE17A6B595AA19524E25E43EB23((InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *)(InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *)__this, (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF )((*(InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *)((InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_1 = (bool)L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return (bool)L_4;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_mC60CA85D6903AADCCFE24F2B47FBCA38912CA3BA_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *>(__this + _offset);
	return InputFeatureUsage_1_Equals_mC60CA85D6903AADCCFE24F2B47FBCA38912CA3BA(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m5E36D2B168BB2BE17A6B595AA19524E25E43EB23_gshared (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_mB9B1E3F3BDC0D763D76A6C24B2971F3645F738FB_inline((InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *)(InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		String_t* L_1 = InputFeatureUsage_1_get_name_mB9B1E3F3BDC0D763D76A6C24B2971F3645F738FB_inline((InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *)(InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *)(&___other0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE((String_t*)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		V_0 = (bool)L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_m5E36D2B168BB2BE17A6B595AA19524E25E43EB23_AdjustorThunk (RuntimeObject * __this, InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *>(__this + _offset);
	return InputFeatureUsage_1_Equals_m5E36D2B168BB2BE17A6B595AA19524E25E43EB23(_thisAdjusted, ___other0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_mC5069ABE58109235CBD00DBC3AE9E14FE9464F7B_gshared (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_mB9B1E3F3BDC0D763D76A6C24B2971F3645F738FB_inline((InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *)(InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		NullCheck((RuntimeObject *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_0);
		V_0 = (int32_t)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
IL2CPP_EXTERN_C  int32_t InputFeatureUsage_1_GetHashCode_mC5069ABE58109235CBD00DBC3AE9E14FE9464F7B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF *>(__this + _offset);
	return InputFeatureUsage_1_GetHashCode_mC5069ABE58109235CBD00DBC3AE9E14FE9464F7B(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m699DA5870A9BF21E697FACFC6589A3F2370F039B_gshared_inline (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m2D93EEC13BF0AD5F0368EB7FC94EE7A0BBD801A3_gshared_inline (InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_mB9B1E3F3BDC0D763D76A6C24B2971F3645F738FB_gshared_inline (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m9EF61B0529C323B6516D53487886B4E31FD68ED0_gshared_inline (InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
