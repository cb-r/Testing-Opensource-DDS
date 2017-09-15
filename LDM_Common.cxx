

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LDM_Common.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "LDM_Common.h"

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_Int32_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_Int32_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_Int32", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_Int32 */

    if (is_initialized) {
        return &P_LDM_Common_T_Int32_g_tc;
    }

    P_LDM_Common_T_Int32_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_long;

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_Int32_g_tc;
}

RTIBool P_LDM_Common_T_Int32_initialize(
    P_LDM_Common_T_Int32* sample) {
    return P_LDM_Common_T_Int32_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_Int32_initialize_ex(
    P_LDM_Common_T_Int32* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_Int32_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_Int32_initialize_w_params(
    P_LDM_Common_T_Int32* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!RTICdrType_initLong(sample)) {
        return RTI_FALSE;
    }     

    return RTI_TRUE;
}

void P_LDM_Common_T_Int32_finalize(
    P_LDM_Common_T_Int32* sample)
{

    P_LDM_Common_T_Int32_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_Int32_finalize_ex(
    P_LDM_Common_T_Int32* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_Int32_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_Int32_finalize_w_params(
    P_LDM_Common_T_Int32* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void P_LDM_Common_T_Int32_finalize_optional_members(
    P_LDM_Common_T_Int32* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool P_LDM_Common_T_Int32_copy(
    P_LDM_Common_T_Int32* dst,
    const P_LDM_Common_T_Int32* src)
{

    if (!RTICdrType_copyLong (
        dst, src)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_Int32' sequence class.
*/
#define T P_LDM_Common_T_Int32
#define TSeq P_LDM_Common_T_Int32Seq
#define T_initialize_w_params P_LDM_Common_T_Int32_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_Int32_finalize_w_params
#define T_copy       P_LDM_Common_T_Int32_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *P_LDM_Common_T_Position2DTypeTYPENAME = "P_LDM_Common::T_Position2DType";

DDS_TypeCode* P_LDM_Common_T_Position2DType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_LDM_Common_T_Position2DType_g_tc_members[2]=
    {

        {
            (char *)"A_xPosition",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_yPosition",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode P_LDM_Common_T_Position2DType_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_LDM_Common::T_Position2DType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            P_LDM_Common_T_Position2DType_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_LDM_Common_T_Position2DType*/

    if (is_initialized) {
        return &P_LDM_Common_T_Position2DType_g_tc;
    }

    P_LDM_Common_T_Position2DType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Int32_get_typecode();

    P_LDM_Common_T_Position2DType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Int32_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_Position2DType_g_tc;
}

RTIBool P_LDM_Common_T_Position2DType_initialize(
    P_LDM_Common_T_Position2DType* sample) {
    return P_LDM_Common_T_Position2DType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_Position2DType_initialize_ex(
    P_LDM_Common_T_Position2DType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_Position2DType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_Position2DType_initialize_w_params(
    P_LDM_Common_T_Position2DType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_Int32_initialize_w_params(&sample->A_xPosition,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_Int32_initialize_w_params(&sample->A_yPosition,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_Position2DType_finalize(
    P_LDM_Common_T_Position2DType* sample)
{

    P_LDM_Common_T_Position2DType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_Position2DType_finalize_ex(
    P_LDM_Common_T_Position2DType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_Position2DType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_Position2DType_finalize_w_params(
    P_LDM_Common_T_Position2DType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_Int32_finalize_w_params(&sample->A_xPosition,deallocParams);

    P_LDM_Common_T_Int32_finalize_w_params(&sample->A_yPosition,deallocParams);

}

void P_LDM_Common_T_Position2DType_finalize_optional_members(
    P_LDM_Common_T_Position2DType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_Int32_finalize_optional_members(&sample->A_xPosition, deallocParams->delete_pointers);
    P_LDM_Common_T_Int32_finalize_optional_members(&sample->A_yPosition, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_Position2DType_copy(
    P_LDM_Common_T_Position2DType* dst,
    const P_LDM_Common_T_Position2DType* src)
{

    if (!P_LDM_Common_T_Int32_copy(
        &dst->A_xPosition, &src->A_xPosition)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_Int32_copy(
        &dst->A_yPosition, &src->A_yPosition)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_Position2DType' sequence class.
*/
#define T P_LDM_Common_T_Position2DType
#define TSeq P_LDM_Common_T_Position2DTypeSeq
#define T_initialize_w_params P_LDM_Common_T_Position2DType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_Position2DType_finalize_w_params
#define T_copy       P_LDM_Common_T_Position2DType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *P_LDM_Common_T_Axis3DTypeTYPENAME = "P_LDM_Common::T_Axis3DType";

DDS_TypeCode* P_LDM_Common_T_Axis3DType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_LDM_Common_T_Axis3DType_g_tc_members[3]=
    {

        {
            (char *)"L_Axis3DType_X_AXIS",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            L_Axis3DType_X_AXIS, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"L_Axis3DType_Y_AXIS",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            L_Axis3DType_Y_AXIS, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"L_Axis3DType_Z_AXIS",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            L_Axis3DType_Z_AXIS, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode P_LDM_Common_T_Axis3DType_g_tc =
    {{
            DDS_TK_ENUM,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_LDM_Common::T_Axis3DType", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            P_LDM_Common_T_Axis3DType_g_tc_members, /* Members */
            DDS_VM_NONE   /* Type Modifier */        
        }}; /* Type code for P_LDM_Common_T_Axis3DType*/

    if (is_initialized) {
        return &P_LDM_Common_T_Axis3DType_g_tc;
    }

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_Axis3DType_g_tc;
}

RTIBool P_LDM_Common_T_Axis3DType_initialize(
    P_LDM_Common_T_Axis3DType* sample) {
    *sample = L_Axis3DType_X_AXIS;
    return RTI_TRUE;
}

RTIBool P_LDM_Common_T_Axis3DType_initialize_ex(
    P_LDM_Common_T_Axis3DType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_Axis3DType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_Axis3DType_initialize_w_params(
    P_LDM_Common_T_Axis3DType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */
    *sample = L_Axis3DType_X_AXIS;
    return RTI_TRUE;
}

void P_LDM_Common_T_Axis3DType_finalize(
    P_LDM_Common_T_Axis3DType* sample)
{

    if (sample==NULL) {
        return;
    }
}

void P_LDM_Common_T_Axis3DType_finalize_ex(
    P_LDM_Common_T_Axis3DType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_Axis3DType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_Axis3DType_finalize_w_params(
    P_LDM_Common_T_Axis3DType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void P_LDM_Common_T_Axis3DType_finalize_optional_members(
    P_LDM_Common_T_Axis3DType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool P_LDM_Common_T_Axis3DType_copy(
    P_LDM_Common_T_Axis3DType* dst,
    const P_LDM_Common_T_Axis3DType* src)
{

    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_Axis3DType' sequence class.
*/
#define T P_LDM_Common_T_Axis3DType
#define TSeq P_LDM_Common_T_Axis3DTypeSeq
#define T_initialize_w_params P_LDM_Common_T_Axis3DType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_Axis3DType_finalize_w_params
#define T_copy       P_LDM_Common_T_Axis3DType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_Double_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_Double_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_Double", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_Double */

    if (is_initialized) {
        return &P_LDM_Common_T_Double_g_tc;
    }

    P_LDM_Common_T_Double_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_double;

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_Double_g_tc;
}

RTIBool P_LDM_Common_T_Double_initialize(
    P_LDM_Common_T_Double* sample) {
    return P_LDM_Common_T_Double_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_Double_initialize_ex(
    P_LDM_Common_T_Double* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_Double_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_Double_initialize_w_params(
    P_LDM_Common_T_Double* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!RTICdrType_initDouble(sample)) {
        return RTI_FALSE;
    }     

    return RTI_TRUE;
}

void P_LDM_Common_T_Double_finalize(
    P_LDM_Common_T_Double* sample)
{

    P_LDM_Common_T_Double_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_Double_finalize_ex(
    P_LDM_Common_T_Double* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_Double_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_Double_finalize_w_params(
    P_LDM_Common_T_Double* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void P_LDM_Common_T_Double_finalize_optional_members(
    P_LDM_Common_T_Double* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool P_LDM_Common_T_Double_copy(
    P_LDM_Common_T_Double* dst,
    const P_LDM_Common_T_Double* src)
{

    if (!RTICdrType_copyDouble (
        dst, src)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_Double' sequence class.
*/
#define T P_LDM_Common_T_Double
#define TSeq P_LDM_Common_T_DoubleSeq
#define T_initialize_w_params P_LDM_Common_T_Double_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_Double_finalize_w_params
#define T_copy       P_LDM_Common_T_Double_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_Char_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_Char_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_Char", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_Char */

    if (is_initialized) {
        return &P_LDM_Common_T_Char_g_tc;
    }

    P_LDM_Common_T_Char_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_char;

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_Char_g_tc;
}

RTIBool P_LDM_Common_T_Char_initialize(
    P_LDM_Common_T_Char* sample) {
    return P_LDM_Common_T_Char_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_Char_initialize_ex(
    P_LDM_Common_T_Char* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_Char_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_Char_initialize_w_params(
    P_LDM_Common_T_Char* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!RTICdrType_initChar(sample)) {
        return RTI_FALSE;
    }     

    return RTI_TRUE;
}

void P_LDM_Common_T_Char_finalize(
    P_LDM_Common_T_Char* sample)
{

    P_LDM_Common_T_Char_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_Char_finalize_ex(
    P_LDM_Common_T_Char* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_Char_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_Char_finalize_w_params(
    P_LDM_Common_T_Char* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void P_LDM_Common_T_Char_finalize_optional_members(
    P_LDM_Common_T_Char* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool P_LDM_Common_T_Char_copy(
    P_LDM_Common_T_Char* dst,
    const P_LDM_Common_T_Char* src)
{

    if (!RTICdrType_copyChar (
        dst, src)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_Char' sequence class.
*/
#define T P_LDM_Common_T_Char
#define TSeq P_LDM_Common_T_CharSeq
#define T_initialize_w_params P_LDM_Common_T_Char_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_Char_finalize_w_params
#define T_copy       P_LDM_Common_T_Char_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_CapacityInAmpereHoursType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_CapacityInAmpereHoursType_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_CapacityInAmpereHoursType", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_CapacityInAmpereHoursType */

    if (is_initialized) {
        return &P_LDM_Common_T_CapacityInAmpereHoursType_g_tc;
    }

    P_LDM_Common_T_CapacityInAmpereHoursType_g_tc._data._typeCode =  (RTICdrTypeCode *)P_LDM_Common_T_Double_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_CapacityInAmpereHoursType_g_tc;
}

RTIBool P_LDM_Common_T_CapacityInAmpereHoursType_initialize(
    P_LDM_Common_T_CapacityInAmpereHoursType* sample) {
    return P_LDM_Common_T_CapacityInAmpereHoursType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_CapacityInAmpereHoursType_initialize_ex(
    P_LDM_Common_T_CapacityInAmpereHoursType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_CapacityInAmpereHoursType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_CapacityInAmpereHoursType_initialize_w_params(
    P_LDM_Common_T_CapacityInAmpereHoursType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_Double_initialize_w_params(sample,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_CapacityInAmpereHoursType_finalize(
    P_LDM_Common_T_CapacityInAmpereHoursType* sample)
{

    P_LDM_Common_T_CapacityInAmpereHoursType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_CapacityInAmpereHoursType_finalize_ex(
    P_LDM_Common_T_CapacityInAmpereHoursType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_CapacityInAmpereHoursType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_CapacityInAmpereHoursType_finalize_w_params(
    P_LDM_Common_T_CapacityInAmpereHoursType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_Double_finalize_w_params(sample,deallocParams);

}

void P_LDM_Common_T_CapacityInAmpereHoursType_finalize_optional_members(
    P_LDM_Common_T_CapacityInAmpereHoursType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_Double_finalize_optional_members(sample, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_CapacityInAmpereHoursType_copy(
    P_LDM_Common_T_CapacityInAmpereHoursType* dst,
    const P_LDM_Common_T_CapacityInAmpereHoursType* src)
{

    if (!P_LDM_Common_T_Double_copy(
        dst, src)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_CapacityInAmpereHoursType' sequence class.
*/
#define T P_LDM_Common_T_CapacityInAmpereHoursType
#define TSeq P_LDM_Common_T_CapacityInAmpereHoursTypeSeq
#define T_initialize_w_params P_LDM_Common_T_CapacityInAmpereHoursType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_CapacityInAmpereHoursType_finalize_w_params
#define T_copy       P_LDM_Common_T_CapacityInAmpereHoursType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_Boolean_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_Boolean_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_Boolean", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_Boolean */

    if (is_initialized) {
        return &P_LDM_Common_T_Boolean_g_tc;
    }

    P_LDM_Common_T_Boolean_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_boolean;

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_Boolean_g_tc;
}

RTIBool P_LDM_Common_T_Boolean_initialize(
    P_LDM_Common_T_Boolean* sample) {
    return P_LDM_Common_T_Boolean_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_Boolean_initialize_ex(
    P_LDM_Common_T_Boolean* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_Boolean_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_Boolean_initialize_w_params(
    P_LDM_Common_T_Boolean* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!RTICdrType_initBoolean(sample)) {
        return RTI_FALSE;
    }     

    return RTI_TRUE;
}

void P_LDM_Common_T_Boolean_finalize(
    P_LDM_Common_T_Boolean* sample)
{

    P_LDM_Common_T_Boolean_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_Boolean_finalize_ex(
    P_LDM_Common_T_Boolean* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_Boolean_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_Boolean_finalize_w_params(
    P_LDM_Common_T_Boolean* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void P_LDM_Common_T_Boolean_finalize_optional_members(
    P_LDM_Common_T_Boolean* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool P_LDM_Common_T_Boolean_copy(
    P_LDM_Common_T_Boolean* dst,
    const P_LDM_Common_T_Boolean* src)
{

    if (!RTICdrType_copyBoolean (
        dst, src)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_Boolean' sequence class.
*/
#define T P_LDM_Common_T_Boolean
#define TSeq P_LDM_Common_T_BooleanSeq
#define T_initialize_w_params P_LDM_Common_T_Boolean_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_Boolean_finalize_w_params
#define T_copy       P_LDM_Common_T_Boolean_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_Int64_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_Int64_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_Int64", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_Int64 */

    if (is_initialized) {
        return &P_LDM_Common_T_Int64_g_tc;
    }

    P_LDM_Common_T_Int64_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_longlong;

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_Int64_g_tc;
}

RTIBool P_LDM_Common_T_Int64_initialize(
    P_LDM_Common_T_Int64* sample) {
    return P_LDM_Common_T_Int64_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_Int64_initialize_ex(
    P_LDM_Common_T_Int64* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_Int64_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_Int64_initialize_w_params(
    P_LDM_Common_T_Int64* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!RTICdrType_initLongLong(sample)) {
        return RTI_FALSE;
    }     

    return RTI_TRUE;
}

void P_LDM_Common_T_Int64_finalize(
    P_LDM_Common_T_Int64* sample)
{

    P_LDM_Common_T_Int64_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_Int64_finalize_ex(
    P_LDM_Common_T_Int64* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_Int64_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_Int64_finalize_w_params(
    P_LDM_Common_T_Int64* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void P_LDM_Common_T_Int64_finalize_optional_members(
    P_LDM_Common_T_Int64* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool P_LDM_Common_T_Int64_copy(
    P_LDM_Common_T_Int64* dst,
    const P_LDM_Common_T_Int64* src)
{

    if (!RTICdrType_copyLongLong (
        dst, src)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_Int64' sequence class.
*/
#define T P_LDM_Common_T_Int64
#define TSeq P_LDM_Common_T_Int64Seq
#define T_initialize_w_params P_LDM_Common_T_Int64_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_Int64_finalize_w_params
#define T_copy       P_LDM_Common_T_Int64_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *P_LDM_Common_T_Size2DTypeTYPENAME = "P_LDM_Common::T_Size2DType";

DDS_TypeCode* P_LDM_Common_T_Size2DType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_LDM_Common_T_Size2DType_g_tc_members[2]=
    {

        {
            (char *)"A_xSize",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_ySize",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode P_LDM_Common_T_Size2DType_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_LDM_Common::T_Size2DType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            P_LDM_Common_T_Size2DType_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_LDM_Common_T_Size2DType*/

    if (is_initialized) {
        return &P_LDM_Common_T_Size2DType_g_tc;
    }

    P_LDM_Common_T_Size2DType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Int32_get_typecode();

    P_LDM_Common_T_Size2DType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Int32_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_Size2DType_g_tc;
}

RTIBool P_LDM_Common_T_Size2DType_initialize(
    P_LDM_Common_T_Size2DType* sample) {
    return P_LDM_Common_T_Size2DType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_Size2DType_initialize_ex(
    P_LDM_Common_T_Size2DType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_Size2DType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_Size2DType_initialize_w_params(
    P_LDM_Common_T_Size2DType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_Int32_initialize_w_params(&sample->A_xSize,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_Int32_initialize_w_params(&sample->A_ySize,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_Size2DType_finalize(
    P_LDM_Common_T_Size2DType* sample)
{

    P_LDM_Common_T_Size2DType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_Size2DType_finalize_ex(
    P_LDM_Common_T_Size2DType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_Size2DType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_Size2DType_finalize_w_params(
    P_LDM_Common_T_Size2DType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_Int32_finalize_w_params(&sample->A_xSize,deallocParams);

    P_LDM_Common_T_Int32_finalize_w_params(&sample->A_ySize,deallocParams);

}

void P_LDM_Common_T_Size2DType_finalize_optional_members(
    P_LDM_Common_T_Size2DType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_Int32_finalize_optional_members(&sample->A_xSize, deallocParams->delete_pointers);
    P_LDM_Common_T_Int32_finalize_optional_members(&sample->A_ySize, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_Size2DType_copy(
    P_LDM_Common_T_Size2DType* dst,
    const P_LDM_Common_T_Size2DType* src)
{

    if (!P_LDM_Common_T_Int32_copy(
        &dst->A_xSize, &src->A_xSize)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_Int32_copy(
        &dst->A_ySize, &src->A_ySize)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_Size2DType' sequence class.
*/
#define T P_LDM_Common_T_Size2DType
#define TSeq P_LDM_Common_T_Size2DTypeSeq
#define T_initialize_w_params P_LDM_Common_T_Size2DType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_Size2DType_finalize_w_params
#define T_copy       P_LDM_Common_T_Size2DType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_AngleInRadiansType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_AngleInRadiansType_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_AngleInRadiansType", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_AngleInRadiansType */

    if (is_initialized) {
        return &P_LDM_Common_T_AngleInRadiansType_g_tc;
    }

    P_LDM_Common_T_AngleInRadiansType_g_tc._data._typeCode =  (RTICdrTypeCode *)P_LDM_Common_T_Double_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_AngleInRadiansType_g_tc;
}

RTIBool P_LDM_Common_T_AngleInRadiansType_initialize(
    P_LDM_Common_T_AngleInRadiansType* sample) {
    return P_LDM_Common_T_AngleInRadiansType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_AngleInRadiansType_initialize_ex(
    P_LDM_Common_T_AngleInRadiansType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_AngleInRadiansType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_AngleInRadiansType_initialize_w_params(
    P_LDM_Common_T_AngleInRadiansType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_Double_initialize_w_params(sample,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_AngleInRadiansType_finalize(
    P_LDM_Common_T_AngleInRadiansType* sample)
{

    P_LDM_Common_T_AngleInRadiansType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_AngleInRadiansType_finalize_ex(
    P_LDM_Common_T_AngleInRadiansType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_AngleInRadiansType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_AngleInRadiansType_finalize_w_params(
    P_LDM_Common_T_AngleInRadiansType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_Double_finalize_w_params(sample,deallocParams);

}

void P_LDM_Common_T_AngleInRadiansType_finalize_optional_members(
    P_LDM_Common_T_AngleInRadiansType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_Double_finalize_optional_members(sample, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_AngleInRadiansType_copy(
    P_LDM_Common_T_AngleInRadiansType* dst,
    const P_LDM_Common_T_AngleInRadiansType* src)
{

    if (!P_LDM_Common_T_Double_copy(
        dst, src)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_AngleInRadiansType' sequence class.
*/
#define T P_LDM_Common_T_AngleInRadiansType
#define TSeq P_LDM_Common_T_AngleInRadiansTypeSeq
#define T_initialize_w_params P_LDM_Common_T_AngleInRadiansType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_AngleInRadiansType_finalize_w_params
#define T_copy       P_LDM_Common_T_AngleInRadiansType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_Int16_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_Int16_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_Int16", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_Int16 */

    if (is_initialized) {
        return &P_LDM_Common_T_Int16_g_tc;
    }

    P_LDM_Common_T_Int16_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_short;

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_Int16_g_tc;
}

RTIBool P_LDM_Common_T_Int16_initialize(
    P_LDM_Common_T_Int16* sample) {
    return P_LDM_Common_T_Int16_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_Int16_initialize_ex(
    P_LDM_Common_T_Int16* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_Int16_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_Int16_initialize_w_params(
    P_LDM_Common_T_Int16* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!RTICdrType_initShort(sample)) {
        return RTI_FALSE;
    }     

    return RTI_TRUE;
}

void P_LDM_Common_T_Int16_finalize(
    P_LDM_Common_T_Int16* sample)
{

    P_LDM_Common_T_Int16_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_Int16_finalize_ex(
    P_LDM_Common_T_Int16* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_Int16_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_Int16_finalize_w_params(
    P_LDM_Common_T_Int16* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void P_LDM_Common_T_Int16_finalize_optional_members(
    P_LDM_Common_T_Int16* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool P_LDM_Common_T_Int16_copy(
    P_LDM_Common_T_Int16* dst,
    const P_LDM_Common_T_Int16* src)
{

    if (!RTICdrType_copyShort (
        dst, src)) { 
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_Int16' sequence class.
*/
#define T P_LDM_Common_T_Int16
#define TSeq P_LDM_Common_T_Int16Seq
#define T_initialize_w_params P_LDM_Common_T_Int16_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_Int16_finalize_w_params
#define T_copy       P_LDM_Common_T_Int16_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_LongString_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_LongString_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((500),NULL);

    static DDS_TypeCode P_LDM_Common_T_LongString_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_LongString", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_LongString */

    if (is_initialized) {
        return &P_LDM_Common_T_LongString_g_tc;
    }

    P_LDM_Common_T_LongString_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Char_get_typecode();

    P_LDM_Common_T_LongString_g_tc._data._typeCode =  (RTICdrTypeCode *)& P_LDM_Common_T_LongString_g_tc_sequence;

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_LongString_g_tc;
}

RTIBool P_LDM_Common_T_LongString_initialize(
    P_LDM_Common_T_LongString* sample) {
    return P_LDM_Common_T_LongString_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_LongString_initialize_ex(
    P_LDM_Common_T_LongString* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_LongString_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_LongString_initialize_w_params(
    P_LDM_Common_T_LongString* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (allocParams) {} /* To avoid warnings */

    if (allocParams->allocate_memory) {
        P_LDM_Common_T_CharSeq_initialize(sample );
        P_LDM_Common_T_CharSeq_set_element_allocation_params(sample ,allocParams);
        if (!P_LDM_Common_T_CharSeq_set_maximum(sample, (500))) {
            return RTI_FALSE;
        }
    } else { 
        P_LDM_Common_T_CharSeq_set_length(sample, 0);
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_LongString_finalize(
    P_LDM_Common_T_LongString* sample)
{

    P_LDM_Common_T_LongString_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_LongString_finalize_ex(
    P_LDM_Common_T_LongString* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_LongString_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_LongString_finalize_w_params(
    P_LDM_Common_T_LongString* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_CharSeq_set_element_deallocation_params(
        sample,deallocParams);
    P_LDM_Common_T_CharSeq_finalize(sample);

}

void P_LDM_Common_T_LongString_finalize_optional_members(
    P_LDM_Common_T_LongString* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    {
        DDS_UnsignedLong i, length;
        length = P_LDM_Common_T_CharSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            P_LDM_Common_T_Char_finalize_optional_members(
                P_LDM_Common_T_CharSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }  

}

RTIBool P_LDM_Common_T_LongString_copy(
    P_LDM_Common_T_LongString* dst,
    const P_LDM_Common_T_LongString* src)
{

    if (!P_LDM_Common_T_CharSeq_copy(dst ,
    src )) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_LongString' sequence class.
*/
#define T P_LDM_Common_T_LongString
#define TSeq P_LDM_Common_T_LongStringSeq
#define T_initialize_w_params P_LDM_Common_T_LongString_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_LongString_finalize_w_params
#define T_copy       P_LDM_Common_T_LongString_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_MediumString_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_MediumString_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100),NULL);

    static DDS_TypeCode P_LDM_Common_T_MediumString_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_MediumString", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_MediumString */

    if (is_initialized) {
        return &P_LDM_Common_T_MediumString_g_tc;
    }

    P_LDM_Common_T_MediumString_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Char_get_typecode();

    P_LDM_Common_T_MediumString_g_tc._data._typeCode =  (RTICdrTypeCode *)& P_LDM_Common_T_MediumString_g_tc_sequence;

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_MediumString_g_tc;
}

RTIBool P_LDM_Common_T_MediumString_initialize(
    P_LDM_Common_T_MediumString* sample) {
    return P_LDM_Common_T_MediumString_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_MediumString_initialize_ex(
    P_LDM_Common_T_MediumString* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_MediumString_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_MediumString_initialize_w_params(
    P_LDM_Common_T_MediumString* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (allocParams) {} /* To avoid warnings */

    if (allocParams->allocate_memory) {
        P_LDM_Common_T_CharSeq_initialize(sample );
        P_LDM_Common_T_CharSeq_set_element_allocation_params(sample ,allocParams);
        if (!P_LDM_Common_T_CharSeq_set_maximum(sample, (100))) {
            return RTI_FALSE;
        }
    } else { 
        P_LDM_Common_T_CharSeq_set_length(sample, 0);
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_MediumString_finalize(
    P_LDM_Common_T_MediumString* sample)
{

    P_LDM_Common_T_MediumString_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_MediumString_finalize_ex(
    P_LDM_Common_T_MediumString* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_MediumString_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_MediumString_finalize_w_params(
    P_LDM_Common_T_MediumString* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_CharSeq_set_element_deallocation_params(
        sample,deallocParams);
    P_LDM_Common_T_CharSeq_finalize(sample);

}

void P_LDM_Common_T_MediumString_finalize_optional_members(
    P_LDM_Common_T_MediumString* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    {
        DDS_UnsignedLong i, length;
        length = P_LDM_Common_T_CharSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            P_LDM_Common_T_Char_finalize_optional_members(
                P_LDM_Common_T_CharSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }  

}

RTIBool P_LDM_Common_T_MediumString_copy(
    P_LDM_Common_T_MediumString* dst,
    const P_LDM_Common_T_MediumString* src)
{

    if (!P_LDM_Common_T_CharSeq_copy(dst ,
    src )) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_MediumString' sequence class.
*/
#define T P_LDM_Common_T_MediumString
#define TSeq P_LDM_Common_T_MediumStringSeq
#define T_initialize_w_params P_LDM_Common_T_MediumString_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_MediumString_finalize_w_params
#define T_copy       P_LDM_Common_T_MediumString_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_ShortString_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_ShortString_g_tc_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((50),NULL);

    static DDS_TypeCode P_LDM_Common_T_ShortString_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_ShortString", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_ShortString */

    if (is_initialized) {
        return &P_LDM_Common_T_ShortString_g_tc;
    }

    P_LDM_Common_T_ShortString_g_tc_sequence._data._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Char_get_typecode();

    P_LDM_Common_T_ShortString_g_tc._data._typeCode =  (RTICdrTypeCode *)& P_LDM_Common_T_ShortString_g_tc_sequence;

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_ShortString_g_tc;
}

RTIBool P_LDM_Common_T_ShortString_initialize(
    P_LDM_Common_T_ShortString* sample) {
    return P_LDM_Common_T_ShortString_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_ShortString_initialize_ex(
    P_LDM_Common_T_ShortString* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_ShortString_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_ShortString_initialize_w_params(
    P_LDM_Common_T_ShortString* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (allocParams) {} /* To avoid warnings */

    if (allocParams->allocate_memory) {
        P_LDM_Common_T_CharSeq_initialize(sample );
        P_LDM_Common_T_CharSeq_set_element_allocation_params(sample ,allocParams);
        if (!P_LDM_Common_T_CharSeq_set_maximum(sample, (50))) {
            return RTI_FALSE;
        }
    } else { 
        P_LDM_Common_T_CharSeq_set_length(sample, 0);
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_ShortString_finalize(
    P_LDM_Common_T_ShortString* sample)
{

    P_LDM_Common_T_ShortString_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_ShortString_finalize_ex(
    P_LDM_Common_T_ShortString* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_ShortString_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_ShortString_finalize_w_params(
    P_LDM_Common_T_ShortString* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_CharSeq_set_element_deallocation_params(
        sample,deallocParams);
    P_LDM_Common_T_CharSeq_finalize(sample);

}

void P_LDM_Common_T_ShortString_finalize_optional_members(
    P_LDM_Common_T_ShortString* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    {
        DDS_UnsignedLong i, length;
        length = P_LDM_Common_T_CharSeq_get_length(
            sample);

        for (i = 0; i < length; i++) {
            P_LDM_Common_T_Char_finalize_optional_members(
                P_LDM_Common_T_CharSeq_get_reference(
                    sample, i), deallocParams->delete_pointers);
        }
    }  

}

RTIBool P_LDM_Common_T_ShortString_copy(
    P_LDM_Common_T_ShortString* dst,
    const P_LDM_Common_T_ShortString* src)
{

    if (!P_LDM_Common_T_CharSeq_copy(dst ,
    src )) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_ShortString' sequence class.
*/
#define T P_LDM_Common_T_ShortString
#define TSeq P_LDM_Common_T_ShortStringSeq
#define T_initialize_w_params P_LDM_Common_T_ShortString_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_ShortString_finalize_w_params
#define T_copy       P_LDM_Common_T_ShortString_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *P_LDM_Common_T_IdentifierTypeTYPENAME = "P_LDM_Common::T_IdentifierType";

DDS_TypeCode* P_LDM_Common_T_IdentifierType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_LDM_Common_T_IdentifierType_g_tc_members[2]=
    {

        {
            (char *)"A_resourceId",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_instanceId",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode P_LDM_Common_T_IdentifierType_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_LDM_Common::T_IdentifierType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            P_LDM_Common_T_IdentifierType_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_LDM_Common_T_IdentifierType*/

    if (is_initialized) {
        return &P_LDM_Common_T_IdentifierType_g_tc;
    }

    P_LDM_Common_T_IdentifierType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Int32_get_typecode();

    P_LDM_Common_T_IdentifierType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Int32_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_IdentifierType_g_tc;
}

RTIBool P_LDM_Common_T_IdentifierType_initialize(
    P_LDM_Common_T_IdentifierType* sample) {
    return P_LDM_Common_T_IdentifierType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_IdentifierType_initialize_ex(
    P_LDM_Common_T_IdentifierType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_IdentifierType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_IdentifierType_initialize_w_params(
    P_LDM_Common_T_IdentifierType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_Int32_initialize_w_params(&sample->A_resourceId,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_Int32_initialize_w_params(&sample->A_instanceId,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_IdentifierType_finalize(
    P_LDM_Common_T_IdentifierType* sample)
{

    P_LDM_Common_T_IdentifierType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_IdentifierType_finalize_ex(
    P_LDM_Common_T_IdentifierType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_IdentifierType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_IdentifierType_finalize_w_params(
    P_LDM_Common_T_IdentifierType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_Int32_finalize_w_params(&sample->A_resourceId,deallocParams);

    P_LDM_Common_T_Int32_finalize_w_params(&sample->A_instanceId,deallocParams);

}

void P_LDM_Common_T_IdentifierType_finalize_optional_members(
    P_LDM_Common_T_IdentifierType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_Int32_finalize_optional_members(&sample->A_resourceId, deallocParams->delete_pointers);
    P_LDM_Common_T_Int32_finalize_optional_members(&sample->A_instanceId, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_IdentifierType_copy(
    P_LDM_Common_T_IdentifierType* dst,
    const P_LDM_Common_T_IdentifierType* src)
{

    if (!P_LDM_Common_T_Int32_copy(
        &dst->A_resourceId, &src->A_resourceId)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_Int32_copy(
        &dst->A_instanceId, &src->A_instanceId)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_IdentifierType' sequence class.
*/
#define T P_LDM_Common_T_IdentifierType
#define TSeq P_LDM_Common_T_IdentifierTypeSeq
#define T_initialize_w_params P_LDM_Common_T_IdentifierType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_IdentifierType_finalize_w_params
#define T_copy       P_LDM_Common_T_IdentifierType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *P_LDM_Common_T_DurationTypeTYPENAME = "P_LDM_Common::T_DurationType";

DDS_TypeCode* P_LDM_Common_T_DurationType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_LDM_Common_T_DurationType_g_tc_members[2]=
    {

        {
            (char *)"A_seconds",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_nanoseconds",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode P_LDM_Common_T_DurationType_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_LDM_Common::T_DurationType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            P_LDM_Common_T_DurationType_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_LDM_Common_T_DurationType*/

    if (is_initialized) {
        return &P_LDM_Common_T_DurationType_g_tc;
    }

    P_LDM_Common_T_DurationType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Int32_get_typecode();

    P_LDM_Common_T_DurationType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Int32_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_DurationType_g_tc;
}

RTIBool P_LDM_Common_T_DurationType_initialize(
    P_LDM_Common_T_DurationType* sample) {
    return P_LDM_Common_T_DurationType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_DurationType_initialize_ex(
    P_LDM_Common_T_DurationType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_DurationType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_DurationType_initialize_w_params(
    P_LDM_Common_T_DurationType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_Int32_initialize_w_params(&sample->A_seconds,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_Int32_initialize_w_params(&sample->A_nanoseconds,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_DurationType_finalize(
    P_LDM_Common_T_DurationType* sample)
{

    P_LDM_Common_T_DurationType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_DurationType_finalize_ex(
    P_LDM_Common_T_DurationType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_DurationType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_DurationType_finalize_w_params(
    P_LDM_Common_T_DurationType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_Int32_finalize_w_params(&sample->A_seconds,deallocParams);

    P_LDM_Common_T_Int32_finalize_w_params(&sample->A_nanoseconds,deallocParams);

}

void P_LDM_Common_T_DurationType_finalize_optional_members(
    P_LDM_Common_T_DurationType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_Int32_finalize_optional_members(&sample->A_seconds, deallocParams->delete_pointers);
    P_LDM_Common_T_Int32_finalize_optional_members(&sample->A_nanoseconds, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_DurationType_copy(
    P_LDM_Common_T_DurationType* dst,
    const P_LDM_Common_T_DurationType* src)
{

    if (!P_LDM_Common_T_Int32_copy(
        &dst->A_seconds, &src->A_seconds)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_Int32_copy(
        &dst->A_nanoseconds, &src->A_nanoseconds)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_DurationType' sequence class.
*/
#define T P_LDM_Common_T_DurationType
#define TSeq P_LDM_Common_T_DurationTypeSeq
#define T_initialize_w_params P_LDM_Common_T_DurationType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_DurationType_finalize_w_params
#define T_copy       P_LDM_Common_T_DurationType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_HeartbeatType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_HeartbeatType_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_HeartbeatType", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_HeartbeatType */

    if (is_initialized) {
        return &P_LDM_Common_T_HeartbeatType_g_tc;
    }

    P_LDM_Common_T_HeartbeatType_g_tc._data._typeCode =  (RTICdrTypeCode *)P_LDM_Common_T_DurationType_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_HeartbeatType_g_tc;
}

RTIBool P_LDM_Common_T_HeartbeatType_initialize(
    P_LDM_Common_T_HeartbeatType* sample) {
    return P_LDM_Common_T_HeartbeatType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_HeartbeatType_initialize_ex(
    P_LDM_Common_T_HeartbeatType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_HeartbeatType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_HeartbeatType_initialize_w_params(
    P_LDM_Common_T_HeartbeatType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_DurationType_initialize_w_params(sample,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_HeartbeatType_finalize(
    P_LDM_Common_T_HeartbeatType* sample)
{

    P_LDM_Common_T_HeartbeatType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_HeartbeatType_finalize_ex(
    P_LDM_Common_T_HeartbeatType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_HeartbeatType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_HeartbeatType_finalize_w_params(
    P_LDM_Common_T_HeartbeatType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_DurationType_finalize_w_params(sample,deallocParams);

}

void P_LDM_Common_T_HeartbeatType_finalize_optional_members(
    P_LDM_Common_T_HeartbeatType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_DurationType_finalize_optional_members(sample, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_HeartbeatType_copy(
    P_LDM_Common_T_HeartbeatType* dst,
    const P_LDM_Common_T_HeartbeatType* src)
{

    if (!P_LDM_Common_T_DurationType_copy(
        dst, src)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_HeartbeatType' sequence class.
*/
#define T P_LDM_Common_T_HeartbeatType
#define TSeq P_LDM_Common_T_HeartbeatTypeSeq
#define T_initialize_w_params P_LDM_Common_T_HeartbeatType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_HeartbeatType_finalize_w_params
#define T_copy       P_LDM_Common_T_HeartbeatType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *P_LDM_Common_T_DateTimeTypeTYPENAME = "P_LDM_Common::T_DateTimeType";

DDS_TypeCode* P_LDM_Common_T_DateTimeType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_LDM_Common_T_DateTimeType_g_tc_members[2]=
    {

        {
            (char *)"A_second",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_nanoseconds",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode P_LDM_Common_T_DateTimeType_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_LDM_Common::T_DateTimeType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            P_LDM_Common_T_DateTimeType_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_LDM_Common_T_DateTimeType*/

    if (is_initialized) {
        return &P_LDM_Common_T_DateTimeType_g_tc;
    }

    P_LDM_Common_T_DateTimeType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Int64_get_typecode();

    P_LDM_Common_T_DateTimeType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Int32_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_DateTimeType_g_tc;
}

RTIBool P_LDM_Common_T_DateTimeType_initialize(
    P_LDM_Common_T_DateTimeType* sample) {
    return P_LDM_Common_T_DateTimeType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_DateTimeType_initialize_ex(
    P_LDM_Common_T_DateTimeType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_DateTimeType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_DateTimeType_initialize_w_params(
    P_LDM_Common_T_DateTimeType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_Int64_initialize_w_params(&sample->A_second,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_Int32_initialize_w_params(&sample->A_nanoseconds,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_DateTimeType_finalize(
    P_LDM_Common_T_DateTimeType* sample)
{

    P_LDM_Common_T_DateTimeType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_DateTimeType_finalize_ex(
    P_LDM_Common_T_DateTimeType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_DateTimeType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_DateTimeType_finalize_w_params(
    P_LDM_Common_T_DateTimeType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_Int64_finalize_w_params(&sample->A_second,deallocParams);

    P_LDM_Common_T_Int32_finalize_w_params(&sample->A_nanoseconds,deallocParams);

}

void P_LDM_Common_T_DateTimeType_finalize_optional_members(
    P_LDM_Common_T_DateTimeType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_Int64_finalize_optional_members(&sample->A_second, deallocParams->delete_pointers);
    P_LDM_Common_T_Int32_finalize_optional_members(&sample->A_nanoseconds, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_DateTimeType_copy(
    P_LDM_Common_T_DateTimeType* dst,
    const P_LDM_Common_T_DateTimeType* src)
{

    if (!P_LDM_Common_T_Int64_copy(
        &dst->A_second, &src->A_second)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_Int32_copy(
        &dst->A_nanoseconds, &src->A_nanoseconds)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_DateTimeType' sequence class.
*/
#define T P_LDM_Common_T_DateTimeType
#define TSeq P_LDM_Common_T_DateTimeTypeSeq
#define T_initialize_w_params P_LDM_Common_T_DateTimeType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_DateTimeType_finalize_w_params
#define T_copy       P_LDM_Common_T_DateTimeType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_TorqueInNewtonMetresType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_TorqueInNewtonMetresType_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_TorqueInNewtonMetresType", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_TorqueInNewtonMetresType */

    if (is_initialized) {
        return &P_LDM_Common_T_TorqueInNewtonMetresType_g_tc;
    }

    P_LDM_Common_T_TorqueInNewtonMetresType_g_tc._data._typeCode =  (RTICdrTypeCode *)P_LDM_Common_T_Double_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_TorqueInNewtonMetresType_g_tc;
}

RTIBool P_LDM_Common_T_TorqueInNewtonMetresType_initialize(
    P_LDM_Common_T_TorqueInNewtonMetresType* sample) {
    return P_LDM_Common_T_TorqueInNewtonMetresType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_TorqueInNewtonMetresType_initialize_ex(
    P_LDM_Common_T_TorqueInNewtonMetresType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_TorqueInNewtonMetresType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_TorqueInNewtonMetresType_initialize_w_params(
    P_LDM_Common_T_TorqueInNewtonMetresType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_Double_initialize_w_params(sample,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_TorqueInNewtonMetresType_finalize(
    P_LDM_Common_T_TorqueInNewtonMetresType* sample)
{

    P_LDM_Common_T_TorqueInNewtonMetresType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_TorqueInNewtonMetresType_finalize_ex(
    P_LDM_Common_T_TorqueInNewtonMetresType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_TorqueInNewtonMetresType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_TorqueInNewtonMetresType_finalize_w_params(
    P_LDM_Common_T_TorqueInNewtonMetresType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_Double_finalize_w_params(sample,deallocParams);

}

void P_LDM_Common_T_TorqueInNewtonMetresType_finalize_optional_members(
    P_LDM_Common_T_TorqueInNewtonMetresType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_Double_finalize_optional_members(sample, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_TorqueInNewtonMetresType_copy(
    P_LDM_Common_T_TorqueInNewtonMetresType* dst,
    const P_LDM_Common_T_TorqueInNewtonMetresType* src)
{

    if (!P_LDM_Common_T_Double_copy(
        dst, src)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_TorqueInNewtonMetresType' sequence class.
*/
#define T P_LDM_Common_T_TorqueInNewtonMetresType
#define TSeq P_LDM_Common_T_TorqueInNewtonMetresTypeSeq
#define T_initialize_w_params P_LDM_Common_T_TorqueInNewtonMetresType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_TorqueInNewtonMetresType_finalize_w_params
#define T_copy       P_LDM_Common_T_TorqueInNewtonMetresType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_LinearAccelerationInMetresPerSecPerSecType", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType */

    if (is_initialized) {
        return &P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_g_tc;
    }

    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_g_tc._data._typeCode =  (RTICdrTypeCode *)P_LDM_Common_T_Double_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_g_tc;
}

RTIBool P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_initialize(
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType* sample) {
    return P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_initialize_ex(
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_initialize_w_params(
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_Double_initialize_w_params(sample,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_finalize(
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType* sample)
{

    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_finalize_ex(
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_finalize_w_params(
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_Double_finalize_w_params(sample,deallocParams);

}

void P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_finalize_optional_members(
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_Double_finalize_optional_members(sample, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_copy(
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType* dst,
    const P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType* src)
{

    if (!P_LDM_Common_T_Double_copy(
        dst, src)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType' sequence class.
*/
#define T P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType
#define TSeq P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypeSeq
#define T_initialize_w_params P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_finalize_w_params
#define T_copy       P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *P_LDM_Common_T_LinearAcceleration3DTypeTYPENAME = "P_LDM_Common::T_LinearAcceleration3DType";

DDS_TypeCode* P_LDM_Common_T_LinearAcceleration3DType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_LDM_Common_T_LinearAcceleration3DType_g_tc_members[3]=
    {

        {
            (char *)"A_xAcceleration",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_yAcceleration",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_zAcceleration",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode P_LDM_Common_T_LinearAcceleration3DType_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_LDM_Common::T_LinearAcceleration3DType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            P_LDM_Common_T_LinearAcceleration3DType_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_LDM_Common_T_LinearAcceleration3DType*/

    if (is_initialized) {
        return &P_LDM_Common_T_LinearAcceleration3DType_g_tc;
    }

    P_LDM_Common_T_LinearAcceleration3DType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_get_typecode();

    P_LDM_Common_T_LinearAcceleration3DType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_get_typecode();

    P_LDM_Common_T_LinearAcceleration3DType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_LinearAcceleration3DType_g_tc;
}

RTIBool P_LDM_Common_T_LinearAcceleration3DType_initialize(
    P_LDM_Common_T_LinearAcceleration3DType* sample) {
    return P_LDM_Common_T_LinearAcceleration3DType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_LinearAcceleration3DType_initialize_ex(
    P_LDM_Common_T_LinearAcceleration3DType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_LinearAcceleration3DType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_LinearAcceleration3DType_initialize_w_params(
    P_LDM_Common_T_LinearAcceleration3DType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_initialize_w_params(&sample->A_xAcceleration,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_initialize_w_params(&sample->A_yAcceleration,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_initialize_w_params(&sample->A_zAcceleration,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_LinearAcceleration3DType_finalize(
    P_LDM_Common_T_LinearAcceleration3DType* sample)
{

    P_LDM_Common_T_LinearAcceleration3DType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_LinearAcceleration3DType_finalize_ex(
    P_LDM_Common_T_LinearAcceleration3DType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_LinearAcceleration3DType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_LinearAcceleration3DType_finalize_w_params(
    P_LDM_Common_T_LinearAcceleration3DType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_finalize_w_params(&sample->A_xAcceleration,deallocParams);

    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_finalize_w_params(&sample->A_yAcceleration,deallocParams);

    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_finalize_w_params(&sample->A_zAcceleration,deallocParams);

}

void P_LDM_Common_T_LinearAcceleration3DType_finalize_optional_members(
    P_LDM_Common_T_LinearAcceleration3DType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_finalize_optional_members(&sample->A_xAcceleration, deallocParams->delete_pointers);
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_finalize_optional_members(&sample->A_yAcceleration, deallocParams->delete_pointers);
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_finalize_optional_members(&sample->A_zAcceleration, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_LinearAcceleration3DType_copy(
    P_LDM_Common_T_LinearAcceleration3DType* dst,
    const P_LDM_Common_T_LinearAcceleration3DType* src)
{

    if (!P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_copy(
        &dst->A_xAcceleration, &src->A_xAcceleration)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_copy(
        &dst->A_yAcceleration, &src->A_yAcceleration)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType_copy(
        &dst->A_zAcceleration, &src->A_zAcceleration)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_LinearAcceleration3DType' sequence class.
*/
#define T P_LDM_Common_T_LinearAcceleration3DType
#define TSeq P_LDM_Common_T_LinearAcceleration3DTypeSeq
#define T_initialize_w_params P_LDM_Common_T_LinearAcceleration3DType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_LinearAcceleration3DType_finalize_w_params
#define T_copy       P_LDM_Common_T_LinearAcceleration3DType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *P_LDM_Common_T_AttitudeTypeTYPENAME = "P_LDM_Common::T_AttitudeType";

DDS_TypeCode* P_LDM_Common_T_AttitudeType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_LDM_Common_T_AttitudeType_g_tc_members[3]=
    {

        {
            (char *)"A_pitch",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_roll",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_yaw",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode P_LDM_Common_T_AttitudeType_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_LDM_Common::T_AttitudeType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            P_LDM_Common_T_AttitudeType_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_LDM_Common_T_AttitudeType*/

    if (is_initialized) {
        return &P_LDM_Common_T_AttitudeType_g_tc;
    }

    P_LDM_Common_T_AttitudeType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_AngleInRadiansType_get_typecode();

    P_LDM_Common_T_AttitudeType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_AngleInRadiansType_get_typecode();

    P_LDM_Common_T_AttitudeType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_AngleInRadiansType_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_AttitudeType_g_tc;
}

RTIBool P_LDM_Common_T_AttitudeType_initialize(
    P_LDM_Common_T_AttitudeType* sample) {
    return P_LDM_Common_T_AttitudeType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_AttitudeType_initialize_ex(
    P_LDM_Common_T_AttitudeType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_AttitudeType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_AttitudeType_initialize_w_params(
    P_LDM_Common_T_AttitudeType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_AngleInRadiansType_initialize_w_params(&sample->A_pitch,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_AngleInRadiansType_initialize_w_params(&sample->A_roll,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_AngleInRadiansType_initialize_w_params(&sample->A_yaw,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_AttitudeType_finalize(
    P_LDM_Common_T_AttitudeType* sample)
{

    P_LDM_Common_T_AttitudeType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_AttitudeType_finalize_ex(
    P_LDM_Common_T_AttitudeType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_AttitudeType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_AttitudeType_finalize_w_params(
    P_LDM_Common_T_AttitudeType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_AngleInRadiansType_finalize_w_params(&sample->A_pitch,deallocParams);

    P_LDM_Common_T_AngleInRadiansType_finalize_w_params(&sample->A_roll,deallocParams);

    P_LDM_Common_T_AngleInRadiansType_finalize_w_params(&sample->A_yaw,deallocParams);

}

void P_LDM_Common_T_AttitudeType_finalize_optional_members(
    P_LDM_Common_T_AttitudeType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_AngleInRadiansType_finalize_optional_members(&sample->A_pitch, deallocParams->delete_pointers);
    P_LDM_Common_T_AngleInRadiansType_finalize_optional_members(&sample->A_roll, deallocParams->delete_pointers);
    P_LDM_Common_T_AngleInRadiansType_finalize_optional_members(&sample->A_yaw, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_AttitudeType_copy(
    P_LDM_Common_T_AttitudeType* dst,
    const P_LDM_Common_T_AttitudeType* src)
{

    if (!P_LDM_Common_T_AngleInRadiansType_copy(
        &dst->A_pitch, &src->A_pitch)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_AngleInRadiansType_copy(
        &dst->A_roll, &src->A_roll)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_AngleInRadiansType_copy(
        &dst->A_yaw, &src->A_yaw)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_AttitudeType' sequence class.
*/
#define T P_LDM_Common_T_AttitudeType
#define TSeq P_LDM_Common_T_AttitudeTypeSeq
#define T_initialize_w_params P_LDM_Common_T_AttitudeType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_AttitudeType_finalize_w_params
#define T_copy       P_LDM_Common_T_AttitudeType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_DistanceInMetresType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_DistanceInMetresType_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_DistanceInMetresType", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_DistanceInMetresType */

    if (is_initialized) {
        return &P_LDM_Common_T_DistanceInMetresType_g_tc;
    }

    P_LDM_Common_T_DistanceInMetresType_g_tc._data._typeCode =  (RTICdrTypeCode *)P_LDM_Common_T_Double_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_DistanceInMetresType_g_tc;
}

RTIBool P_LDM_Common_T_DistanceInMetresType_initialize(
    P_LDM_Common_T_DistanceInMetresType* sample) {
    return P_LDM_Common_T_DistanceInMetresType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_DistanceInMetresType_initialize_ex(
    P_LDM_Common_T_DistanceInMetresType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_DistanceInMetresType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_DistanceInMetresType_initialize_w_params(
    P_LDM_Common_T_DistanceInMetresType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_Double_initialize_w_params(sample,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_DistanceInMetresType_finalize(
    P_LDM_Common_T_DistanceInMetresType* sample)
{

    P_LDM_Common_T_DistanceInMetresType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_DistanceInMetresType_finalize_ex(
    P_LDM_Common_T_DistanceInMetresType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_DistanceInMetresType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_DistanceInMetresType_finalize_w_params(
    P_LDM_Common_T_DistanceInMetresType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_Double_finalize_w_params(sample,deallocParams);

}

void P_LDM_Common_T_DistanceInMetresType_finalize_optional_members(
    P_LDM_Common_T_DistanceInMetresType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_Double_finalize_optional_members(sample, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_DistanceInMetresType_copy(
    P_LDM_Common_T_DistanceInMetresType* dst,
    const P_LDM_Common_T_DistanceInMetresType* src)
{

    if (!P_LDM_Common_T_Double_copy(
        dst, src)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_DistanceInMetresType' sequence class.
*/
#define T P_LDM_Common_T_DistanceInMetresType
#define TSeq P_LDM_Common_T_DistanceInMetresTypeSeq
#define T_initialize_w_params P_LDM_Common_T_DistanceInMetresType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_DistanceInMetresType_finalize_w_params
#define T_copy       P_LDM_Common_T_DistanceInMetresType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_SpeedInMetresPerSecType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_SpeedInMetresPerSecType_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_SpeedInMetresPerSecType", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_SpeedInMetresPerSecType */

    if (is_initialized) {
        return &P_LDM_Common_T_SpeedInMetresPerSecType_g_tc;
    }

    P_LDM_Common_T_SpeedInMetresPerSecType_g_tc._data._typeCode =  (RTICdrTypeCode *)P_LDM_Common_T_Double_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_SpeedInMetresPerSecType_g_tc;
}

RTIBool P_LDM_Common_T_SpeedInMetresPerSecType_initialize(
    P_LDM_Common_T_SpeedInMetresPerSecType* sample) {
    return P_LDM_Common_T_SpeedInMetresPerSecType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_SpeedInMetresPerSecType_initialize_ex(
    P_LDM_Common_T_SpeedInMetresPerSecType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_SpeedInMetresPerSecType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_SpeedInMetresPerSecType_initialize_w_params(
    P_LDM_Common_T_SpeedInMetresPerSecType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_Double_initialize_w_params(sample,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_SpeedInMetresPerSecType_finalize(
    P_LDM_Common_T_SpeedInMetresPerSecType* sample)
{

    P_LDM_Common_T_SpeedInMetresPerSecType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_SpeedInMetresPerSecType_finalize_ex(
    P_LDM_Common_T_SpeedInMetresPerSecType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_SpeedInMetresPerSecType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_SpeedInMetresPerSecType_finalize_w_params(
    P_LDM_Common_T_SpeedInMetresPerSecType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_Double_finalize_w_params(sample,deallocParams);

}

void P_LDM_Common_T_SpeedInMetresPerSecType_finalize_optional_members(
    P_LDM_Common_T_SpeedInMetresPerSecType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_Double_finalize_optional_members(sample, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_SpeedInMetresPerSecType_copy(
    P_LDM_Common_T_SpeedInMetresPerSecType* dst,
    const P_LDM_Common_T_SpeedInMetresPerSecType* src)
{

    if (!P_LDM_Common_T_Double_copy(
        dst, src)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_SpeedInMetresPerSecType' sequence class.
*/
#define T P_LDM_Common_T_SpeedInMetresPerSecType
#define TSeq P_LDM_Common_T_SpeedInMetresPerSecTypeSeq
#define T_initialize_w_params P_LDM_Common_T_SpeedInMetresPerSecType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_SpeedInMetresPerSecType_finalize_w_params
#define T_copy       P_LDM_Common_T_SpeedInMetresPerSecType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *P_LDM_Common_T_PointPolar3DTypeTYPENAME = "P_LDM_Common::T_PointPolar3DType";

DDS_TypeCode* P_LDM_Common_T_PointPolar3DType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_LDM_Common_T_PointPolar3DType_g_tc_members[3]=
    {

        {
            (char *)"A_angle",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_elevation",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_radius",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode P_LDM_Common_T_PointPolar3DType_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_LDM_Common::T_PointPolar3DType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            P_LDM_Common_T_PointPolar3DType_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_LDM_Common_T_PointPolar3DType*/

    if (is_initialized) {
        return &P_LDM_Common_T_PointPolar3DType_g_tc;
    }

    P_LDM_Common_T_PointPolar3DType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_AngleInRadiansType_get_typecode();

    P_LDM_Common_T_PointPolar3DType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_AngleInRadiansType_get_typecode();

    P_LDM_Common_T_PointPolar3DType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_DistanceInMetresType_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_PointPolar3DType_g_tc;
}

RTIBool P_LDM_Common_T_PointPolar3DType_initialize(
    P_LDM_Common_T_PointPolar3DType* sample) {
    return P_LDM_Common_T_PointPolar3DType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_PointPolar3DType_initialize_ex(
    P_LDM_Common_T_PointPolar3DType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_PointPolar3DType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_PointPolar3DType_initialize_w_params(
    P_LDM_Common_T_PointPolar3DType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_AngleInRadiansType_initialize_w_params(&sample->A_angle,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_AngleInRadiansType_initialize_w_params(&sample->A_elevation,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_DistanceInMetresType_initialize_w_params(&sample->A_radius,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_PointPolar3DType_finalize(
    P_LDM_Common_T_PointPolar3DType* sample)
{

    P_LDM_Common_T_PointPolar3DType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_PointPolar3DType_finalize_ex(
    P_LDM_Common_T_PointPolar3DType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_PointPolar3DType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_PointPolar3DType_finalize_w_params(
    P_LDM_Common_T_PointPolar3DType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_AngleInRadiansType_finalize_w_params(&sample->A_angle,deallocParams);

    P_LDM_Common_T_AngleInRadiansType_finalize_w_params(&sample->A_elevation,deallocParams);

    P_LDM_Common_T_DistanceInMetresType_finalize_w_params(&sample->A_radius,deallocParams);

}

void P_LDM_Common_T_PointPolar3DType_finalize_optional_members(
    P_LDM_Common_T_PointPolar3DType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_AngleInRadiansType_finalize_optional_members(&sample->A_angle, deallocParams->delete_pointers);
    P_LDM_Common_T_AngleInRadiansType_finalize_optional_members(&sample->A_elevation, deallocParams->delete_pointers);
    P_LDM_Common_T_DistanceInMetresType_finalize_optional_members(&sample->A_radius, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_PointPolar3DType_copy(
    P_LDM_Common_T_PointPolar3DType* dst,
    const P_LDM_Common_T_PointPolar3DType* src)
{

    if (!P_LDM_Common_T_AngleInRadiansType_copy(
        &dst->A_angle, &src->A_angle)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_AngleInRadiansType_copy(
        &dst->A_elevation, &src->A_elevation)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_DistanceInMetresType_copy(
        &dst->A_radius, &src->A_radius)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_PointPolar3DType' sequence class.
*/
#define T P_LDM_Common_T_PointPolar3DType
#define TSeq P_LDM_Common_T_PointPolar3DTypeSeq
#define T_initialize_w_params P_LDM_Common_T_PointPolar3DType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_PointPolar3DType_finalize_w_params
#define T_copy       P_LDM_Common_T_PointPolar3DType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *P_LDM_Common_T_CoordinatePolar3DTypeTYPENAME = "P_LDM_Common::T_CoordinatePolar3DType";

DDS_TypeCode* P_LDM_Common_T_CoordinatePolar3DType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_LDM_Common_T_CoordinatePolar3DType_g_tc_members[3]=
    {

        {
            (char *)"A_angle",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_elevation",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_range",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode P_LDM_Common_T_CoordinatePolar3DType_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_LDM_Common::T_CoordinatePolar3DType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            P_LDM_Common_T_CoordinatePolar3DType_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_LDM_Common_T_CoordinatePolar3DType*/

    if (is_initialized) {
        return &P_LDM_Common_T_CoordinatePolar3DType_g_tc;
    }

    P_LDM_Common_T_CoordinatePolar3DType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_AngleInRadiansType_get_typecode();

    P_LDM_Common_T_CoordinatePolar3DType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_AngleInRadiansType_get_typecode();

    P_LDM_Common_T_CoordinatePolar3DType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_DistanceInMetresType_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_CoordinatePolar3DType_g_tc;
}

RTIBool P_LDM_Common_T_CoordinatePolar3DType_initialize(
    P_LDM_Common_T_CoordinatePolar3DType* sample) {
    return P_LDM_Common_T_CoordinatePolar3DType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_CoordinatePolar3DType_initialize_ex(
    P_LDM_Common_T_CoordinatePolar3DType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_CoordinatePolar3DType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_CoordinatePolar3DType_initialize_w_params(
    P_LDM_Common_T_CoordinatePolar3DType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_AngleInRadiansType_initialize_w_params(&sample->A_angle,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_AngleInRadiansType_initialize_w_params(&sample->A_elevation,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_DistanceInMetresType_initialize_w_params(&sample->A_range,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_CoordinatePolar3DType_finalize(
    P_LDM_Common_T_CoordinatePolar3DType* sample)
{

    P_LDM_Common_T_CoordinatePolar3DType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_CoordinatePolar3DType_finalize_ex(
    P_LDM_Common_T_CoordinatePolar3DType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_CoordinatePolar3DType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_CoordinatePolar3DType_finalize_w_params(
    P_LDM_Common_T_CoordinatePolar3DType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_AngleInRadiansType_finalize_w_params(&sample->A_angle,deallocParams);

    P_LDM_Common_T_AngleInRadiansType_finalize_w_params(&sample->A_elevation,deallocParams);

    P_LDM_Common_T_DistanceInMetresType_finalize_w_params(&sample->A_range,deallocParams);

}

void P_LDM_Common_T_CoordinatePolar3DType_finalize_optional_members(
    P_LDM_Common_T_CoordinatePolar3DType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_AngleInRadiansType_finalize_optional_members(&sample->A_angle, deallocParams->delete_pointers);
    P_LDM_Common_T_AngleInRadiansType_finalize_optional_members(&sample->A_elevation, deallocParams->delete_pointers);
    P_LDM_Common_T_DistanceInMetresType_finalize_optional_members(&sample->A_range, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_CoordinatePolar3DType_copy(
    P_LDM_Common_T_CoordinatePolar3DType* dst,
    const P_LDM_Common_T_CoordinatePolar3DType* src)
{

    if (!P_LDM_Common_T_AngleInRadiansType_copy(
        &dst->A_angle, &src->A_angle)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_AngleInRadiansType_copy(
        &dst->A_elevation, &src->A_elevation)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_DistanceInMetresType_copy(
        &dst->A_range, &src->A_range)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_CoordinatePolar3DType' sequence class.
*/
#define T P_LDM_Common_T_CoordinatePolar3DType
#define TSeq P_LDM_Common_T_CoordinatePolar3DTypeSeq
#define T_initialize_w_params P_LDM_Common_T_CoordinatePolar3DType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_CoordinatePolar3DType_finalize_w_params
#define T_copy       P_LDM_Common_T_CoordinatePolar3DType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *P_LDM_Common_T_CoordinatePolar2DTypeTYPENAME = "P_LDM_Common::T_CoordinatePolar2DType";

DDS_TypeCode* P_LDM_Common_T_CoordinatePolar2DType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_LDM_Common_T_CoordinatePolar2DType_g_tc_members[2]=
    {

        {
            (char *)"A_angle",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_range",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode P_LDM_Common_T_CoordinatePolar2DType_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_LDM_Common::T_CoordinatePolar2DType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            P_LDM_Common_T_CoordinatePolar2DType_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_LDM_Common_T_CoordinatePolar2DType*/

    if (is_initialized) {
        return &P_LDM_Common_T_CoordinatePolar2DType_g_tc;
    }

    P_LDM_Common_T_CoordinatePolar2DType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_AngleInRadiansType_get_typecode();

    P_LDM_Common_T_CoordinatePolar2DType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_DistanceInMetresType_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_CoordinatePolar2DType_g_tc;
}

RTIBool P_LDM_Common_T_CoordinatePolar2DType_initialize(
    P_LDM_Common_T_CoordinatePolar2DType* sample) {
    return P_LDM_Common_T_CoordinatePolar2DType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_CoordinatePolar2DType_initialize_ex(
    P_LDM_Common_T_CoordinatePolar2DType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_CoordinatePolar2DType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_CoordinatePolar2DType_initialize_w_params(
    P_LDM_Common_T_CoordinatePolar2DType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_AngleInRadiansType_initialize_w_params(&sample->A_angle,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_DistanceInMetresType_initialize_w_params(&sample->A_range,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_CoordinatePolar2DType_finalize(
    P_LDM_Common_T_CoordinatePolar2DType* sample)
{

    P_LDM_Common_T_CoordinatePolar2DType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_CoordinatePolar2DType_finalize_ex(
    P_LDM_Common_T_CoordinatePolar2DType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_CoordinatePolar2DType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_CoordinatePolar2DType_finalize_w_params(
    P_LDM_Common_T_CoordinatePolar2DType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_AngleInRadiansType_finalize_w_params(&sample->A_angle,deallocParams);

    P_LDM_Common_T_DistanceInMetresType_finalize_w_params(&sample->A_range,deallocParams);

}

void P_LDM_Common_T_CoordinatePolar2DType_finalize_optional_members(
    P_LDM_Common_T_CoordinatePolar2DType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_AngleInRadiansType_finalize_optional_members(&sample->A_angle, deallocParams->delete_pointers);
    P_LDM_Common_T_DistanceInMetresType_finalize_optional_members(&sample->A_range, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_CoordinatePolar2DType_copy(
    P_LDM_Common_T_CoordinatePolar2DType* dst,
    const P_LDM_Common_T_CoordinatePolar2DType* src)
{

    if (!P_LDM_Common_T_AngleInRadiansType_copy(
        &dst->A_angle, &src->A_angle)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_DistanceInMetresType_copy(
        &dst->A_range, &src->A_range)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_CoordinatePolar2DType' sequence class.
*/
#define T P_LDM_Common_T_CoordinatePolar2DType
#define TSeq P_LDM_Common_T_CoordinatePolar2DTypeSeq
#define T_initialize_w_params P_LDM_Common_T_CoordinatePolar2DType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_CoordinatePolar2DType_finalize_w_params
#define T_copy       P_LDM_Common_T_CoordinatePolar2DType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_AngularAccelerationInRadiansPerSecPerSecType", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType */

    if (is_initialized) {
        return &P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_g_tc;
    }

    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_g_tc._data._typeCode =  (RTICdrTypeCode *)P_LDM_Common_T_Double_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_g_tc;
}

RTIBool P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_initialize(
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType* sample) {
    return P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_initialize_ex(
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_initialize_w_params(
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_Double_initialize_w_params(sample,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_finalize(
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType* sample)
{

    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_finalize_ex(
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_finalize_w_params(
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_Double_finalize_w_params(sample,deallocParams);

}

void P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_finalize_optional_members(
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_Double_finalize_optional_members(sample, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_copy(
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType* dst,
    const P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType* src)
{

    if (!P_LDM_Common_T_Double_copy(
        dst, src)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType' sequence class.
*/
#define T P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType
#define TSeq P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypeSeq
#define T_initialize_w_params P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_finalize_w_params
#define T_copy       P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *P_LDM_Common_T_AngularAcceleration3DTypeTYPENAME = "P_LDM_Common::T_AngularAcceleration3DType";

DDS_TypeCode* P_LDM_Common_T_AngularAcceleration3DType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_LDM_Common_T_AngularAcceleration3DType_g_tc_members[3]=
    {

        {
            (char *)"A_pitch",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_roll",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_yaw",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode P_LDM_Common_T_AngularAcceleration3DType_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_LDM_Common::T_AngularAcceleration3DType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            P_LDM_Common_T_AngularAcceleration3DType_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_LDM_Common_T_AngularAcceleration3DType*/

    if (is_initialized) {
        return &P_LDM_Common_T_AngularAcceleration3DType_g_tc;
    }

    P_LDM_Common_T_AngularAcceleration3DType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_get_typecode();

    P_LDM_Common_T_AngularAcceleration3DType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_get_typecode();

    P_LDM_Common_T_AngularAcceleration3DType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_AngularAcceleration3DType_g_tc;
}

RTIBool P_LDM_Common_T_AngularAcceleration3DType_initialize(
    P_LDM_Common_T_AngularAcceleration3DType* sample) {
    return P_LDM_Common_T_AngularAcceleration3DType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_AngularAcceleration3DType_initialize_ex(
    P_LDM_Common_T_AngularAcceleration3DType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_AngularAcceleration3DType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_AngularAcceleration3DType_initialize_w_params(
    P_LDM_Common_T_AngularAcceleration3DType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_initialize_w_params(&sample->A_pitch,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_initialize_w_params(&sample->A_roll,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_initialize_w_params(&sample->A_yaw,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_AngularAcceleration3DType_finalize(
    P_LDM_Common_T_AngularAcceleration3DType* sample)
{

    P_LDM_Common_T_AngularAcceleration3DType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_AngularAcceleration3DType_finalize_ex(
    P_LDM_Common_T_AngularAcceleration3DType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_AngularAcceleration3DType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_AngularAcceleration3DType_finalize_w_params(
    P_LDM_Common_T_AngularAcceleration3DType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_finalize_w_params(&sample->A_pitch,deallocParams);

    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_finalize_w_params(&sample->A_roll,deallocParams);

    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_finalize_w_params(&sample->A_yaw,deallocParams);

}

void P_LDM_Common_T_AngularAcceleration3DType_finalize_optional_members(
    P_LDM_Common_T_AngularAcceleration3DType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_finalize_optional_members(&sample->A_pitch, deallocParams->delete_pointers);
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_finalize_optional_members(&sample->A_roll, deallocParams->delete_pointers);
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_finalize_optional_members(&sample->A_yaw, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_AngularAcceleration3DType_copy(
    P_LDM_Common_T_AngularAcceleration3DType* dst,
    const P_LDM_Common_T_AngularAcceleration3DType* src)
{

    if (!P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_copy(
        &dst->A_pitch, &src->A_pitch)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_copy(
        &dst->A_roll, &src->A_roll)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType_copy(
        &dst->A_yaw, &src->A_yaw)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_AngularAcceleration3DType' sequence class.
*/
#define T P_LDM_Common_T_AngularAcceleration3DType
#define TSeq P_LDM_Common_T_AngularAcceleration3DTypeSeq
#define T_initialize_w_params P_LDM_Common_T_AngularAcceleration3DType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_AngularAcceleration3DType_finalize_w_params
#define T_copy       P_LDM_Common_T_AngularAcceleration3DType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_AngularVelocityinRadiansPerSecType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_AngularVelocityinRadiansPerSecType_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_AngularVelocityinRadiansPerSecType", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_AngularVelocityinRadiansPerSecType */

    if (is_initialized) {
        return &P_LDM_Common_T_AngularVelocityinRadiansPerSecType_g_tc;
    }

    P_LDM_Common_T_AngularVelocityinRadiansPerSecType_g_tc._data._typeCode =  (RTICdrTypeCode *)P_LDM_Common_T_Double_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_AngularVelocityinRadiansPerSecType_g_tc;
}

RTIBool P_LDM_Common_T_AngularVelocityinRadiansPerSecType_initialize(
    P_LDM_Common_T_AngularVelocityinRadiansPerSecType* sample) {
    return P_LDM_Common_T_AngularVelocityinRadiansPerSecType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_AngularVelocityinRadiansPerSecType_initialize_ex(
    P_LDM_Common_T_AngularVelocityinRadiansPerSecType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_AngularVelocityinRadiansPerSecType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_AngularVelocityinRadiansPerSecType_initialize_w_params(
    P_LDM_Common_T_AngularVelocityinRadiansPerSecType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_Double_initialize_w_params(sample,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_AngularVelocityinRadiansPerSecType_finalize(
    P_LDM_Common_T_AngularVelocityinRadiansPerSecType* sample)
{

    P_LDM_Common_T_AngularVelocityinRadiansPerSecType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_AngularVelocityinRadiansPerSecType_finalize_ex(
    P_LDM_Common_T_AngularVelocityinRadiansPerSecType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_AngularVelocityinRadiansPerSecType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_AngularVelocityinRadiansPerSecType_finalize_w_params(
    P_LDM_Common_T_AngularVelocityinRadiansPerSecType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_Double_finalize_w_params(sample,deallocParams);

}

void P_LDM_Common_T_AngularVelocityinRadiansPerSecType_finalize_optional_members(
    P_LDM_Common_T_AngularVelocityinRadiansPerSecType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_Double_finalize_optional_members(sample, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_AngularVelocityinRadiansPerSecType_copy(
    P_LDM_Common_T_AngularVelocityinRadiansPerSecType* dst,
    const P_LDM_Common_T_AngularVelocityinRadiansPerSecType* src)
{

    if (!P_LDM_Common_T_Double_copy(
        dst, src)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_AngularVelocityinRadiansPerSecType' sequence class.
*/
#define T P_LDM_Common_T_AngularVelocityinRadiansPerSecType
#define TSeq P_LDM_Common_T_AngularVelocityinRadiansPerSecTypeSeq
#define T_initialize_w_params P_LDM_Common_T_AngularVelocityinRadiansPerSecType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_AngularVelocityinRadiansPerSecType_finalize_w_params
#define T_copy       P_LDM_Common_T_AngularVelocityinRadiansPerSecType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *P_LDM_Common_T_AngularVelocity3DTypeTYPENAME = "P_LDM_Common::T_AngularVelocity3DType";

DDS_TypeCode* P_LDM_Common_T_AngularVelocity3DType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_LDM_Common_T_AngularVelocity3DType_g_tc_members[3]=
    {

        {
            (char *)"A_pitch",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_roll",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_yaw",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode P_LDM_Common_T_AngularVelocity3DType_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_LDM_Common::T_AngularVelocity3DType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            P_LDM_Common_T_AngularVelocity3DType_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_LDM_Common_T_AngularVelocity3DType*/

    if (is_initialized) {
        return &P_LDM_Common_T_AngularVelocity3DType_g_tc;
    }

    P_LDM_Common_T_AngularVelocity3DType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_AngularVelocityinRadiansPerSecType_get_typecode();

    P_LDM_Common_T_AngularVelocity3DType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_AngularVelocityinRadiansPerSecType_get_typecode();

    P_LDM_Common_T_AngularVelocity3DType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_AngularVelocityinRadiansPerSecType_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_AngularVelocity3DType_g_tc;
}

RTIBool P_LDM_Common_T_AngularVelocity3DType_initialize(
    P_LDM_Common_T_AngularVelocity3DType* sample) {
    return P_LDM_Common_T_AngularVelocity3DType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_AngularVelocity3DType_initialize_ex(
    P_LDM_Common_T_AngularVelocity3DType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_AngularVelocity3DType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_AngularVelocity3DType_initialize_w_params(
    P_LDM_Common_T_AngularVelocity3DType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_AngularVelocityinRadiansPerSecType_initialize_w_params(&sample->A_pitch,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_AngularVelocityinRadiansPerSecType_initialize_w_params(&sample->A_roll,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_AngularVelocityinRadiansPerSecType_initialize_w_params(&sample->A_yaw,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_AngularVelocity3DType_finalize(
    P_LDM_Common_T_AngularVelocity3DType* sample)
{

    P_LDM_Common_T_AngularVelocity3DType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_AngularVelocity3DType_finalize_ex(
    P_LDM_Common_T_AngularVelocity3DType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_AngularVelocity3DType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_AngularVelocity3DType_finalize_w_params(
    P_LDM_Common_T_AngularVelocity3DType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_AngularVelocityinRadiansPerSecType_finalize_w_params(&sample->A_pitch,deallocParams);

    P_LDM_Common_T_AngularVelocityinRadiansPerSecType_finalize_w_params(&sample->A_roll,deallocParams);

    P_LDM_Common_T_AngularVelocityinRadiansPerSecType_finalize_w_params(&sample->A_yaw,deallocParams);

}

void P_LDM_Common_T_AngularVelocity3DType_finalize_optional_members(
    P_LDM_Common_T_AngularVelocity3DType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_AngularVelocityinRadiansPerSecType_finalize_optional_members(&sample->A_pitch, deallocParams->delete_pointers);
    P_LDM_Common_T_AngularVelocityinRadiansPerSecType_finalize_optional_members(&sample->A_roll, deallocParams->delete_pointers);
    P_LDM_Common_T_AngularVelocityinRadiansPerSecType_finalize_optional_members(&sample->A_yaw, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_AngularVelocity3DType_copy(
    P_LDM_Common_T_AngularVelocity3DType* dst,
    const P_LDM_Common_T_AngularVelocity3DType* src)
{

    if (!P_LDM_Common_T_AngularVelocityinRadiansPerSecType_copy(
        &dst->A_pitch, &src->A_pitch)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_AngularVelocityinRadiansPerSecType_copy(
        &dst->A_roll, &src->A_roll)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_AngularVelocityinRadiansPerSecType_copy(
        &dst->A_yaw, &src->A_yaw)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_AngularVelocity3DType' sequence class.
*/
#define T P_LDM_Common_T_AngularVelocity3DType
#define TSeq P_LDM_Common_T_AngularVelocity3DTypeSeq
#define T_initialize_w_params P_LDM_Common_T_AngularVelocity3DType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_AngularVelocity3DType_finalize_w_params
#define T_copy       P_LDM_Common_T_AngularVelocity3DType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *P_LDM_Common_T_LinearVelocity3DTypeTYPENAME = "P_LDM_Common::T_LinearVelocity3DType";

DDS_TypeCode* P_LDM_Common_T_LinearVelocity3DType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_LDM_Common_T_LinearVelocity3DType_g_tc_members[3]=
    {

        {
            (char *)"A_heading",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_speed",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_vrate",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode P_LDM_Common_T_LinearVelocity3DType_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_LDM_Common::T_LinearVelocity3DType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            P_LDM_Common_T_LinearVelocity3DType_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_LDM_Common_T_LinearVelocity3DType*/

    if (is_initialized) {
        return &P_LDM_Common_T_LinearVelocity3DType_g_tc;
    }

    P_LDM_Common_T_LinearVelocity3DType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_AngleInRadiansType_get_typecode();

    P_LDM_Common_T_LinearVelocity3DType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_SpeedInMetresPerSecType_get_typecode();

    P_LDM_Common_T_LinearVelocity3DType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_SpeedInMetresPerSecType_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_LinearVelocity3DType_g_tc;
}

RTIBool P_LDM_Common_T_LinearVelocity3DType_initialize(
    P_LDM_Common_T_LinearVelocity3DType* sample) {
    return P_LDM_Common_T_LinearVelocity3DType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_LinearVelocity3DType_initialize_ex(
    P_LDM_Common_T_LinearVelocity3DType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_LinearVelocity3DType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_LinearVelocity3DType_initialize_w_params(
    P_LDM_Common_T_LinearVelocity3DType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_AngleInRadiansType_initialize_w_params(&sample->A_heading,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_SpeedInMetresPerSecType_initialize_w_params(&sample->A_speed,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_SpeedInMetresPerSecType_initialize_w_params(&sample->A_vrate,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_LinearVelocity3DType_finalize(
    P_LDM_Common_T_LinearVelocity3DType* sample)
{

    P_LDM_Common_T_LinearVelocity3DType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_LinearVelocity3DType_finalize_ex(
    P_LDM_Common_T_LinearVelocity3DType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_LinearVelocity3DType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_LinearVelocity3DType_finalize_w_params(
    P_LDM_Common_T_LinearVelocity3DType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_AngleInRadiansType_finalize_w_params(&sample->A_heading,deallocParams);

    P_LDM_Common_T_SpeedInMetresPerSecType_finalize_w_params(&sample->A_speed,deallocParams);

    P_LDM_Common_T_SpeedInMetresPerSecType_finalize_w_params(&sample->A_vrate,deallocParams);

}

void P_LDM_Common_T_LinearVelocity3DType_finalize_optional_members(
    P_LDM_Common_T_LinearVelocity3DType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_AngleInRadiansType_finalize_optional_members(&sample->A_heading, deallocParams->delete_pointers);
    P_LDM_Common_T_SpeedInMetresPerSecType_finalize_optional_members(&sample->A_speed, deallocParams->delete_pointers);
    P_LDM_Common_T_SpeedInMetresPerSecType_finalize_optional_members(&sample->A_vrate, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_LinearVelocity3DType_copy(
    P_LDM_Common_T_LinearVelocity3DType* dst,
    const P_LDM_Common_T_LinearVelocity3DType* src)
{

    if (!P_LDM_Common_T_AngleInRadiansType_copy(
        &dst->A_heading, &src->A_heading)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_SpeedInMetresPerSecType_copy(
        &dst->A_speed, &src->A_speed)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_SpeedInMetresPerSecType_copy(
        &dst->A_vrate, &src->A_vrate)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_LinearVelocity3DType' sequence class.
*/
#define T P_LDM_Common_T_LinearVelocity3DType
#define TSeq P_LDM_Common_T_LinearVelocity3DTypeSeq
#define T_initialize_w_params P_LDM_Common_T_LinearVelocity3DType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_LinearVelocity3DType_finalize_w_params
#define T_copy       P_LDM_Common_T_LinearVelocity3DType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_LatitudeType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_LatitudeType_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_LatitudeType", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_LatitudeType */

    if (is_initialized) {
        return &P_LDM_Common_T_LatitudeType_g_tc;
    }

    P_LDM_Common_T_LatitudeType_g_tc._data._typeCode =  (RTICdrTypeCode *)P_LDM_Common_T_AngleInRadiansType_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_LatitudeType_g_tc;
}

RTIBool P_LDM_Common_T_LatitudeType_initialize(
    P_LDM_Common_T_LatitudeType* sample) {
    return P_LDM_Common_T_LatitudeType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_LatitudeType_initialize_ex(
    P_LDM_Common_T_LatitudeType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_LatitudeType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_LatitudeType_initialize_w_params(
    P_LDM_Common_T_LatitudeType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_AngleInRadiansType_initialize_w_params(sample,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_LatitudeType_finalize(
    P_LDM_Common_T_LatitudeType* sample)
{

    P_LDM_Common_T_LatitudeType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_LatitudeType_finalize_ex(
    P_LDM_Common_T_LatitudeType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_LatitudeType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_LatitudeType_finalize_w_params(
    P_LDM_Common_T_LatitudeType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_AngleInRadiansType_finalize_w_params(sample,deallocParams);

}

void P_LDM_Common_T_LatitudeType_finalize_optional_members(
    P_LDM_Common_T_LatitudeType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_AngleInRadiansType_finalize_optional_members(sample, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_LatitudeType_copy(
    P_LDM_Common_T_LatitudeType* dst,
    const P_LDM_Common_T_LatitudeType* src)
{

    if (!P_LDM_Common_T_AngleInRadiansType_copy(
        dst, src)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_LatitudeType' sequence class.
*/
#define T P_LDM_Common_T_LatitudeType
#define TSeq P_LDM_Common_T_LatitudeTypeSeq
#define T_initialize_w_params P_LDM_Common_T_LatitudeType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_LatitudeType_finalize_w_params
#define T_copy       P_LDM_Common_T_LatitudeType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_AltitudeType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_AltitudeType_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_AltitudeType", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_AltitudeType */

    if (is_initialized) {
        return &P_LDM_Common_T_AltitudeType_g_tc;
    }

    P_LDM_Common_T_AltitudeType_g_tc._data._typeCode =  (RTICdrTypeCode *)P_LDM_Common_T_DistanceInMetresType_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_AltitudeType_g_tc;
}

RTIBool P_LDM_Common_T_AltitudeType_initialize(
    P_LDM_Common_T_AltitudeType* sample) {
    return P_LDM_Common_T_AltitudeType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_AltitudeType_initialize_ex(
    P_LDM_Common_T_AltitudeType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_AltitudeType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_AltitudeType_initialize_w_params(
    P_LDM_Common_T_AltitudeType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_DistanceInMetresType_initialize_w_params(sample,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_AltitudeType_finalize(
    P_LDM_Common_T_AltitudeType* sample)
{

    P_LDM_Common_T_AltitudeType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_AltitudeType_finalize_ex(
    P_LDM_Common_T_AltitudeType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_AltitudeType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_AltitudeType_finalize_w_params(
    P_LDM_Common_T_AltitudeType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_DistanceInMetresType_finalize_w_params(sample,deallocParams);

}

void P_LDM_Common_T_AltitudeType_finalize_optional_members(
    P_LDM_Common_T_AltitudeType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_DistanceInMetresType_finalize_optional_members(sample, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_AltitudeType_copy(
    P_LDM_Common_T_AltitudeType* dst,
    const P_LDM_Common_T_AltitudeType* src)
{

    if (!P_LDM_Common_T_DistanceInMetresType_copy(
        dst, src)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_AltitudeType' sequence class.
*/
#define T P_LDM_Common_T_AltitudeType
#define TSeq P_LDM_Common_T_AltitudeTypeSeq
#define T_initialize_w_params P_LDM_Common_T_AltitudeType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_AltitudeType_finalize_w_params
#define T_copy       P_LDM_Common_T_AltitudeType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *P_LDM_Common_T_RotationalOffsetTypeTYPENAME = "P_LDM_Common::T_RotationalOffsetType";

DDS_TypeCode* P_LDM_Common_T_RotationalOffsetType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_LDM_Common_T_RotationalOffsetType_g_tc_members[3]=
    {

        {
            (char *)"A_pitchOffset",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_rollOffset",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_yawOffset",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode P_LDM_Common_T_RotationalOffsetType_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_LDM_Common::T_RotationalOffsetType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            P_LDM_Common_T_RotationalOffsetType_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_LDM_Common_T_RotationalOffsetType*/

    if (is_initialized) {
        return &P_LDM_Common_T_RotationalOffsetType_g_tc;
    }

    P_LDM_Common_T_RotationalOffsetType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_AngleInRadiansType_get_typecode();

    P_LDM_Common_T_RotationalOffsetType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_AngleInRadiansType_get_typecode();

    P_LDM_Common_T_RotationalOffsetType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_AngleInRadiansType_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_RotationalOffsetType_g_tc;
}

RTIBool P_LDM_Common_T_RotationalOffsetType_initialize(
    P_LDM_Common_T_RotationalOffsetType* sample) {
    return P_LDM_Common_T_RotationalOffsetType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_RotationalOffsetType_initialize_ex(
    P_LDM_Common_T_RotationalOffsetType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_RotationalOffsetType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_RotationalOffsetType_initialize_w_params(
    P_LDM_Common_T_RotationalOffsetType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_AngleInRadiansType_initialize_w_params(&sample->A_pitchOffset,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_AngleInRadiansType_initialize_w_params(&sample->A_rollOffset,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_AngleInRadiansType_initialize_w_params(&sample->A_yawOffset,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_RotationalOffsetType_finalize(
    P_LDM_Common_T_RotationalOffsetType* sample)
{

    P_LDM_Common_T_RotationalOffsetType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_RotationalOffsetType_finalize_ex(
    P_LDM_Common_T_RotationalOffsetType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_RotationalOffsetType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_RotationalOffsetType_finalize_w_params(
    P_LDM_Common_T_RotationalOffsetType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_AngleInRadiansType_finalize_w_params(&sample->A_pitchOffset,deallocParams);

    P_LDM_Common_T_AngleInRadiansType_finalize_w_params(&sample->A_rollOffset,deallocParams);

    P_LDM_Common_T_AngleInRadiansType_finalize_w_params(&sample->A_yawOffset,deallocParams);

}

void P_LDM_Common_T_RotationalOffsetType_finalize_optional_members(
    P_LDM_Common_T_RotationalOffsetType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_AngleInRadiansType_finalize_optional_members(&sample->A_pitchOffset, deallocParams->delete_pointers);
    P_LDM_Common_T_AngleInRadiansType_finalize_optional_members(&sample->A_rollOffset, deallocParams->delete_pointers);
    P_LDM_Common_T_AngleInRadiansType_finalize_optional_members(&sample->A_yawOffset, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_RotationalOffsetType_copy(
    P_LDM_Common_T_RotationalOffsetType* dst,
    const P_LDM_Common_T_RotationalOffsetType* src)
{

    if (!P_LDM_Common_T_AngleInRadiansType_copy(
        &dst->A_pitchOffset, &src->A_pitchOffset)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_AngleInRadiansType_copy(
        &dst->A_rollOffset, &src->A_rollOffset)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_AngleInRadiansType_copy(
        &dst->A_yawOffset, &src->A_yawOffset)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_RotationalOffsetType' sequence class.
*/
#define T P_LDM_Common_T_RotationalOffsetType
#define TSeq P_LDM_Common_T_RotationalOffsetTypeSeq
#define T_initialize_w_params P_LDM_Common_T_RotationalOffsetType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_RotationalOffsetType_finalize_w_params
#define T_copy       P_LDM_Common_T_RotationalOffsetType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_LongitudeType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_LongitudeType_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_LongitudeType", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_LongitudeType */

    if (is_initialized) {
        return &P_LDM_Common_T_LongitudeType_g_tc;
    }

    P_LDM_Common_T_LongitudeType_g_tc._data._typeCode =  (RTICdrTypeCode *)P_LDM_Common_T_AngleInRadiansType_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_LongitudeType_g_tc;
}

RTIBool P_LDM_Common_T_LongitudeType_initialize(
    P_LDM_Common_T_LongitudeType* sample) {
    return P_LDM_Common_T_LongitudeType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_LongitudeType_initialize_ex(
    P_LDM_Common_T_LongitudeType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_LongitudeType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_LongitudeType_initialize_w_params(
    P_LDM_Common_T_LongitudeType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_AngleInRadiansType_initialize_w_params(sample,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_LongitudeType_finalize(
    P_LDM_Common_T_LongitudeType* sample)
{

    P_LDM_Common_T_LongitudeType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_LongitudeType_finalize_ex(
    P_LDM_Common_T_LongitudeType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_LongitudeType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_LongitudeType_finalize_w_params(
    P_LDM_Common_T_LongitudeType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_AngleInRadiansType_finalize_w_params(sample,deallocParams);

}

void P_LDM_Common_T_LongitudeType_finalize_optional_members(
    P_LDM_Common_T_LongitudeType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_AngleInRadiansType_finalize_optional_members(sample, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_LongitudeType_copy(
    P_LDM_Common_T_LongitudeType* dst,
    const P_LDM_Common_T_LongitudeType* src)
{

    if (!P_LDM_Common_T_AngleInRadiansType_copy(
        dst, src)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_LongitudeType' sequence class.
*/
#define T P_LDM_Common_T_LongitudeType
#define TSeq P_LDM_Common_T_LongitudeTypeSeq
#define T_initialize_w_params P_LDM_Common_T_LongitudeType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_LongitudeType_finalize_w_params
#define T_copy       P_LDM_Common_T_LongitudeType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *P_LDM_Common_T_Coordinate2DTypeTYPENAME = "P_LDM_Common::T_Coordinate2DType";

DDS_TypeCode* P_LDM_Common_T_Coordinate2DType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_LDM_Common_T_Coordinate2DType_g_tc_members[2]=
    {

        {
            (char *)"A_latitude",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_longitude",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode P_LDM_Common_T_Coordinate2DType_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_LDM_Common::T_Coordinate2DType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            P_LDM_Common_T_Coordinate2DType_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_LDM_Common_T_Coordinate2DType*/

    if (is_initialized) {
        return &P_LDM_Common_T_Coordinate2DType_g_tc;
    }

    P_LDM_Common_T_Coordinate2DType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_LatitudeType_get_typecode();

    P_LDM_Common_T_Coordinate2DType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_LongitudeType_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_Coordinate2DType_g_tc;
}

RTIBool P_LDM_Common_T_Coordinate2DType_initialize(
    P_LDM_Common_T_Coordinate2DType* sample) {
    return P_LDM_Common_T_Coordinate2DType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_Coordinate2DType_initialize_ex(
    P_LDM_Common_T_Coordinate2DType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_Coordinate2DType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_Coordinate2DType_initialize_w_params(
    P_LDM_Common_T_Coordinate2DType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_LatitudeType_initialize_w_params(&sample->A_latitude,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_LongitudeType_initialize_w_params(&sample->A_longitude,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_Coordinate2DType_finalize(
    P_LDM_Common_T_Coordinate2DType* sample)
{

    P_LDM_Common_T_Coordinate2DType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_Coordinate2DType_finalize_ex(
    P_LDM_Common_T_Coordinate2DType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_Coordinate2DType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_Coordinate2DType_finalize_w_params(
    P_LDM_Common_T_Coordinate2DType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_LatitudeType_finalize_w_params(&sample->A_latitude,deallocParams);

    P_LDM_Common_T_LongitudeType_finalize_w_params(&sample->A_longitude,deallocParams);

}

void P_LDM_Common_T_Coordinate2DType_finalize_optional_members(
    P_LDM_Common_T_Coordinate2DType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_LatitudeType_finalize_optional_members(&sample->A_latitude, deallocParams->delete_pointers);
    P_LDM_Common_T_LongitudeType_finalize_optional_members(&sample->A_longitude, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_Coordinate2DType_copy(
    P_LDM_Common_T_Coordinate2DType* dst,
    const P_LDM_Common_T_Coordinate2DType* src)
{

    if (!P_LDM_Common_T_LatitudeType_copy(
        &dst->A_latitude, &src->A_latitude)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_LongitudeType_copy(
        &dst->A_longitude, &src->A_longitude)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_Coordinate2DType' sequence class.
*/
#define T P_LDM_Common_T_Coordinate2DType
#define TSeq P_LDM_Common_T_Coordinate2DTypeSeq
#define T_initialize_w_params P_LDM_Common_T_Coordinate2DType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_Coordinate2DType_finalize_w_params
#define T_copy       P_LDM_Common_T_Coordinate2DType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *P_LDM_Common_T_LinearSpeed3DTypeTYPENAME = "P_LDM_Common::T_LinearSpeed3DType";

DDS_TypeCode* P_LDM_Common_T_LinearSpeed3DType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_LDM_Common_T_LinearSpeed3DType_g_tc_members[3]=
    {

        {
            (char *)"A_xSpeed",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_ySpeed",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_zSpeed",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode P_LDM_Common_T_LinearSpeed3DType_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_LDM_Common::T_LinearSpeed3DType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            P_LDM_Common_T_LinearSpeed3DType_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_LDM_Common_T_LinearSpeed3DType*/

    if (is_initialized) {
        return &P_LDM_Common_T_LinearSpeed3DType_g_tc;
    }

    P_LDM_Common_T_LinearSpeed3DType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_SpeedInMetresPerSecType_get_typecode();

    P_LDM_Common_T_LinearSpeed3DType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_SpeedInMetresPerSecType_get_typecode();

    P_LDM_Common_T_LinearSpeed3DType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_SpeedInMetresPerSecType_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_LinearSpeed3DType_g_tc;
}

RTIBool P_LDM_Common_T_LinearSpeed3DType_initialize(
    P_LDM_Common_T_LinearSpeed3DType* sample) {
    return P_LDM_Common_T_LinearSpeed3DType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_LinearSpeed3DType_initialize_ex(
    P_LDM_Common_T_LinearSpeed3DType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_LinearSpeed3DType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_LinearSpeed3DType_initialize_w_params(
    P_LDM_Common_T_LinearSpeed3DType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_SpeedInMetresPerSecType_initialize_w_params(&sample->A_xSpeed,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_SpeedInMetresPerSecType_initialize_w_params(&sample->A_ySpeed,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_SpeedInMetresPerSecType_initialize_w_params(&sample->A_zSpeed,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_LinearSpeed3DType_finalize(
    P_LDM_Common_T_LinearSpeed3DType* sample)
{

    P_LDM_Common_T_LinearSpeed3DType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_LinearSpeed3DType_finalize_ex(
    P_LDM_Common_T_LinearSpeed3DType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_LinearSpeed3DType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_LinearSpeed3DType_finalize_w_params(
    P_LDM_Common_T_LinearSpeed3DType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_SpeedInMetresPerSecType_finalize_w_params(&sample->A_xSpeed,deallocParams);

    P_LDM_Common_T_SpeedInMetresPerSecType_finalize_w_params(&sample->A_ySpeed,deallocParams);

    P_LDM_Common_T_SpeedInMetresPerSecType_finalize_w_params(&sample->A_zSpeed,deallocParams);

}

void P_LDM_Common_T_LinearSpeed3DType_finalize_optional_members(
    P_LDM_Common_T_LinearSpeed3DType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_SpeedInMetresPerSecType_finalize_optional_members(&sample->A_xSpeed, deallocParams->delete_pointers);
    P_LDM_Common_T_SpeedInMetresPerSecType_finalize_optional_members(&sample->A_ySpeed, deallocParams->delete_pointers);
    P_LDM_Common_T_SpeedInMetresPerSecType_finalize_optional_members(&sample->A_zSpeed, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_LinearSpeed3DType_copy(
    P_LDM_Common_T_LinearSpeed3DType* dst,
    const P_LDM_Common_T_LinearSpeed3DType* src)
{

    if (!P_LDM_Common_T_SpeedInMetresPerSecType_copy(
        &dst->A_xSpeed, &src->A_xSpeed)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_SpeedInMetresPerSecType_copy(
        &dst->A_ySpeed, &src->A_ySpeed)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_SpeedInMetresPerSecType_copy(
        &dst->A_zSpeed, &src->A_zSpeed)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_LinearSpeed3DType' sequence class.
*/
#define T P_LDM_Common_T_LinearSpeed3DType
#define TSeq P_LDM_Common_T_LinearSpeed3DTypeSeq
#define T_initialize_w_params P_LDM_Common_T_LinearSpeed3DType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_LinearSpeed3DType_finalize_w_params
#define T_copy       P_LDM_Common_T_LinearSpeed3DType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *P_LDM_Common_T_LinearOffsetTypeTYPENAME = "P_LDM_Common::T_LinearOffsetType";

DDS_TypeCode* P_LDM_Common_T_LinearOffsetType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_LDM_Common_T_LinearOffsetType_g_tc_members[3]=
    {

        {
            (char *)"A_xOffset",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_yOffset",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_zOffset",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode P_LDM_Common_T_LinearOffsetType_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_LDM_Common::T_LinearOffsetType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            P_LDM_Common_T_LinearOffsetType_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_LDM_Common_T_LinearOffsetType*/

    if (is_initialized) {
        return &P_LDM_Common_T_LinearOffsetType_g_tc;
    }

    P_LDM_Common_T_LinearOffsetType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_DistanceInMetresType_get_typecode();

    P_LDM_Common_T_LinearOffsetType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_DistanceInMetresType_get_typecode();

    P_LDM_Common_T_LinearOffsetType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_DistanceInMetresType_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_LinearOffsetType_g_tc;
}

RTIBool P_LDM_Common_T_LinearOffsetType_initialize(
    P_LDM_Common_T_LinearOffsetType* sample) {
    return P_LDM_Common_T_LinearOffsetType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_LinearOffsetType_initialize_ex(
    P_LDM_Common_T_LinearOffsetType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_LinearOffsetType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_LinearOffsetType_initialize_w_params(
    P_LDM_Common_T_LinearOffsetType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_DistanceInMetresType_initialize_w_params(&sample->A_xOffset,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_DistanceInMetresType_initialize_w_params(&sample->A_yOffset,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_DistanceInMetresType_initialize_w_params(&sample->A_zOffset,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_LinearOffsetType_finalize(
    P_LDM_Common_T_LinearOffsetType* sample)
{

    P_LDM_Common_T_LinearOffsetType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_LinearOffsetType_finalize_ex(
    P_LDM_Common_T_LinearOffsetType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_LinearOffsetType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_LinearOffsetType_finalize_w_params(
    P_LDM_Common_T_LinearOffsetType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_DistanceInMetresType_finalize_w_params(&sample->A_xOffset,deallocParams);

    P_LDM_Common_T_DistanceInMetresType_finalize_w_params(&sample->A_yOffset,deallocParams);

    P_LDM_Common_T_DistanceInMetresType_finalize_w_params(&sample->A_zOffset,deallocParams);

}

void P_LDM_Common_T_LinearOffsetType_finalize_optional_members(
    P_LDM_Common_T_LinearOffsetType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_DistanceInMetresType_finalize_optional_members(&sample->A_xOffset, deallocParams->delete_pointers);
    P_LDM_Common_T_DistanceInMetresType_finalize_optional_members(&sample->A_yOffset, deallocParams->delete_pointers);
    P_LDM_Common_T_DistanceInMetresType_finalize_optional_members(&sample->A_zOffset, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_LinearOffsetType_copy(
    P_LDM_Common_T_LinearOffsetType* dst,
    const P_LDM_Common_T_LinearOffsetType* src)
{

    if (!P_LDM_Common_T_DistanceInMetresType_copy(
        &dst->A_xOffset, &src->A_xOffset)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_DistanceInMetresType_copy(
        &dst->A_yOffset, &src->A_yOffset)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_DistanceInMetresType_copy(
        &dst->A_zOffset, &src->A_zOffset)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_LinearOffsetType' sequence class.
*/
#define T P_LDM_Common_T_LinearOffsetType
#define TSeq P_LDM_Common_T_LinearOffsetTypeSeq
#define T_initialize_w_params P_LDM_Common_T_LinearOffsetType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_LinearOffsetType_finalize_w_params
#define T_copy       P_LDM_Common_T_LinearOffsetType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_BearingType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_BearingType_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_BearingType", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_BearingType */

    if (is_initialized) {
        return &P_LDM_Common_T_BearingType_g_tc;
    }

    P_LDM_Common_T_BearingType_g_tc._data._typeCode =  (RTICdrTypeCode *)P_LDM_Common_T_AngleInRadiansType_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_BearingType_g_tc;
}

RTIBool P_LDM_Common_T_BearingType_initialize(
    P_LDM_Common_T_BearingType* sample) {
    return P_LDM_Common_T_BearingType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_BearingType_initialize_ex(
    P_LDM_Common_T_BearingType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_BearingType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_BearingType_initialize_w_params(
    P_LDM_Common_T_BearingType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_AngleInRadiansType_initialize_w_params(sample,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_BearingType_finalize(
    P_LDM_Common_T_BearingType* sample)
{

    P_LDM_Common_T_BearingType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_BearingType_finalize_ex(
    P_LDM_Common_T_BearingType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_BearingType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_BearingType_finalize_w_params(
    P_LDM_Common_T_BearingType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_AngleInRadiansType_finalize_w_params(sample,deallocParams);

}

void P_LDM_Common_T_BearingType_finalize_optional_members(
    P_LDM_Common_T_BearingType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_AngleInRadiansType_finalize_optional_members(sample, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_BearingType_copy(
    P_LDM_Common_T_BearingType* dst,
    const P_LDM_Common_T_BearingType* src)
{

    if (!P_LDM_Common_T_AngleInRadiansType_copy(
        dst, src)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_BearingType' sequence class.
*/
#define T P_LDM_Common_T_BearingType
#define TSeq P_LDM_Common_T_BearingTypeSeq
#define T_initialize_w_params P_LDM_Common_T_BearingType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_BearingType_finalize_w_params
#define T_copy       P_LDM_Common_T_BearingType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_VolumeInCubicMetresType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_VolumeInCubicMetresType_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_VolumeInCubicMetresType", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_VolumeInCubicMetresType */

    if (is_initialized) {
        return &P_LDM_Common_T_VolumeInCubicMetresType_g_tc;
    }

    P_LDM_Common_T_VolumeInCubicMetresType_g_tc._data._typeCode =  (RTICdrTypeCode *)P_LDM_Common_T_Double_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_VolumeInCubicMetresType_g_tc;
}

RTIBool P_LDM_Common_T_VolumeInCubicMetresType_initialize(
    P_LDM_Common_T_VolumeInCubicMetresType* sample) {
    return P_LDM_Common_T_VolumeInCubicMetresType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_VolumeInCubicMetresType_initialize_ex(
    P_LDM_Common_T_VolumeInCubicMetresType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_VolumeInCubicMetresType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_VolumeInCubicMetresType_initialize_w_params(
    P_LDM_Common_T_VolumeInCubicMetresType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_Double_initialize_w_params(sample,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_VolumeInCubicMetresType_finalize(
    P_LDM_Common_T_VolumeInCubicMetresType* sample)
{

    P_LDM_Common_T_VolumeInCubicMetresType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_VolumeInCubicMetresType_finalize_ex(
    P_LDM_Common_T_VolumeInCubicMetresType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_VolumeInCubicMetresType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_VolumeInCubicMetresType_finalize_w_params(
    P_LDM_Common_T_VolumeInCubicMetresType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_Double_finalize_w_params(sample,deallocParams);

}

void P_LDM_Common_T_VolumeInCubicMetresType_finalize_optional_members(
    P_LDM_Common_T_VolumeInCubicMetresType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_Double_finalize_optional_members(sample, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_VolumeInCubicMetresType_copy(
    P_LDM_Common_T_VolumeInCubicMetresType* dst,
    const P_LDM_Common_T_VolumeInCubicMetresType* src)
{

    if (!P_LDM_Common_T_Double_copy(
        dst, src)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_VolumeInCubicMetresType' sequence class.
*/
#define T P_LDM_Common_T_VolumeInCubicMetresType
#define TSeq P_LDM_Common_T_VolumeInCubicMetresTypeSeq
#define T_initialize_w_params P_LDM_Common_T_VolumeInCubicMetresType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_VolumeInCubicMetresType_finalize_w_params
#define T_copy       P_LDM_Common_T_VolumeInCubicMetresType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_VoltageInVoltsType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_VoltageInVoltsType_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_VoltageInVoltsType", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_VoltageInVoltsType */

    if (is_initialized) {
        return &P_LDM_Common_T_VoltageInVoltsType_g_tc;
    }

    P_LDM_Common_T_VoltageInVoltsType_g_tc._data._typeCode =  (RTICdrTypeCode *)P_LDM_Common_T_Double_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_VoltageInVoltsType_g_tc;
}

RTIBool P_LDM_Common_T_VoltageInVoltsType_initialize(
    P_LDM_Common_T_VoltageInVoltsType* sample) {
    return P_LDM_Common_T_VoltageInVoltsType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_VoltageInVoltsType_initialize_ex(
    P_LDM_Common_T_VoltageInVoltsType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_VoltageInVoltsType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_VoltageInVoltsType_initialize_w_params(
    P_LDM_Common_T_VoltageInVoltsType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_Double_initialize_w_params(sample,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_VoltageInVoltsType_finalize(
    P_LDM_Common_T_VoltageInVoltsType* sample)
{

    P_LDM_Common_T_VoltageInVoltsType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_VoltageInVoltsType_finalize_ex(
    P_LDM_Common_T_VoltageInVoltsType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_VoltageInVoltsType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_VoltageInVoltsType_finalize_w_params(
    P_LDM_Common_T_VoltageInVoltsType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_Double_finalize_w_params(sample,deallocParams);

}

void P_LDM_Common_T_VoltageInVoltsType_finalize_optional_members(
    P_LDM_Common_T_VoltageInVoltsType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_Double_finalize_optional_members(sample, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_VoltageInVoltsType_copy(
    P_LDM_Common_T_VoltageInVoltsType* dst,
    const P_LDM_Common_T_VoltageInVoltsType* src)
{

    if (!P_LDM_Common_T_Double_copy(
        dst, src)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_VoltageInVoltsType' sequence class.
*/
#define T P_LDM_Common_T_VoltageInVoltsType
#define TSeq P_LDM_Common_T_VoltageInVoltsTypeSeq
#define T_initialize_w_params P_LDM_Common_T_VoltageInVoltsType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_VoltageInVoltsType_finalize_w_params
#define T_copy       P_LDM_Common_T_VoltageInVoltsType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_TemperatureInDegreesKelvinType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_TemperatureInDegreesKelvinType_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_TemperatureInDegreesKelvinType", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_TemperatureInDegreesKelvinType */

    if (is_initialized) {
        return &P_LDM_Common_T_TemperatureInDegreesKelvinType_g_tc;
    }

    P_LDM_Common_T_TemperatureInDegreesKelvinType_g_tc._data._typeCode =  (RTICdrTypeCode *)P_LDM_Common_T_Double_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_TemperatureInDegreesKelvinType_g_tc;
}

RTIBool P_LDM_Common_T_TemperatureInDegreesKelvinType_initialize(
    P_LDM_Common_T_TemperatureInDegreesKelvinType* sample) {
    return P_LDM_Common_T_TemperatureInDegreesKelvinType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_TemperatureInDegreesKelvinType_initialize_ex(
    P_LDM_Common_T_TemperatureInDegreesKelvinType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_TemperatureInDegreesKelvinType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_TemperatureInDegreesKelvinType_initialize_w_params(
    P_LDM_Common_T_TemperatureInDegreesKelvinType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_Double_initialize_w_params(sample,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_TemperatureInDegreesKelvinType_finalize(
    P_LDM_Common_T_TemperatureInDegreesKelvinType* sample)
{

    P_LDM_Common_T_TemperatureInDegreesKelvinType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_TemperatureInDegreesKelvinType_finalize_ex(
    P_LDM_Common_T_TemperatureInDegreesKelvinType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_TemperatureInDegreesKelvinType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_TemperatureInDegreesKelvinType_finalize_w_params(
    P_LDM_Common_T_TemperatureInDegreesKelvinType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_Double_finalize_w_params(sample,deallocParams);

}

void P_LDM_Common_T_TemperatureInDegreesKelvinType_finalize_optional_members(
    P_LDM_Common_T_TemperatureInDegreesKelvinType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_Double_finalize_optional_members(sample, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_TemperatureInDegreesKelvinType_copy(
    P_LDM_Common_T_TemperatureInDegreesKelvinType* dst,
    const P_LDM_Common_T_TemperatureInDegreesKelvinType* src)
{

    if (!P_LDM_Common_T_Double_copy(
        dst, src)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_TemperatureInDegreesKelvinType' sequence class.
*/
#define T P_LDM_Common_T_TemperatureInDegreesKelvinType
#define TSeq P_LDM_Common_T_TemperatureInDegreesKelvinTypeSeq
#define T_initialize_w_params P_LDM_Common_T_TemperatureInDegreesKelvinType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_TemperatureInDegreesKelvinType_finalize_w_params
#define T_copy       P_LDM_Common_T_TemperatureInDegreesKelvinType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *P_LDM_Common_T_LinearVelocity2DTypeTYPENAME = "P_LDM_Common::T_LinearVelocity2DType";

DDS_TypeCode* P_LDM_Common_T_LinearVelocity2DType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_LDM_Common_T_LinearVelocity2DType_g_tc_members[2]=
    {

        {
            (char *)"A_heading",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_speed",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode P_LDM_Common_T_LinearVelocity2DType_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_LDM_Common::T_LinearVelocity2DType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            P_LDM_Common_T_LinearVelocity2DType_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_LDM_Common_T_LinearVelocity2DType*/

    if (is_initialized) {
        return &P_LDM_Common_T_LinearVelocity2DType_g_tc;
    }

    P_LDM_Common_T_LinearVelocity2DType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_AngleInRadiansType_get_typecode();

    P_LDM_Common_T_LinearVelocity2DType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_SpeedInMetresPerSecType_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_LinearVelocity2DType_g_tc;
}

RTIBool P_LDM_Common_T_LinearVelocity2DType_initialize(
    P_LDM_Common_T_LinearVelocity2DType* sample) {
    return P_LDM_Common_T_LinearVelocity2DType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_LinearVelocity2DType_initialize_ex(
    P_LDM_Common_T_LinearVelocity2DType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_LinearVelocity2DType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_LinearVelocity2DType_initialize_w_params(
    P_LDM_Common_T_LinearVelocity2DType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_AngleInRadiansType_initialize_w_params(&sample->A_heading,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_SpeedInMetresPerSecType_initialize_w_params(&sample->A_speed,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_LinearVelocity2DType_finalize(
    P_LDM_Common_T_LinearVelocity2DType* sample)
{

    P_LDM_Common_T_LinearVelocity2DType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_LinearVelocity2DType_finalize_ex(
    P_LDM_Common_T_LinearVelocity2DType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_LinearVelocity2DType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_LinearVelocity2DType_finalize_w_params(
    P_LDM_Common_T_LinearVelocity2DType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_AngleInRadiansType_finalize_w_params(&sample->A_heading,deallocParams);

    P_LDM_Common_T_SpeedInMetresPerSecType_finalize_w_params(&sample->A_speed,deallocParams);

}

void P_LDM_Common_T_LinearVelocity2DType_finalize_optional_members(
    P_LDM_Common_T_LinearVelocity2DType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_AngleInRadiansType_finalize_optional_members(&sample->A_heading, deallocParams->delete_pointers);
    P_LDM_Common_T_SpeedInMetresPerSecType_finalize_optional_members(&sample->A_speed, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_LinearVelocity2DType_copy(
    P_LDM_Common_T_LinearVelocity2DType* dst,
    const P_LDM_Common_T_LinearVelocity2DType* src)
{

    if (!P_LDM_Common_T_AngleInRadiansType_copy(
        &dst->A_heading, &src->A_heading)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_SpeedInMetresPerSecType_copy(
        &dst->A_speed, &src->A_speed)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_LinearVelocity2DType' sequence class.
*/
#define T P_LDM_Common_T_LinearVelocity2DType
#define TSeq P_LDM_Common_T_LinearVelocity2DTypeSeq
#define T_initialize_w_params P_LDM_Common_T_LinearVelocity2DType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_LinearVelocity2DType_finalize_w_params
#define T_copy       P_LDM_Common_T_LinearVelocity2DType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_PressureInPascalType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_PressureInPascalType_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_PressureInPascalType", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_PressureInPascalType */

    if (is_initialized) {
        return &P_LDM_Common_T_PressureInPascalType_g_tc;
    }

    P_LDM_Common_T_PressureInPascalType_g_tc._data._typeCode =  (RTICdrTypeCode *)P_LDM_Common_T_Double_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_PressureInPascalType_g_tc;
}

RTIBool P_LDM_Common_T_PressureInPascalType_initialize(
    P_LDM_Common_T_PressureInPascalType* sample) {
    return P_LDM_Common_T_PressureInPascalType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_PressureInPascalType_initialize_ex(
    P_LDM_Common_T_PressureInPascalType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_PressureInPascalType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_PressureInPascalType_initialize_w_params(
    P_LDM_Common_T_PressureInPascalType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_Double_initialize_w_params(sample,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_PressureInPascalType_finalize(
    P_LDM_Common_T_PressureInPascalType* sample)
{

    P_LDM_Common_T_PressureInPascalType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_PressureInPascalType_finalize_ex(
    P_LDM_Common_T_PressureInPascalType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_PressureInPascalType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_PressureInPascalType_finalize_w_params(
    P_LDM_Common_T_PressureInPascalType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_Double_finalize_w_params(sample,deallocParams);

}

void P_LDM_Common_T_PressureInPascalType_finalize_optional_members(
    P_LDM_Common_T_PressureInPascalType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_Double_finalize_optional_members(sample, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_PressureInPascalType_copy(
    P_LDM_Common_T_PressureInPascalType* dst,
    const P_LDM_Common_T_PressureInPascalType* src)
{

    if (!P_LDM_Common_T_Double_copy(
        dst, src)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_PressureInPascalType' sequence class.
*/
#define T P_LDM_Common_T_PressureInPascalType
#define TSeq P_LDM_Common_T_PressureInPascalTypeSeq
#define T_initialize_w_params P_LDM_Common_T_PressureInPascalType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_PressureInPascalType_finalize_w_params
#define T_copy       P_LDM_Common_T_PressureInPascalType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_PowerInWattsType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_PowerInWattsType_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_PowerInWattsType", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_PowerInWattsType */

    if (is_initialized) {
        return &P_LDM_Common_T_PowerInWattsType_g_tc;
    }

    P_LDM_Common_T_PowerInWattsType_g_tc._data._typeCode =  (RTICdrTypeCode *)P_LDM_Common_T_Double_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_PowerInWattsType_g_tc;
}

RTIBool P_LDM_Common_T_PowerInWattsType_initialize(
    P_LDM_Common_T_PowerInWattsType* sample) {
    return P_LDM_Common_T_PowerInWattsType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_PowerInWattsType_initialize_ex(
    P_LDM_Common_T_PowerInWattsType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_PowerInWattsType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_PowerInWattsType_initialize_w_params(
    P_LDM_Common_T_PowerInWattsType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_Double_initialize_w_params(sample,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_PowerInWattsType_finalize(
    P_LDM_Common_T_PowerInWattsType* sample)
{

    P_LDM_Common_T_PowerInWattsType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_PowerInWattsType_finalize_ex(
    P_LDM_Common_T_PowerInWattsType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_PowerInWattsType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_PowerInWattsType_finalize_w_params(
    P_LDM_Common_T_PowerInWattsType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_Double_finalize_w_params(sample,deallocParams);

}

void P_LDM_Common_T_PowerInWattsType_finalize_optional_members(
    P_LDM_Common_T_PowerInWattsType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_Double_finalize_optional_members(sample, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_PowerInWattsType_copy(
    P_LDM_Common_T_PowerInWattsType* dst,
    const P_LDM_Common_T_PowerInWattsType* src)
{

    if (!P_LDM_Common_T_Double_copy(
        dst, src)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_PowerInWattsType' sequence class.
*/
#define T P_LDM_Common_T_PowerInWattsType
#define TSeq P_LDM_Common_T_PowerInWattsTypeSeq
#define T_initialize_w_params P_LDM_Common_T_PowerInWattsType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_PowerInWattsType_finalize_w_params
#define T_copy       P_LDM_Common_T_PowerInWattsType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_PercentageType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_PercentageType_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_PercentageType", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_PercentageType */

    if (is_initialized) {
        return &P_LDM_Common_T_PercentageType_g_tc;
    }

    P_LDM_Common_T_PercentageType_g_tc._data._typeCode =  (RTICdrTypeCode *)P_LDM_Common_T_Double_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_PercentageType_g_tc;
}

RTIBool P_LDM_Common_T_PercentageType_initialize(
    P_LDM_Common_T_PercentageType* sample) {
    return P_LDM_Common_T_PercentageType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_PercentageType_initialize_ex(
    P_LDM_Common_T_PercentageType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_PercentageType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_PercentageType_initialize_w_params(
    P_LDM_Common_T_PercentageType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_Double_initialize_w_params(sample,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_PercentageType_finalize(
    P_LDM_Common_T_PercentageType* sample)
{

    P_LDM_Common_T_PercentageType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_PercentageType_finalize_ex(
    P_LDM_Common_T_PercentageType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_PercentageType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_PercentageType_finalize_w_params(
    P_LDM_Common_T_PercentageType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_Double_finalize_w_params(sample,deallocParams);

}

void P_LDM_Common_T_PercentageType_finalize_optional_members(
    P_LDM_Common_T_PercentageType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_Double_finalize_optional_members(sample, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_PercentageType_copy(
    P_LDM_Common_T_PercentageType* dst,
    const P_LDM_Common_T_PercentageType* src)
{

    if (!P_LDM_Common_T_Double_copy(
        dst, src)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_PercentageType' sequence class.
*/
#define T P_LDM_Common_T_PercentageType
#define TSeq P_LDM_Common_T_PercentageTypeSeq
#define T_initialize_w_params P_LDM_Common_T_PercentageType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_PercentageType_finalize_w_params
#define T_copy       P_LDM_Common_T_PercentageType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_ChargeInCoulombsType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_ChargeInCoulombsType_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_ChargeInCoulombsType", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_ChargeInCoulombsType */

    if (is_initialized) {
        return &P_LDM_Common_T_ChargeInCoulombsType_g_tc;
    }

    P_LDM_Common_T_ChargeInCoulombsType_g_tc._data._typeCode =  (RTICdrTypeCode *)P_LDM_Common_T_Double_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_ChargeInCoulombsType_g_tc;
}

RTIBool P_LDM_Common_T_ChargeInCoulombsType_initialize(
    P_LDM_Common_T_ChargeInCoulombsType* sample) {
    return P_LDM_Common_T_ChargeInCoulombsType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_ChargeInCoulombsType_initialize_ex(
    P_LDM_Common_T_ChargeInCoulombsType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_ChargeInCoulombsType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_ChargeInCoulombsType_initialize_w_params(
    P_LDM_Common_T_ChargeInCoulombsType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_Double_initialize_w_params(sample,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_ChargeInCoulombsType_finalize(
    P_LDM_Common_T_ChargeInCoulombsType* sample)
{

    P_LDM_Common_T_ChargeInCoulombsType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_ChargeInCoulombsType_finalize_ex(
    P_LDM_Common_T_ChargeInCoulombsType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_ChargeInCoulombsType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_ChargeInCoulombsType_finalize_w_params(
    P_LDM_Common_T_ChargeInCoulombsType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_Double_finalize_w_params(sample,deallocParams);

}

void P_LDM_Common_T_ChargeInCoulombsType_finalize_optional_members(
    P_LDM_Common_T_ChargeInCoulombsType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_Double_finalize_optional_members(sample, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_ChargeInCoulombsType_copy(
    P_LDM_Common_T_ChargeInCoulombsType* dst,
    const P_LDM_Common_T_ChargeInCoulombsType* src)
{

    if (!P_LDM_Common_T_Double_copy(
        dst, src)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_ChargeInCoulombsType' sequence class.
*/
#define T P_LDM_Common_T_ChargeInCoulombsType
#define TSeq P_LDM_Common_T_ChargeInCoulombsTypeSeq
#define T_initialize_w_params P_LDM_Common_T_ChargeInCoulombsType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_ChargeInCoulombsType_finalize_w_params
#define T_copy       P_LDM_Common_T_ChargeInCoulombsType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_FrequencyInHertzType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_FrequencyInHertzType_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_FrequencyInHertzType", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_FrequencyInHertzType */

    if (is_initialized) {
        return &P_LDM_Common_T_FrequencyInHertzType_g_tc;
    }

    P_LDM_Common_T_FrequencyInHertzType_g_tc._data._typeCode =  (RTICdrTypeCode *)P_LDM_Common_T_Double_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_FrequencyInHertzType_g_tc;
}

RTIBool P_LDM_Common_T_FrequencyInHertzType_initialize(
    P_LDM_Common_T_FrequencyInHertzType* sample) {
    return P_LDM_Common_T_FrequencyInHertzType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_FrequencyInHertzType_initialize_ex(
    P_LDM_Common_T_FrequencyInHertzType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_FrequencyInHertzType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_FrequencyInHertzType_initialize_w_params(
    P_LDM_Common_T_FrequencyInHertzType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_Double_initialize_w_params(sample,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_FrequencyInHertzType_finalize(
    P_LDM_Common_T_FrequencyInHertzType* sample)
{

    P_LDM_Common_T_FrequencyInHertzType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_FrequencyInHertzType_finalize_ex(
    P_LDM_Common_T_FrequencyInHertzType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_FrequencyInHertzType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_FrequencyInHertzType_finalize_w_params(
    P_LDM_Common_T_FrequencyInHertzType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_Double_finalize_w_params(sample,deallocParams);

}

void P_LDM_Common_T_FrequencyInHertzType_finalize_optional_members(
    P_LDM_Common_T_FrequencyInHertzType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_Double_finalize_optional_members(sample, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_FrequencyInHertzType_copy(
    P_LDM_Common_T_FrequencyInHertzType* dst,
    const P_LDM_Common_T_FrequencyInHertzType* src)
{

    if (!P_LDM_Common_T_Double_copy(
        dst, src)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_FrequencyInHertzType' sequence class.
*/
#define T P_LDM_Common_T_FrequencyInHertzType
#define TSeq P_LDM_Common_T_FrequencyInHertzTypeSeq
#define T_initialize_w_params P_LDM_Common_T_FrequencyInHertzType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_FrequencyInHertzType_finalize_w_params
#define T_copy       P_LDM_Common_T_FrequencyInHertzType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_FlowRateInCubicMetresPerSecType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_FlowRateInCubicMetresPerSecType_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_FlowRateInCubicMetresPerSecType", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_FlowRateInCubicMetresPerSecType */

    if (is_initialized) {
        return &P_LDM_Common_T_FlowRateInCubicMetresPerSecType_g_tc;
    }

    P_LDM_Common_T_FlowRateInCubicMetresPerSecType_g_tc._data._typeCode =  (RTICdrTypeCode *)P_LDM_Common_T_Double_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_FlowRateInCubicMetresPerSecType_g_tc;
}

RTIBool P_LDM_Common_T_FlowRateInCubicMetresPerSecType_initialize(
    P_LDM_Common_T_FlowRateInCubicMetresPerSecType* sample) {
    return P_LDM_Common_T_FlowRateInCubicMetresPerSecType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_FlowRateInCubicMetresPerSecType_initialize_ex(
    P_LDM_Common_T_FlowRateInCubicMetresPerSecType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_FlowRateInCubicMetresPerSecType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_FlowRateInCubicMetresPerSecType_initialize_w_params(
    P_LDM_Common_T_FlowRateInCubicMetresPerSecType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_Double_initialize_w_params(sample,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_FlowRateInCubicMetresPerSecType_finalize(
    P_LDM_Common_T_FlowRateInCubicMetresPerSecType* sample)
{

    P_LDM_Common_T_FlowRateInCubicMetresPerSecType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_FlowRateInCubicMetresPerSecType_finalize_ex(
    P_LDM_Common_T_FlowRateInCubicMetresPerSecType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_FlowRateInCubicMetresPerSecType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_FlowRateInCubicMetresPerSecType_finalize_w_params(
    P_LDM_Common_T_FlowRateInCubicMetresPerSecType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_Double_finalize_w_params(sample,deallocParams);

}

void P_LDM_Common_T_FlowRateInCubicMetresPerSecType_finalize_optional_members(
    P_LDM_Common_T_FlowRateInCubicMetresPerSecType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_Double_finalize_optional_members(sample, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_FlowRateInCubicMetresPerSecType_copy(
    P_LDM_Common_T_FlowRateInCubicMetresPerSecType* dst,
    const P_LDM_Common_T_FlowRateInCubicMetresPerSecType* src)
{

    if (!P_LDM_Common_T_Double_copy(
        dst, src)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_FlowRateInCubicMetresPerSecType' sequence class.
*/
#define T P_LDM_Common_T_FlowRateInCubicMetresPerSecType
#define TSeq P_LDM_Common_T_FlowRateInCubicMetresPerSecTypeSeq
#define T_initialize_w_params P_LDM_Common_T_FlowRateInCubicMetresPerSecType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_FlowRateInCubicMetresPerSecType_finalize_w_params
#define T_copy       P_LDM_Common_T_FlowRateInCubicMetresPerSecType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *P_LDM_Common_T_Coordinate3DTypeTYPENAME = "P_LDM_Common::T_Coordinate3DType";

DDS_TypeCode* P_LDM_Common_T_Coordinate3DType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_LDM_Common_T_Coordinate3DType_g_tc_members[3]=
    {

        {
            (char *)"A_altitude",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_latitude",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_longitude",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode P_LDM_Common_T_Coordinate3DType_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_LDM_Common::T_Coordinate3DType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            P_LDM_Common_T_Coordinate3DType_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_LDM_Common_T_Coordinate3DType*/

    if (is_initialized) {
        return &P_LDM_Common_T_Coordinate3DType_g_tc;
    }

    P_LDM_Common_T_Coordinate3DType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_AltitudeType_get_typecode();

    P_LDM_Common_T_Coordinate3DType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_LatitudeType_get_typecode();

    P_LDM_Common_T_Coordinate3DType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_LongitudeType_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_Coordinate3DType_g_tc;
}

RTIBool P_LDM_Common_T_Coordinate3DType_initialize(
    P_LDM_Common_T_Coordinate3DType* sample) {
    return P_LDM_Common_T_Coordinate3DType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_Coordinate3DType_initialize_ex(
    P_LDM_Common_T_Coordinate3DType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_Coordinate3DType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_Coordinate3DType_initialize_w_params(
    P_LDM_Common_T_Coordinate3DType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_AltitudeType_initialize_w_params(&sample->A_altitude,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_LatitudeType_initialize_w_params(&sample->A_latitude,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_LongitudeType_initialize_w_params(&sample->A_longitude,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_Coordinate3DType_finalize(
    P_LDM_Common_T_Coordinate3DType* sample)
{

    P_LDM_Common_T_Coordinate3DType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_Coordinate3DType_finalize_ex(
    P_LDM_Common_T_Coordinate3DType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_Coordinate3DType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_Coordinate3DType_finalize_w_params(
    P_LDM_Common_T_Coordinate3DType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_AltitudeType_finalize_w_params(&sample->A_altitude,deallocParams);

    P_LDM_Common_T_LatitudeType_finalize_w_params(&sample->A_latitude,deallocParams);

    P_LDM_Common_T_LongitudeType_finalize_w_params(&sample->A_longitude,deallocParams);

}

void P_LDM_Common_T_Coordinate3DType_finalize_optional_members(
    P_LDM_Common_T_Coordinate3DType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_AltitudeType_finalize_optional_members(&sample->A_altitude, deallocParams->delete_pointers);
    P_LDM_Common_T_LatitudeType_finalize_optional_members(&sample->A_latitude, deallocParams->delete_pointers);
    P_LDM_Common_T_LongitudeType_finalize_optional_members(&sample->A_longitude, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_Coordinate3DType_copy(
    P_LDM_Common_T_Coordinate3DType* dst,
    const P_LDM_Common_T_Coordinate3DType* src)
{

    if (!P_LDM_Common_T_AltitudeType_copy(
        &dst->A_altitude, &src->A_altitude)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_LatitudeType_copy(
        &dst->A_latitude, &src->A_latitude)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_LongitudeType_copy(
        &dst->A_longitude, &src->A_longitude)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_Coordinate3DType' sequence class.
*/
#define T P_LDM_Common_T_Coordinate3DType
#define TSeq P_LDM_Common_T_Coordinate3DTypeSeq
#define T_initialize_w_params P_LDM_Common_T_Coordinate3DType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_Coordinate3DType_finalize_w_params
#define T_copy       P_LDM_Common_T_Coordinate3DType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */

DDS_TypeCode* P_LDM_Common_T_CurrentInAmpsType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_LDM_Common_T_CurrentInAmpsType_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"P_LDM_Common::T_CurrentInAmpsType", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE /* Ignored */
        }}; /* Type code for  P_LDM_Common_T_CurrentInAmpsType */

    if (is_initialized) {
        return &P_LDM_Common_T_CurrentInAmpsType_g_tc;
    }

    P_LDM_Common_T_CurrentInAmpsType_g_tc._data._typeCode =  (RTICdrTypeCode *)P_LDM_Common_T_Double_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_CurrentInAmpsType_g_tc;
}

RTIBool P_LDM_Common_T_CurrentInAmpsType_initialize(
    P_LDM_Common_T_CurrentInAmpsType* sample) {
    return P_LDM_Common_T_CurrentInAmpsType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_LDM_Common_T_CurrentInAmpsType_initialize_ex(
    P_LDM_Common_T_CurrentInAmpsType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_CurrentInAmpsType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_CurrentInAmpsType_initialize_w_params(
    P_LDM_Common_T_CurrentInAmpsType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_Double_initialize_w_params(sample,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_LDM_Common_T_CurrentInAmpsType_finalize(
    P_LDM_Common_T_CurrentInAmpsType* sample)
{

    P_LDM_Common_T_CurrentInAmpsType_finalize_ex(sample,RTI_TRUE);
}

void P_LDM_Common_T_CurrentInAmpsType_finalize_ex(
    P_LDM_Common_T_CurrentInAmpsType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_CurrentInAmpsType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_CurrentInAmpsType_finalize_w_params(
    P_LDM_Common_T_CurrentInAmpsType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_Double_finalize_w_params(sample,deallocParams);

}

void P_LDM_Common_T_CurrentInAmpsType_finalize_optional_members(
    P_LDM_Common_T_CurrentInAmpsType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

    P_LDM_Common_T_Double_finalize_optional_members(sample, deallocParams->delete_pointers);
}

RTIBool P_LDM_Common_T_CurrentInAmpsType_copy(
    P_LDM_Common_T_CurrentInAmpsType* dst,
    const P_LDM_Common_T_CurrentInAmpsType* src)
{

    if (!P_LDM_Common_T_Double_copy(
        dst, src)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_CurrentInAmpsType' sequence class.
*/
#define T P_LDM_Common_T_CurrentInAmpsType
#define TSeq P_LDM_Common_T_CurrentInAmpsTypeSeq
#define T_initialize_w_params P_LDM_Common_T_CurrentInAmpsType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_CurrentInAmpsType_finalize_w_params
#define T_copy       P_LDM_Common_T_CurrentInAmpsType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

/* ========================================================================= */
const char *P_LDM_Common_T_CommandResponseTypeTYPENAME = "P_LDM_Common::T_CommandResponseType";

DDS_TypeCode* P_LDM_Common_T_CommandResponseType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_LDM_Common_T_CommandResponseType_g_tc_members[4]=
    {

        {
            (char *)"L_CommandResponseType_Command_Failed",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            L_CommandResponseType_Command_Failed, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"L_CommandResponseType_Command_Not_Available",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            L_CommandResponseType_Command_Not_Available, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"L_CommandResponseType_Command_Not_Recognised",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            L_CommandResponseType_Command_Not_Recognised, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"L_CommandResponseType_Resource_Control_Failure",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            L_CommandResponseType_Resource_Control_Failure, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode P_LDM_Common_T_CommandResponseType_g_tc =
    {{
            DDS_TK_ENUM,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_LDM_Common::T_CommandResponseType", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            4, /* Number of members */
            P_LDM_Common_T_CommandResponseType_g_tc_members, /* Members */
            DDS_VM_NONE   /* Type Modifier */        
        }}; /* Type code for P_LDM_Common_T_CommandResponseType*/

    if (is_initialized) {
        return &P_LDM_Common_T_CommandResponseType_g_tc;
    }

    is_initialized = RTI_TRUE;

    return &P_LDM_Common_T_CommandResponseType_g_tc;
}

RTIBool P_LDM_Common_T_CommandResponseType_initialize(
    P_LDM_Common_T_CommandResponseType* sample) {
    *sample = L_CommandResponseType_Command_Failed;
    return RTI_TRUE;
}

RTIBool P_LDM_Common_T_CommandResponseType_initialize_ex(
    P_LDM_Common_T_CommandResponseType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_LDM_Common_T_CommandResponseType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_LDM_Common_T_CommandResponseType_initialize_w_params(
    P_LDM_Common_T_CommandResponseType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */
    *sample = L_CommandResponseType_Command_Failed;
    return RTI_TRUE;
}

void P_LDM_Common_T_CommandResponseType_finalize(
    P_LDM_Common_T_CommandResponseType* sample)
{

    if (sample==NULL) {
        return;
    }
}

void P_LDM_Common_T_CommandResponseType_finalize_ex(
    P_LDM_Common_T_CommandResponseType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_LDM_Common_T_CommandResponseType_finalize_w_params(
        sample,&deallocParams);
}

void P_LDM_Common_T_CommandResponseType_finalize_w_params(
    P_LDM_Common_T_CommandResponseType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void P_LDM_Common_T_CommandResponseType_finalize_optional_members(
    P_LDM_Common_T_CommandResponseType* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool P_LDM_Common_T_CommandResponseType_copy(
    P_LDM_Common_T_CommandResponseType* dst,
    const P_LDM_Common_T_CommandResponseType* src)
{

    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_LDM_Common_T_CommandResponseType' sequence class.
*/
#define T P_LDM_Common_T_CommandResponseType
#define TSeq P_LDM_Common_T_CommandResponseTypeSeq
#define T_initialize_w_params P_LDM_Common_T_CommandResponseType_initialize_w_params
#define T_finalize_w_params   P_LDM_Common_T_CommandResponseType_finalize_w_params
#define T_copy       P_LDM_Common_T_CommandResponseType_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T

