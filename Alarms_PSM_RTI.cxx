

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Alarms_PSM_RTI.idl using "rtiddsgen".
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

#include "Alarms_PSM_RTI.h"

#include "LDM_CommonPlugin.h"
#include "LDM_Common.h"
#include "LDM_CommonSupport.h"

/* ========================================================================= */
const char *P_Alarms_PSM_T_Actual_Alarm_StateTypeTYPENAME = "P_Alarms_PSM::T_Actual_Alarm_StateType";

DDS_TypeCode* P_Alarms_PSM_T_Actual_Alarm_StateType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_Alarms_PSM_T_Actual_Alarm_StateType_g_tc_members[5]=
    {

        {
            (char *)"L_Actual_Alarm_StateType_Unacknowledged",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            L_Actual_Alarm_StateType_Unacknowledged, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"L_Actual_Alarm_StateType_Acknowledged",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            L_Actual_Alarm_StateType_Acknowledged, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"L_Actual_Alarm_StateType_Resolved",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            L_Actual_Alarm_StateType_Resolved, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"L_Actual_Alarm_StateType_Destroyed",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            L_Actual_Alarm_StateType_Destroyed, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"L_Actual_Alarm_StateType_Cleared",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            L_Actual_Alarm_StateType_Cleared, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode P_Alarms_PSM_T_Actual_Alarm_StateType_g_tc =
    {{
            DDS_TK_ENUM,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_Alarms_PSM::T_Actual_Alarm_StateType", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            5, /* Number of members */
            P_Alarms_PSM_T_Actual_Alarm_StateType_g_tc_members, /* Members */
            DDS_VM_NONE   /* Type Modifier */        
        }}; /* Type code for P_Alarms_PSM_T_Actual_Alarm_StateType*/

    if (is_initialized) {
        return &P_Alarms_PSM_T_Actual_Alarm_StateType_g_tc;
    }

    is_initialized = RTI_TRUE;

    return &P_Alarms_PSM_T_Actual_Alarm_StateType_g_tc;
}

RTIBool P_Alarms_PSM_T_Actual_Alarm_StateType_initialize(
    P_Alarms_PSM_T_Actual_Alarm_StateType* sample) {
    *sample = L_Actual_Alarm_StateType_Unacknowledged;
    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_T_Actual_Alarm_StateType_initialize_ex(
    P_Alarms_PSM_T_Actual_Alarm_StateType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_Alarms_PSM_T_Actual_Alarm_StateType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_Alarms_PSM_T_Actual_Alarm_StateType_initialize_w_params(
    P_Alarms_PSM_T_Actual_Alarm_StateType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */
    *sample = L_Actual_Alarm_StateType_Unacknowledged;
    return RTI_TRUE;
}

void P_Alarms_PSM_T_Actual_Alarm_StateType_finalize(
    P_Alarms_PSM_T_Actual_Alarm_StateType* sample)
{

    if (sample==NULL) {
        return;
    }
}

void P_Alarms_PSM_T_Actual_Alarm_StateType_finalize_ex(
    P_Alarms_PSM_T_Actual_Alarm_StateType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_Alarms_PSM_T_Actual_Alarm_StateType_finalize_w_params(
        sample,&deallocParams);
}

void P_Alarms_PSM_T_Actual_Alarm_StateType_finalize_w_params(
    P_Alarms_PSM_T_Actual_Alarm_StateType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void P_Alarms_PSM_T_Actual_Alarm_StateType_finalize_optional_members(
    P_Alarms_PSM_T_Actual_Alarm_StateType* sample, RTIBool deletePointers)
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

RTIBool P_Alarms_PSM_T_Actual_Alarm_StateType_copy(
    P_Alarms_PSM_T_Actual_Alarm_StateType* dst,
    const P_Alarms_PSM_T_Actual_Alarm_StateType* src)
{

    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_Alarms_PSM_T_Actual_Alarm_StateType' sequence class.
*/
#define T P_Alarms_PSM_T_Actual_Alarm_StateType
#define TSeq P_Alarms_PSM_T_Actual_Alarm_StateTypeSeq
#define T_initialize_w_params P_Alarms_PSM_T_Actual_Alarm_StateType_initialize_w_params
#define T_finalize_w_params   P_Alarms_PSM_T_Actual_Alarm_StateType_finalize_w_params
#define T_copy       P_Alarms_PSM_T_Actual_Alarm_StateType_copy

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
const char *P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypeTYPENAME = "P_Alarms_PSM::T_Alarm_Condition_Specification_StateType";

DDS_TypeCode* P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_g_tc_members[2]=
    {

        {
            (char *)"L_Alarm_Condition_Specification_StateType_condition_overridden",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            L_Alarm_Condition_Specification_StateType_condition_overridden, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"L_Alarm_Condition_Specification_StateType_condition_not_overridden",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            L_Alarm_Condition_Specification_StateType_condition_not_overridden, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_g_tc =
    {{
            DDS_TK_ENUM,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_Alarms_PSM::T_Alarm_Condition_Specification_StateType", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_g_tc_members, /* Members */
            DDS_VM_NONE   /* Type Modifier */        
        }}; /* Type code for P_Alarms_PSM_T_Alarm_Condition_Specification_StateType*/

    if (is_initialized) {
        return &P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_g_tc;
    }

    is_initialized = RTI_TRUE;

    return &P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_g_tc;
}

RTIBool P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_initialize(
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateType* sample) {
    *sample = L_Alarm_Condition_Specification_StateType_condition_overridden;
    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_initialize_ex(
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_initialize_w_params(
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */
    *sample = L_Alarm_Condition_Specification_StateType_condition_overridden;
    return RTI_TRUE;
}

void P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_finalize(
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateType* sample)
{

    if (sample==NULL) {
        return;
    }
}

void P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_finalize_ex(
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_finalize_w_params(
        sample,&deallocParams);
}

void P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_finalize_w_params(
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_finalize_optional_members(
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateType* sample, RTIBool deletePointers)
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

RTIBool P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_copy(
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateType* dst,
    const P_Alarms_PSM_T_Alarm_Condition_Specification_StateType* src)
{

    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_Alarms_PSM_T_Alarm_Condition_Specification_StateType' sequence class.
*/
#define T P_Alarms_PSM_T_Alarm_Condition_Specification_StateType
#define TSeq P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypeSeq
#define T_initialize_w_params P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_initialize_w_params
#define T_finalize_w_params   P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_finalize_w_params
#define T_copy       P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_copy

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
const char *P_Alarms_PSM_T_AlarmCategoryTypeTYPENAME = "P_Alarms_PSM::T_AlarmCategoryType";

DDS_TypeCode* P_Alarms_PSM_T_AlarmCategoryType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_Alarms_PSM_T_AlarmCategoryType_g_tc_members[3]=
    {

        {
            (char *)"L_AlarmCategoryType_Warning",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            L_AlarmCategoryType_Warning, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"L_AlarmCategoryType_Caution",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            L_AlarmCategoryType_Caution, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"L_AlarmCategoryType_Advisory",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            L_AlarmCategoryType_Advisory, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode P_Alarms_PSM_T_AlarmCategoryType_g_tc =
    {{
            DDS_TK_ENUM,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_Alarms_PSM::T_AlarmCategoryType", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            P_Alarms_PSM_T_AlarmCategoryType_g_tc_members, /* Members */
            DDS_VM_NONE   /* Type Modifier */        
        }}; /* Type code for P_Alarms_PSM_T_AlarmCategoryType*/

    if (is_initialized) {
        return &P_Alarms_PSM_T_AlarmCategoryType_g_tc;
    }

    is_initialized = RTI_TRUE;

    return &P_Alarms_PSM_T_AlarmCategoryType_g_tc;
}

RTIBool P_Alarms_PSM_T_AlarmCategoryType_initialize(
    P_Alarms_PSM_T_AlarmCategoryType* sample) {
    *sample = L_AlarmCategoryType_Warning;
    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_T_AlarmCategoryType_initialize_ex(
    P_Alarms_PSM_T_AlarmCategoryType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_Alarms_PSM_T_AlarmCategoryType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_Alarms_PSM_T_AlarmCategoryType_initialize_w_params(
    P_Alarms_PSM_T_AlarmCategoryType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */
    *sample = L_AlarmCategoryType_Warning;
    return RTI_TRUE;
}

void P_Alarms_PSM_T_AlarmCategoryType_finalize(
    P_Alarms_PSM_T_AlarmCategoryType* sample)
{

    if (sample==NULL) {
        return;
    }
}

void P_Alarms_PSM_T_AlarmCategoryType_finalize_ex(
    P_Alarms_PSM_T_AlarmCategoryType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_Alarms_PSM_T_AlarmCategoryType_finalize_w_params(
        sample,&deallocParams);
}

void P_Alarms_PSM_T_AlarmCategoryType_finalize_w_params(
    P_Alarms_PSM_T_AlarmCategoryType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void P_Alarms_PSM_T_AlarmCategoryType_finalize_optional_members(
    P_Alarms_PSM_T_AlarmCategoryType* sample, RTIBool deletePointers)
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

RTIBool P_Alarms_PSM_T_AlarmCategoryType_copy(
    P_Alarms_PSM_T_AlarmCategoryType* dst,
    const P_Alarms_PSM_T_AlarmCategoryType* src)
{

    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_Alarms_PSM_T_AlarmCategoryType' sequence class.
*/
#define T P_Alarms_PSM_T_AlarmCategoryType
#define TSeq P_Alarms_PSM_T_AlarmCategoryTypeSeq
#define T_initialize_w_params P_Alarms_PSM_T_AlarmCategoryType_initialize_w_params
#define T_finalize_w_params   P_Alarms_PSM_T_AlarmCategoryType_finalize_w_params
#define T_copy       P_Alarms_PSM_T_AlarmCategoryType_copy

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
const char *P_Alarms_PSM_T_MissionStateTypeTYPENAME = "P_Alarms_PSM::T_MissionStateType";

DDS_TypeCode* P_Alarms_PSM_T_MissionStateType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_Alarms_PSM_T_MissionStateType_g_tc_members[3]=
    {

        {
            (char *)"L_MissionStateType_Driving",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            L_MissionStateType_Driving, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"L_MissionStateType_Engagement",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            L_MissionStateType_Engagement, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"L_MissionStateType_Reconnaissance",/* Member name */
            {
                0, /* Ignored */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            L_MissionStateType_Reconnaissance, /* Enumerator ordinal */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode P_Alarms_PSM_T_MissionStateType_g_tc =
    {{
            DDS_TK_ENUM,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_Alarms_PSM::T_MissionStateType", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            P_Alarms_PSM_T_MissionStateType_g_tc_members, /* Members */
            DDS_VM_NONE   /* Type Modifier */        
        }}; /* Type code for P_Alarms_PSM_T_MissionStateType*/

    if (is_initialized) {
        return &P_Alarms_PSM_T_MissionStateType_g_tc;
    }

    is_initialized = RTI_TRUE;

    return &P_Alarms_PSM_T_MissionStateType_g_tc;
}

RTIBool P_Alarms_PSM_T_MissionStateType_initialize(
    P_Alarms_PSM_T_MissionStateType* sample) {
    *sample = L_MissionStateType_Driving;
    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_T_MissionStateType_initialize_ex(
    P_Alarms_PSM_T_MissionStateType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_Alarms_PSM_T_MissionStateType_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_Alarms_PSM_T_MissionStateType_initialize_w_params(
    P_Alarms_PSM_T_MissionStateType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */
    *sample = L_MissionStateType_Driving;
    return RTI_TRUE;
}

void P_Alarms_PSM_T_MissionStateType_finalize(
    P_Alarms_PSM_T_MissionStateType* sample)
{

    if (sample==NULL) {
        return;
    }
}

void P_Alarms_PSM_T_MissionStateType_finalize_ex(
    P_Alarms_PSM_T_MissionStateType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_Alarms_PSM_T_MissionStateType_finalize_w_params(
        sample,&deallocParams);
}

void P_Alarms_PSM_T_MissionStateType_finalize_w_params(
    P_Alarms_PSM_T_MissionStateType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

}

void P_Alarms_PSM_T_MissionStateType_finalize_optional_members(
    P_Alarms_PSM_T_MissionStateType* sample, RTIBool deletePointers)
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

RTIBool P_Alarms_PSM_T_MissionStateType_copy(
    P_Alarms_PSM_T_MissionStateType* dst,
    const P_Alarms_PSM_T_MissionStateType* src)
{

    return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_Alarms_PSM_T_MissionStateType' sequence class.
*/
#define T P_Alarms_PSM_T_MissionStateType
#define TSeq P_Alarms_PSM_T_MissionStateTypeSeq
#define T_initialize_w_params P_Alarms_PSM_T_MissionStateType_initialize_w_params
#define T_finalize_w_params   P_Alarms_PSM_T_MissionStateType_finalize_w_params
#define T_copy       P_Alarms_PSM_T_MissionStateType_copy

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
const char *P_Alarms_PSM_C_Crew_Role_In_Mission_StateTYPENAME = "P_Alarms_PSM::C_Crew_Role_In_Mission_State";

DDS_TypeCode* P_Alarms_PSM_C_Crew_Role_In_Mission_State_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_Alarms_PSM_C_Crew_Role_In_Mission_State_g_tc_A_relevantAlarmType_sourceID_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100),NULL);
    static DDS_TypeCode P_Alarms_PSM_C_Crew_Role_In_Mission_State_g_tc_A_missionState_sourceID_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100),NULL);
    static DDS_TypeCode_Member P_Alarms_PSM_C_Crew_Role_In_Mission_State_g_tc_members[5]=
    {

        {
            (char *)"A_sourceID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_timeOfDataGeneration",/* Member name */
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
            (char *)"A_crewRoleName",/* Member name */
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
        }, 
        {
            (char *)"A_relevantAlarmType_sourceID",/* Member name */
            {
                3,/* Representation ID */          
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
            (char *)"A_missionState_sourceID",/* Member name */
            {
                4,/* Representation ID */          
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

    static DDS_TypeCode P_Alarms_PSM_C_Crew_Role_In_Mission_State_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_Alarms_PSM::C_Crew_Role_In_Mission_State", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            5, /* Number of members */
            P_Alarms_PSM_C_Crew_Role_In_Mission_State_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_Alarms_PSM_C_Crew_Role_In_Mission_State*/

    if (is_initialized) {
        return &P_Alarms_PSM_C_Crew_Role_In_Mission_State_g_tc;
    }

    P_Alarms_PSM_C_Crew_Role_In_Mission_State_g_tc_A_relevantAlarmType_sourceID_sequence._data._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Crew_Role_In_Mission_State_g_tc_A_missionState_sourceID_sequence._data._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Crew_Role_In_Mission_State_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Crew_Role_In_Mission_State_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_DateTimeType_get_typecode();

    P_Alarms_PSM_C_Crew_Role_In_Mission_State_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Crew_Role_In_Mission_State_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& P_Alarms_PSM_C_Crew_Role_In_Mission_State_g_tc_A_relevantAlarmType_sourceID_sequence;
    P_Alarms_PSM_C_Crew_Role_In_Mission_State_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& P_Alarms_PSM_C_Crew_Role_In_Mission_State_g_tc_A_missionState_sourceID_sequence;

    is_initialized = RTI_TRUE;

    return &P_Alarms_PSM_C_Crew_Role_In_Mission_State_g_tc;
}

RTIBool P_Alarms_PSM_C_Crew_Role_In_Mission_State_initialize(
    P_Alarms_PSM_C_Crew_Role_In_Mission_State* sample) {
    return P_Alarms_PSM_C_Crew_Role_In_Mission_State_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_Alarms_PSM_C_Crew_Role_In_Mission_State_initialize_ex(
    P_Alarms_PSM_C_Crew_Role_In_Mission_State* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_Alarms_PSM_C_Crew_Role_In_Mission_State_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_Alarms_PSM_C_Crew_Role_In_Mission_State_initialize_w_params(
    P_Alarms_PSM_C_Crew_Role_In_Mission_State* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_DateTimeType_initialize_w_params(&sample->A_timeOfDataGeneration,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_crewRoleName,
    allocParams)) {
        return RTI_FALSE;
    }
    if (allocParams->allocate_memory) {
        P_LDM_Common_T_IdentifierTypeSeq_initialize(&sample->A_relevantAlarmType_sourceID );
        P_LDM_Common_T_IdentifierTypeSeq_set_element_allocation_params(&sample->A_relevantAlarmType_sourceID ,allocParams);
        if (!P_LDM_Common_T_IdentifierTypeSeq_set_maximum(&sample->A_relevantAlarmType_sourceID, (100))) {
            return RTI_FALSE;
        }
    } else { 
        P_LDM_Common_T_IdentifierTypeSeq_set_length(&sample->A_relevantAlarmType_sourceID, 0);
    }
    if (allocParams->allocate_memory) {
        P_LDM_Common_T_IdentifierTypeSeq_initialize(&sample->A_missionState_sourceID );
        P_LDM_Common_T_IdentifierTypeSeq_set_element_allocation_params(&sample->A_missionState_sourceID ,allocParams);
        if (!P_LDM_Common_T_IdentifierTypeSeq_set_maximum(&sample->A_missionState_sourceID, (100))) {
            return RTI_FALSE;
        }
    } else { 
        P_LDM_Common_T_IdentifierTypeSeq_set_length(&sample->A_missionState_sourceID, 0);
    }
    return RTI_TRUE;
}

void P_Alarms_PSM_C_Crew_Role_In_Mission_State_finalize(
    P_Alarms_PSM_C_Crew_Role_In_Mission_State* sample)
{

    P_Alarms_PSM_C_Crew_Role_In_Mission_State_finalize_ex(sample,RTI_TRUE);
}

void P_Alarms_PSM_C_Crew_Role_In_Mission_State_finalize_ex(
    P_Alarms_PSM_C_Crew_Role_In_Mission_State* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_Alarms_PSM_C_Crew_Role_In_Mission_State_finalize_w_params(
        sample,&deallocParams);
}

void P_Alarms_PSM_C_Crew_Role_In_Mission_State_finalize_w_params(
    P_Alarms_PSM_C_Crew_Role_In_Mission_State* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_sourceID,deallocParams);

    P_LDM_Common_T_DateTimeType_finalize_w_params(&sample->A_timeOfDataGeneration,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_crewRoleName,deallocParams);

    P_LDM_Common_T_IdentifierTypeSeq_set_element_deallocation_params(
        &sample->A_relevantAlarmType_sourceID,deallocParams);
    P_LDM_Common_T_IdentifierTypeSeq_finalize(&sample->A_relevantAlarmType_sourceID);

    P_LDM_Common_T_IdentifierTypeSeq_set_element_deallocation_params(
        &sample->A_missionState_sourceID,deallocParams);
    P_LDM_Common_T_IdentifierTypeSeq_finalize(&sample->A_missionState_sourceID);

}

void P_Alarms_PSM_C_Crew_Role_In_Mission_State_finalize_optional_members(
    P_Alarms_PSM_C_Crew_Role_In_Mission_State* sample, RTIBool deletePointers)
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

    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_sourceID, deallocParams->delete_pointers);
    P_LDM_Common_T_DateTimeType_finalize_optional_members(&sample->A_timeOfDataGeneration, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_crewRoleName, deallocParams->delete_pointers);
    {
        DDS_UnsignedLong i, length;
        length = P_LDM_Common_T_IdentifierTypeSeq_get_length(
            &sample->A_relevantAlarmType_sourceID);

        for (i = 0; i < length; i++) {
            P_LDM_Common_T_IdentifierType_finalize_optional_members(
                P_LDM_Common_T_IdentifierTypeSeq_get_reference(
                    &sample->A_relevantAlarmType_sourceID, i), deallocParams->delete_pointers);
        }
    }  

    {
        DDS_UnsignedLong i, length;
        length = P_LDM_Common_T_IdentifierTypeSeq_get_length(
            &sample->A_missionState_sourceID);

        for (i = 0; i < length; i++) {
            P_LDM_Common_T_IdentifierType_finalize_optional_members(
                P_LDM_Common_T_IdentifierTypeSeq_get_reference(
                    &sample->A_missionState_sourceID, i), deallocParams->delete_pointers);
        }
    }  

}

RTIBool P_Alarms_PSM_C_Crew_Role_In_Mission_State_copy(
    P_Alarms_PSM_C_Crew_Role_In_Mission_State* dst,
    const P_Alarms_PSM_C_Crew_Role_In_Mission_State* src)
{

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_DateTimeType_copy(
        &dst->A_timeOfDataGeneration, &src->A_timeOfDataGeneration)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_crewRoleName, &src->A_crewRoleName)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierTypeSeq_copy(&dst->A_relevantAlarmType_sourceID ,
    &src->A_relevantAlarmType_sourceID )) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_IdentifierTypeSeq_copy(&dst->A_missionState_sourceID ,
    &src->A_missionState_sourceID )) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_Alarms_PSM_C_Crew_Role_In_Mission_State' sequence class.
*/
#define T P_Alarms_PSM_C_Crew_Role_In_Mission_State
#define TSeq P_Alarms_PSM_C_Crew_Role_In_Mission_StateSeq
#define T_initialize_w_params P_Alarms_PSM_C_Crew_Role_In_Mission_State_initialize_w_params
#define T_finalize_w_params   P_Alarms_PSM_C_Crew_Role_In_Mission_State_finalize_w_params
#define T_copy       P_Alarms_PSM_C_Crew_Role_In_Mission_State_copy

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
const char *P_Alarms_PSM_C_Alarm_Category_SpecificationTYPENAME = "P_Alarms_PSM::C_Alarm_Category_Specification";

DDS_TypeCode* P_Alarms_PSM_C_Alarm_Category_Specification_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_Alarms_PSM_C_Alarm_Category_Specification_g_tc_A_categorisedConditionSpecification_sourceID_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100),NULL);
    static DDS_TypeCode_Member P_Alarms_PSM_C_Alarm_Category_Specification_g_tc_members[12]=
    {

        {
            (char *)"A_sourceID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_timeOfDataGeneration",/* Member name */
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
            (char *)"A_alarmCategoryName",/* Member name */
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
        }, 
        {
            (char *)"A_alarmCategoryAbbreviation",/* Member name */
            {
                3,/* Representation ID */          
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
            (char *)"A_isAutoAcknowledged",/* Member name */
            {
                4,/* Representation ID */          
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
            (char *)"A_automaticAcknowledgeTimeout",/* Member name */
            {
                5,/* Representation ID */          
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
            (char *)"A_hideOnAcknowledge",/* Member name */
            {
                6,/* Representation ID */          
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
            (char *)"A_isRepeated",/* Member name */
            {
                7,/* Representation ID */          
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
            (char *)"A_repeatTimeout",/* Member name */
            {
                8,/* Representation ID */          
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
            (char *)"A_categorisedConditionSpecification_sourceID",/* Member name */
            {
                9,/* Representation ID */          
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
            (char *)"A_notifyingToneSpecification_sourceID",/* Member name */
            {
                10,/* Representation ID */          
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
            (char *)"A_alarmCategory_sourceID",/* Member name */
            {
                11,/* Representation ID */          
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

    static DDS_TypeCode P_Alarms_PSM_C_Alarm_Category_Specification_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_Alarms_PSM::C_Alarm_Category_Specification", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            12, /* Number of members */
            P_Alarms_PSM_C_Alarm_Category_Specification_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_Alarms_PSM_C_Alarm_Category_Specification*/

    if (is_initialized) {
        return &P_Alarms_PSM_C_Alarm_Category_Specification_g_tc;
    }

    P_Alarms_PSM_C_Alarm_Category_Specification_g_tc_A_categorisedConditionSpecification_sourceID_sequence._data._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Alarm_Category_Specification_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Alarm_Category_Specification_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_DateTimeType_get_typecode();

    P_Alarms_PSM_C_Alarm_Category_Specification_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_Alarms_PSM_T_AlarmCategoryType_get_typecode();

    P_Alarms_PSM_C_Alarm_Category_Specification_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Alarm_Category_Specification_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Boolean_get_typecode();

    P_Alarms_PSM_C_Alarm_Category_Specification_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_DurationType_get_typecode();

    P_Alarms_PSM_C_Alarm_Category_Specification_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Boolean_get_typecode();

    P_Alarms_PSM_C_Alarm_Category_Specification_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Boolean_get_typecode();

    P_Alarms_PSM_C_Alarm_Category_Specification_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_DurationType_get_typecode();

    P_Alarms_PSM_C_Alarm_Category_Specification_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)& P_Alarms_PSM_C_Alarm_Category_Specification_g_tc_A_categorisedConditionSpecification_sourceID_sequence;
    P_Alarms_PSM_C_Alarm_Category_Specification_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Alarm_Category_Specification_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_Alarms_PSM_C_Alarm_Category_Specification_g_tc;
}

RTIBool P_Alarms_PSM_C_Alarm_Category_Specification_initialize(
    P_Alarms_PSM_C_Alarm_Category_Specification* sample) {
    return P_Alarms_PSM_C_Alarm_Category_Specification_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_Alarms_PSM_C_Alarm_Category_Specification_initialize_ex(
    P_Alarms_PSM_C_Alarm_Category_Specification* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_Alarms_PSM_C_Alarm_Category_Specification_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_Alarms_PSM_C_Alarm_Category_Specification_initialize_w_params(
    P_Alarms_PSM_C_Alarm_Category_Specification* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_DateTimeType_initialize_w_params(&sample->A_timeOfDataGeneration,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_Alarms_PSM_T_AlarmCategoryType_initialize_w_params(&sample->A_alarmCategoryName,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_alarmCategoryAbbreviation,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_Boolean_initialize_w_params(&sample->A_isAutoAcknowledged,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_DurationType_initialize_w_params(&sample->A_automaticAcknowledgeTimeout,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_Boolean_initialize_w_params(&sample->A_hideOnAcknowledge,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_Boolean_initialize_w_params(&sample->A_isRepeated,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_DurationType_initialize_w_params(&sample->A_repeatTimeout,
    allocParams)) {
        return RTI_FALSE;
    }
    if (allocParams->allocate_memory) {
        P_LDM_Common_T_IdentifierTypeSeq_initialize(&sample->A_categorisedConditionSpecification_sourceID );
        P_LDM_Common_T_IdentifierTypeSeq_set_element_allocation_params(&sample->A_categorisedConditionSpecification_sourceID ,allocParams);
        if (!P_LDM_Common_T_IdentifierTypeSeq_set_maximum(&sample->A_categorisedConditionSpecification_sourceID, (100))) {
            return RTI_FALSE;
        }
    } else { 
        P_LDM_Common_T_IdentifierTypeSeq_set_length(&sample->A_categorisedConditionSpecification_sourceID, 0);
    }
    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_notifyingToneSpecification_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_alarmCategory_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_Alarms_PSM_C_Alarm_Category_Specification_finalize(
    P_Alarms_PSM_C_Alarm_Category_Specification* sample)
{

    P_Alarms_PSM_C_Alarm_Category_Specification_finalize_ex(sample,RTI_TRUE);
}

void P_Alarms_PSM_C_Alarm_Category_Specification_finalize_ex(
    P_Alarms_PSM_C_Alarm_Category_Specification* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_Alarms_PSM_C_Alarm_Category_Specification_finalize_w_params(
        sample,&deallocParams);
}

void P_Alarms_PSM_C_Alarm_Category_Specification_finalize_w_params(
    P_Alarms_PSM_C_Alarm_Category_Specification* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_sourceID,deallocParams);

    P_LDM_Common_T_DateTimeType_finalize_w_params(&sample->A_timeOfDataGeneration,deallocParams);

    P_Alarms_PSM_T_AlarmCategoryType_finalize_w_params(&sample->A_alarmCategoryName,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_alarmCategoryAbbreviation,deallocParams);

    P_LDM_Common_T_Boolean_finalize_w_params(&sample->A_isAutoAcknowledged,deallocParams);

    P_LDM_Common_T_DurationType_finalize_w_params(&sample->A_automaticAcknowledgeTimeout,deallocParams);

    P_LDM_Common_T_Boolean_finalize_w_params(&sample->A_hideOnAcknowledge,deallocParams);

    P_LDM_Common_T_Boolean_finalize_w_params(&sample->A_isRepeated,deallocParams);

    P_LDM_Common_T_DurationType_finalize_w_params(&sample->A_repeatTimeout,deallocParams);

    P_LDM_Common_T_IdentifierTypeSeq_set_element_deallocation_params(
        &sample->A_categorisedConditionSpecification_sourceID,deallocParams);
    P_LDM_Common_T_IdentifierTypeSeq_finalize(&sample->A_categorisedConditionSpecification_sourceID);

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_notifyingToneSpecification_sourceID,deallocParams);

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_alarmCategory_sourceID,deallocParams);

}

void P_Alarms_PSM_C_Alarm_Category_Specification_finalize_optional_members(
    P_Alarms_PSM_C_Alarm_Category_Specification* sample, RTIBool deletePointers)
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

    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_sourceID, deallocParams->delete_pointers);
    P_LDM_Common_T_DateTimeType_finalize_optional_members(&sample->A_timeOfDataGeneration, deallocParams->delete_pointers);
    P_Alarms_PSM_T_AlarmCategoryType_finalize_optional_members(&sample->A_alarmCategoryName, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_alarmCategoryAbbreviation, deallocParams->delete_pointers);
    P_LDM_Common_T_Boolean_finalize_optional_members(&sample->A_isAutoAcknowledged, deallocParams->delete_pointers);
    P_LDM_Common_T_DurationType_finalize_optional_members(&sample->A_automaticAcknowledgeTimeout, deallocParams->delete_pointers);
    P_LDM_Common_T_Boolean_finalize_optional_members(&sample->A_hideOnAcknowledge, deallocParams->delete_pointers);
    P_LDM_Common_T_Boolean_finalize_optional_members(&sample->A_isRepeated, deallocParams->delete_pointers);
    P_LDM_Common_T_DurationType_finalize_optional_members(&sample->A_repeatTimeout, deallocParams->delete_pointers);
    {
        DDS_UnsignedLong i, length;
        length = P_LDM_Common_T_IdentifierTypeSeq_get_length(
            &sample->A_categorisedConditionSpecification_sourceID);

        for (i = 0; i < length; i++) {
            P_LDM_Common_T_IdentifierType_finalize_optional_members(
                P_LDM_Common_T_IdentifierTypeSeq_get_reference(
                    &sample->A_categorisedConditionSpecification_sourceID, i), deallocParams->delete_pointers);
        }
    }  

    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_notifyingToneSpecification_sourceID, deallocParams->delete_pointers);
    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_alarmCategory_sourceID, deallocParams->delete_pointers);
}

RTIBool P_Alarms_PSM_C_Alarm_Category_Specification_copy(
    P_Alarms_PSM_C_Alarm_Category_Specification* dst,
    const P_Alarms_PSM_C_Alarm_Category_Specification* src)
{

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_DateTimeType_copy(
        &dst->A_timeOfDataGeneration, &src->A_timeOfDataGeneration)) {
        return RTI_FALSE;
    } 
    if (!P_Alarms_PSM_T_AlarmCategoryType_copy(
        &dst->A_alarmCategoryName, &src->A_alarmCategoryName)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_alarmCategoryAbbreviation, &src->A_alarmCategoryAbbreviation)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_Boolean_copy(
        &dst->A_isAutoAcknowledged, &src->A_isAutoAcknowledged)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_DurationType_copy(
        &dst->A_automaticAcknowledgeTimeout, &src->A_automaticAcknowledgeTimeout)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_Boolean_copy(
        &dst->A_hideOnAcknowledge, &src->A_hideOnAcknowledge)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_Boolean_copy(
        &dst->A_isRepeated, &src->A_isRepeated)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_DurationType_copy(
        &dst->A_repeatTimeout, &src->A_repeatTimeout)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierTypeSeq_copy(&dst->A_categorisedConditionSpecification_sourceID ,
    &src->A_categorisedConditionSpecification_sourceID )) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_notifyingToneSpecification_sourceID, &src->A_notifyingToneSpecification_sourceID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_alarmCategory_sourceID, &src->A_alarmCategory_sourceID)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_Alarms_PSM_C_Alarm_Category_Specification' sequence class.
*/
#define T P_Alarms_PSM_C_Alarm_Category_Specification
#define TSeq P_Alarms_PSM_C_Alarm_Category_SpecificationSeq
#define T_initialize_w_params P_Alarms_PSM_C_Alarm_Category_Specification_initialize_w_params
#define T_finalize_w_params   P_Alarms_PSM_C_Alarm_Category_Specification_finalize_w_params
#define T_copy       P_Alarms_PSM_C_Alarm_Category_Specification_copy

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
const char *P_Alarms_PSM_C_Mission_State_setMissionStateTYPENAME = "P_Alarms_PSM::C_Mission_State_setMissionState";

DDS_TypeCode* P_Alarms_PSM_C_Mission_State_setMissionState_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_Alarms_PSM_C_Mission_State_setMissionState_g_tc_members[6]=
    {

        {
            (char *)"A_recipientID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_sourceID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_referenceNum",/* Member name */
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
        }, 
        {
            (char *)"A_timeOfDataGeneration",/* Member name */
            {
                3,/* Representation ID */          
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
            (char *)"A_missionState",/* Member name */
            {
                4,/* Representation ID */          
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
            (char *)"A_missionStateName",/* Member name */
            {
                5,/* Representation ID */          
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

    static DDS_TypeCode P_Alarms_PSM_C_Mission_State_setMissionState_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_Alarms_PSM::C_Mission_State_setMissionState", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            6, /* Number of members */
            P_Alarms_PSM_C_Mission_State_setMissionState_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_Alarms_PSM_C_Mission_State_setMissionState*/

    if (is_initialized) {
        return &P_Alarms_PSM_C_Mission_State_setMissionState_g_tc;
    }

    P_Alarms_PSM_C_Mission_State_setMissionState_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Mission_State_setMissionState_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Mission_State_setMissionState_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Int64_get_typecode();

    P_Alarms_PSM_C_Mission_State_setMissionState_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_DateTimeType_get_typecode();

    P_Alarms_PSM_C_Mission_State_setMissionState_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)P_Alarms_PSM_T_MissionStateType_get_typecode();

    P_Alarms_PSM_C_Mission_State_setMissionState_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_Alarms_PSM_C_Mission_State_setMissionState_g_tc;
}

RTIBool P_Alarms_PSM_C_Mission_State_setMissionState_initialize(
    P_Alarms_PSM_C_Mission_State_setMissionState* sample) {
    return P_Alarms_PSM_C_Mission_State_setMissionState_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_Alarms_PSM_C_Mission_State_setMissionState_initialize_ex(
    P_Alarms_PSM_C_Mission_State_setMissionState* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_Alarms_PSM_C_Mission_State_setMissionState_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_Alarms_PSM_C_Mission_State_setMissionState_initialize_w_params(
    P_Alarms_PSM_C_Mission_State_setMissionState* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_recipientID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_Int64_initialize_w_params(&sample->A_referenceNum,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_DateTimeType_initialize_w_params(&sample->A_timeOfDataGeneration,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_Alarms_PSM_T_MissionStateType_initialize_w_params(&sample->A_missionState,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_missionStateName,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_Alarms_PSM_C_Mission_State_setMissionState_finalize(
    P_Alarms_PSM_C_Mission_State_setMissionState* sample)
{

    P_Alarms_PSM_C_Mission_State_setMissionState_finalize_ex(sample,RTI_TRUE);
}

void P_Alarms_PSM_C_Mission_State_setMissionState_finalize_ex(
    P_Alarms_PSM_C_Mission_State_setMissionState* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_Alarms_PSM_C_Mission_State_setMissionState_finalize_w_params(
        sample,&deallocParams);
}

void P_Alarms_PSM_C_Mission_State_setMissionState_finalize_w_params(
    P_Alarms_PSM_C_Mission_State_setMissionState* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_recipientID,deallocParams);

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_sourceID,deallocParams);

    P_LDM_Common_T_Int64_finalize_w_params(&sample->A_referenceNum,deallocParams);

    P_LDM_Common_T_DateTimeType_finalize_w_params(&sample->A_timeOfDataGeneration,deallocParams);

    P_Alarms_PSM_T_MissionStateType_finalize_w_params(&sample->A_missionState,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_missionStateName,deallocParams);

}

void P_Alarms_PSM_C_Mission_State_setMissionState_finalize_optional_members(
    P_Alarms_PSM_C_Mission_State_setMissionState* sample, RTIBool deletePointers)
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

    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_recipientID, deallocParams->delete_pointers);
    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_sourceID, deallocParams->delete_pointers);
    P_LDM_Common_T_Int64_finalize_optional_members(&sample->A_referenceNum, deallocParams->delete_pointers);
    P_LDM_Common_T_DateTimeType_finalize_optional_members(&sample->A_timeOfDataGeneration, deallocParams->delete_pointers);
    P_Alarms_PSM_T_MissionStateType_finalize_optional_members(&sample->A_missionState, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_missionStateName, deallocParams->delete_pointers);
}

RTIBool P_Alarms_PSM_C_Mission_State_setMissionState_copy(
    P_Alarms_PSM_C_Mission_State_setMissionState* dst,
    const P_Alarms_PSM_C_Mission_State_setMissionState* src)
{

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_recipientID, &src->A_recipientID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_Int64_copy(
        &dst->A_referenceNum, &src->A_referenceNum)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_DateTimeType_copy(
        &dst->A_timeOfDataGeneration, &src->A_timeOfDataGeneration)) {
        return RTI_FALSE;
    } 
    if (!P_Alarms_PSM_T_MissionStateType_copy(
        &dst->A_missionState, &src->A_missionState)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_missionStateName, &src->A_missionStateName)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_Alarms_PSM_C_Mission_State_setMissionState' sequence class.
*/
#define T P_Alarms_PSM_C_Mission_State_setMissionState
#define TSeq P_Alarms_PSM_C_Mission_State_setMissionStateSeq
#define T_initialize_w_params P_Alarms_PSM_C_Mission_State_setMissionState_initialize_w_params
#define T_finalize_w_params   P_Alarms_PSM_C_Mission_State_setMissionState_finalize_w_params
#define T_copy       P_Alarms_PSM_C_Mission_State_setMissionState_copy

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
const char *P_Alarms_PSM_C_Mission_StateTYPENAME = "P_Alarms_PSM::C_Mission_State";

DDS_TypeCode* P_Alarms_PSM_C_Mission_State_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_Alarms_PSM_C_Mission_State_g_tc_A_crewRoleInMissionState_sourceID_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100),NULL);
    static DDS_TypeCode_Member P_Alarms_PSM_C_Mission_State_g_tc_members[6]=
    {

        {
            (char *)"A_sourceID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_timeOfDataGeneration",/* Member name */
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
            (char *)"A_missionState",/* Member name */
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
        }, 
        {
            (char *)"A_missionStateName",/* Member name */
            {
                3,/* Representation ID */          
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
            (char *)"A_crewRoleInMissionState_sourceID",/* Member name */
            {
                4,/* Representation ID */          
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
            (char *)"A_ownPlatform_sourceID",/* Member name */
            {
                5,/* Representation ID */          
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

    static DDS_TypeCode P_Alarms_PSM_C_Mission_State_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_Alarms_PSM::C_Mission_State", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            6, /* Number of members */
            P_Alarms_PSM_C_Mission_State_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_Alarms_PSM_C_Mission_State*/

    if (is_initialized) {
        return &P_Alarms_PSM_C_Mission_State_g_tc;
    }

    P_Alarms_PSM_C_Mission_State_g_tc_A_crewRoleInMissionState_sourceID_sequence._data._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Mission_State_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Mission_State_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_DateTimeType_get_typecode();

    P_Alarms_PSM_C_Mission_State_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_Alarms_PSM_T_MissionStateType_get_typecode();

    P_Alarms_PSM_C_Mission_State_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Mission_State_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& P_Alarms_PSM_C_Mission_State_g_tc_A_crewRoleInMissionState_sourceID_sequence;
    P_Alarms_PSM_C_Mission_State_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_Alarms_PSM_C_Mission_State_g_tc;
}

RTIBool P_Alarms_PSM_C_Mission_State_initialize(
    P_Alarms_PSM_C_Mission_State* sample) {
    return P_Alarms_PSM_C_Mission_State_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_Alarms_PSM_C_Mission_State_initialize_ex(
    P_Alarms_PSM_C_Mission_State* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_Alarms_PSM_C_Mission_State_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_Alarms_PSM_C_Mission_State_initialize_w_params(
    P_Alarms_PSM_C_Mission_State* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_DateTimeType_initialize_w_params(&sample->A_timeOfDataGeneration,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_Alarms_PSM_T_MissionStateType_initialize_w_params(&sample->A_missionState,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_missionStateName,
    allocParams)) {
        return RTI_FALSE;
    }
    if (allocParams->allocate_memory) {
        P_LDM_Common_T_IdentifierTypeSeq_initialize(&sample->A_crewRoleInMissionState_sourceID );
        P_LDM_Common_T_IdentifierTypeSeq_set_element_allocation_params(&sample->A_crewRoleInMissionState_sourceID ,allocParams);
        if (!P_LDM_Common_T_IdentifierTypeSeq_set_maximum(&sample->A_crewRoleInMissionState_sourceID, (100))) {
            return RTI_FALSE;
        }
    } else { 
        P_LDM_Common_T_IdentifierTypeSeq_set_length(&sample->A_crewRoleInMissionState_sourceID, 0);
    }
    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_ownPlatform_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_Alarms_PSM_C_Mission_State_finalize(
    P_Alarms_PSM_C_Mission_State* sample)
{

    P_Alarms_PSM_C_Mission_State_finalize_ex(sample,RTI_TRUE);
}

void P_Alarms_PSM_C_Mission_State_finalize_ex(
    P_Alarms_PSM_C_Mission_State* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_Alarms_PSM_C_Mission_State_finalize_w_params(
        sample,&deallocParams);
}

void P_Alarms_PSM_C_Mission_State_finalize_w_params(
    P_Alarms_PSM_C_Mission_State* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_sourceID,deallocParams);

    P_LDM_Common_T_DateTimeType_finalize_w_params(&sample->A_timeOfDataGeneration,deallocParams);

    P_Alarms_PSM_T_MissionStateType_finalize_w_params(&sample->A_missionState,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_missionStateName,deallocParams);

    P_LDM_Common_T_IdentifierTypeSeq_set_element_deallocation_params(
        &sample->A_crewRoleInMissionState_sourceID,deallocParams);
    P_LDM_Common_T_IdentifierTypeSeq_finalize(&sample->A_crewRoleInMissionState_sourceID);

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_ownPlatform_sourceID,deallocParams);

}

void P_Alarms_PSM_C_Mission_State_finalize_optional_members(
    P_Alarms_PSM_C_Mission_State* sample, RTIBool deletePointers)
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

    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_sourceID, deallocParams->delete_pointers);
    P_LDM_Common_T_DateTimeType_finalize_optional_members(&sample->A_timeOfDataGeneration, deallocParams->delete_pointers);
    P_Alarms_PSM_T_MissionStateType_finalize_optional_members(&sample->A_missionState, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_missionStateName, deallocParams->delete_pointers);
    {
        DDS_UnsignedLong i, length;
        length = P_LDM_Common_T_IdentifierTypeSeq_get_length(
            &sample->A_crewRoleInMissionState_sourceID);

        for (i = 0; i < length; i++) {
            P_LDM_Common_T_IdentifierType_finalize_optional_members(
                P_LDM_Common_T_IdentifierTypeSeq_get_reference(
                    &sample->A_crewRoleInMissionState_sourceID, i), deallocParams->delete_pointers);
        }
    }  

    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_ownPlatform_sourceID, deallocParams->delete_pointers);
}

RTIBool P_Alarms_PSM_C_Mission_State_copy(
    P_Alarms_PSM_C_Mission_State* dst,
    const P_Alarms_PSM_C_Mission_State* src)
{

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_DateTimeType_copy(
        &dst->A_timeOfDataGeneration, &src->A_timeOfDataGeneration)) {
        return RTI_FALSE;
    } 
    if (!P_Alarms_PSM_T_MissionStateType_copy(
        &dst->A_missionState, &src->A_missionState)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_missionStateName, &src->A_missionStateName)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierTypeSeq_copy(&dst->A_crewRoleInMissionState_sourceID ,
    &src->A_crewRoleInMissionState_sourceID )) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_ownPlatform_sourceID, &src->A_ownPlatform_sourceID)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_Alarms_PSM_C_Mission_State' sequence class.
*/
#define T P_Alarms_PSM_C_Mission_State
#define TSeq P_Alarms_PSM_C_Mission_StateSeq
#define T_initialize_w_params P_Alarms_PSM_C_Mission_State_initialize_w_params
#define T_finalize_w_params   P_Alarms_PSM_C_Mission_State_finalize_w_params
#define T_copy       P_Alarms_PSM_C_Mission_State_copy

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
const char *P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmTYPENAME = "P_Alarms_PSM::C_Actual_Alarm_acknowledgeAlarm";

DDS_TypeCode* P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_g_tc_members[8]=
    {

        {
            (char *)"A_recipientID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_sourceID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_referenceNum",/* Member name */
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
        }, 
        {
            (char *)"A_timeOfDataGeneration",/* Member name */
            {
                3,/* Representation ID */          
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
            (char *)"A_subsystemName",/* Member name */
            {
                4,/* Representation ID */          
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
            (char *)"A_componentName",/* Member name */
            {
                5,/* Representation ID */          
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
            (char *)"A_measure",/* Member name */
            {
                6,/* Representation ID */          
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
            (char *)"A_nature",/* Member name */
            {
                7,/* Representation ID */          
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

    static DDS_TypeCode P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_Alarms_PSM::C_Actual_Alarm_acknowledgeAlarm", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            8, /* Number of members */
            P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm*/

    if (is_initialized) {
        return &P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_g_tc;
    }

    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Int64_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_DateTimeType_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_g_tc;
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_initialize(
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm* sample) {
    return P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_initialize_ex(
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_initialize_w_params(
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_recipientID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_Int64_initialize_w_params(&sample->A_referenceNum,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_DateTimeType_initialize_w_params(&sample->A_timeOfDataGeneration,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_subsystemName,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_componentName,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_measure,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_nature,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_finalize(
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm* sample)
{

    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_finalize_ex(sample,RTI_TRUE);
}

void P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_finalize_ex(
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_finalize_w_params(
        sample,&deallocParams);
}

void P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_finalize_w_params(
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_recipientID,deallocParams);

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_sourceID,deallocParams);

    P_LDM_Common_T_Int64_finalize_w_params(&sample->A_referenceNum,deallocParams);

    P_LDM_Common_T_DateTimeType_finalize_w_params(&sample->A_timeOfDataGeneration,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_subsystemName,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_componentName,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_measure,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_nature,deallocParams);

}

void P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_finalize_optional_members(
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm* sample, RTIBool deletePointers)
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

    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_recipientID, deallocParams->delete_pointers);
    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_sourceID, deallocParams->delete_pointers);
    P_LDM_Common_T_Int64_finalize_optional_members(&sample->A_referenceNum, deallocParams->delete_pointers);
    P_LDM_Common_T_DateTimeType_finalize_optional_members(&sample->A_timeOfDataGeneration, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_subsystemName, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_componentName, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_measure, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_nature, deallocParams->delete_pointers);
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_copy(
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm* dst,
    const P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm* src)
{

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_recipientID, &src->A_recipientID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_Int64_copy(
        &dst->A_referenceNum, &src->A_referenceNum)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_DateTimeType_copy(
        &dst->A_timeOfDataGeneration, &src->A_timeOfDataGeneration)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_subsystemName, &src->A_subsystemName)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_componentName, &src->A_componentName)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_measure, &src->A_measure)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_nature, &src->A_nature)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm' sequence class.
*/
#define T P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm
#define TSeq P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmSeq
#define T_initialize_w_params P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_initialize_w_params
#define T_finalize_w_params   P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_finalize_w_params
#define T_copy       P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_copy

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
const char *P_Alarms_PSM_C_Actual_AlarmTYPENAME = "P_Alarms_PSM::C_Actual_Alarm";

DDS_TypeCode* P_Alarms_PSM_C_Actual_Alarm_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_Alarms_PSM_C_Actual_Alarm_g_tc_members[10]=
    {

        {
            (char *)"A_sourceID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_timeOfDataGeneration",/* Member name */
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
            (char *)"A_componentName",/* Member name */
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
        }, 
        {
            (char *)"A_nature",/* Member name */
            {
                3,/* Representation ID */          
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
            (char *)"A_subsystemName",/* Member name */
            {
                4,/* Representation ID */          
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
            (char *)"A_measure",/* Member name */
            {
                5,/* Representation ID */          
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
            (char *)"A_dateTimeRaised",/* Member name */
            {
                6,/* Representation ID */          
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
            (char *)"A_alarmState",/* Member name */
            {
                7,/* Representation ID */          
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
            (char *)"A_raisingCondition_sourceID",/* Member name */
            {
                8,/* Representation ID */          
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
            (char *)"A_alarmCategory_sourceID",/* Member name */
            {
                9,/* Representation ID */          
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

    static DDS_TypeCode P_Alarms_PSM_C_Actual_Alarm_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_Alarms_PSM::C_Actual_Alarm", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            10, /* Number of members */
            P_Alarms_PSM_C_Actual_Alarm_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_Alarms_PSM_C_Actual_Alarm*/

    if (is_initialized) {
        return &P_Alarms_PSM_C_Actual_Alarm_g_tc;
    }

    P_Alarms_PSM_C_Actual_Alarm_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_DateTimeType_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_DateTimeType_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)P_Alarms_PSM_T_Actual_Alarm_StateType_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_Alarms_PSM_C_Actual_Alarm_g_tc;
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_initialize(
    P_Alarms_PSM_C_Actual_Alarm* sample) {
    return P_Alarms_PSM_C_Actual_Alarm_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_initialize_ex(
    P_Alarms_PSM_C_Actual_Alarm* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_Alarms_PSM_C_Actual_Alarm_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_Alarms_PSM_C_Actual_Alarm_initialize_w_params(
    P_Alarms_PSM_C_Actual_Alarm* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_DateTimeType_initialize_w_params(&sample->A_timeOfDataGeneration,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_componentName,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_nature,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_subsystemName,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_measure,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_DateTimeType_initialize_w_params(&sample->A_dateTimeRaised,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_Alarms_PSM_T_Actual_Alarm_StateType_initialize_w_params(&sample->A_alarmState,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_raisingCondition_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_alarmCategory_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_Alarms_PSM_C_Actual_Alarm_finalize(
    P_Alarms_PSM_C_Actual_Alarm* sample)
{

    P_Alarms_PSM_C_Actual_Alarm_finalize_ex(sample,RTI_TRUE);
}

void P_Alarms_PSM_C_Actual_Alarm_finalize_ex(
    P_Alarms_PSM_C_Actual_Alarm* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_Alarms_PSM_C_Actual_Alarm_finalize_w_params(
        sample,&deallocParams);
}

void P_Alarms_PSM_C_Actual_Alarm_finalize_w_params(
    P_Alarms_PSM_C_Actual_Alarm* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_sourceID,deallocParams);

    P_LDM_Common_T_DateTimeType_finalize_w_params(&sample->A_timeOfDataGeneration,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_componentName,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_nature,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_subsystemName,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_measure,deallocParams);

    P_LDM_Common_T_DateTimeType_finalize_w_params(&sample->A_dateTimeRaised,deallocParams);

    P_Alarms_PSM_T_Actual_Alarm_StateType_finalize_w_params(&sample->A_alarmState,deallocParams);

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_raisingCondition_sourceID,deallocParams);

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_alarmCategory_sourceID,deallocParams);

}

void P_Alarms_PSM_C_Actual_Alarm_finalize_optional_members(
    P_Alarms_PSM_C_Actual_Alarm* sample, RTIBool deletePointers)
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

    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_sourceID, deallocParams->delete_pointers);
    P_LDM_Common_T_DateTimeType_finalize_optional_members(&sample->A_timeOfDataGeneration, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_componentName, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_nature, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_subsystemName, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_measure, deallocParams->delete_pointers);
    P_LDM_Common_T_DateTimeType_finalize_optional_members(&sample->A_dateTimeRaised, deallocParams->delete_pointers);
    P_Alarms_PSM_T_Actual_Alarm_StateType_finalize_optional_members(&sample->A_alarmState, deallocParams->delete_pointers);
    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_raisingCondition_sourceID, deallocParams->delete_pointers);
    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_alarmCategory_sourceID, deallocParams->delete_pointers);
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_copy(
    P_Alarms_PSM_C_Actual_Alarm* dst,
    const P_Alarms_PSM_C_Actual_Alarm* src)
{

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_DateTimeType_copy(
        &dst->A_timeOfDataGeneration, &src->A_timeOfDataGeneration)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_componentName, &src->A_componentName)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_nature, &src->A_nature)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_subsystemName, &src->A_subsystemName)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_measure, &src->A_measure)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_DateTimeType_copy(
        &dst->A_dateTimeRaised, &src->A_dateTimeRaised)) {
        return RTI_FALSE;
    } 
    if (!P_Alarms_PSM_T_Actual_Alarm_StateType_copy(
        &dst->A_alarmState, &src->A_alarmState)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_raisingCondition_sourceID, &src->A_raisingCondition_sourceID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_alarmCategory_sourceID, &src->A_alarmCategory_sourceID)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_Alarms_PSM_C_Actual_Alarm' sequence class.
*/
#define T P_Alarms_PSM_C_Actual_Alarm
#define TSeq P_Alarms_PSM_C_Actual_AlarmSeq
#define T_initialize_w_params P_Alarms_PSM_C_Actual_Alarm_initialize_w_params
#define T_finalize_w_params   P_Alarms_PSM_C_Actual_Alarm_finalize_w_params
#define T_copy       P_Alarms_PSM_C_Actual_Alarm_copy

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
const char *P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionTYPENAME = "P_Alarms_PSM::C_Alarm_Condition_Specification_raiseAlarmCondition";

DDS_TypeCode* P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_g_tc_members[8]=
    {

        {
            (char *)"A_recipientID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_sourceID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_referenceNum",/* Member name */
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
        }, 
        {
            (char *)"A_timeOfDataGeneration",/* Member name */
            {
                3,/* Representation ID */          
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
            (char *)"A_componentName",/* Member name */
            {
                4,/* Representation ID */          
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
            (char *)"A_subsystemName",/* Member name */
            {
                5,/* Representation ID */          
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
            (char *)"A_measure",/* Member name */
            {
                6,/* Representation ID */          
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
            (char *)"A_nature",/* Member name */
            {
                7,/* Representation ID */          
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

    static DDS_TypeCode P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_Alarms_PSM::C_Alarm_Condition_Specification_raiseAlarmCondition", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            8, /* Number of members */
            P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition*/

    if (is_initialized) {
        return &P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_g_tc;
    }

    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Int64_get_typecode();

    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_DateTimeType_get_typecode();

    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_g_tc;
}

RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_initialize(
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition* sample) {
    return P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_initialize_ex(
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_initialize_w_params(
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_recipientID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_Int64_initialize_w_params(&sample->A_referenceNum,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_DateTimeType_initialize_w_params(&sample->A_timeOfDataGeneration,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_componentName,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_subsystemName,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_measure,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_nature,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_finalize(
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition* sample)
{

    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_finalize_ex(sample,RTI_TRUE);
}

void P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_finalize_ex(
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_finalize_w_params(
        sample,&deallocParams);
}

void P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_finalize_w_params(
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_recipientID,deallocParams);

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_sourceID,deallocParams);

    P_LDM_Common_T_Int64_finalize_w_params(&sample->A_referenceNum,deallocParams);

    P_LDM_Common_T_DateTimeType_finalize_w_params(&sample->A_timeOfDataGeneration,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_componentName,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_subsystemName,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_measure,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_nature,deallocParams);

}

void P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_finalize_optional_members(
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition* sample, RTIBool deletePointers)
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

    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_recipientID, deallocParams->delete_pointers);
    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_sourceID, deallocParams->delete_pointers);
    P_LDM_Common_T_Int64_finalize_optional_members(&sample->A_referenceNum, deallocParams->delete_pointers);
    P_LDM_Common_T_DateTimeType_finalize_optional_members(&sample->A_timeOfDataGeneration, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_componentName, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_subsystemName, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_measure, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_nature, deallocParams->delete_pointers);
}

RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_copy(
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition* dst,
    const P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition* src)
{

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_recipientID, &src->A_recipientID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_Int64_copy(
        &dst->A_referenceNum, &src->A_referenceNum)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_DateTimeType_copy(
        &dst->A_timeOfDataGeneration, &src->A_timeOfDataGeneration)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_componentName, &src->A_componentName)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_subsystemName, &src->A_subsystemName)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_measure, &src->A_measure)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_nature, &src->A_nature)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition' sequence class.
*/
#define T P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition
#define TSeq P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionSeq
#define T_initialize_w_params P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_initialize_w_params
#define T_finalize_w_params   P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_finalize_w_params
#define T_copy       P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_copy

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
const char *P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleTYPENAME = "P_Alarms_PSM::C_Alarm_Condition_Specification_isOfInterestToCrewRole";

DDS_TypeCode* P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_g_tc_members[5]=
    {

        {
            (char *)"A_recipientID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_sourceID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_referenceNum",/* Member name */
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
        }, 
        {
            (char *)"A_timeOfDataGeneration",/* Member name */
            {
                3,/* Representation ID */          
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
            (char *)"A_crewRole",/* Member name */
            {
                4,/* Representation ID */          
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

    static DDS_TypeCode P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_Alarms_PSM::C_Alarm_Condition_Specification_isOfInterestToCrewRole", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            5, /* Number of members */
            P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole*/

    if (is_initialized) {
        return &P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_g_tc;
    }

    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Int64_get_typecode();

    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_DateTimeType_get_typecode();

    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_g_tc;
}

RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_initialize(
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole* sample) {
    return P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_initialize_ex(
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_initialize_w_params(
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_recipientID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_Int64_initialize_w_params(&sample->A_referenceNum,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_DateTimeType_initialize_w_params(&sample->A_timeOfDataGeneration,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_crewRole,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_finalize(
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole* sample)
{

    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_finalize_ex(sample,RTI_TRUE);
}

void P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_finalize_ex(
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_finalize_w_params(
        sample,&deallocParams);
}

void P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_finalize_w_params(
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_recipientID,deallocParams);

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_sourceID,deallocParams);

    P_LDM_Common_T_Int64_finalize_w_params(&sample->A_referenceNum,deallocParams);

    P_LDM_Common_T_DateTimeType_finalize_w_params(&sample->A_timeOfDataGeneration,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_crewRole,deallocParams);

}

void P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_finalize_optional_members(
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole* sample, RTIBool deletePointers)
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

    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_recipientID, deallocParams->delete_pointers);
    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_sourceID, deallocParams->delete_pointers);
    P_LDM_Common_T_Int64_finalize_optional_members(&sample->A_referenceNum, deallocParams->delete_pointers);
    P_LDM_Common_T_DateTimeType_finalize_optional_members(&sample->A_timeOfDataGeneration, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_crewRole, deallocParams->delete_pointers);
}

RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_copy(
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole* dst,
    const P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole* src)
{

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_recipientID, &src->A_recipientID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_Int64_copy(
        &dst->A_referenceNum, &src->A_referenceNum)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_DateTimeType_copy(
        &dst->A_timeOfDataGeneration, &src->A_timeOfDataGeneration)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_crewRole, &src->A_crewRole)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole' sequence class.
*/
#define T P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole
#define TSeq P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleSeq
#define T_initialize_w_params P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_initialize_w_params
#define T_finalize_w_params   P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_finalize_w_params
#define T_copy       P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_copy

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
const char *P_Alarms_PSM_C_Alarm_Condition_SpecificationTYPENAME = "P_Alarms_PSM::C_Alarm_Condition_Specification";

DDS_TypeCode* P_Alarms_PSM_C_Alarm_Condition_Specification_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_Alarms_PSM_C_Alarm_Condition_Specification_g_tc_A_actualAlarmCondition_sourceID_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100),NULL);
    static DDS_TypeCode P_Alarms_PSM_C_Alarm_Condition_Specification_g_tc_A_interestedRole_sourceID_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100),NULL);
    static DDS_TypeCode_Member P_Alarms_PSM_C_Alarm_Condition_Specification_g_tc_members[13]=
    {

        {
            (char *)"A_sourceID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_timeOfDataGeneration",/* Member name */
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
            (char *)"A_subsystemName",/* Member name */
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
        }, 
        {
            (char *)"A_componentName",/* Member name */
            {
                3,/* Representation ID */          
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
            (char *)"A_measure",/* Member name */
            {
                4,/* Representation ID */          
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
            (char *)"A_nature",/* Member name */
            {
                5,/* Representation ID */          
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
            (char *)"A_alarmConditionCategory",/* Member name */
            {
                6,/* Representation ID */          
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
            (char *)"A_alarmConditionName",/* Member name */
            {
                7,/* Representation ID */          
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
            (char *)"A_hasMultipleInstances",/* Member name */
            {
                8,/* Representation ID */          
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
            (char *)"A_overrideState",/* Member name */
            {
                9,/* Representation ID */          
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
            (char *)"A_actualAlarmCondition_sourceID",/* Member name */
            {
                10,/* Representation ID */          
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
            (char *)"A_alarmCategory_sourceID",/* Member name */
            {
                11,/* Representation ID */          
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
            (char *)"A_interestedRole_sourceID",/* Member name */
            {
                12,/* Representation ID */          
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

    static DDS_TypeCode P_Alarms_PSM_C_Alarm_Condition_Specification_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_Alarms_PSM::C_Alarm_Condition_Specification", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            13, /* Number of members */
            P_Alarms_PSM_C_Alarm_Condition_Specification_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_Alarms_PSM_C_Alarm_Condition_Specification*/

    if (is_initialized) {
        return &P_Alarms_PSM_C_Alarm_Condition_Specification_g_tc;
    }

    P_Alarms_PSM_C_Alarm_Condition_Specification_g_tc_A_actualAlarmCondition_sourceID_sequence._data._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Alarm_Condition_Specification_g_tc_A_interestedRole_sourceID_sequence._data._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Alarm_Condition_Specification_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Alarm_Condition_Specification_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_DateTimeType_get_typecode();

    P_Alarms_PSM_C_Alarm_Condition_Specification_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Alarm_Condition_Specification_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Alarm_Condition_Specification_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Alarm_Condition_Specification_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Alarm_Condition_Specification_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Alarm_Condition_Specification_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_MediumString_get_typecode();

    P_Alarms_PSM_C_Alarm_Condition_Specification_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Boolean_get_typecode();

    P_Alarms_PSM_C_Alarm_Condition_Specification_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_get_typecode();

    P_Alarms_PSM_C_Alarm_Condition_Specification_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)& P_Alarms_PSM_C_Alarm_Condition_Specification_g_tc_A_actualAlarmCondition_sourceID_sequence;
    P_Alarms_PSM_C_Alarm_Condition_Specification_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Alarm_Condition_Specification_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)& P_Alarms_PSM_C_Alarm_Condition_Specification_g_tc_A_interestedRole_sourceID_sequence;

    is_initialized = RTI_TRUE;

    return &P_Alarms_PSM_C_Alarm_Condition_Specification_g_tc;
}

RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_initialize(
    P_Alarms_PSM_C_Alarm_Condition_Specification* sample) {
    return P_Alarms_PSM_C_Alarm_Condition_Specification_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_initialize_ex(
    P_Alarms_PSM_C_Alarm_Condition_Specification* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_Alarms_PSM_C_Alarm_Condition_Specification_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_initialize_w_params(
    P_Alarms_PSM_C_Alarm_Condition_Specification* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_DateTimeType_initialize_w_params(&sample->A_timeOfDataGeneration,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_subsystemName,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_componentName,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_measure,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_nature,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_alarmConditionCategory,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_MediumString_initialize_w_params(&sample->A_alarmConditionName,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_Boolean_initialize_w_params(&sample->A_hasMultipleInstances,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_initialize_w_params(&sample->A_overrideState,
    allocParams)) {
        return RTI_FALSE;
    }
    if (allocParams->allocate_memory) {
        P_LDM_Common_T_IdentifierTypeSeq_initialize(&sample->A_actualAlarmCondition_sourceID );
        P_LDM_Common_T_IdentifierTypeSeq_set_element_allocation_params(&sample->A_actualAlarmCondition_sourceID ,allocParams);
        if (!P_LDM_Common_T_IdentifierTypeSeq_set_maximum(&sample->A_actualAlarmCondition_sourceID, (100))) {
            return RTI_FALSE;
        }
    } else { 
        P_LDM_Common_T_IdentifierTypeSeq_set_length(&sample->A_actualAlarmCondition_sourceID, 0);
    }
    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_alarmCategory_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (allocParams->allocate_memory) {
        P_LDM_Common_T_IdentifierTypeSeq_initialize(&sample->A_interestedRole_sourceID );
        P_LDM_Common_T_IdentifierTypeSeq_set_element_allocation_params(&sample->A_interestedRole_sourceID ,allocParams);
        if (!P_LDM_Common_T_IdentifierTypeSeq_set_maximum(&sample->A_interestedRole_sourceID, (100))) {
            return RTI_FALSE;
        }
    } else { 
        P_LDM_Common_T_IdentifierTypeSeq_set_length(&sample->A_interestedRole_sourceID, 0);
    }
    return RTI_TRUE;
}

void P_Alarms_PSM_C_Alarm_Condition_Specification_finalize(
    P_Alarms_PSM_C_Alarm_Condition_Specification* sample)
{

    P_Alarms_PSM_C_Alarm_Condition_Specification_finalize_ex(sample,RTI_TRUE);
}

void P_Alarms_PSM_C_Alarm_Condition_Specification_finalize_ex(
    P_Alarms_PSM_C_Alarm_Condition_Specification* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_Alarms_PSM_C_Alarm_Condition_Specification_finalize_w_params(
        sample,&deallocParams);
}

void P_Alarms_PSM_C_Alarm_Condition_Specification_finalize_w_params(
    P_Alarms_PSM_C_Alarm_Condition_Specification* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_sourceID,deallocParams);

    P_LDM_Common_T_DateTimeType_finalize_w_params(&sample->A_timeOfDataGeneration,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_subsystemName,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_componentName,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_measure,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_nature,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_alarmConditionCategory,deallocParams);

    P_LDM_Common_T_MediumString_finalize_w_params(&sample->A_alarmConditionName,deallocParams);

    P_LDM_Common_T_Boolean_finalize_w_params(&sample->A_hasMultipleInstances,deallocParams);

    P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_finalize_w_params(&sample->A_overrideState,deallocParams);

    P_LDM_Common_T_IdentifierTypeSeq_set_element_deallocation_params(
        &sample->A_actualAlarmCondition_sourceID,deallocParams);
    P_LDM_Common_T_IdentifierTypeSeq_finalize(&sample->A_actualAlarmCondition_sourceID);

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_alarmCategory_sourceID,deallocParams);

    P_LDM_Common_T_IdentifierTypeSeq_set_element_deallocation_params(
        &sample->A_interestedRole_sourceID,deallocParams);
    P_LDM_Common_T_IdentifierTypeSeq_finalize(&sample->A_interestedRole_sourceID);

}

void P_Alarms_PSM_C_Alarm_Condition_Specification_finalize_optional_members(
    P_Alarms_PSM_C_Alarm_Condition_Specification* sample, RTIBool deletePointers)
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

    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_sourceID, deallocParams->delete_pointers);
    P_LDM_Common_T_DateTimeType_finalize_optional_members(&sample->A_timeOfDataGeneration, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_subsystemName, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_componentName, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_measure, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_nature, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_alarmConditionCategory, deallocParams->delete_pointers);
    P_LDM_Common_T_MediumString_finalize_optional_members(&sample->A_alarmConditionName, deallocParams->delete_pointers);
    P_LDM_Common_T_Boolean_finalize_optional_members(&sample->A_hasMultipleInstances, deallocParams->delete_pointers);
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_finalize_optional_members(&sample->A_overrideState, deallocParams->delete_pointers);
    {
        DDS_UnsignedLong i, length;
        length = P_LDM_Common_T_IdentifierTypeSeq_get_length(
            &sample->A_actualAlarmCondition_sourceID);

        for (i = 0; i < length; i++) {
            P_LDM_Common_T_IdentifierType_finalize_optional_members(
                P_LDM_Common_T_IdentifierTypeSeq_get_reference(
                    &sample->A_actualAlarmCondition_sourceID, i), deallocParams->delete_pointers);
        }
    }  

    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_alarmCategory_sourceID, deallocParams->delete_pointers);
    {
        DDS_UnsignedLong i, length;
        length = P_LDM_Common_T_IdentifierTypeSeq_get_length(
            &sample->A_interestedRole_sourceID);

        for (i = 0; i < length; i++) {
            P_LDM_Common_T_IdentifierType_finalize_optional_members(
                P_LDM_Common_T_IdentifierTypeSeq_get_reference(
                    &sample->A_interestedRole_sourceID, i), deallocParams->delete_pointers);
        }
    }  

}

RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_copy(
    P_Alarms_PSM_C_Alarm_Condition_Specification* dst,
    const P_Alarms_PSM_C_Alarm_Condition_Specification* src)
{

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_DateTimeType_copy(
        &dst->A_timeOfDataGeneration, &src->A_timeOfDataGeneration)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_subsystemName, &src->A_subsystemName)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_componentName, &src->A_componentName)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_measure, &src->A_measure)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_nature, &src->A_nature)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_alarmConditionCategory, &src->A_alarmConditionCategory)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_MediumString_copy(
        &dst->A_alarmConditionName, &src->A_alarmConditionName)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_Boolean_copy(
        &dst->A_hasMultipleInstances, &src->A_hasMultipleInstances)) {
        return RTI_FALSE;
    } 
    if (!P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_copy(
        &dst->A_overrideState, &src->A_overrideState)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierTypeSeq_copy(&dst->A_actualAlarmCondition_sourceID ,
    &src->A_actualAlarmCondition_sourceID )) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_alarmCategory_sourceID, &src->A_alarmCategory_sourceID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierTypeSeq_copy(&dst->A_interestedRole_sourceID ,
    &src->A_interestedRole_sourceID )) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_Alarms_PSM_C_Alarm_Condition_Specification' sequence class.
*/
#define T P_Alarms_PSM_C_Alarm_Condition_Specification
#define TSeq P_Alarms_PSM_C_Alarm_Condition_SpecificationSeq
#define T_initialize_w_params P_Alarms_PSM_C_Alarm_Condition_Specification_initialize_w_params
#define T_finalize_w_params   P_Alarms_PSM_C_Alarm_Condition_Specification_finalize_w_params
#define T_copy       P_Alarms_PSM_C_Alarm_Condition_Specification_copy

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
const char *P_Alarms_PSM_C_Tone_SpecificationTYPENAME = "P_Alarms_PSM::C_Tone_Specification";

DDS_TypeCode* P_Alarms_PSM_C_Tone_Specification_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_Alarms_PSM_C_Tone_Specification_g_tc_members[7]=
    {

        {
            (char *)"A_sourceID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_timeOfDataGeneration",/* Member name */
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
            (char *)"A_toneFrequency",/* Member name */
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
        }, 
        {
            (char *)"A_toneModulationType",/* Member name */
            {
                3,/* Representation ID */          
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
            (char *)"A_toneRepetitionFrequency",/* Member name */
            {
                4,/* Representation ID */          
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
            (char *)"A_toneMaxVolume",/* Member name */
            {
                5,/* Representation ID */          
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
            (char *)"A_alarmCategorySpecification_sourceID",/* Member name */
            {
                6,/* Representation ID */          
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

    static DDS_TypeCode P_Alarms_PSM_C_Tone_Specification_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_Alarms_PSM::C_Tone_Specification", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            7, /* Number of members */
            P_Alarms_PSM_C_Tone_Specification_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_Alarms_PSM_C_Tone_Specification*/

    if (is_initialized) {
        return &P_Alarms_PSM_C_Tone_Specification_g_tc;
    }

    P_Alarms_PSM_C_Tone_Specification_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Tone_Specification_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_DateTimeType_get_typecode();

    P_Alarms_PSM_C_Tone_Specification_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_FrequencyInHertzType_get_typecode();

    P_Alarms_PSM_C_Tone_Specification_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Tone_Specification_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_FrequencyInHertzType_get_typecode();

    P_Alarms_PSM_C_Tone_Specification_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_PowerInWattsType_get_typecode();

    P_Alarms_PSM_C_Tone_Specification_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_Alarms_PSM_C_Tone_Specification_g_tc;
}

RTIBool P_Alarms_PSM_C_Tone_Specification_initialize(
    P_Alarms_PSM_C_Tone_Specification* sample) {
    return P_Alarms_PSM_C_Tone_Specification_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_Alarms_PSM_C_Tone_Specification_initialize_ex(
    P_Alarms_PSM_C_Tone_Specification* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_Alarms_PSM_C_Tone_Specification_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_Alarms_PSM_C_Tone_Specification_initialize_w_params(
    P_Alarms_PSM_C_Tone_Specification* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_DateTimeType_initialize_w_params(&sample->A_timeOfDataGeneration,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_FrequencyInHertzType_initialize_w_params(&sample->A_toneFrequency,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_toneModulationType,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_FrequencyInHertzType_initialize_w_params(&sample->A_toneRepetitionFrequency,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_PowerInWattsType_initialize_w_params(&sample->A_toneMaxVolume,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_alarmCategorySpecification_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_Alarms_PSM_C_Tone_Specification_finalize(
    P_Alarms_PSM_C_Tone_Specification* sample)
{

    P_Alarms_PSM_C_Tone_Specification_finalize_ex(sample,RTI_TRUE);
}

void P_Alarms_PSM_C_Tone_Specification_finalize_ex(
    P_Alarms_PSM_C_Tone_Specification* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_Alarms_PSM_C_Tone_Specification_finalize_w_params(
        sample,&deallocParams);
}

void P_Alarms_PSM_C_Tone_Specification_finalize_w_params(
    P_Alarms_PSM_C_Tone_Specification* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_sourceID,deallocParams);

    P_LDM_Common_T_DateTimeType_finalize_w_params(&sample->A_timeOfDataGeneration,deallocParams);

    P_LDM_Common_T_FrequencyInHertzType_finalize_w_params(&sample->A_toneFrequency,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_toneModulationType,deallocParams);

    P_LDM_Common_T_FrequencyInHertzType_finalize_w_params(&sample->A_toneRepetitionFrequency,deallocParams);

    P_LDM_Common_T_PowerInWattsType_finalize_w_params(&sample->A_toneMaxVolume,deallocParams);

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_alarmCategorySpecification_sourceID,deallocParams);

}

void P_Alarms_PSM_C_Tone_Specification_finalize_optional_members(
    P_Alarms_PSM_C_Tone_Specification* sample, RTIBool deletePointers)
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

    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_sourceID, deallocParams->delete_pointers);
    P_LDM_Common_T_DateTimeType_finalize_optional_members(&sample->A_timeOfDataGeneration, deallocParams->delete_pointers);
    P_LDM_Common_T_FrequencyInHertzType_finalize_optional_members(&sample->A_toneFrequency, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_toneModulationType, deallocParams->delete_pointers);
    P_LDM_Common_T_FrequencyInHertzType_finalize_optional_members(&sample->A_toneRepetitionFrequency, deallocParams->delete_pointers);
    P_LDM_Common_T_PowerInWattsType_finalize_optional_members(&sample->A_toneMaxVolume, deallocParams->delete_pointers);
    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_alarmCategorySpecification_sourceID, deallocParams->delete_pointers);
}

RTIBool P_Alarms_PSM_C_Tone_Specification_copy(
    P_Alarms_PSM_C_Tone_Specification* dst,
    const P_Alarms_PSM_C_Tone_Specification* src)
{

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_DateTimeType_copy(
        &dst->A_timeOfDataGeneration, &src->A_timeOfDataGeneration)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_FrequencyInHertzType_copy(
        &dst->A_toneFrequency, &src->A_toneFrequency)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_toneModulationType, &src->A_toneModulationType)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_FrequencyInHertzType_copy(
        &dst->A_toneRepetitionFrequency, &src->A_toneRepetitionFrequency)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_PowerInWattsType_copy(
        &dst->A_toneMaxVolume, &src->A_toneMaxVolume)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_alarmCategorySpecification_sourceID, &src->A_alarmCategorySpecification_sourceID)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_Alarms_PSM_C_Tone_Specification' sequence class.
*/
#define T P_Alarms_PSM_C_Tone_Specification
#define TSeq P_Alarms_PSM_C_Tone_SpecificationSeq
#define T_initialize_w_params P_Alarms_PSM_C_Tone_Specification_initialize_w_params
#define T_finalize_w_params   P_Alarms_PSM_C_Tone_Specification_finalize_w_params
#define T_copy       P_Alarms_PSM_C_Tone_Specification_copy

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
const char *P_Alarms_PSM_C_Platform_With_AlarmsTYPENAME = "P_Alarms_PSM::C_Platform_With_Alarms";

DDS_TypeCode* P_Alarms_PSM_C_Platform_With_Alarms_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_Alarms_PSM_C_Platform_With_Alarms_g_tc_A_possibleMissionState_sourceID_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100),NULL);
    static DDS_TypeCode_Member P_Alarms_PSM_C_Platform_With_Alarms_g_tc_members[5]=
    {

        {
            (char *)"A_sourceID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_timeOfDataGeneration",/* Member name */
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
            (char *)"A_activeAlarmsExist",/* Member name */
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
        }, 
        {
            (char *)"A_possibleMissionState_sourceID",/* Member name */
            {
                3,/* Representation ID */          
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
            (char *)"A_Platform_With_Alarms_CP_sourceID",/* Member name */
            {
                4,/* Representation ID */          
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

    static DDS_TypeCode P_Alarms_PSM_C_Platform_With_Alarms_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_Alarms_PSM::C_Platform_With_Alarms", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            5, /* Number of members */
            P_Alarms_PSM_C_Platform_With_Alarms_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_Alarms_PSM_C_Platform_With_Alarms*/

    if (is_initialized) {
        return &P_Alarms_PSM_C_Platform_With_Alarms_g_tc;
    }

    P_Alarms_PSM_C_Platform_With_Alarms_g_tc_A_possibleMissionState_sourceID_sequence._data._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Platform_With_Alarms_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Platform_With_Alarms_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_DateTimeType_get_typecode();

    P_Alarms_PSM_C_Platform_With_Alarms_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Boolean_get_typecode();

    P_Alarms_PSM_C_Platform_With_Alarms_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& P_Alarms_PSM_C_Platform_With_Alarms_g_tc_A_possibleMissionState_sourceID_sequence;
    P_Alarms_PSM_C_Platform_With_Alarms_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_Alarms_PSM_C_Platform_With_Alarms_g_tc;
}

RTIBool P_Alarms_PSM_C_Platform_With_Alarms_initialize(
    P_Alarms_PSM_C_Platform_With_Alarms* sample) {
    return P_Alarms_PSM_C_Platform_With_Alarms_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_Alarms_PSM_C_Platform_With_Alarms_initialize_ex(
    P_Alarms_PSM_C_Platform_With_Alarms* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_Alarms_PSM_C_Platform_With_Alarms_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_Alarms_PSM_C_Platform_With_Alarms_initialize_w_params(
    P_Alarms_PSM_C_Platform_With_Alarms* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_DateTimeType_initialize_w_params(&sample->A_timeOfDataGeneration,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_Boolean_initialize_w_params(&sample->A_activeAlarmsExist,
    allocParams)) {
        return RTI_FALSE;
    }
    if (allocParams->allocate_memory) {
        P_LDM_Common_T_IdentifierTypeSeq_initialize(&sample->A_possibleMissionState_sourceID );
        P_LDM_Common_T_IdentifierTypeSeq_set_element_allocation_params(&sample->A_possibleMissionState_sourceID ,allocParams);
        if (!P_LDM_Common_T_IdentifierTypeSeq_set_maximum(&sample->A_possibleMissionState_sourceID, (100))) {
            return RTI_FALSE;
        }
    } else { 
        P_LDM_Common_T_IdentifierTypeSeq_set_length(&sample->A_possibleMissionState_sourceID, 0);
    }
    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_Platform_With_Alarms_CP_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_Alarms_PSM_C_Platform_With_Alarms_finalize(
    P_Alarms_PSM_C_Platform_With_Alarms* sample)
{

    P_Alarms_PSM_C_Platform_With_Alarms_finalize_ex(sample,RTI_TRUE);
}

void P_Alarms_PSM_C_Platform_With_Alarms_finalize_ex(
    P_Alarms_PSM_C_Platform_With_Alarms* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_Alarms_PSM_C_Platform_With_Alarms_finalize_w_params(
        sample,&deallocParams);
}

void P_Alarms_PSM_C_Platform_With_Alarms_finalize_w_params(
    P_Alarms_PSM_C_Platform_With_Alarms* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_sourceID,deallocParams);

    P_LDM_Common_T_DateTimeType_finalize_w_params(&sample->A_timeOfDataGeneration,deallocParams);

    P_LDM_Common_T_Boolean_finalize_w_params(&sample->A_activeAlarmsExist,deallocParams);

    P_LDM_Common_T_IdentifierTypeSeq_set_element_deallocation_params(
        &sample->A_possibleMissionState_sourceID,deallocParams);
    P_LDM_Common_T_IdentifierTypeSeq_finalize(&sample->A_possibleMissionState_sourceID);

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_Platform_With_Alarms_CP_sourceID,deallocParams);

}

void P_Alarms_PSM_C_Platform_With_Alarms_finalize_optional_members(
    P_Alarms_PSM_C_Platform_With_Alarms* sample, RTIBool deletePointers)
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

    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_sourceID, deallocParams->delete_pointers);
    P_LDM_Common_T_DateTimeType_finalize_optional_members(&sample->A_timeOfDataGeneration, deallocParams->delete_pointers);
    P_LDM_Common_T_Boolean_finalize_optional_members(&sample->A_activeAlarmsExist, deallocParams->delete_pointers);
    {
        DDS_UnsignedLong i, length;
        length = P_LDM_Common_T_IdentifierTypeSeq_get_length(
            &sample->A_possibleMissionState_sourceID);

        for (i = 0; i < length; i++) {
            P_LDM_Common_T_IdentifierType_finalize_optional_members(
                P_LDM_Common_T_IdentifierTypeSeq_get_reference(
                    &sample->A_possibleMissionState_sourceID, i), deallocParams->delete_pointers);
        }
    }  

    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_Platform_With_Alarms_CP_sourceID, deallocParams->delete_pointers);
}

RTIBool P_Alarms_PSM_C_Platform_With_Alarms_copy(
    P_Alarms_PSM_C_Platform_With_Alarms* dst,
    const P_Alarms_PSM_C_Platform_With_Alarms* src)
{

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_DateTimeType_copy(
        &dst->A_timeOfDataGeneration, &src->A_timeOfDataGeneration)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_Boolean_copy(
        &dst->A_activeAlarmsExist, &src->A_activeAlarmsExist)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierTypeSeq_copy(&dst->A_possibleMissionState_sourceID ,
    &src->A_possibleMissionState_sourceID )) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_Platform_With_Alarms_CP_sourceID, &src->A_Platform_With_Alarms_CP_sourceID)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_Alarms_PSM_C_Platform_With_Alarms' sequence class.
*/
#define T P_Alarms_PSM_C_Platform_With_Alarms
#define TSeq P_Alarms_PSM_C_Platform_With_AlarmsSeq
#define T_initialize_w_params P_Alarms_PSM_C_Platform_With_Alarms_initialize_w_params
#define T_finalize_w_params   P_Alarms_PSM_C_Platform_With_Alarms_finalize_w_params
#define T_copy       P_Alarms_PSM_C_Platform_With_Alarms_copy

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
const char *P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionTYPENAME = "P_Alarms_PSM::C_Actual_Alarm_Condition_unoverrideAlarmCondition";

DDS_TypeCode* P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_g_tc_members[8]=
    {

        {
            (char *)"A_recipientID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_sourceID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_referenceNum",/* Member name */
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
        }, 
        {
            (char *)"A_timeOfDataGeneration",/* Member name */
            {
                3,/* Representation ID */          
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
            (char *)"A_componentName",/* Member name */
            {
                4,/* Representation ID */          
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
            (char *)"A_subsystemName",/* Member name */
            {
                5,/* Representation ID */          
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
            (char *)"A_measure",/* Member name */
            {
                6,/* Representation ID */          
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
            (char *)"A_nature",/* Member name */
            {
                7,/* Representation ID */          
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

    static DDS_TypeCode P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_Alarms_PSM::C_Actual_Alarm_Condition_unoverrideAlarmCondition", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            8, /* Number of members */
            P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition*/

    if (is_initialized) {
        return &P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_g_tc;
    }

    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Int64_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_DateTimeType_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_g_tc;
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_initialize(
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition* sample) {
    return P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_initialize_ex(
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_initialize_w_params(
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_recipientID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_Int64_initialize_w_params(&sample->A_referenceNum,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_DateTimeType_initialize_w_params(&sample->A_timeOfDataGeneration,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_componentName,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_subsystemName,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_measure,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_nature,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_finalize(
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition* sample)
{

    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_finalize_ex(sample,RTI_TRUE);
}

void P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_finalize_ex(
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_finalize_w_params(
        sample,&deallocParams);
}

void P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_finalize_w_params(
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_recipientID,deallocParams);

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_sourceID,deallocParams);

    P_LDM_Common_T_Int64_finalize_w_params(&sample->A_referenceNum,deallocParams);

    P_LDM_Common_T_DateTimeType_finalize_w_params(&sample->A_timeOfDataGeneration,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_componentName,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_subsystemName,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_measure,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_nature,deallocParams);

}

void P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_finalize_optional_members(
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition* sample, RTIBool deletePointers)
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

    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_recipientID, deallocParams->delete_pointers);
    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_sourceID, deallocParams->delete_pointers);
    P_LDM_Common_T_Int64_finalize_optional_members(&sample->A_referenceNum, deallocParams->delete_pointers);
    P_LDM_Common_T_DateTimeType_finalize_optional_members(&sample->A_timeOfDataGeneration, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_componentName, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_subsystemName, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_measure, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_nature, deallocParams->delete_pointers);
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_copy(
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition* dst,
    const P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition* src)
{

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_recipientID, &src->A_recipientID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_Int64_copy(
        &dst->A_referenceNum, &src->A_referenceNum)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_DateTimeType_copy(
        &dst->A_timeOfDataGeneration, &src->A_timeOfDataGeneration)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_componentName, &src->A_componentName)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_subsystemName, &src->A_subsystemName)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_measure, &src->A_measure)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_nature, &src->A_nature)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition' sequence class.
*/
#define T P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition
#define TSeq P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionSeq
#define T_initialize_w_params P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_initialize_w_params
#define T_finalize_w_params   P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_finalize_w_params
#define T_copy       P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_copy

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
const char *P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionTYPENAME = "P_Alarms_PSM::C_Actual_Alarm_Condition_overrideAlarmCondition";

DDS_TypeCode* P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_g_tc_members[8]=
    {

        {
            (char *)"A_recipientID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_sourceID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_referenceNum",/* Member name */
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
        }, 
        {
            (char *)"A_timeOfDataGeneration",/* Member name */
            {
                3,/* Representation ID */          
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
            (char *)"A_componentName",/* Member name */
            {
                4,/* Representation ID */          
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
            (char *)"A_subsystemName",/* Member name */
            {
                5,/* Representation ID */          
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
            (char *)"A_measure",/* Member name */
            {
                6,/* Representation ID */          
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
            (char *)"A_nature",/* Member name */
            {
                7,/* Representation ID */          
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

    static DDS_TypeCode P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_Alarms_PSM::C_Actual_Alarm_Condition_overrideAlarmCondition", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            8, /* Number of members */
            P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition*/

    if (is_initialized) {
        return &P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_g_tc;
    }

    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Int64_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_DateTimeType_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_g_tc;
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_initialize(
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition* sample) {
    return P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_initialize_ex(
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_initialize_w_params(
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_recipientID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_Int64_initialize_w_params(&sample->A_referenceNum,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_DateTimeType_initialize_w_params(&sample->A_timeOfDataGeneration,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_componentName,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_subsystemName,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_measure,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_nature,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_finalize(
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition* sample)
{

    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_finalize_ex(sample,RTI_TRUE);
}

void P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_finalize_ex(
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_finalize_w_params(
        sample,&deallocParams);
}

void P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_finalize_w_params(
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_recipientID,deallocParams);

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_sourceID,deallocParams);

    P_LDM_Common_T_Int64_finalize_w_params(&sample->A_referenceNum,deallocParams);

    P_LDM_Common_T_DateTimeType_finalize_w_params(&sample->A_timeOfDataGeneration,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_componentName,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_subsystemName,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_measure,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_nature,deallocParams);

}

void P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_finalize_optional_members(
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition* sample, RTIBool deletePointers)
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

    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_recipientID, deallocParams->delete_pointers);
    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_sourceID, deallocParams->delete_pointers);
    P_LDM_Common_T_Int64_finalize_optional_members(&sample->A_referenceNum, deallocParams->delete_pointers);
    P_LDM_Common_T_DateTimeType_finalize_optional_members(&sample->A_timeOfDataGeneration, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_componentName, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_subsystemName, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_measure, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_nature, deallocParams->delete_pointers);
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_copy(
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition* dst,
    const P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition* src)
{

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_recipientID, &src->A_recipientID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_Int64_copy(
        &dst->A_referenceNum, &src->A_referenceNum)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_DateTimeType_copy(
        &dst->A_timeOfDataGeneration, &src->A_timeOfDataGeneration)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_componentName, &src->A_componentName)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_subsystemName, &src->A_subsystemName)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_measure, &src->A_measure)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_nature, &src->A_nature)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition' sequence class.
*/
#define T P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition
#define TSeq P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionSeq
#define T_initialize_w_params P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_initialize_w_params
#define T_finalize_w_params   P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_finalize_w_params
#define T_copy       P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_copy

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
const char *P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionTYPENAME = "P_Alarms_PSM::C_Actual_Alarm_Condition_clearAlarmCondition";

DDS_TypeCode* P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_g_tc_members[8]=
    {

        {
            (char *)"A_recipientID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_sourceID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_referenceNum",/* Member name */
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
        }, 
        {
            (char *)"A_timeOfDataGeneration",/* Member name */
            {
                3,/* Representation ID */          
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
            (char *)"A_componentName",/* Member name */
            {
                4,/* Representation ID */          
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
            (char *)"A_subsystemName",/* Member name */
            {
                5,/* Representation ID */          
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
            (char *)"A_measure",/* Member name */
            {
                6,/* Representation ID */          
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
            (char *)"A_nature",/* Member name */
            {
                7,/* Representation ID */          
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

    static DDS_TypeCode P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_Alarms_PSM::C_Actual_Alarm_Condition_clearAlarmCondition", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            8, /* Number of members */
            P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition*/

    if (is_initialized) {
        return &P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_g_tc;
    }

    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Int64_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_DateTimeType_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_ShortString_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_g_tc;
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_initialize(
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition* sample) {
    return P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_initialize_ex(
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_initialize_w_params(
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_recipientID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_Int64_initialize_w_params(&sample->A_referenceNum,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_DateTimeType_initialize_w_params(&sample->A_timeOfDataGeneration,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_componentName,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_subsystemName,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_measure,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_ShortString_initialize_w_params(&sample->A_nature,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_finalize(
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition* sample)
{

    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_finalize_ex(sample,RTI_TRUE);
}

void P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_finalize_ex(
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_finalize_w_params(
        sample,&deallocParams);
}

void P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_finalize_w_params(
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_recipientID,deallocParams);

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_sourceID,deallocParams);

    P_LDM_Common_T_Int64_finalize_w_params(&sample->A_referenceNum,deallocParams);

    P_LDM_Common_T_DateTimeType_finalize_w_params(&sample->A_timeOfDataGeneration,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_componentName,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_subsystemName,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_measure,deallocParams);

    P_LDM_Common_T_ShortString_finalize_w_params(&sample->A_nature,deallocParams);

}

void P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_finalize_optional_members(
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition* sample, RTIBool deletePointers)
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

    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_recipientID, deallocParams->delete_pointers);
    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_sourceID, deallocParams->delete_pointers);
    P_LDM_Common_T_Int64_finalize_optional_members(&sample->A_referenceNum, deallocParams->delete_pointers);
    P_LDM_Common_T_DateTimeType_finalize_optional_members(&sample->A_timeOfDataGeneration, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_componentName, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_subsystemName, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_measure, deallocParams->delete_pointers);
    P_LDM_Common_T_ShortString_finalize_optional_members(&sample->A_nature, deallocParams->delete_pointers);
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_copy(
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition* dst,
    const P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition* src)
{

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_recipientID, &src->A_recipientID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_Int64_copy(
        &dst->A_referenceNum, &src->A_referenceNum)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_DateTimeType_copy(
        &dst->A_timeOfDataGeneration, &src->A_timeOfDataGeneration)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_componentName, &src->A_componentName)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_subsystemName, &src->A_subsystemName)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_measure, &src->A_measure)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_ShortString_copy(
        &dst->A_nature, &src->A_nature)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition' sequence class.
*/
#define T P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition
#define TSeq P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionSeq
#define T_initialize_w_params P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_initialize_w_params
#define T_finalize_w_params   P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_finalize_w_params
#define T_copy       P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_copy

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
const char *P_Alarms_PSM_C_Actual_Alarm_ConditionTYPENAME = "P_Alarms_PSM::C_Actual_Alarm_Condition";

DDS_TypeCode* P_Alarms_PSM_C_Actual_Alarm_Condition_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_Alarms_PSM_C_Actual_Alarm_Condition_g_tc_members[7]=
    {

        {
            (char *)"A_sourceID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_timeOfDataGeneration",/* Member name */
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
            (char *)"A_alarmSourceID",/* Member name */
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
        }, 
        {
            (char *)"A_dateTimeRaised",/* Member name */
            {
                3,/* Representation ID */          
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
            (char *)"A_isOverridden",/* Member name */
            {
                4,/* Representation ID */          
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
            (char *)"A_specification_sourceID",/* Member name */
            {
                5,/* Representation ID */          
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
            (char *)"A_raisedActualAlarm_sourceID",/* Member name */
            {
                6,/* Representation ID */          
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

    static DDS_TypeCode P_Alarms_PSM_C_Actual_Alarm_Condition_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_Alarms_PSM::C_Actual_Alarm_Condition", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            7, /* Number of members */
            P_Alarms_PSM_C_Actual_Alarm_Condition_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_Alarms_PSM_C_Actual_Alarm_Condition*/

    if (is_initialized) {
        return &P_Alarms_PSM_C_Actual_Alarm_Condition_g_tc;
    }

    P_Alarms_PSM_C_Actual_Alarm_Condition_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_Condition_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_DateTimeType_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_Condition_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_Condition_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_DateTimeType_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_Condition_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Boolean_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_Condition_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Actual_Alarm_Condition_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_Alarms_PSM_C_Actual_Alarm_Condition_g_tc;
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_initialize(
    P_Alarms_PSM_C_Actual_Alarm_Condition* sample) {
    return P_Alarms_PSM_C_Actual_Alarm_Condition_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_initialize_ex(
    P_Alarms_PSM_C_Actual_Alarm_Condition* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_Alarms_PSM_C_Actual_Alarm_Condition_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_initialize_w_params(
    P_Alarms_PSM_C_Actual_Alarm_Condition* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_DateTimeType_initialize_w_params(&sample->A_timeOfDataGeneration,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_alarmSourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_DateTimeType_initialize_w_params(&sample->A_dateTimeRaised,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_Boolean_initialize_w_params(&sample->A_isOverridden,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_specification_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_raisedActualAlarm_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_Alarms_PSM_C_Actual_Alarm_Condition_finalize(
    P_Alarms_PSM_C_Actual_Alarm_Condition* sample)
{

    P_Alarms_PSM_C_Actual_Alarm_Condition_finalize_ex(sample,RTI_TRUE);
}

void P_Alarms_PSM_C_Actual_Alarm_Condition_finalize_ex(
    P_Alarms_PSM_C_Actual_Alarm_Condition* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_Alarms_PSM_C_Actual_Alarm_Condition_finalize_w_params(
        sample,&deallocParams);
}

void P_Alarms_PSM_C_Actual_Alarm_Condition_finalize_w_params(
    P_Alarms_PSM_C_Actual_Alarm_Condition* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_sourceID,deallocParams);

    P_LDM_Common_T_DateTimeType_finalize_w_params(&sample->A_timeOfDataGeneration,deallocParams);

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_alarmSourceID,deallocParams);

    P_LDM_Common_T_DateTimeType_finalize_w_params(&sample->A_dateTimeRaised,deallocParams);

    P_LDM_Common_T_Boolean_finalize_w_params(&sample->A_isOverridden,deallocParams);

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_specification_sourceID,deallocParams);

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_raisedActualAlarm_sourceID,deallocParams);

}

void P_Alarms_PSM_C_Actual_Alarm_Condition_finalize_optional_members(
    P_Alarms_PSM_C_Actual_Alarm_Condition* sample, RTIBool deletePointers)
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

    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_sourceID, deallocParams->delete_pointers);
    P_LDM_Common_T_DateTimeType_finalize_optional_members(&sample->A_timeOfDataGeneration, deallocParams->delete_pointers);
    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_alarmSourceID, deallocParams->delete_pointers);
    P_LDM_Common_T_DateTimeType_finalize_optional_members(&sample->A_dateTimeRaised, deallocParams->delete_pointers);
    P_LDM_Common_T_Boolean_finalize_optional_members(&sample->A_isOverridden, deallocParams->delete_pointers);
    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_specification_sourceID, deallocParams->delete_pointers);
    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_raisedActualAlarm_sourceID, deallocParams->delete_pointers);
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_copy(
    P_Alarms_PSM_C_Actual_Alarm_Condition* dst,
    const P_Alarms_PSM_C_Actual_Alarm_Condition* src)
{

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_DateTimeType_copy(
        &dst->A_timeOfDataGeneration, &src->A_timeOfDataGeneration)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_alarmSourceID, &src->A_alarmSourceID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_DateTimeType_copy(
        &dst->A_dateTimeRaised, &src->A_dateTimeRaised)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_Boolean_copy(
        &dst->A_isOverridden, &src->A_isOverridden)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_specification_sourceID, &src->A_specification_sourceID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_raisedActualAlarm_sourceID, &src->A_raisedActualAlarm_sourceID)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_Alarms_PSM_C_Actual_Alarm_Condition' sequence class.
*/
#define T P_Alarms_PSM_C_Actual_Alarm_Condition
#define TSeq P_Alarms_PSM_C_Actual_Alarm_ConditionSeq
#define T_initialize_w_params P_Alarms_PSM_C_Actual_Alarm_Condition_initialize_w_params
#define T_finalize_w_params   P_Alarms_PSM_C_Actual_Alarm_Condition_finalize_w_params
#define T_copy       P_Alarms_PSM_C_Actual_Alarm_Condition_copy

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
const char *P_Alarms_PSM_C_Alarm_CategoryTYPENAME = "P_Alarms_PSM::C_Alarm_Category";

DDS_TypeCode* P_Alarms_PSM_C_Alarm_Category_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode P_Alarms_PSM_C_Alarm_Category_g_tc_A_categorisedActualAlarm_sourceID_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100),NULL);
    static DDS_TypeCode_Member P_Alarms_PSM_C_Alarm_Category_g_tc_members[6]=
    {

        {
            (char *)"A_sourceID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_timeOfDataGeneration",/* Member name */
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
            (char *)"A_activeAlarmCount",/* Member name */
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
        }, 
        {
            (char *)"A_unacknowledgedAlarmCount",/* Member name */
            {
                3,/* Representation ID */          
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
            (char *)"A_categorisedActualAlarm_sourceID",/* Member name */
            {
                4,/* Representation ID */          
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
            (char *)"A_alarmCategorySpecification_sourceID",/* Member name */
            {
                5,/* Representation ID */          
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

    static DDS_TypeCode P_Alarms_PSM_C_Alarm_Category_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_Alarms_PSM::C_Alarm_Category", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            6, /* Number of members */
            P_Alarms_PSM_C_Alarm_Category_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_Alarms_PSM_C_Alarm_Category*/

    if (is_initialized) {
        return &P_Alarms_PSM_C_Alarm_Category_g_tc;
    }

    P_Alarms_PSM_C_Alarm_Category_g_tc_A_categorisedActualAlarm_sourceID_sequence._data._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Alarm_Category_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Alarm_Category_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_DateTimeType_get_typecode();

    P_Alarms_PSM_C_Alarm_Category_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Int16_get_typecode();

    P_Alarms_PSM_C_Alarm_Category_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_Int16_get_typecode();

    P_Alarms_PSM_C_Alarm_Category_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& P_Alarms_PSM_C_Alarm_Category_g_tc_A_categorisedActualAlarm_sourceID_sequence;
    P_Alarms_PSM_C_Alarm_Category_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_Alarms_PSM_C_Alarm_Category_g_tc;
}

RTIBool P_Alarms_PSM_C_Alarm_Category_initialize(
    P_Alarms_PSM_C_Alarm_Category* sample) {
    return P_Alarms_PSM_C_Alarm_Category_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_Alarms_PSM_C_Alarm_Category_initialize_ex(
    P_Alarms_PSM_C_Alarm_Category* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_Alarms_PSM_C_Alarm_Category_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_Alarms_PSM_C_Alarm_Category_initialize_w_params(
    P_Alarms_PSM_C_Alarm_Category* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_DateTimeType_initialize_w_params(&sample->A_timeOfDataGeneration,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_Int16_initialize_w_params(&sample->A_activeAlarmCount,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_Int16_initialize_w_params(&sample->A_unacknowledgedAlarmCount,
    allocParams)) {
        return RTI_FALSE;
    }
    if (allocParams->allocate_memory) {
        P_LDM_Common_T_IdentifierTypeSeq_initialize(&sample->A_categorisedActualAlarm_sourceID );
        P_LDM_Common_T_IdentifierTypeSeq_set_element_allocation_params(&sample->A_categorisedActualAlarm_sourceID ,allocParams);
        if (!P_LDM_Common_T_IdentifierTypeSeq_set_maximum(&sample->A_categorisedActualAlarm_sourceID, (100))) {
            return RTI_FALSE;
        }
    } else { 
        P_LDM_Common_T_IdentifierTypeSeq_set_length(&sample->A_categorisedActualAlarm_sourceID, 0);
    }
    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_alarmCategorySpecification_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_Alarms_PSM_C_Alarm_Category_finalize(
    P_Alarms_PSM_C_Alarm_Category* sample)
{

    P_Alarms_PSM_C_Alarm_Category_finalize_ex(sample,RTI_TRUE);
}

void P_Alarms_PSM_C_Alarm_Category_finalize_ex(
    P_Alarms_PSM_C_Alarm_Category* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_Alarms_PSM_C_Alarm_Category_finalize_w_params(
        sample,&deallocParams);
}

void P_Alarms_PSM_C_Alarm_Category_finalize_w_params(
    P_Alarms_PSM_C_Alarm_Category* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_sourceID,deallocParams);

    P_LDM_Common_T_DateTimeType_finalize_w_params(&sample->A_timeOfDataGeneration,deallocParams);

    P_LDM_Common_T_Int16_finalize_w_params(&sample->A_activeAlarmCount,deallocParams);

    P_LDM_Common_T_Int16_finalize_w_params(&sample->A_unacknowledgedAlarmCount,deallocParams);

    P_LDM_Common_T_IdentifierTypeSeq_set_element_deallocation_params(
        &sample->A_categorisedActualAlarm_sourceID,deallocParams);
    P_LDM_Common_T_IdentifierTypeSeq_finalize(&sample->A_categorisedActualAlarm_sourceID);

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_alarmCategorySpecification_sourceID,deallocParams);

}

void P_Alarms_PSM_C_Alarm_Category_finalize_optional_members(
    P_Alarms_PSM_C_Alarm_Category* sample, RTIBool deletePointers)
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

    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_sourceID, deallocParams->delete_pointers);
    P_LDM_Common_T_DateTimeType_finalize_optional_members(&sample->A_timeOfDataGeneration, deallocParams->delete_pointers);
    P_LDM_Common_T_Int16_finalize_optional_members(&sample->A_activeAlarmCount, deallocParams->delete_pointers);
    P_LDM_Common_T_Int16_finalize_optional_members(&sample->A_unacknowledgedAlarmCount, deallocParams->delete_pointers);
    {
        DDS_UnsignedLong i, length;
        length = P_LDM_Common_T_IdentifierTypeSeq_get_length(
            &sample->A_categorisedActualAlarm_sourceID);

        for (i = 0; i < length; i++) {
            P_LDM_Common_T_IdentifierType_finalize_optional_members(
                P_LDM_Common_T_IdentifierTypeSeq_get_reference(
                    &sample->A_categorisedActualAlarm_sourceID, i), deallocParams->delete_pointers);
        }
    }  

    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_alarmCategorySpecification_sourceID, deallocParams->delete_pointers);
}

RTIBool P_Alarms_PSM_C_Alarm_Category_copy(
    P_Alarms_PSM_C_Alarm_Category* dst,
    const P_Alarms_PSM_C_Alarm_Category* src)
{

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_DateTimeType_copy(
        &dst->A_timeOfDataGeneration, &src->A_timeOfDataGeneration)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_Int16_copy(
        &dst->A_activeAlarmCount, &src->A_activeAlarmCount)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_Int16_copy(
        &dst->A_unacknowledgedAlarmCount, &src->A_unacknowledgedAlarmCount)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierTypeSeq_copy(&dst->A_categorisedActualAlarm_sourceID ,
    &src->A_categorisedActualAlarm_sourceID )) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_alarmCategorySpecification_sourceID, &src->A_alarmCategorySpecification_sourceID)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_Alarms_PSM_C_Alarm_Category' sequence class.
*/
#define T P_Alarms_PSM_C_Alarm_Category
#define TSeq P_Alarms_PSM_C_Alarm_CategorySeq
#define T_initialize_w_params P_Alarms_PSM_C_Alarm_Category_initialize_w_params
#define T_finalize_w_params   P_Alarms_PSM_C_Alarm_Category_finalize_w_params
#define T_copy       P_Alarms_PSM_C_Alarm_Category_copy

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
const char *P_Alarms_PSM_C_Platform_With_Alarms_CPTYPENAME = "P_Alarms_PSM::C_Platform_With_Alarms_CP";

DDS_TypeCode* P_Alarms_PSM_C_Platform_With_Alarms_CP_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member P_Alarms_PSM_C_Platform_With_Alarms_CP_g_tc_members[3]=
    {

        {
            (char *)"A_sourceID",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"A_timeOfDataGeneration",/* Member name */
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
            (char *)"A_Platform_With_Alarms_sourceID",/* Member name */
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

    static DDS_TypeCode P_Alarms_PSM_C_Platform_With_Alarms_CP_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"P_Alarms_PSM::C_Platform_With_Alarms_CP", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            P_Alarms_PSM_C_Platform_With_Alarms_CP_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for P_Alarms_PSM_C_Platform_With_Alarms_CP*/

    if (is_initialized) {
        return &P_Alarms_PSM_C_Platform_With_Alarms_CP_g_tc;
    }

    P_Alarms_PSM_C_Platform_With_Alarms_CP_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    P_Alarms_PSM_C_Platform_With_Alarms_CP_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_DateTimeType_get_typecode();

    P_Alarms_PSM_C_Platform_With_Alarms_CP_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)P_LDM_Common_T_IdentifierType_get_typecode();

    is_initialized = RTI_TRUE;

    return &P_Alarms_PSM_C_Platform_With_Alarms_CP_g_tc;
}

RTIBool P_Alarms_PSM_C_Platform_With_Alarms_CP_initialize(
    P_Alarms_PSM_C_Platform_With_Alarms_CP* sample) {
    return P_Alarms_PSM_C_Platform_With_Alarms_CP_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool P_Alarms_PSM_C_Platform_With_Alarms_CP_initialize_ex(
    P_Alarms_PSM_C_Platform_With_Alarms_CP* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return P_Alarms_PSM_C_Platform_With_Alarms_CP_initialize_w_params(
        sample,&allocParams);

}

RTIBool P_Alarms_PSM_C_Platform_With_Alarms_CP_initialize_w_params(
    P_Alarms_PSM_C_Platform_With_Alarms_CP* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (allocParams) {} /* To avoid warnings */

    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_DateTimeType_initialize_w_params(&sample->A_timeOfDataGeneration,
    allocParams)) {
        return RTI_FALSE;
    }
    if (!P_LDM_Common_T_IdentifierType_initialize_w_params(&sample->A_Platform_With_Alarms_sourceID,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void P_Alarms_PSM_C_Platform_With_Alarms_CP_finalize(
    P_Alarms_PSM_C_Platform_With_Alarms_CP* sample)
{

    P_Alarms_PSM_C_Platform_With_Alarms_CP_finalize_ex(sample,RTI_TRUE);
}

void P_Alarms_PSM_C_Platform_With_Alarms_CP_finalize_ex(
    P_Alarms_PSM_C_Platform_With_Alarms_CP* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    P_Alarms_PSM_C_Platform_With_Alarms_CP_finalize_w_params(
        sample,&deallocParams);
}

void P_Alarms_PSM_C_Platform_With_Alarms_CP_finalize_w_params(
    P_Alarms_PSM_C_Platform_With_Alarms_CP* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }
    if (deallocParams) {} /* To avoid warnings */

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_sourceID,deallocParams);

    P_LDM_Common_T_DateTimeType_finalize_w_params(&sample->A_timeOfDataGeneration,deallocParams);

    P_LDM_Common_T_IdentifierType_finalize_w_params(&sample->A_Platform_With_Alarms_sourceID,deallocParams);

}

void P_Alarms_PSM_C_Platform_With_Alarms_CP_finalize_optional_members(
    P_Alarms_PSM_C_Platform_With_Alarms_CP* sample, RTIBool deletePointers)
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

    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_sourceID, deallocParams->delete_pointers);
    P_LDM_Common_T_DateTimeType_finalize_optional_members(&sample->A_timeOfDataGeneration, deallocParams->delete_pointers);
    P_LDM_Common_T_IdentifierType_finalize_optional_members(&sample->A_Platform_With_Alarms_sourceID, deallocParams->delete_pointers);
}

RTIBool P_Alarms_PSM_C_Platform_With_Alarms_CP_copy(
    P_Alarms_PSM_C_Platform_With_Alarms_CP* dst,
    const P_Alarms_PSM_C_Platform_With_Alarms_CP* src)
{

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_DateTimeType_copy(
        &dst->A_timeOfDataGeneration, &src->A_timeOfDataGeneration)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_Platform_With_Alarms_sourceID, &src->A_Platform_With_Alarms_sourceID)) {
        return RTI_FALSE;
    } 

    return RTI_TRUE;
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'P_Alarms_PSM_C_Platform_With_Alarms_CP' sequence class.
*/
#define T P_Alarms_PSM_C_Platform_With_Alarms_CP
#define TSeq P_Alarms_PSM_C_Platform_With_Alarms_CPSeq
#define T_initialize_w_params P_Alarms_PSM_C_Platform_With_Alarms_CP_initialize_w_params
#define T_finalize_w_params   P_Alarms_PSM_C_Platform_With_Alarms_CP_finalize_w_params
#define T_copy       P_Alarms_PSM_C_Platform_With_Alarms_CP_copy

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

