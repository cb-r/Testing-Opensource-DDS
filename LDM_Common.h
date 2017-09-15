

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LDM_Common.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LDM_Common_1219687462_h
#define LDM_Common_1219687462_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

typedef    DDS_Long   P_LDM_Common_T_Int32 ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_Int32_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_Int32Seq, P_LDM_Common_T_Int32);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Int32_initialize(
    P_LDM_Common_T_Int32* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Int32_initialize_ex(
    P_LDM_Common_T_Int32* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Int32_initialize_w_params(
    P_LDM_Common_T_Int32* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_Int32_finalize(
    P_LDM_Common_T_Int32* self);

NDDSUSERDllExport
void P_LDM_Common_T_Int32_finalize_ex(
    P_LDM_Common_T_Int32* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_Int32_finalize_w_params(
    P_LDM_Common_T_Int32* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_Int32_finalize_optional_members(
    P_LDM_Common_T_Int32* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Int32_copy(
    P_LDM_Common_T_Int32* dst,
    const P_LDM_Common_T_Int32* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_LDM_Common_T_Position2DTypeTYPENAME;

}

struct P_LDM_Common_T_Position2DTypeSeq;

class P_LDM_Common_T_Position2DType 
{
  public:
    typedef struct P_LDM_Common_T_Position2DTypeSeq Seq;

    P_LDM_Common_T_Int32   A_xPosition ;
    P_LDM_Common_T_Int32   A_yPosition ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_Position2DType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_Position2DTypeSeq, P_LDM_Common_T_Position2DType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Position2DType_initialize(
    P_LDM_Common_T_Position2DType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Position2DType_initialize_ex(
    P_LDM_Common_T_Position2DType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Position2DType_initialize_w_params(
    P_LDM_Common_T_Position2DType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_Position2DType_finalize(
    P_LDM_Common_T_Position2DType* self);

NDDSUSERDllExport
void P_LDM_Common_T_Position2DType_finalize_ex(
    P_LDM_Common_T_Position2DType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_Position2DType_finalize_w_params(
    P_LDM_Common_T_Position2DType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_Position2DType_finalize_optional_members(
    P_LDM_Common_T_Position2DType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Position2DType_copy(
    P_LDM_Common_T_Position2DType* dst,
    const P_LDM_Common_T_Position2DType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum P_LDM_Common_T_Axis3DType
{
    L_Axis3DType_X_AXIS ,      
    L_Axis3DType_Y_AXIS ,      
    L_Axis3DType_Z_AXIS      
} P_LDM_Common_T_Axis3DType;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_Axis3DType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_Axis3DTypeSeq, P_LDM_Common_T_Axis3DType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Axis3DType_initialize(
    P_LDM_Common_T_Axis3DType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Axis3DType_initialize_ex(
    P_LDM_Common_T_Axis3DType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Axis3DType_initialize_w_params(
    P_LDM_Common_T_Axis3DType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_Axis3DType_finalize(
    P_LDM_Common_T_Axis3DType* self);

NDDSUSERDllExport
void P_LDM_Common_T_Axis3DType_finalize_ex(
    P_LDM_Common_T_Axis3DType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_Axis3DType_finalize_w_params(
    P_LDM_Common_T_Axis3DType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_Axis3DType_finalize_optional_members(
    P_LDM_Common_T_Axis3DType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Axis3DType_copy(
    P_LDM_Common_T_Axis3DType* dst,
    const P_LDM_Common_T_Axis3DType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef    DDS_Double   P_LDM_Common_T_Double ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_Double_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_DoubleSeq, P_LDM_Common_T_Double);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Double_initialize(
    P_LDM_Common_T_Double* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Double_initialize_ex(
    P_LDM_Common_T_Double* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Double_initialize_w_params(
    P_LDM_Common_T_Double* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_Double_finalize(
    P_LDM_Common_T_Double* self);

NDDSUSERDllExport
void P_LDM_Common_T_Double_finalize_ex(
    P_LDM_Common_T_Double* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_Double_finalize_w_params(
    P_LDM_Common_T_Double* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_Double_finalize_optional_members(
    P_LDM_Common_T_Double* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Double_copy(
    P_LDM_Common_T_Double* dst,
    const P_LDM_Common_T_Double* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef    DDS_Char   P_LDM_Common_T_Char ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_Char_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_CharSeq, P_LDM_Common_T_Char);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Char_initialize(
    P_LDM_Common_T_Char* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Char_initialize_ex(
    P_LDM_Common_T_Char* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Char_initialize_w_params(
    P_LDM_Common_T_Char* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_Char_finalize(
    P_LDM_Common_T_Char* self);

NDDSUSERDllExport
void P_LDM_Common_T_Char_finalize_ex(
    P_LDM_Common_T_Char* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_Char_finalize_w_params(
    P_LDM_Common_T_Char* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_Char_finalize_optional_members(
    P_LDM_Common_T_Char* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Char_copy(
    P_LDM_Common_T_Char* dst,
    const P_LDM_Common_T_Char* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    P_LDM_Common_T_Double   P_LDM_Common_T_CapacityInAmpereHoursType ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_CapacityInAmpereHoursType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_CapacityInAmpereHoursTypeSeq, P_LDM_Common_T_CapacityInAmpereHoursType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_CapacityInAmpereHoursType_initialize(
    P_LDM_Common_T_CapacityInAmpereHoursType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_CapacityInAmpereHoursType_initialize_ex(
    P_LDM_Common_T_CapacityInAmpereHoursType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_CapacityInAmpereHoursType_initialize_w_params(
    P_LDM_Common_T_CapacityInAmpereHoursType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_CapacityInAmpereHoursType_finalize(
    P_LDM_Common_T_CapacityInAmpereHoursType* self);

NDDSUSERDllExport
void P_LDM_Common_T_CapacityInAmpereHoursType_finalize_ex(
    P_LDM_Common_T_CapacityInAmpereHoursType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_CapacityInAmpereHoursType_finalize_w_params(
    P_LDM_Common_T_CapacityInAmpereHoursType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_CapacityInAmpereHoursType_finalize_optional_members(
    P_LDM_Common_T_CapacityInAmpereHoursType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_CapacityInAmpereHoursType_copy(
    P_LDM_Common_T_CapacityInAmpereHoursType* dst,
    const P_LDM_Common_T_CapacityInAmpereHoursType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef    DDS_Boolean   P_LDM_Common_T_Boolean ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_Boolean_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_BooleanSeq, P_LDM_Common_T_Boolean);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Boolean_initialize(
    P_LDM_Common_T_Boolean* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Boolean_initialize_ex(
    P_LDM_Common_T_Boolean* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Boolean_initialize_w_params(
    P_LDM_Common_T_Boolean* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_Boolean_finalize(
    P_LDM_Common_T_Boolean* self);

NDDSUSERDllExport
void P_LDM_Common_T_Boolean_finalize_ex(
    P_LDM_Common_T_Boolean* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_Boolean_finalize_w_params(
    P_LDM_Common_T_Boolean* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_Boolean_finalize_optional_members(
    P_LDM_Common_T_Boolean* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Boolean_copy(
    P_LDM_Common_T_Boolean* dst,
    const P_LDM_Common_T_Boolean* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef    DDS_LongLong   P_LDM_Common_T_Int64 ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_Int64_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_Int64Seq, P_LDM_Common_T_Int64);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Int64_initialize(
    P_LDM_Common_T_Int64* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Int64_initialize_ex(
    P_LDM_Common_T_Int64* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Int64_initialize_w_params(
    P_LDM_Common_T_Int64* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_Int64_finalize(
    P_LDM_Common_T_Int64* self);

NDDSUSERDllExport
void P_LDM_Common_T_Int64_finalize_ex(
    P_LDM_Common_T_Int64* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_Int64_finalize_w_params(
    P_LDM_Common_T_Int64* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_Int64_finalize_optional_members(
    P_LDM_Common_T_Int64* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Int64_copy(
    P_LDM_Common_T_Int64* dst,
    const P_LDM_Common_T_Int64* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_LDM_Common_T_Size2DTypeTYPENAME;

}

struct P_LDM_Common_T_Size2DTypeSeq;

class P_LDM_Common_T_Size2DType 
{
  public:
    typedef struct P_LDM_Common_T_Size2DTypeSeq Seq;

    P_LDM_Common_T_Int32   A_xSize ;
    P_LDM_Common_T_Int32   A_ySize ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_Size2DType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_Size2DTypeSeq, P_LDM_Common_T_Size2DType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Size2DType_initialize(
    P_LDM_Common_T_Size2DType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Size2DType_initialize_ex(
    P_LDM_Common_T_Size2DType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Size2DType_initialize_w_params(
    P_LDM_Common_T_Size2DType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_Size2DType_finalize(
    P_LDM_Common_T_Size2DType* self);

NDDSUSERDllExport
void P_LDM_Common_T_Size2DType_finalize_ex(
    P_LDM_Common_T_Size2DType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_Size2DType_finalize_w_params(
    P_LDM_Common_T_Size2DType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_Size2DType_finalize_optional_members(
    P_LDM_Common_T_Size2DType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Size2DType_copy(
    P_LDM_Common_T_Size2DType* dst,
    const P_LDM_Common_T_Size2DType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    P_LDM_Common_T_Double   P_LDM_Common_T_AngleInRadiansType ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_AngleInRadiansType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_AngleInRadiansTypeSeq, P_LDM_Common_T_AngleInRadiansType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AngleInRadiansType_initialize(
    P_LDM_Common_T_AngleInRadiansType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AngleInRadiansType_initialize_ex(
    P_LDM_Common_T_AngleInRadiansType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AngleInRadiansType_initialize_w_params(
    P_LDM_Common_T_AngleInRadiansType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_AngleInRadiansType_finalize(
    P_LDM_Common_T_AngleInRadiansType* self);

NDDSUSERDllExport
void P_LDM_Common_T_AngleInRadiansType_finalize_ex(
    P_LDM_Common_T_AngleInRadiansType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_AngleInRadiansType_finalize_w_params(
    P_LDM_Common_T_AngleInRadiansType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_AngleInRadiansType_finalize_optional_members(
    P_LDM_Common_T_AngleInRadiansType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AngleInRadiansType_copy(
    P_LDM_Common_T_AngleInRadiansType* dst,
    const P_LDM_Common_T_AngleInRadiansType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef    DDS_Short   P_LDM_Common_T_Int16 ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_Int16_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_Int16Seq, P_LDM_Common_T_Int16);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Int16_initialize(
    P_LDM_Common_T_Int16* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Int16_initialize_ex(
    P_LDM_Common_T_Int16* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Int16_initialize_w_params(
    P_LDM_Common_T_Int16* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_Int16_finalize(
    P_LDM_Common_T_Int16* self);

NDDSUSERDllExport
void P_LDM_Common_T_Int16_finalize_ex(
    P_LDM_Common_T_Int16* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_Int16_finalize_w_params(
    P_LDM_Common_T_Int16* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_Int16_finalize_optional_members(
    P_LDM_Common_T_Int16* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Int16_copy(
    P_LDM_Common_T_Int16* dst,
    const P_LDM_Common_T_Int16* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef     P_LDM_Common_T_CharSeq  P_LDM_Common_T_LongString ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_LongString_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_LongStringSeq, P_LDM_Common_T_LongString);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LongString_initialize(
    P_LDM_Common_T_LongString* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LongString_initialize_ex(
    P_LDM_Common_T_LongString* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LongString_initialize_w_params(
    P_LDM_Common_T_LongString* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_LongString_finalize(
    P_LDM_Common_T_LongString* self);

NDDSUSERDllExport
void P_LDM_Common_T_LongString_finalize_ex(
    P_LDM_Common_T_LongString* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_LongString_finalize_w_params(
    P_LDM_Common_T_LongString* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_LongString_finalize_optional_members(
    P_LDM_Common_T_LongString* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LongString_copy(
    P_LDM_Common_T_LongString* dst,
    const P_LDM_Common_T_LongString* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef     P_LDM_Common_T_CharSeq  P_LDM_Common_T_MediumString ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_MediumString_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_MediumStringSeq, P_LDM_Common_T_MediumString);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_MediumString_initialize(
    P_LDM_Common_T_MediumString* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_MediumString_initialize_ex(
    P_LDM_Common_T_MediumString* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_MediumString_initialize_w_params(
    P_LDM_Common_T_MediumString* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_MediumString_finalize(
    P_LDM_Common_T_MediumString* self);

NDDSUSERDllExport
void P_LDM_Common_T_MediumString_finalize_ex(
    P_LDM_Common_T_MediumString* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_MediumString_finalize_w_params(
    P_LDM_Common_T_MediumString* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_MediumString_finalize_optional_members(
    P_LDM_Common_T_MediumString* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_MediumString_copy(
    P_LDM_Common_T_MediumString* dst,
    const P_LDM_Common_T_MediumString* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef     P_LDM_Common_T_CharSeq  P_LDM_Common_T_ShortString ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_ShortString_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_ShortStringSeq, P_LDM_Common_T_ShortString);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_ShortString_initialize(
    P_LDM_Common_T_ShortString* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_ShortString_initialize_ex(
    P_LDM_Common_T_ShortString* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_ShortString_initialize_w_params(
    P_LDM_Common_T_ShortString* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_ShortString_finalize(
    P_LDM_Common_T_ShortString* self);

NDDSUSERDllExport
void P_LDM_Common_T_ShortString_finalize_ex(
    P_LDM_Common_T_ShortString* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_ShortString_finalize_w_params(
    P_LDM_Common_T_ShortString* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_ShortString_finalize_optional_members(
    P_LDM_Common_T_ShortString* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_ShortString_copy(
    P_LDM_Common_T_ShortString* dst,
    const P_LDM_Common_T_ShortString* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_LDM_Common_T_IdentifierTypeTYPENAME;

}

struct P_LDM_Common_T_IdentifierTypeSeq;

class P_LDM_Common_T_IdentifierType 
{
  public:
    typedef struct P_LDM_Common_T_IdentifierTypeSeq Seq;

    P_LDM_Common_T_Int32   A_resourceId ;
    P_LDM_Common_T_Int32   A_instanceId ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_IdentifierType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_IdentifierTypeSeq, P_LDM_Common_T_IdentifierType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_IdentifierType_initialize(
    P_LDM_Common_T_IdentifierType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_IdentifierType_initialize_ex(
    P_LDM_Common_T_IdentifierType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_IdentifierType_initialize_w_params(
    P_LDM_Common_T_IdentifierType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_IdentifierType_finalize(
    P_LDM_Common_T_IdentifierType* self);

NDDSUSERDllExport
void P_LDM_Common_T_IdentifierType_finalize_ex(
    P_LDM_Common_T_IdentifierType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_IdentifierType_finalize_w_params(
    P_LDM_Common_T_IdentifierType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_IdentifierType_finalize_optional_members(
    P_LDM_Common_T_IdentifierType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_IdentifierType_copy(
    P_LDM_Common_T_IdentifierType* dst,
    const P_LDM_Common_T_IdentifierType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_LDM_Common_T_DurationTypeTYPENAME;

}

struct P_LDM_Common_T_DurationTypeSeq;

class P_LDM_Common_T_DurationType 
{
  public:
    typedef struct P_LDM_Common_T_DurationTypeSeq Seq;

    P_LDM_Common_T_Int32   A_seconds ;
    P_LDM_Common_T_Int32   A_nanoseconds ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_DurationType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_DurationTypeSeq, P_LDM_Common_T_DurationType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_DurationType_initialize(
    P_LDM_Common_T_DurationType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_DurationType_initialize_ex(
    P_LDM_Common_T_DurationType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_DurationType_initialize_w_params(
    P_LDM_Common_T_DurationType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_DurationType_finalize(
    P_LDM_Common_T_DurationType* self);

NDDSUSERDllExport
void P_LDM_Common_T_DurationType_finalize_ex(
    P_LDM_Common_T_DurationType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_DurationType_finalize_w_params(
    P_LDM_Common_T_DurationType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_DurationType_finalize_optional_members(
    P_LDM_Common_T_DurationType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_DurationType_copy(
    P_LDM_Common_T_DurationType* dst,
    const P_LDM_Common_T_DurationType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    P_LDM_Common_T_DurationType   P_LDM_Common_T_HeartbeatType ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_HeartbeatType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_HeartbeatTypeSeq, P_LDM_Common_T_HeartbeatType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_HeartbeatType_initialize(
    P_LDM_Common_T_HeartbeatType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_HeartbeatType_initialize_ex(
    P_LDM_Common_T_HeartbeatType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_HeartbeatType_initialize_w_params(
    P_LDM_Common_T_HeartbeatType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_HeartbeatType_finalize(
    P_LDM_Common_T_HeartbeatType* self);

NDDSUSERDllExport
void P_LDM_Common_T_HeartbeatType_finalize_ex(
    P_LDM_Common_T_HeartbeatType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_HeartbeatType_finalize_w_params(
    P_LDM_Common_T_HeartbeatType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_HeartbeatType_finalize_optional_members(
    P_LDM_Common_T_HeartbeatType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_HeartbeatType_copy(
    P_LDM_Common_T_HeartbeatType* dst,
    const P_LDM_Common_T_HeartbeatType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_LDM_Common_T_DateTimeTypeTYPENAME;

}

struct P_LDM_Common_T_DateTimeTypeSeq;

class P_LDM_Common_T_DateTimeType 
{
  public:
    typedef struct P_LDM_Common_T_DateTimeTypeSeq Seq;

    P_LDM_Common_T_Int64   A_second ;
    P_LDM_Common_T_Int32   A_nanoseconds ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_DateTimeType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_DateTimeTypeSeq, P_LDM_Common_T_DateTimeType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_DateTimeType_initialize(
    P_LDM_Common_T_DateTimeType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_DateTimeType_initialize_ex(
    P_LDM_Common_T_DateTimeType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_DateTimeType_initialize_w_params(
    P_LDM_Common_T_DateTimeType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_DateTimeType_finalize(
    P_LDM_Common_T_DateTimeType* self);

NDDSUSERDllExport
void P_LDM_Common_T_DateTimeType_finalize_ex(
    P_LDM_Common_T_DateTimeType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_DateTimeType_finalize_w_params(
    P_LDM_Common_T_DateTimeType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_DateTimeType_finalize_optional_members(
    P_LDM_Common_T_DateTimeType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_DateTimeType_copy(
    P_LDM_Common_T_DateTimeType* dst,
    const P_LDM_Common_T_DateTimeType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    P_LDM_Common_T_Double   P_LDM_Common_T_TorqueInNewtonMetresType ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_TorqueInNewtonMetresType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_TorqueInNewtonMetresTypeSeq, P_LDM_Common_T_TorqueInNewtonMetresType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_TorqueInNewtonMetresType_initialize(
    P_LDM_Common_T_TorqueInNewtonMetresType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_TorqueInNewtonMetresType_initialize_ex(
    P_LDM_Common_T_TorqueInNewtonMetresType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_TorqueInNewtonMetresType_initialize_w_params(
    P_LDM_Common_T_TorqueInNewtonMetresType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_TorqueInNewtonMetresType_finalize(
    P_LDM_Common_T_TorqueInNewtonMetresType* self);

NDDSUSERDllExport
void P_LDM_Common_T_TorqueInNewtonMetresType_finalize_ex(
    P_LDM_Common_T_TorqueInNewtonMetresType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_TorqueInNewtonMetresType_finalize_w_params(
    P_LDM_Common_T_TorqueInNewtonMetresType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_TorqueInNewtonMetresType_finalize_optional_members(
    P_LDM_Common_T_TorqueInNewtonMetresType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_TorqueInNewtonMetresType_copy(
    P_LDM_Common_T_TorqueInNewtonMetresType* dst,
    const P_LDM_Common_T_TorqueInNewtonMetresType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    P_LDM_Common_T_Double   P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypeSeq, P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_initialize(
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_initialize_ex(
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_initialize_w_params(
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_finalize(
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType* self);

NDDSUSERDllExport
void P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_finalize_ex(
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_finalize_w_params(
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_finalize_optional_members(
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_copy(
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType* dst,
    const P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_LDM_Common_T_LinearAcceleration3DTypeTYPENAME;

}

struct P_LDM_Common_T_LinearAcceleration3DTypeSeq;

class P_LDM_Common_T_LinearAcceleration3DType 
{
  public:
    typedef struct P_LDM_Common_T_LinearAcceleration3DTypeSeq Seq;

    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType   A_xAcceleration ;
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType   A_yAcceleration ;
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType   A_zAcceleration ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_LinearAcceleration3DType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_LinearAcceleration3DTypeSeq, P_LDM_Common_T_LinearAcceleration3DType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LinearAcceleration3DType_initialize(
    P_LDM_Common_T_LinearAcceleration3DType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LinearAcceleration3DType_initialize_ex(
    P_LDM_Common_T_LinearAcceleration3DType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LinearAcceleration3DType_initialize_w_params(
    P_LDM_Common_T_LinearAcceleration3DType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_LinearAcceleration3DType_finalize(
    P_LDM_Common_T_LinearAcceleration3DType* self);

NDDSUSERDllExport
void P_LDM_Common_T_LinearAcceleration3DType_finalize_ex(
    P_LDM_Common_T_LinearAcceleration3DType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_LinearAcceleration3DType_finalize_w_params(
    P_LDM_Common_T_LinearAcceleration3DType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_LinearAcceleration3DType_finalize_optional_members(
    P_LDM_Common_T_LinearAcceleration3DType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LinearAcceleration3DType_copy(
    P_LDM_Common_T_LinearAcceleration3DType* dst,
    const P_LDM_Common_T_LinearAcceleration3DType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_LDM_Common_T_AttitudeTypeTYPENAME;

}

struct P_LDM_Common_T_AttitudeTypeSeq;

class P_LDM_Common_T_AttitudeType 
{
  public:
    typedef struct P_LDM_Common_T_AttitudeTypeSeq Seq;

    P_LDM_Common_T_AngleInRadiansType   A_pitch ;
    P_LDM_Common_T_AngleInRadiansType   A_roll ;
    P_LDM_Common_T_AngleInRadiansType   A_yaw ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_AttitudeType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_AttitudeTypeSeq, P_LDM_Common_T_AttitudeType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AttitudeType_initialize(
    P_LDM_Common_T_AttitudeType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AttitudeType_initialize_ex(
    P_LDM_Common_T_AttitudeType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AttitudeType_initialize_w_params(
    P_LDM_Common_T_AttitudeType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_AttitudeType_finalize(
    P_LDM_Common_T_AttitudeType* self);

NDDSUSERDllExport
void P_LDM_Common_T_AttitudeType_finalize_ex(
    P_LDM_Common_T_AttitudeType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_AttitudeType_finalize_w_params(
    P_LDM_Common_T_AttitudeType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_AttitudeType_finalize_optional_members(
    P_LDM_Common_T_AttitudeType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AttitudeType_copy(
    P_LDM_Common_T_AttitudeType* dst,
    const P_LDM_Common_T_AttitudeType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    P_LDM_Common_T_Double   P_LDM_Common_T_DistanceInMetresType ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_DistanceInMetresType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_DistanceInMetresTypeSeq, P_LDM_Common_T_DistanceInMetresType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_DistanceInMetresType_initialize(
    P_LDM_Common_T_DistanceInMetresType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_DistanceInMetresType_initialize_ex(
    P_LDM_Common_T_DistanceInMetresType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_DistanceInMetresType_initialize_w_params(
    P_LDM_Common_T_DistanceInMetresType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_DistanceInMetresType_finalize(
    P_LDM_Common_T_DistanceInMetresType* self);

NDDSUSERDllExport
void P_LDM_Common_T_DistanceInMetresType_finalize_ex(
    P_LDM_Common_T_DistanceInMetresType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_DistanceInMetresType_finalize_w_params(
    P_LDM_Common_T_DistanceInMetresType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_DistanceInMetresType_finalize_optional_members(
    P_LDM_Common_T_DistanceInMetresType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_DistanceInMetresType_copy(
    P_LDM_Common_T_DistanceInMetresType* dst,
    const P_LDM_Common_T_DistanceInMetresType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    P_LDM_Common_T_Double   P_LDM_Common_T_SpeedInMetresPerSecType ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_SpeedInMetresPerSecType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_SpeedInMetresPerSecTypeSeq, P_LDM_Common_T_SpeedInMetresPerSecType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_SpeedInMetresPerSecType_initialize(
    P_LDM_Common_T_SpeedInMetresPerSecType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_SpeedInMetresPerSecType_initialize_ex(
    P_LDM_Common_T_SpeedInMetresPerSecType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_SpeedInMetresPerSecType_initialize_w_params(
    P_LDM_Common_T_SpeedInMetresPerSecType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_SpeedInMetresPerSecType_finalize(
    P_LDM_Common_T_SpeedInMetresPerSecType* self);

NDDSUSERDllExport
void P_LDM_Common_T_SpeedInMetresPerSecType_finalize_ex(
    P_LDM_Common_T_SpeedInMetresPerSecType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_SpeedInMetresPerSecType_finalize_w_params(
    P_LDM_Common_T_SpeedInMetresPerSecType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_SpeedInMetresPerSecType_finalize_optional_members(
    P_LDM_Common_T_SpeedInMetresPerSecType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_SpeedInMetresPerSecType_copy(
    P_LDM_Common_T_SpeedInMetresPerSecType* dst,
    const P_LDM_Common_T_SpeedInMetresPerSecType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_LDM_Common_T_PointPolar3DTypeTYPENAME;

}

struct P_LDM_Common_T_PointPolar3DTypeSeq;

class P_LDM_Common_T_PointPolar3DType 
{
  public:
    typedef struct P_LDM_Common_T_PointPolar3DTypeSeq Seq;

    P_LDM_Common_T_AngleInRadiansType   A_angle ;
    P_LDM_Common_T_AngleInRadiansType   A_elevation ;
    P_LDM_Common_T_DistanceInMetresType   A_radius ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_PointPolar3DType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_PointPolar3DTypeSeq, P_LDM_Common_T_PointPolar3DType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_PointPolar3DType_initialize(
    P_LDM_Common_T_PointPolar3DType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_PointPolar3DType_initialize_ex(
    P_LDM_Common_T_PointPolar3DType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_PointPolar3DType_initialize_w_params(
    P_LDM_Common_T_PointPolar3DType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_PointPolar3DType_finalize(
    P_LDM_Common_T_PointPolar3DType* self);

NDDSUSERDllExport
void P_LDM_Common_T_PointPolar3DType_finalize_ex(
    P_LDM_Common_T_PointPolar3DType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_PointPolar3DType_finalize_w_params(
    P_LDM_Common_T_PointPolar3DType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_PointPolar3DType_finalize_optional_members(
    P_LDM_Common_T_PointPolar3DType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_PointPolar3DType_copy(
    P_LDM_Common_T_PointPolar3DType* dst,
    const P_LDM_Common_T_PointPolar3DType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_LDM_Common_T_CoordinatePolar3DTypeTYPENAME;

}

struct P_LDM_Common_T_CoordinatePolar3DTypeSeq;

class P_LDM_Common_T_CoordinatePolar3DType 
{
  public:
    typedef struct P_LDM_Common_T_CoordinatePolar3DTypeSeq Seq;

    P_LDM_Common_T_AngleInRadiansType   A_angle ;
    P_LDM_Common_T_AngleInRadiansType   A_elevation ;
    P_LDM_Common_T_DistanceInMetresType   A_range ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_CoordinatePolar3DType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_CoordinatePolar3DTypeSeq, P_LDM_Common_T_CoordinatePolar3DType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_CoordinatePolar3DType_initialize(
    P_LDM_Common_T_CoordinatePolar3DType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_CoordinatePolar3DType_initialize_ex(
    P_LDM_Common_T_CoordinatePolar3DType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_CoordinatePolar3DType_initialize_w_params(
    P_LDM_Common_T_CoordinatePolar3DType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_CoordinatePolar3DType_finalize(
    P_LDM_Common_T_CoordinatePolar3DType* self);

NDDSUSERDllExport
void P_LDM_Common_T_CoordinatePolar3DType_finalize_ex(
    P_LDM_Common_T_CoordinatePolar3DType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_CoordinatePolar3DType_finalize_w_params(
    P_LDM_Common_T_CoordinatePolar3DType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_CoordinatePolar3DType_finalize_optional_members(
    P_LDM_Common_T_CoordinatePolar3DType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_CoordinatePolar3DType_copy(
    P_LDM_Common_T_CoordinatePolar3DType* dst,
    const P_LDM_Common_T_CoordinatePolar3DType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_LDM_Common_T_CoordinatePolar2DTypeTYPENAME;

}

struct P_LDM_Common_T_CoordinatePolar2DTypeSeq;

class P_LDM_Common_T_CoordinatePolar2DType 
{
  public:
    typedef struct P_LDM_Common_T_CoordinatePolar2DTypeSeq Seq;

    P_LDM_Common_T_AngleInRadiansType   A_angle ;
    P_LDM_Common_T_DistanceInMetresType   A_range ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_CoordinatePolar2DType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_CoordinatePolar2DTypeSeq, P_LDM_Common_T_CoordinatePolar2DType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_CoordinatePolar2DType_initialize(
    P_LDM_Common_T_CoordinatePolar2DType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_CoordinatePolar2DType_initialize_ex(
    P_LDM_Common_T_CoordinatePolar2DType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_CoordinatePolar2DType_initialize_w_params(
    P_LDM_Common_T_CoordinatePolar2DType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_CoordinatePolar2DType_finalize(
    P_LDM_Common_T_CoordinatePolar2DType* self);

NDDSUSERDllExport
void P_LDM_Common_T_CoordinatePolar2DType_finalize_ex(
    P_LDM_Common_T_CoordinatePolar2DType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_CoordinatePolar2DType_finalize_w_params(
    P_LDM_Common_T_CoordinatePolar2DType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_CoordinatePolar2DType_finalize_optional_members(
    P_LDM_Common_T_CoordinatePolar2DType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_CoordinatePolar2DType_copy(
    P_LDM_Common_T_CoordinatePolar2DType* dst,
    const P_LDM_Common_T_CoordinatePolar2DType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    P_LDM_Common_T_Double   P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypeSeq, P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_initialize(
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_initialize_ex(
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_initialize_w_params(
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_finalize(
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType* self);

NDDSUSERDllExport
void P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_finalize_ex(
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_finalize_w_params(
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_finalize_optional_members(
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_copy(
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType* dst,
    const P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_LDM_Common_T_AngularAcceleration3DTypeTYPENAME;

}

struct P_LDM_Common_T_AngularAcceleration3DTypeSeq;

class P_LDM_Common_T_AngularAcceleration3DType 
{
  public:
    typedef struct P_LDM_Common_T_AngularAcceleration3DTypeSeq Seq;

    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType   A_pitch ;
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType   A_roll ;
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType   A_yaw ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_AngularAcceleration3DType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_AngularAcceleration3DTypeSeq, P_LDM_Common_T_AngularAcceleration3DType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AngularAcceleration3DType_initialize(
    P_LDM_Common_T_AngularAcceleration3DType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AngularAcceleration3DType_initialize_ex(
    P_LDM_Common_T_AngularAcceleration3DType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AngularAcceleration3DType_initialize_w_params(
    P_LDM_Common_T_AngularAcceleration3DType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_AngularAcceleration3DType_finalize(
    P_LDM_Common_T_AngularAcceleration3DType* self);

NDDSUSERDllExport
void P_LDM_Common_T_AngularAcceleration3DType_finalize_ex(
    P_LDM_Common_T_AngularAcceleration3DType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_AngularAcceleration3DType_finalize_w_params(
    P_LDM_Common_T_AngularAcceleration3DType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_AngularAcceleration3DType_finalize_optional_members(
    P_LDM_Common_T_AngularAcceleration3DType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AngularAcceleration3DType_copy(
    P_LDM_Common_T_AngularAcceleration3DType* dst,
    const P_LDM_Common_T_AngularAcceleration3DType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    P_LDM_Common_T_Double   P_LDM_Common_T_AngularVelocityinRadiansPerSecType ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_AngularVelocityinRadiansPerSecType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_AngularVelocityinRadiansPerSecTypeSeq, P_LDM_Common_T_AngularVelocityinRadiansPerSecType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AngularVelocityinRadiansPerSecType_initialize(
    P_LDM_Common_T_AngularVelocityinRadiansPerSecType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AngularVelocityinRadiansPerSecType_initialize_ex(
    P_LDM_Common_T_AngularVelocityinRadiansPerSecType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AngularVelocityinRadiansPerSecType_initialize_w_params(
    P_LDM_Common_T_AngularVelocityinRadiansPerSecType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_AngularVelocityinRadiansPerSecType_finalize(
    P_LDM_Common_T_AngularVelocityinRadiansPerSecType* self);

NDDSUSERDllExport
void P_LDM_Common_T_AngularVelocityinRadiansPerSecType_finalize_ex(
    P_LDM_Common_T_AngularVelocityinRadiansPerSecType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_AngularVelocityinRadiansPerSecType_finalize_w_params(
    P_LDM_Common_T_AngularVelocityinRadiansPerSecType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_AngularVelocityinRadiansPerSecType_finalize_optional_members(
    P_LDM_Common_T_AngularVelocityinRadiansPerSecType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AngularVelocityinRadiansPerSecType_copy(
    P_LDM_Common_T_AngularVelocityinRadiansPerSecType* dst,
    const P_LDM_Common_T_AngularVelocityinRadiansPerSecType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_LDM_Common_T_AngularVelocity3DTypeTYPENAME;

}

struct P_LDM_Common_T_AngularVelocity3DTypeSeq;

class P_LDM_Common_T_AngularVelocity3DType 
{
  public:
    typedef struct P_LDM_Common_T_AngularVelocity3DTypeSeq Seq;

    P_LDM_Common_T_AngularVelocityinRadiansPerSecType   A_pitch ;
    P_LDM_Common_T_AngularVelocityinRadiansPerSecType   A_roll ;
    P_LDM_Common_T_AngularVelocityinRadiansPerSecType   A_yaw ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_AngularVelocity3DType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_AngularVelocity3DTypeSeq, P_LDM_Common_T_AngularVelocity3DType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AngularVelocity3DType_initialize(
    P_LDM_Common_T_AngularVelocity3DType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AngularVelocity3DType_initialize_ex(
    P_LDM_Common_T_AngularVelocity3DType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AngularVelocity3DType_initialize_w_params(
    P_LDM_Common_T_AngularVelocity3DType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_AngularVelocity3DType_finalize(
    P_LDM_Common_T_AngularVelocity3DType* self);

NDDSUSERDllExport
void P_LDM_Common_T_AngularVelocity3DType_finalize_ex(
    P_LDM_Common_T_AngularVelocity3DType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_AngularVelocity3DType_finalize_w_params(
    P_LDM_Common_T_AngularVelocity3DType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_AngularVelocity3DType_finalize_optional_members(
    P_LDM_Common_T_AngularVelocity3DType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AngularVelocity3DType_copy(
    P_LDM_Common_T_AngularVelocity3DType* dst,
    const P_LDM_Common_T_AngularVelocity3DType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_LDM_Common_T_LinearVelocity3DTypeTYPENAME;

}

struct P_LDM_Common_T_LinearVelocity3DTypeSeq;

class P_LDM_Common_T_LinearVelocity3DType 
{
  public:
    typedef struct P_LDM_Common_T_LinearVelocity3DTypeSeq Seq;

    P_LDM_Common_T_AngleInRadiansType   A_heading ;
    P_LDM_Common_T_SpeedInMetresPerSecType   A_speed ;
    P_LDM_Common_T_SpeedInMetresPerSecType   A_vrate ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_LinearVelocity3DType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_LinearVelocity3DTypeSeq, P_LDM_Common_T_LinearVelocity3DType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LinearVelocity3DType_initialize(
    P_LDM_Common_T_LinearVelocity3DType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LinearVelocity3DType_initialize_ex(
    P_LDM_Common_T_LinearVelocity3DType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LinearVelocity3DType_initialize_w_params(
    P_LDM_Common_T_LinearVelocity3DType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_LinearVelocity3DType_finalize(
    P_LDM_Common_T_LinearVelocity3DType* self);

NDDSUSERDllExport
void P_LDM_Common_T_LinearVelocity3DType_finalize_ex(
    P_LDM_Common_T_LinearVelocity3DType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_LinearVelocity3DType_finalize_w_params(
    P_LDM_Common_T_LinearVelocity3DType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_LinearVelocity3DType_finalize_optional_members(
    P_LDM_Common_T_LinearVelocity3DType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LinearVelocity3DType_copy(
    P_LDM_Common_T_LinearVelocity3DType* dst,
    const P_LDM_Common_T_LinearVelocity3DType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    P_LDM_Common_T_AngleInRadiansType   P_LDM_Common_T_LatitudeType ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_LatitudeType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_LatitudeTypeSeq, P_LDM_Common_T_LatitudeType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LatitudeType_initialize(
    P_LDM_Common_T_LatitudeType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LatitudeType_initialize_ex(
    P_LDM_Common_T_LatitudeType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LatitudeType_initialize_w_params(
    P_LDM_Common_T_LatitudeType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_LatitudeType_finalize(
    P_LDM_Common_T_LatitudeType* self);

NDDSUSERDllExport
void P_LDM_Common_T_LatitudeType_finalize_ex(
    P_LDM_Common_T_LatitudeType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_LatitudeType_finalize_w_params(
    P_LDM_Common_T_LatitudeType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_LatitudeType_finalize_optional_members(
    P_LDM_Common_T_LatitudeType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LatitudeType_copy(
    P_LDM_Common_T_LatitudeType* dst,
    const P_LDM_Common_T_LatitudeType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    P_LDM_Common_T_DistanceInMetresType   P_LDM_Common_T_AltitudeType ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_AltitudeType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_AltitudeTypeSeq, P_LDM_Common_T_AltitudeType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AltitudeType_initialize(
    P_LDM_Common_T_AltitudeType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AltitudeType_initialize_ex(
    P_LDM_Common_T_AltitudeType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AltitudeType_initialize_w_params(
    P_LDM_Common_T_AltitudeType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_AltitudeType_finalize(
    P_LDM_Common_T_AltitudeType* self);

NDDSUSERDllExport
void P_LDM_Common_T_AltitudeType_finalize_ex(
    P_LDM_Common_T_AltitudeType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_AltitudeType_finalize_w_params(
    P_LDM_Common_T_AltitudeType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_AltitudeType_finalize_optional_members(
    P_LDM_Common_T_AltitudeType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_AltitudeType_copy(
    P_LDM_Common_T_AltitudeType* dst,
    const P_LDM_Common_T_AltitudeType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_LDM_Common_T_RotationalOffsetTypeTYPENAME;

}

struct P_LDM_Common_T_RotationalOffsetTypeSeq;

class P_LDM_Common_T_RotationalOffsetType 
{
  public:
    typedef struct P_LDM_Common_T_RotationalOffsetTypeSeq Seq;

    P_LDM_Common_T_AngleInRadiansType   A_pitchOffset ;
    P_LDM_Common_T_AngleInRadiansType   A_rollOffset ;
    P_LDM_Common_T_AngleInRadiansType   A_yawOffset ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_RotationalOffsetType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_RotationalOffsetTypeSeq, P_LDM_Common_T_RotationalOffsetType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_RotationalOffsetType_initialize(
    P_LDM_Common_T_RotationalOffsetType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_RotationalOffsetType_initialize_ex(
    P_LDM_Common_T_RotationalOffsetType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_RotationalOffsetType_initialize_w_params(
    P_LDM_Common_T_RotationalOffsetType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_RotationalOffsetType_finalize(
    P_LDM_Common_T_RotationalOffsetType* self);

NDDSUSERDllExport
void P_LDM_Common_T_RotationalOffsetType_finalize_ex(
    P_LDM_Common_T_RotationalOffsetType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_RotationalOffsetType_finalize_w_params(
    P_LDM_Common_T_RotationalOffsetType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_RotationalOffsetType_finalize_optional_members(
    P_LDM_Common_T_RotationalOffsetType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_RotationalOffsetType_copy(
    P_LDM_Common_T_RotationalOffsetType* dst,
    const P_LDM_Common_T_RotationalOffsetType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    P_LDM_Common_T_AngleInRadiansType   P_LDM_Common_T_LongitudeType ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_LongitudeType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_LongitudeTypeSeq, P_LDM_Common_T_LongitudeType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LongitudeType_initialize(
    P_LDM_Common_T_LongitudeType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LongitudeType_initialize_ex(
    P_LDM_Common_T_LongitudeType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LongitudeType_initialize_w_params(
    P_LDM_Common_T_LongitudeType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_LongitudeType_finalize(
    P_LDM_Common_T_LongitudeType* self);

NDDSUSERDllExport
void P_LDM_Common_T_LongitudeType_finalize_ex(
    P_LDM_Common_T_LongitudeType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_LongitudeType_finalize_w_params(
    P_LDM_Common_T_LongitudeType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_LongitudeType_finalize_optional_members(
    P_LDM_Common_T_LongitudeType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LongitudeType_copy(
    P_LDM_Common_T_LongitudeType* dst,
    const P_LDM_Common_T_LongitudeType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_LDM_Common_T_Coordinate2DTypeTYPENAME;

}

struct P_LDM_Common_T_Coordinate2DTypeSeq;

class P_LDM_Common_T_Coordinate2DType 
{
  public:
    typedef struct P_LDM_Common_T_Coordinate2DTypeSeq Seq;

    P_LDM_Common_T_LatitudeType   A_latitude ;
    P_LDM_Common_T_LongitudeType   A_longitude ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_Coordinate2DType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_Coordinate2DTypeSeq, P_LDM_Common_T_Coordinate2DType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Coordinate2DType_initialize(
    P_LDM_Common_T_Coordinate2DType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Coordinate2DType_initialize_ex(
    P_LDM_Common_T_Coordinate2DType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Coordinate2DType_initialize_w_params(
    P_LDM_Common_T_Coordinate2DType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_Coordinate2DType_finalize(
    P_LDM_Common_T_Coordinate2DType* self);

NDDSUSERDllExport
void P_LDM_Common_T_Coordinate2DType_finalize_ex(
    P_LDM_Common_T_Coordinate2DType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_Coordinate2DType_finalize_w_params(
    P_LDM_Common_T_Coordinate2DType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_Coordinate2DType_finalize_optional_members(
    P_LDM_Common_T_Coordinate2DType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Coordinate2DType_copy(
    P_LDM_Common_T_Coordinate2DType* dst,
    const P_LDM_Common_T_Coordinate2DType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_LDM_Common_T_LinearSpeed3DTypeTYPENAME;

}

struct P_LDM_Common_T_LinearSpeed3DTypeSeq;

class P_LDM_Common_T_LinearSpeed3DType 
{
  public:
    typedef struct P_LDM_Common_T_LinearSpeed3DTypeSeq Seq;

    P_LDM_Common_T_SpeedInMetresPerSecType   A_xSpeed ;
    P_LDM_Common_T_SpeedInMetresPerSecType   A_ySpeed ;
    P_LDM_Common_T_SpeedInMetresPerSecType   A_zSpeed ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_LinearSpeed3DType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_LinearSpeed3DTypeSeq, P_LDM_Common_T_LinearSpeed3DType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LinearSpeed3DType_initialize(
    P_LDM_Common_T_LinearSpeed3DType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LinearSpeed3DType_initialize_ex(
    P_LDM_Common_T_LinearSpeed3DType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LinearSpeed3DType_initialize_w_params(
    P_LDM_Common_T_LinearSpeed3DType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_LinearSpeed3DType_finalize(
    P_LDM_Common_T_LinearSpeed3DType* self);

NDDSUSERDllExport
void P_LDM_Common_T_LinearSpeed3DType_finalize_ex(
    P_LDM_Common_T_LinearSpeed3DType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_LinearSpeed3DType_finalize_w_params(
    P_LDM_Common_T_LinearSpeed3DType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_LinearSpeed3DType_finalize_optional_members(
    P_LDM_Common_T_LinearSpeed3DType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LinearSpeed3DType_copy(
    P_LDM_Common_T_LinearSpeed3DType* dst,
    const P_LDM_Common_T_LinearSpeed3DType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_LDM_Common_T_LinearOffsetTypeTYPENAME;

}

struct P_LDM_Common_T_LinearOffsetTypeSeq;

class P_LDM_Common_T_LinearOffsetType 
{
  public:
    typedef struct P_LDM_Common_T_LinearOffsetTypeSeq Seq;

    P_LDM_Common_T_DistanceInMetresType   A_xOffset ;
    P_LDM_Common_T_DistanceInMetresType   A_yOffset ;
    P_LDM_Common_T_DistanceInMetresType   A_zOffset ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_LinearOffsetType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_LinearOffsetTypeSeq, P_LDM_Common_T_LinearOffsetType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LinearOffsetType_initialize(
    P_LDM_Common_T_LinearOffsetType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LinearOffsetType_initialize_ex(
    P_LDM_Common_T_LinearOffsetType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LinearOffsetType_initialize_w_params(
    P_LDM_Common_T_LinearOffsetType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_LinearOffsetType_finalize(
    P_LDM_Common_T_LinearOffsetType* self);

NDDSUSERDllExport
void P_LDM_Common_T_LinearOffsetType_finalize_ex(
    P_LDM_Common_T_LinearOffsetType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_LinearOffsetType_finalize_w_params(
    P_LDM_Common_T_LinearOffsetType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_LinearOffsetType_finalize_optional_members(
    P_LDM_Common_T_LinearOffsetType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LinearOffsetType_copy(
    P_LDM_Common_T_LinearOffsetType* dst,
    const P_LDM_Common_T_LinearOffsetType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    P_LDM_Common_T_AngleInRadiansType   P_LDM_Common_T_BearingType ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_BearingType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_BearingTypeSeq, P_LDM_Common_T_BearingType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_BearingType_initialize(
    P_LDM_Common_T_BearingType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_BearingType_initialize_ex(
    P_LDM_Common_T_BearingType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_BearingType_initialize_w_params(
    P_LDM_Common_T_BearingType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_BearingType_finalize(
    P_LDM_Common_T_BearingType* self);

NDDSUSERDllExport
void P_LDM_Common_T_BearingType_finalize_ex(
    P_LDM_Common_T_BearingType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_BearingType_finalize_w_params(
    P_LDM_Common_T_BearingType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_BearingType_finalize_optional_members(
    P_LDM_Common_T_BearingType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_BearingType_copy(
    P_LDM_Common_T_BearingType* dst,
    const P_LDM_Common_T_BearingType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    P_LDM_Common_T_Double   P_LDM_Common_T_VolumeInCubicMetresType ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_VolumeInCubicMetresType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_VolumeInCubicMetresTypeSeq, P_LDM_Common_T_VolumeInCubicMetresType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_VolumeInCubicMetresType_initialize(
    P_LDM_Common_T_VolumeInCubicMetresType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_VolumeInCubicMetresType_initialize_ex(
    P_LDM_Common_T_VolumeInCubicMetresType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_VolumeInCubicMetresType_initialize_w_params(
    P_LDM_Common_T_VolumeInCubicMetresType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_VolumeInCubicMetresType_finalize(
    P_LDM_Common_T_VolumeInCubicMetresType* self);

NDDSUSERDllExport
void P_LDM_Common_T_VolumeInCubicMetresType_finalize_ex(
    P_LDM_Common_T_VolumeInCubicMetresType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_VolumeInCubicMetresType_finalize_w_params(
    P_LDM_Common_T_VolumeInCubicMetresType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_VolumeInCubicMetresType_finalize_optional_members(
    P_LDM_Common_T_VolumeInCubicMetresType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_VolumeInCubicMetresType_copy(
    P_LDM_Common_T_VolumeInCubicMetresType* dst,
    const P_LDM_Common_T_VolumeInCubicMetresType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    P_LDM_Common_T_Double   P_LDM_Common_T_VoltageInVoltsType ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_VoltageInVoltsType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_VoltageInVoltsTypeSeq, P_LDM_Common_T_VoltageInVoltsType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_VoltageInVoltsType_initialize(
    P_LDM_Common_T_VoltageInVoltsType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_VoltageInVoltsType_initialize_ex(
    P_LDM_Common_T_VoltageInVoltsType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_VoltageInVoltsType_initialize_w_params(
    P_LDM_Common_T_VoltageInVoltsType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_VoltageInVoltsType_finalize(
    P_LDM_Common_T_VoltageInVoltsType* self);

NDDSUSERDllExport
void P_LDM_Common_T_VoltageInVoltsType_finalize_ex(
    P_LDM_Common_T_VoltageInVoltsType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_VoltageInVoltsType_finalize_w_params(
    P_LDM_Common_T_VoltageInVoltsType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_VoltageInVoltsType_finalize_optional_members(
    P_LDM_Common_T_VoltageInVoltsType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_VoltageInVoltsType_copy(
    P_LDM_Common_T_VoltageInVoltsType* dst,
    const P_LDM_Common_T_VoltageInVoltsType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    P_LDM_Common_T_Double   P_LDM_Common_T_TemperatureInDegreesKelvinType ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_TemperatureInDegreesKelvinType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_TemperatureInDegreesKelvinTypeSeq, P_LDM_Common_T_TemperatureInDegreesKelvinType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_TemperatureInDegreesKelvinType_initialize(
    P_LDM_Common_T_TemperatureInDegreesKelvinType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_TemperatureInDegreesKelvinType_initialize_ex(
    P_LDM_Common_T_TemperatureInDegreesKelvinType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_TemperatureInDegreesKelvinType_initialize_w_params(
    P_LDM_Common_T_TemperatureInDegreesKelvinType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_TemperatureInDegreesKelvinType_finalize(
    P_LDM_Common_T_TemperatureInDegreesKelvinType* self);

NDDSUSERDllExport
void P_LDM_Common_T_TemperatureInDegreesKelvinType_finalize_ex(
    P_LDM_Common_T_TemperatureInDegreesKelvinType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_TemperatureInDegreesKelvinType_finalize_w_params(
    P_LDM_Common_T_TemperatureInDegreesKelvinType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_TemperatureInDegreesKelvinType_finalize_optional_members(
    P_LDM_Common_T_TemperatureInDegreesKelvinType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_TemperatureInDegreesKelvinType_copy(
    P_LDM_Common_T_TemperatureInDegreesKelvinType* dst,
    const P_LDM_Common_T_TemperatureInDegreesKelvinType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_LDM_Common_T_LinearVelocity2DTypeTYPENAME;

}

struct P_LDM_Common_T_LinearVelocity2DTypeSeq;

class P_LDM_Common_T_LinearVelocity2DType 
{
  public:
    typedef struct P_LDM_Common_T_LinearVelocity2DTypeSeq Seq;

    P_LDM_Common_T_AngleInRadiansType   A_heading ;
    P_LDM_Common_T_SpeedInMetresPerSecType   A_speed ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_LinearVelocity2DType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_LinearVelocity2DTypeSeq, P_LDM_Common_T_LinearVelocity2DType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LinearVelocity2DType_initialize(
    P_LDM_Common_T_LinearVelocity2DType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LinearVelocity2DType_initialize_ex(
    P_LDM_Common_T_LinearVelocity2DType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LinearVelocity2DType_initialize_w_params(
    P_LDM_Common_T_LinearVelocity2DType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_LinearVelocity2DType_finalize(
    P_LDM_Common_T_LinearVelocity2DType* self);

NDDSUSERDllExport
void P_LDM_Common_T_LinearVelocity2DType_finalize_ex(
    P_LDM_Common_T_LinearVelocity2DType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_LinearVelocity2DType_finalize_w_params(
    P_LDM_Common_T_LinearVelocity2DType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_LinearVelocity2DType_finalize_optional_members(
    P_LDM_Common_T_LinearVelocity2DType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_LinearVelocity2DType_copy(
    P_LDM_Common_T_LinearVelocity2DType* dst,
    const P_LDM_Common_T_LinearVelocity2DType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    P_LDM_Common_T_Double   P_LDM_Common_T_PressureInPascalType ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_PressureInPascalType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_PressureInPascalTypeSeq, P_LDM_Common_T_PressureInPascalType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_PressureInPascalType_initialize(
    P_LDM_Common_T_PressureInPascalType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_PressureInPascalType_initialize_ex(
    P_LDM_Common_T_PressureInPascalType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_PressureInPascalType_initialize_w_params(
    P_LDM_Common_T_PressureInPascalType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_PressureInPascalType_finalize(
    P_LDM_Common_T_PressureInPascalType* self);

NDDSUSERDllExport
void P_LDM_Common_T_PressureInPascalType_finalize_ex(
    P_LDM_Common_T_PressureInPascalType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_PressureInPascalType_finalize_w_params(
    P_LDM_Common_T_PressureInPascalType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_PressureInPascalType_finalize_optional_members(
    P_LDM_Common_T_PressureInPascalType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_PressureInPascalType_copy(
    P_LDM_Common_T_PressureInPascalType* dst,
    const P_LDM_Common_T_PressureInPascalType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    P_LDM_Common_T_Double   P_LDM_Common_T_PowerInWattsType ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_PowerInWattsType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_PowerInWattsTypeSeq, P_LDM_Common_T_PowerInWattsType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_PowerInWattsType_initialize(
    P_LDM_Common_T_PowerInWattsType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_PowerInWattsType_initialize_ex(
    P_LDM_Common_T_PowerInWattsType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_PowerInWattsType_initialize_w_params(
    P_LDM_Common_T_PowerInWattsType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_PowerInWattsType_finalize(
    P_LDM_Common_T_PowerInWattsType* self);

NDDSUSERDllExport
void P_LDM_Common_T_PowerInWattsType_finalize_ex(
    P_LDM_Common_T_PowerInWattsType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_PowerInWattsType_finalize_w_params(
    P_LDM_Common_T_PowerInWattsType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_PowerInWattsType_finalize_optional_members(
    P_LDM_Common_T_PowerInWattsType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_PowerInWattsType_copy(
    P_LDM_Common_T_PowerInWattsType* dst,
    const P_LDM_Common_T_PowerInWattsType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    P_LDM_Common_T_Double   P_LDM_Common_T_PercentageType ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_PercentageType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_PercentageTypeSeq, P_LDM_Common_T_PercentageType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_PercentageType_initialize(
    P_LDM_Common_T_PercentageType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_PercentageType_initialize_ex(
    P_LDM_Common_T_PercentageType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_PercentageType_initialize_w_params(
    P_LDM_Common_T_PercentageType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_PercentageType_finalize(
    P_LDM_Common_T_PercentageType* self);

NDDSUSERDllExport
void P_LDM_Common_T_PercentageType_finalize_ex(
    P_LDM_Common_T_PercentageType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_PercentageType_finalize_w_params(
    P_LDM_Common_T_PercentageType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_PercentageType_finalize_optional_members(
    P_LDM_Common_T_PercentageType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_PercentageType_copy(
    P_LDM_Common_T_PercentageType* dst,
    const P_LDM_Common_T_PercentageType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    P_LDM_Common_T_Double   P_LDM_Common_T_ChargeInCoulombsType ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_ChargeInCoulombsType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_ChargeInCoulombsTypeSeq, P_LDM_Common_T_ChargeInCoulombsType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_ChargeInCoulombsType_initialize(
    P_LDM_Common_T_ChargeInCoulombsType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_ChargeInCoulombsType_initialize_ex(
    P_LDM_Common_T_ChargeInCoulombsType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_ChargeInCoulombsType_initialize_w_params(
    P_LDM_Common_T_ChargeInCoulombsType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_ChargeInCoulombsType_finalize(
    P_LDM_Common_T_ChargeInCoulombsType* self);

NDDSUSERDllExport
void P_LDM_Common_T_ChargeInCoulombsType_finalize_ex(
    P_LDM_Common_T_ChargeInCoulombsType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_ChargeInCoulombsType_finalize_w_params(
    P_LDM_Common_T_ChargeInCoulombsType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_ChargeInCoulombsType_finalize_optional_members(
    P_LDM_Common_T_ChargeInCoulombsType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_ChargeInCoulombsType_copy(
    P_LDM_Common_T_ChargeInCoulombsType* dst,
    const P_LDM_Common_T_ChargeInCoulombsType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    P_LDM_Common_T_Double   P_LDM_Common_T_FrequencyInHertzType ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_FrequencyInHertzType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_FrequencyInHertzTypeSeq, P_LDM_Common_T_FrequencyInHertzType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_FrequencyInHertzType_initialize(
    P_LDM_Common_T_FrequencyInHertzType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_FrequencyInHertzType_initialize_ex(
    P_LDM_Common_T_FrequencyInHertzType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_FrequencyInHertzType_initialize_w_params(
    P_LDM_Common_T_FrequencyInHertzType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_FrequencyInHertzType_finalize(
    P_LDM_Common_T_FrequencyInHertzType* self);

NDDSUSERDllExport
void P_LDM_Common_T_FrequencyInHertzType_finalize_ex(
    P_LDM_Common_T_FrequencyInHertzType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_FrequencyInHertzType_finalize_w_params(
    P_LDM_Common_T_FrequencyInHertzType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_FrequencyInHertzType_finalize_optional_members(
    P_LDM_Common_T_FrequencyInHertzType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_FrequencyInHertzType_copy(
    P_LDM_Common_T_FrequencyInHertzType* dst,
    const P_LDM_Common_T_FrequencyInHertzType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    P_LDM_Common_T_Double   P_LDM_Common_T_FlowRateInCubicMetresPerSecType ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_FlowRateInCubicMetresPerSecType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_FlowRateInCubicMetresPerSecTypeSeq, P_LDM_Common_T_FlowRateInCubicMetresPerSecType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_FlowRateInCubicMetresPerSecType_initialize(
    P_LDM_Common_T_FlowRateInCubicMetresPerSecType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_FlowRateInCubicMetresPerSecType_initialize_ex(
    P_LDM_Common_T_FlowRateInCubicMetresPerSecType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_FlowRateInCubicMetresPerSecType_initialize_w_params(
    P_LDM_Common_T_FlowRateInCubicMetresPerSecType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_FlowRateInCubicMetresPerSecType_finalize(
    P_LDM_Common_T_FlowRateInCubicMetresPerSecType* self);

NDDSUSERDllExport
void P_LDM_Common_T_FlowRateInCubicMetresPerSecType_finalize_ex(
    P_LDM_Common_T_FlowRateInCubicMetresPerSecType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_FlowRateInCubicMetresPerSecType_finalize_w_params(
    P_LDM_Common_T_FlowRateInCubicMetresPerSecType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_FlowRateInCubicMetresPerSecType_finalize_optional_members(
    P_LDM_Common_T_FlowRateInCubicMetresPerSecType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_FlowRateInCubicMetresPerSecType_copy(
    P_LDM_Common_T_FlowRateInCubicMetresPerSecType* dst,
    const P_LDM_Common_T_FlowRateInCubicMetresPerSecType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_LDM_Common_T_Coordinate3DTypeTYPENAME;

}

struct P_LDM_Common_T_Coordinate3DTypeSeq;

class P_LDM_Common_T_Coordinate3DType 
{
  public:
    typedef struct P_LDM_Common_T_Coordinate3DTypeSeq Seq;

    P_LDM_Common_T_AltitudeType   A_altitude ;
    P_LDM_Common_T_LatitudeType   A_latitude ;
    P_LDM_Common_T_LongitudeType   A_longitude ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_Coordinate3DType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_Coordinate3DTypeSeq, P_LDM_Common_T_Coordinate3DType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Coordinate3DType_initialize(
    P_LDM_Common_T_Coordinate3DType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Coordinate3DType_initialize_ex(
    P_LDM_Common_T_Coordinate3DType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Coordinate3DType_initialize_w_params(
    P_LDM_Common_T_Coordinate3DType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_Coordinate3DType_finalize(
    P_LDM_Common_T_Coordinate3DType* self);

NDDSUSERDllExport
void P_LDM_Common_T_Coordinate3DType_finalize_ex(
    P_LDM_Common_T_Coordinate3DType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_Coordinate3DType_finalize_w_params(
    P_LDM_Common_T_Coordinate3DType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_Coordinate3DType_finalize_optional_members(
    P_LDM_Common_T_Coordinate3DType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_Coordinate3DType_copy(
    P_LDM_Common_T_Coordinate3DType* dst,
    const P_LDM_Common_T_Coordinate3DType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

typedef    P_LDM_Common_T_Double   P_LDM_Common_T_CurrentInAmpsType ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_CurrentInAmpsType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_CurrentInAmpsTypeSeq, P_LDM_Common_T_CurrentInAmpsType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_CurrentInAmpsType_initialize(
    P_LDM_Common_T_CurrentInAmpsType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_CurrentInAmpsType_initialize_ex(
    P_LDM_Common_T_CurrentInAmpsType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_CurrentInAmpsType_initialize_w_params(
    P_LDM_Common_T_CurrentInAmpsType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_CurrentInAmpsType_finalize(
    P_LDM_Common_T_CurrentInAmpsType* self);

NDDSUSERDllExport
void P_LDM_Common_T_CurrentInAmpsType_finalize_ex(
    P_LDM_Common_T_CurrentInAmpsType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_CurrentInAmpsType_finalize_w_params(
    P_LDM_Common_T_CurrentInAmpsType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_CurrentInAmpsType_finalize_optional_members(
    P_LDM_Common_T_CurrentInAmpsType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_CurrentInAmpsType_copy(
    P_LDM_Common_T_CurrentInAmpsType* dst,
    const P_LDM_Common_T_CurrentInAmpsType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum P_LDM_Common_T_CommandResponseType
{
    L_CommandResponseType_Command_Failed ,      
    L_CommandResponseType_Command_Not_Available ,      
    L_CommandResponseType_Command_Not_Recognised ,      
    L_CommandResponseType_Resource_Control_Failure      
} P_LDM_Common_T_CommandResponseType;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_LDM_Common_T_CommandResponseType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_LDM_Common_T_CommandResponseTypeSeq, P_LDM_Common_T_CommandResponseType);                                        

NDDSUSERDllExport
RTIBool P_LDM_Common_T_CommandResponseType_initialize(
    P_LDM_Common_T_CommandResponseType* self);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_CommandResponseType_initialize_ex(
    P_LDM_Common_T_CommandResponseType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_LDM_Common_T_CommandResponseType_initialize_w_params(
    P_LDM_Common_T_CommandResponseType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_LDM_Common_T_CommandResponseType_finalize(
    P_LDM_Common_T_CommandResponseType* self);

NDDSUSERDllExport
void P_LDM_Common_T_CommandResponseType_finalize_ex(
    P_LDM_Common_T_CommandResponseType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_LDM_Common_T_CommandResponseType_finalize_w_params(
    P_LDM_Common_T_CommandResponseType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_LDM_Common_T_CommandResponseType_finalize_optional_members(
    P_LDM_Common_T_CommandResponseType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_LDM_Common_T_CommandResponseType_copy(
    P_LDM_Common_T_CommandResponseType* dst,
    const P_LDM_Common_T_CommandResponseType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LDM_Common */

