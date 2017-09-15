

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Alarms_PSM_RTI.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Alarms_PSM_RTI_41728481_h
#define Alarms_PSM_RTI_41728481_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "LDM_Common.h"
typedef enum P_Alarms_PSM_T_Actual_Alarm_StateType
{
    L_Actual_Alarm_StateType_Unacknowledged ,      
    L_Actual_Alarm_StateType_Acknowledged ,      
    L_Actual_Alarm_StateType_Resolved ,      
    L_Actual_Alarm_StateType_Destroyed ,      
    L_Actual_Alarm_StateType_Cleared      
} P_Alarms_PSM_T_Actual_Alarm_StateType;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_Alarms_PSM_T_Actual_Alarm_StateType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_Alarms_PSM_T_Actual_Alarm_StateTypeSeq, P_Alarms_PSM_T_Actual_Alarm_StateType);                                        

NDDSUSERDllExport
RTIBool P_Alarms_PSM_T_Actual_Alarm_StateType_initialize(
    P_Alarms_PSM_T_Actual_Alarm_StateType* self);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_T_Actual_Alarm_StateType_initialize_ex(
    P_Alarms_PSM_T_Actual_Alarm_StateType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_T_Actual_Alarm_StateType_initialize_w_params(
    P_Alarms_PSM_T_Actual_Alarm_StateType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_Alarms_PSM_T_Actual_Alarm_StateType_finalize(
    P_Alarms_PSM_T_Actual_Alarm_StateType* self);

NDDSUSERDllExport
void P_Alarms_PSM_T_Actual_Alarm_StateType_finalize_ex(
    P_Alarms_PSM_T_Actual_Alarm_StateType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_Alarms_PSM_T_Actual_Alarm_StateType_finalize_w_params(
    P_Alarms_PSM_T_Actual_Alarm_StateType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_Alarms_PSM_T_Actual_Alarm_StateType_finalize_optional_members(
    P_Alarms_PSM_T_Actual_Alarm_StateType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_Alarms_PSM_T_Actual_Alarm_StateType_copy(
    P_Alarms_PSM_T_Actual_Alarm_StateType* dst,
    const P_Alarms_PSM_T_Actual_Alarm_StateType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum P_Alarms_PSM_T_Alarm_Condition_Specification_StateType
{
    L_Alarm_Condition_Specification_StateType_condition_overridden ,      
    L_Alarm_Condition_Specification_StateType_condition_not_overridden      
} P_Alarms_PSM_T_Alarm_Condition_Specification_StateType;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypeSeq, P_Alarms_PSM_T_Alarm_Condition_Specification_StateType);                                        

NDDSUSERDllExport
RTIBool P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_initialize(
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateType* self);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_initialize_ex(
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_initialize_w_params(
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_finalize(
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateType* self);

NDDSUSERDllExport
void P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_finalize_ex(
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_finalize_w_params(
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_finalize_optional_members(
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_Alarms_PSM_T_Alarm_Condition_Specification_StateType_copy(
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateType* dst,
    const P_Alarms_PSM_T_Alarm_Condition_Specification_StateType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum P_Alarms_PSM_T_AlarmCategoryType
{
    L_AlarmCategoryType_Warning ,      
    L_AlarmCategoryType_Caution ,      
    L_AlarmCategoryType_Advisory      
} P_Alarms_PSM_T_AlarmCategoryType;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_Alarms_PSM_T_AlarmCategoryType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_Alarms_PSM_T_AlarmCategoryTypeSeq, P_Alarms_PSM_T_AlarmCategoryType);                                        

NDDSUSERDllExport
RTIBool P_Alarms_PSM_T_AlarmCategoryType_initialize(
    P_Alarms_PSM_T_AlarmCategoryType* self);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_T_AlarmCategoryType_initialize_ex(
    P_Alarms_PSM_T_AlarmCategoryType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_T_AlarmCategoryType_initialize_w_params(
    P_Alarms_PSM_T_AlarmCategoryType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_Alarms_PSM_T_AlarmCategoryType_finalize(
    P_Alarms_PSM_T_AlarmCategoryType* self);

NDDSUSERDllExport
void P_Alarms_PSM_T_AlarmCategoryType_finalize_ex(
    P_Alarms_PSM_T_AlarmCategoryType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_Alarms_PSM_T_AlarmCategoryType_finalize_w_params(
    P_Alarms_PSM_T_AlarmCategoryType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_Alarms_PSM_T_AlarmCategoryType_finalize_optional_members(
    P_Alarms_PSM_T_AlarmCategoryType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_Alarms_PSM_T_AlarmCategoryType_copy(
    P_Alarms_PSM_T_AlarmCategoryType* dst,
    const P_Alarms_PSM_T_AlarmCategoryType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum P_Alarms_PSM_T_MissionStateType
{
    L_MissionStateType_Driving ,      
    L_MissionStateType_Engagement ,      
    L_MissionStateType_Reconnaissance      
} P_Alarms_PSM_T_MissionStateType;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_Alarms_PSM_T_MissionStateType_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_Alarms_PSM_T_MissionStateTypeSeq, P_Alarms_PSM_T_MissionStateType);                                        

NDDSUSERDllExport
RTIBool P_Alarms_PSM_T_MissionStateType_initialize(
    P_Alarms_PSM_T_MissionStateType* self);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_T_MissionStateType_initialize_ex(
    P_Alarms_PSM_T_MissionStateType* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_T_MissionStateType_initialize_w_params(
    P_Alarms_PSM_T_MissionStateType* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_Alarms_PSM_T_MissionStateType_finalize(
    P_Alarms_PSM_T_MissionStateType* self);

NDDSUSERDllExport
void P_Alarms_PSM_T_MissionStateType_finalize_ex(
    P_Alarms_PSM_T_MissionStateType* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_Alarms_PSM_T_MissionStateType_finalize_w_params(
    P_Alarms_PSM_T_MissionStateType* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_Alarms_PSM_T_MissionStateType_finalize_optional_members(
    P_Alarms_PSM_T_MissionStateType* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_Alarms_PSM_T_MissionStateType_copy(
    P_Alarms_PSM_T_MissionStateType* dst,
    const P_Alarms_PSM_T_MissionStateType* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_Alarms_PSM_C_Crew_Role_In_Mission_StateTYPENAME;

}

struct P_Alarms_PSM_C_Crew_Role_In_Mission_StateSeq;
#ifndef NDDS_STANDALONE_TYPE
class P_Alarms_PSM_C_Crew_Role_In_Mission_StateTypeSupport;
class P_Alarms_PSM_C_Crew_Role_In_Mission_StateDataWriter;
class P_Alarms_PSM_C_Crew_Role_In_Mission_StateDataReader;
#endif

class P_Alarms_PSM_C_Crew_Role_In_Mission_State 
{
  public:
    typedef struct P_Alarms_PSM_C_Crew_Role_In_Mission_StateSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef P_Alarms_PSM_C_Crew_Role_In_Mission_StateTypeSupport TypeSupport;
    typedef P_Alarms_PSM_C_Crew_Role_In_Mission_StateDataWriter DataWriter;
    typedef P_Alarms_PSM_C_Crew_Role_In_Mission_StateDataReader DataReader;
    #endif

    P_LDM_Common_T_IdentifierType   A_sourceID ;
    P_LDM_Common_T_DateTimeType   A_timeOfDataGeneration ;
    P_LDM_Common_T_ShortString   A_crewRoleName ;
    P_LDM_Common_T_IdentifierTypeSeq  A_relevantAlarmType_sourceID ;
    P_LDM_Common_T_IdentifierTypeSeq  A_missionState_sourceID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_Alarms_PSM_C_Crew_Role_In_Mission_State_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_Alarms_PSM_C_Crew_Role_In_Mission_StateSeq, P_Alarms_PSM_C_Crew_Role_In_Mission_State);                                        

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Crew_Role_In_Mission_State_initialize(
    P_Alarms_PSM_C_Crew_Role_In_Mission_State* self);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Crew_Role_In_Mission_State_initialize_ex(
    P_Alarms_PSM_C_Crew_Role_In_Mission_State* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Crew_Role_In_Mission_State_initialize_w_params(
    P_Alarms_PSM_C_Crew_Role_In_Mission_State* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_Alarms_PSM_C_Crew_Role_In_Mission_State_finalize(
    P_Alarms_PSM_C_Crew_Role_In_Mission_State* self);

NDDSUSERDllExport
void P_Alarms_PSM_C_Crew_Role_In_Mission_State_finalize_ex(
    P_Alarms_PSM_C_Crew_Role_In_Mission_State* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_Alarms_PSM_C_Crew_Role_In_Mission_State_finalize_w_params(
    P_Alarms_PSM_C_Crew_Role_In_Mission_State* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_Alarms_PSM_C_Crew_Role_In_Mission_State_finalize_optional_members(
    P_Alarms_PSM_C_Crew_Role_In_Mission_State* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Crew_Role_In_Mission_State_copy(
    P_Alarms_PSM_C_Crew_Role_In_Mission_State* dst,
    const P_Alarms_PSM_C_Crew_Role_In_Mission_State* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_Alarms_PSM_C_Alarm_Category_SpecificationTYPENAME;

}

struct P_Alarms_PSM_C_Alarm_Category_SpecificationSeq;
#ifndef NDDS_STANDALONE_TYPE
class P_Alarms_PSM_C_Alarm_Category_SpecificationTypeSupport;
class P_Alarms_PSM_C_Alarm_Category_SpecificationDataWriter;
class P_Alarms_PSM_C_Alarm_Category_SpecificationDataReader;
#endif

class P_Alarms_PSM_C_Alarm_Category_Specification 
{
  public:
    typedef struct P_Alarms_PSM_C_Alarm_Category_SpecificationSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef P_Alarms_PSM_C_Alarm_Category_SpecificationTypeSupport TypeSupport;
    typedef P_Alarms_PSM_C_Alarm_Category_SpecificationDataWriter DataWriter;
    typedef P_Alarms_PSM_C_Alarm_Category_SpecificationDataReader DataReader;
    #endif

    P_LDM_Common_T_IdentifierType   A_sourceID ;
    P_LDM_Common_T_DateTimeType   A_timeOfDataGeneration ;
    P_Alarms_PSM_T_AlarmCategoryType   A_alarmCategoryName ;
    P_LDM_Common_T_ShortString   A_alarmCategoryAbbreviation ;
    P_LDM_Common_T_Boolean   A_isAutoAcknowledged ;
    P_LDM_Common_T_DurationType   A_automaticAcknowledgeTimeout ;
    P_LDM_Common_T_Boolean   A_hideOnAcknowledge ;
    P_LDM_Common_T_Boolean   A_isRepeated ;
    P_LDM_Common_T_DurationType   A_repeatTimeout ;
    P_LDM_Common_T_IdentifierTypeSeq  A_categorisedConditionSpecification_sourceID ;
    P_LDM_Common_T_IdentifierType   A_notifyingToneSpecification_sourceID ;
    P_LDM_Common_T_IdentifierType   A_alarmCategory_sourceID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_Alarms_PSM_C_Alarm_Category_Specification_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_Alarms_PSM_C_Alarm_Category_SpecificationSeq, P_Alarms_PSM_C_Alarm_Category_Specification);                                        

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Alarm_Category_Specification_initialize(
    P_Alarms_PSM_C_Alarm_Category_Specification* self);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Alarm_Category_Specification_initialize_ex(
    P_Alarms_PSM_C_Alarm_Category_Specification* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Alarm_Category_Specification_initialize_w_params(
    P_Alarms_PSM_C_Alarm_Category_Specification* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_Alarms_PSM_C_Alarm_Category_Specification_finalize(
    P_Alarms_PSM_C_Alarm_Category_Specification* self);

NDDSUSERDllExport
void P_Alarms_PSM_C_Alarm_Category_Specification_finalize_ex(
    P_Alarms_PSM_C_Alarm_Category_Specification* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_Alarms_PSM_C_Alarm_Category_Specification_finalize_w_params(
    P_Alarms_PSM_C_Alarm_Category_Specification* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_Alarms_PSM_C_Alarm_Category_Specification_finalize_optional_members(
    P_Alarms_PSM_C_Alarm_Category_Specification* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Alarm_Category_Specification_copy(
    P_Alarms_PSM_C_Alarm_Category_Specification* dst,
    const P_Alarms_PSM_C_Alarm_Category_Specification* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_Alarms_PSM_C_Mission_State_setMissionStateTYPENAME;

}

struct P_Alarms_PSM_C_Mission_State_setMissionStateSeq;
#ifndef NDDS_STANDALONE_TYPE
class P_Alarms_PSM_C_Mission_State_setMissionStateTypeSupport;
class P_Alarms_PSM_C_Mission_State_setMissionStateDataWriter;
class P_Alarms_PSM_C_Mission_State_setMissionStateDataReader;
#endif

class P_Alarms_PSM_C_Mission_State_setMissionState 
{
  public:
    typedef struct P_Alarms_PSM_C_Mission_State_setMissionStateSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef P_Alarms_PSM_C_Mission_State_setMissionStateTypeSupport TypeSupport;
    typedef P_Alarms_PSM_C_Mission_State_setMissionStateDataWriter DataWriter;
    typedef P_Alarms_PSM_C_Mission_State_setMissionStateDataReader DataReader;
    #endif

    P_LDM_Common_T_IdentifierType   A_recipientID ;
    P_LDM_Common_T_IdentifierType   A_sourceID ;
    P_LDM_Common_T_Int64   A_referenceNum ;
    P_LDM_Common_T_DateTimeType   A_timeOfDataGeneration ;
    P_Alarms_PSM_T_MissionStateType   A_missionState ;
    P_LDM_Common_T_ShortString   A_missionStateName ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_Alarms_PSM_C_Mission_State_setMissionState_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_Alarms_PSM_C_Mission_State_setMissionStateSeq, P_Alarms_PSM_C_Mission_State_setMissionState);                                        

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Mission_State_setMissionState_initialize(
    P_Alarms_PSM_C_Mission_State_setMissionState* self);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Mission_State_setMissionState_initialize_ex(
    P_Alarms_PSM_C_Mission_State_setMissionState* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Mission_State_setMissionState_initialize_w_params(
    P_Alarms_PSM_C_Mission_State_setMissionState* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_Alarms_PSM_C_Mission_State_setMissionState_finalize(
    P_Alarms_PSM_C_Mission_State_setMissionState* self);

NDDSUSERDllExport
void P_Alarms_PSM_C_Mission_State_setMissionState_finalize_ex(
    P_Alarms_PSM_C_Mission_State_setMissionState* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_Alarms_PSM_C_Mission_State_setMissionState_finalize_w_params(
    P_Alarms_PSM_C_Mission_State_setMissionState* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_Alarms_PSM_C_Mission_State_setMissionState_finalize_optional_members(
    P_Alarms_PSM_C_Mission_State_setMissionState* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Mission_State_setMissionState_copy(
    P_Alarms_PSM_C_Mission_State_setMissionState* dst,
    const P_Alarms_PSM_C_Mission_State_setMissionState* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_Alarms_PSM_C_Mission_StateTYPENAME;

}

struct P_Alarms_PSM_C_Mission_StateSeq;
#ifndef NDDS_STANDALONE_TYPE
class P_Alarms_PSM_C_Mission_StateTypeSupport;
class P_Alarms_PSM_C_Mission_StateDataWriter;
class P_Alarms_PSM_C_Mission_StateDataReader;
#endif

class P_Alarms_PSM_C_Mission_State 
{
  public:
    typedef struct P_Alarms_PSM_C_Mission_StateSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef P_Alarms_PSM_C_Mission_StateTypeSupport TypeSupport;
    typedef P_Alarms_PSM_C_Mission_StateDataWriter DataWriter;
    typedef P_Alarms_PSM_C_Mission_StateDataReader DataReader;
    #endif

    P_LDM_Common_T_IdentifierType   A_sourceID ;
    P_LDM_Common_T_DateTimeType   A_timeOfDataGeneration ;
    P_Alarms_PSM_T_MissionStateType   A_missionState ;
    P_LDM_Common_T_ShortString   A_missionStateName ;
    P_LDM_Common_T_IdentifierTypeSeq  A_crewRoleInMissionState_sourceID ;
    P_LDM_Common_T_IdentifierType   A_ownPlatform_sourceID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_Alarms_PSM_C_Mission_State_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_Alarms_PSM_C_Mission_StateSeq, P_Alarms_PSM_C_Mission_State);                                        

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Mission_State_initialize(
    P_Alarms_PSM_C_Mission_State* self);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Mission_State_initialize_ex(
    P_Alarms_PSM_C_Mission_State* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Mission_State_initialize_w_params(
    P_Alarms_PSM_C_Mission_State* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_Alarms_PSM_C_Mission_State_finalize(
    P_Alarms_PSM_C_Mission_State* self);

NDDSUSERDllExport
void P_Alarms_PSM_C_Mission_State_finalize_ex(
    P_Alarms_PSM_C_Mission_State* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_Alarms_PSM_C_Mission_State_finalize_w_params(
    P_Alarms_PSM_C_Mission_State* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_Alarms_PSM_C_Mission_State_finalize_optional_members(
    P_Alarms_PSM_C_Mission_State* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Mission_State_copy(
    P_Alarms_PSM_C_Mission_State* dst,
    const P_Alarms_PSM_C_Mission_State* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmTYPENAME;

}

struct P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmSeq;
#ifndef NDDS_STANDALONE_TYPE
class P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmTypeSupport;
class P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmDataWriter;
class P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmDataReader;
#endif

class P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm 
{
  public:
    typedef struct P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmTypeSupport TypeSupport;
    typedef P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmDataWriter DataWriter;
    typedef P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmDataReader DataReader;
    #endif

    P_LDM_Common_T_IdentifierType   A_recipientID ;
    P_LDM_Common_T_IdentifierType   A_sourceID ;
    P_LDM_Common_T_Int64   A_referenceNum ;
    P_LDM_Common_T_DateTimeType   A_timeOfDataGeneration ;
    P_LDM_Common_T_ShortString   A_subsystemName ;
    P_LDM_Common_T_ShortString   A_componentName ;
    P_LDM_Common_T_ShortString   A_measure ;
    P_LDM_Common_T_ShortString   A_nature ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmSeq, P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm);                                        

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_initialize(
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm* self);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_initialize_ex(
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_initialize_w_params(
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_finalize(
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm* self);

NDDSUSERDllExport
void P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_finalize_ex(
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_finalize_w_params(
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_finalize_optional_members(
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_copy(
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm* dst,
    const P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_Alarms_PSM_C_Actual_AlarmTYPENAME;

}

struct P_Alarms_PSM_C_Actual_AlarmSeq;
#ifndef NDDS_STANDALONE_TYPE
class P_Alarms_PSM_C_Actual_AlarmTypeSupport;
class P_Alarms_PSM_C_Actual_AlarmDataWriter;
class P_Alarms_PSM_C_Actual_AlarmDataReader;
#endif

class P_Alarms_PSM_C_Actual_Alarm 
{
  public:
    typedef struct P_Alarms_PSM_C_Actual_AlarmSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef P_Alarms_PSM_C_Actual_AlarmTypeSupport TypeSupport;
    typedef P_Alarms_PSM_C_Actual_AlarmDataWriter DataWriter;
    typedef P_Alarms_PSM_C_Actual_AlarmDataReader DataReader;
    #endif

    P_LDM_Common_T_IdentifierType   A_sourceID ;
    P_LDM_Common_T_DateTimeType   A_timeOfDataGeneration ;
    P_LDM_Common_T_ShortString   A_componentName ;
    P_LDM_Common_T_ShortString   A_nature ;
    P_LDM_Common_T_ShortString   A_subsystemName ;
    P_LDM_Common_T_ShortString   A_measure ;
    P_LDM_Common_T_DateTimeType   A_dateTimeRaised ;
    P_Alarms_PSM_T_Actual_Alarm_StateType   A_alarmState ;
    P_LDM_Common_T_IdentifierType   A_raisingCondition_sourceID ;
    P_LDM_Common_T_IdentifierType   A_alarmCategory_sourceID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_Alarms_PSM_C_Actual_Alarm_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_Alarms_PSM_C_Actual_AlarmSeq, P_Alarms_PSM_C_Actual_Alarm);                                        

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Actual_Alarm_initialize(
    P_Alarms_PSM_C_Actual_Alarm* self);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Actual_Alarm_initialize_ex(
    P_Alarms_PSM_C_Actual_Alarm* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Actual_Alarm_initialize_w_params(
    P_Alarms_PSM_C_Actual_Alarm* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_Alarms_PSM_C_Actual_Alarm_finalize(
    P_Alarms_PSM_C_Actual_Alarm* self);

NDDSUSERDllExport
void P_Alarms_PSM_C_Actual_Alarm_finalize_ex(
    P_Alarms_PSM_C_Actual_Alarm* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_Alarms_PSM_C_Actual_Alarm_finalize_w_params(
    P_Alarms_PSM_C_Actual_Alarm* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_Alarms_PSM_C_Actual_Alarm_finalize_optional_members(
    P_Alarms_PSM_C_Actual_Alarm* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Actual_Alarm_copy(
    P_Alarms_PSM_C_Actual_Alarm* dst,
    const P_Alarms_PSM_C_Actual_Alarm* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionTYPENAME;

}

struct P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionSeq;
#ifndef NDDS_STANDALONE_TYPE
class P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionTypeSupport;
class P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionDataWriter;
class P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionDataReader;
#endif

class P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition 
{
  public:
    typedef struct P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionTypeSupport TypeSupport;
    typedef P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionDataWriter DataWriter;
    typedef P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionDataReader DataReader;
    #endif

    P_LDM_Common_T_IdentifierType   A_recipientID ;
    P_LDM_Common_T_IdentifierType   A_sourceID ;
    P_LDM_Common_T_Int64   A_referenceNum ;
    P_LDM_Common_T_DateTimeType   A_timeOfDataGeneration ;
    P_LDM_Common_T_ShortString   A_componentName ;
    P_LDM_Common_T_ShortString   A_subsystemName ;
    P_LDM_Common_T_ShortString   A_measure ;
    P_LDM_Common_T_ShortString   A_nature ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionSeq, P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition);                                        

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_initialize(
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition* self);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_initialize_ex(
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_initialize_w_params(
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_finalize(
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition* self);

NDDSUSERDllExport
void P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_finalize_ex(
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_finalize_w_params(
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_finalize_optional_members(
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_copy(
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition* dst,
    const P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleTYPENAME;

}

struct P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleSeq;
#ifndef NDDS_STANDALONE_TYPE
class P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleTypeSupport;
class P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleDataWriter;
class P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleDataReader;
#endif

class P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole 
{
  public:
    typedef struct P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleTypeSupport TypeSupport;
    typedef P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleDataWriter DataWriter;
    typedef P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleDataReader DataReader;
    #endif

    P_LDM_Common_T_IdentifierType   A_recipientID ;
    P_LDM_Common_T_IdentifierType   A_sourceID ;
    P_LDM_Common_T_Int64   A_referenceNum ;
    P_LDM_Common_T_DateTimeType   A_timeOfDataGeneration ;
    P_LDM_Common_T_ShortString   A_crewRole ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleSeq, P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole);                                        

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_initialize(
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole* self);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_initialize_ex(
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_initialize_w_params(
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_finalize(
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole* self);

NDDSUSERDllExport
void P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_finalize_ex(
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_finalize_w_params(
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_finalize_optional_members(
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_copy(
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole* dst,
    const P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_Alarms_PSM_C_Alarm_Condition_SpecificationTYPENAME;

}

struct P_Alarms_PSM_C_Alarm_Condition_SpecificationSeq;
#ifndef NDDS_STANDALONE_TYPE
class P_Alarms_PSM_C_Alarm_Condition_SpecificationTypeSupport;
class P_Alarms_PSM_C_Alarm_Condition_SpecificationDataWriter;
class P_Alarms_PSM_C_Alarm_Condition_SpecificationDataReader;
#endif

class P_Alarms_PSM_C_Alarm_Condition_Specification 
{
  public:
    typedef struct P_Alarms_PSM_C_Alarm_Condition_SpecificationSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef P_Alarms_PSM_C_Alarm_Condition_SpecificationTypeSupport TypeSupport;
    typedef P_Alarms_PSM_C_Alarm_Condition_SpecificationDataWriter DataWriter;
    typedef P_Alarms_PSM_C_Alarm_Condition_SpecificationDataReader DataReader;
    #endif

    P_LDM_Common_T_IdentifierType   A_sourceID ;
    P_LDM_Common_T_DateTimeType   A_timeOfDataGeneration ;
    P_LDM_Common_T_ShortString   A_subsystemName ;
    P_LDM_Common_T_ShortString   A_componentName ;
    P_LDM_Common_T_ShortString   A_measure ;
    P_LDM_Common_T_ShortString   A_nature ;
    P_LDM_Common_T_ShortString   A_alarmConditionCategory ;
    P_LDM_Common_T_MediumString   A_alarmConditionName ;
    P_LDM_Common_T_Boolean   A_hasMultipleInstances ;
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateType   A_overrideState ;
    P_LDM_Common_T_IdentifierTypeSeq  A_actualAlarmCondition_sourceID ;
    P_LDM_Common_T_IdentifierType   A_alarmCategory_sourceID ;
    P_LDM_Common_T_IdentifierTypeSeq  A_interestedRole_sourceID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_Alarms_PSM_C_Alarm_Condition_Specification_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_Alarms_PSM_C_Alarm_Condition_SpecificationSeq, P_Alarms_PSM_C_Alarm_Condition_Specification);                                        

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_initialize(
    P_Alarms_PSM_C_Alarm_Condition_Specification* self);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_initialize_ex(
    P_Alarms_PSM_C_Alarm_Condition_Specification* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_initialize_w_params(
    P_Alarms_PSM_C_Alarm_Condition_Specification* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_Alarms_PSM_C_Alarm_Condition_Specification_finalize(
    P_Alarms_PSM_C_Alarm_Condition_Specification* self);

NDDSUSERDllExport
void P_Alarms_PSM_C_Alarm_Condition_Specification_finalize_ex(
    P_Alarms_PSM_C_Alarm_Condition_Specification* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_Alarms_PSM_C_Alarm_Condition_Specification_finalize_w_params(
    P_Alarms_PSM_C_Alarm_Condition_Specification* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_Alarms_PSM_C_Alarm_Condition_Specification_finalize_optional_members(
    P_Alarms_PSM_C_Alarm_Condition_Specification* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_copy(
    P_Alarms_PSM_C_Alarm_Condition_Specification* dst,
    const P_Alarms_PSM_C_Alarm_Condition_Specification* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_Alarms_PSM_C_Tone_SpecificationTYPENAME;

}

struct P_Alarms_PSM_C_Tone_SpecificationSeq;
#ifndef NDDS_STANDALONE_TYPE
class P_Alarms_PSM_C_Tone_SpecificationTypeSupport;
class P_Alarms_PSM_C_Tone_SpecificationDataWriter;
class P_Alarms_PSM_C_Tone_SpecificationDataReader;
#endif

class P_Alarms_PSM_C_Tone_Specification 
{
  public:
    typedef struct P_Alarms_PSM_C_Tone_SpecificationSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef P_Alarms_PSM_C_Tone_SpecificationTypeSupport TypeSupport;
    typedef P_Alarms_PSM_C_Tone_SpecificationDataWriter DataWriter;
    typedef P_Alarms_PSM_C_Tone_SpecificationDataReader DataReader;
    #endif

    P_LDM_Common_T_IdentifierType   A_sourceID ;
    P_LDM_Common_T_DateTimeType   A_timeOfDataGeneration ;
    P_LDM_Common_T_FrequencyInHertzType   A_toneFrequency ;
    P_LDM_Common_T_ShortString   A_toneModulationType ;
    P_LDM_Common_T_FrequencyInHertzType   A_toneRepetitionFrequency ;
    P_LDM_Common_T_PowerInWattsType   A_toneMaxVolume ;
    P_LDM_Common_T_IdentifierType   A_alarmCategorySpecification_sourceID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_Alarms_PSM_C_Tone_Specification_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_Alarms_PSM_C_Tone_SpecificationSeq, P_Alarms_PSM_C_Tone_Specification);                                        

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Tone_Specification_initialize(
    P_Alarms_PSM_C_Tone_Specification* self);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Tone_Specification_initialize_ex(
    P_Alarms_PSM_C_Tone_Specification* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Tone_Specification_initialize_w_params(
    P_Alarms_PSM_C_Tone_Specification* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_Alarms_PSM_C_Tone_Specification_finalize(
    P_Alarms_PSM_C_Tone_Specification* self);

NDDSUSERDllExport
void P_Alarms_PSM_C_Tone_Specification_finalize_ex(
    P_Alarms_PSM_C_Tone_Specification* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_Alarms_PSM_C_Tone_Specification_finalize_w_params(
    P_Alarms_PSM_C_Tone_Specification* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_Alarms_PSM_C_Tone_Specification_finalize_optional_members(
    P_Alarms_PSM_C_Tone_Specification* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Tone_Specification_copy(
    P_Alarms_PSM_C_Tone_Specification* dst,
    const P_Alarms_PSM_C_Tone_Specification* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_Alarms_PSM_C_Platform_With_AlarmsTYPENAME;

}

struct P_Alarms_PSM_C_Platform_With_AlarmsSeq;
#ifndef NDDS_STANDALONE_TYPE
class P_Alarms_PSM_C_Platform_With_AlarmsTypeSupport;
class P_Alarms_PSM_C_Platform_With_AlarmsDataWriter;
class P_Alarms_PSM_C_Platform_With_AlarmsDataReader;
#endif

class P_Alarms_PSM_C_Platform_With_Alarms 
{
  public:
    typedef struct P_Alarms_PSM_C_Platform_With_AlarmsSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef P_Alarms_PSM_C_Platform_With_AlarmsTypeSupport TypeSupport;
    typedef P_Alarms_PSM_C_Platform_With_AlarmsDataWriter DataWriter;
    typedef P_Alarms_PSM_C_Platform_With_AlarmsDataReader DataReader;
    #endif

    P_LDM_Common_T_IdentifierType   A_sourceID ;
    P_LDM_Common_T_DateTimeType   A_timeOfDataGeneration ;
    P_LDM_Common_T_Boolean   A_activeAlarmsExist ;
    P_LDM_Common_T_IdentifierTypeSeq  A_possibleMissionState_sourceID ;
    P_LDM_Common_T_IdentifierType   A_Platform_With_Alarms_CP_sourceID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_Alarms_PSM_C_Platform_With_Alarms_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_Alarms_PSM_C_Platform_With_AlarmsSeq, P_Alarms_PSM_C_Platform_With_Alarms);                                        

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Platform_With_Alarms_initialize(
    P_Alarms_PSM_C_Platform_With_Alarms* self);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Platform_With_Alarms_initialize_ex(
    P_Alarms_PSM_C_Platform_With_Alarms* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Platform_With_Alarms_initialize_w_params(
    P_Alarms_PSM_C_Platform_With_Alarms* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_Alarms_PSM_C_Platform_With_Alarms_finalize(
    P_Alarms_PSM_C_Platform_With_Alarms* self);

NDDSUSERDllExport
void P_Alarms_PSM_C_Platform_With_Alarms_finalize_ex(
    P_Alarms_PSM_C_Platform_With_Alarms* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_Alarms_PSM_C_Platform_With_Alarms_finalize_w_params(
    P_Alarms_PSM_C_Platform_With_Alarms* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_Alarms_PSM_C_Platform_With_Alarms_finalize_optional_members(
    P_Alarms_PSM_C_Platform_With_Alarms* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Platform_With_Alarms_copy(
    P_Alarms_PSM_C_Platform_With_Alarms* dst,
    const P_Alarms_PSM_C_Platform_With_Alarms* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionTYPENAME;

}

struct P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionSeq;
#ifndef NDDS_STANDALONE_TYPE
class P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionTypeSupport;
class P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionDataWriter;
class P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionDataReader;
#endif

class P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition 
{
  public:
    typedef struct P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionTypeSupport TypeSupport;
    typedef P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionDataWriter DataWriter;
    typedef P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionDataReader DataReader;
    #endif

    P_LDM_Common_T_IdentifierType   A_recipientID ;
    P_LDM_Common_T_IdentifierType   A_sourceID ;
    P_LDM_Common_T_Int64   A_referenceNum ;
    P_LDM_Common_T_DateTimeType   A_timeOfDataGeneration ;
    P_LDM_Common_T_ShortString   A_componentName ;
    P_LDM_Common_T_ShortString   A_subsystemName ;
    P_LDM_Common_T_ShortString   A_measure ;
    P_LDM_Common_T_ShortString   A_nature ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionSeq, P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition);                                        

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_initialize(
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition* self);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_initialize_ex(
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_initialize_w_params(
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_finalize(
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition* self);

NDDSUSERDllExport
void P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_finalize_ex(
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_finalize_w_params(
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_finalize_optional_members(
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_copy(
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition* dst,
    const P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionTYPENAME;

}

struct P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionSeq;
#ifndef NDDS_STANDALONE_TYPE
class P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionTypeSupport;
class P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionDataWriter;
class P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionDataReader;
#endif

class P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition 
{
  public:
    typedef struct P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionTypeSupport TypeSupport;
    typedef P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionDataWriter DataWriter;
    typedef P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionDataReader DataReader;
    #endif

    P_LDM_Common_T_IdentifierType   A_recipientID ;
    P_LDM_Common_T_IdentifierType   A_sourceID ;
    P_LDM_Common_T_Int64   A_referenceNum ;
    P_LDM_Common_T_DateTimeType   A_timeOfDataGeneration ;
    P_LDM_Common_T_ShortString   A_componentName ;
    P_LDM_Common_T_ShortString   A_subsystemName ;
    P_LDM_Common_T_ShortString   A_measure ;
    P_LDM_Common_T_ShortString   A_nature ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionSeq, P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition);                                        

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_initialize(
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition* self);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_initialize_ex(
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_initialize_w_params(
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_finalize(
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition* self);

NDDSUSERDllExport
void P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_finalize_ex(
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_finalize_w_params(
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_finalize_optional_members(
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_copy(
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition* dst,
    const P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionTYPENAME;

}

struct P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionSeq;
#ifndef NDDS_STANDALONE_TYPE
class P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionTypeSupport;
class P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionDataWriter;
class P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionDataReader;
#endif

class P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition 
{
  public:
    typedef struct P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionTypeSupport TypeSupport;
    typedef P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionDataWriter DataWriter;
    typedef P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionDataReader DataReader;
    #endif

    P_LDM_Common_T_IdentifierType   A_recipientID ;
    P_LDM_Common_T_IdentifierType   A_sourceID ;
    P_LDM_Common_T_Int64   A_referenceNum ;
    P_LDM_Common_T_DateTimeType   A_timeOfDataGeneration ;
    P_LDM_Common_T_ShortString   A_componentName ;
    P_LDM_Common_T_ShortString   A_subsystemName ;
    P_LDM_Common_T_ShortString   A_measure ;
    P_LDM_Common_T_ShortString   A_nature ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionSeq, P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition);                                        

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_initialize(
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition* self);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_initialize_ex(
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_initialize_w_params(
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_finalize(
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition* self);

NDDSUSERDllExport
void P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_finalize_ex(
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_finalize_w_params(
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_finalize_optional_members(
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_copy(
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition* dst,
    const P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_Alarms_PSM_C_Actual_Alarm_ConditionTYPENAME;

}

struct P_Alarms_PSM_C_Actual_Alarm_ConditionSeq;
#ifndef NDDS_STANDALONE_TYPE
class P_Alarms_PSM_C_Actual_Alarm_ConditionTypeSupport;
class P_Alarms_PSM_C_Actual_Alarm_ConditionDataWriter;
class P_Alarms_PSM_C_Actual_Alarm_ConditionDataReader;
#endif

class P_Alarms_PSM_C_Actual_Alarm_Condition 
{
  public:
    typedef struct P_Alarms_PSM_C_Actual_Alarm_ConditionSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef P_Alarms_PSM_C_Actual_Alarm_ConditionTypeSupport TypeSupport;
    typedef P_Alarms_PSM_C_Actual_Alarm_ConditionDataWriter DataWriter;
    typedef P_Alarms_PSM_C_Actual_Alarm_ConditionDataReader DataReader;
    #endif

    P_LDM_Common_T_IdentifierType   A_sourceID ;
    P_LDM_Common_T_DateTimeType   A_timeOfDataGeneration ;
    P_LDM_Common_T_IdentifierType   A_alarmSourceID ;
    P_LDM_Common_T_DateTimeType   A_dateTimeRaised ;
    P_LDM_Common_T_Boolean   A_isOverridden ;
    P_LDM_Common_T_IdentifierType   A_specification_sourceID ;
    P_LDM_Common_T_IdentifierType   A_raisedActualAlarm_sourceID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_Alarms_PSM_C_Actual_Alarm_Condition_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_Alarms_PSM_C_Actual_Alarm_ConditionSeq, P_Alarms_PSM_C_Actual_Alarm_Condition);                                        

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_initialize(
    P_Alarms_PSM_C_Actual_Alarm_Condition* self);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_initialize_ex(
    P_Alarms_PSM_C_Actual_Alarm_Condition* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_initialize_w_params(
    P_Alarms_PSM_C_Actual_Alarm_Condition* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_Alarms_PSM_C_Actual_Alarm_Condition_finalize(
    P_Alarms_PSM_C_Actual_Alarm_Condition* self);

NDDSUSERDllExport
void P_Alarms_PSM_C_Actual_Alarm_Condition_finalize_ex(
    P_Alarms_PSM_C_Actual_Alarm_Condition* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_Alarms_PSM_C_Actual_Alarm_Condition_finalize_w_params(
    P_Alarms_PSM_C_Actual_Alarm_Condition* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_Alarms_PSM_C_Actual_Alarm_Condition_finalize_optional_members(
    P_Alarms_PSM_C_Actual_Alarm_Condition* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_copy(
    P_Alarms_PSM_C_Actual_Alarm_Condition* dst,
    const P_Alarms_PSM_C_Actual_Alarm_Condition* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_Alarms_PSM_C_Alarm_CategoryTYPENAME;

}

struct P_Alarms_PSM_C_Alarm_CategorySeq;
#ifndef NDDS_STANDALONE_TYPE
class P_Alarms_PSM_C_Alarm_CategoryTypeSupport;
class P_Alarms_PSM_C_Alarm_CategoryDataWriter;
class P_Alarms_PSM_C_Alarm_CategoryDataReader;
#endif

class P_Alarms_PSM_C_Alarm_Category 
{
  public:
    typedef struct P_Alarms_PSM_C_Alarm_CategorySeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef P_Alarms_PSM_C_Alarm_CategoryTypeSupport TypeSupport;
    typedef P_Alarms_PSM_C_Alarm_CategoryDataWriter DataWriter;
    typedef P_Alarms_PSM_C_Alarm_CategoryDataReader DataReader;
    #endif

    P_LDM_Common_T_IdentifierType   A_sourceID ;
    P_LDM_Common_T_DateTimeType   A_timeOfDataGeneration ;
    P_LDM_Common_T_Int16   A_activeAlarmCount ;
    P_LDM_Common_T_Int16   A_unacknowledgedAlarmCount ;
    P_LDM_Common_T_IdentifierTypeSeq  A_categorisedActualAlarm_sourceID ;
    P_LDM_Common_T_IdentifierType   A_alarmCategorySpecification_sourceID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_Alarms_PSM_C_Alarm_Category_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_Alarms_PSM_C_Alarm_CategorySeq, P_Alarms_PSM_C_Alarm_Category);                                        

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Alarm_Category_initialize(
    P_Alarms_PSM_C_Alarm_Category* self);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Alarm_Category_initialize_ex(
    P_Alarms_PSM_C_Alarm_Category* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Alarm_Category_initialize_w_params(
    P_Alarms_PSM_C_Alarm_Category* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_Alarms_PSM_C_Alarm_Category_finalize(
    P_Alarms_PSM_C_Alarm_Category* self);

NDDSUSERDllExport
void P_Alarms_PSM_C_Alarm_Category_finalize_ex(
    P_Alarms_PSM_C_Alarm_Category* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_Alarms_PSM_C_Alarm_Category_finalize_w_params(
    P_Alarms_PSM_C_Alarm_Category* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_Alarms_PSM_C_Alarm_Category_finalize_optional_members(
    P_Alarms_PSM_C_Alarm_Category* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Alarm_Category_copy(
    P_Alarms_PSM_C_Alarm_Category* dst,
    const P_Alarms_PSM_C_Alarm_Category* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *P_Alarms_PSM_C_Platform_With_Alarms_CPTYPENAME;

}

struct P_Alarms_PSM_C_Platform_With_Alarms_CPSeq;
#ifndef NDDS_STANDALONE_TYPE
class P_Alarms_PSM_C_Platform_With_Alarms_CPTypeSupport;
class P_Alarms_PSM_C_Platform_With_Alarms_CPDataWriter;
class P_Alarms_PSM_C_Platform_With_Alarms_CPDataReader;
#endif

class P_Alarms_PSM_C_Platform_With_Alarms_CP 
{
  public:
    typedef struct P_Alarms_PSM_C_Platform_With_Alarms_CPSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef P_Alarms_PSM_C_Platform_With_Alarms_CPTypeSupport TypeSupport;
    typedef P_Alarms_PSM_C_Platform_With_Alarms_CPDataWriter DataWriter;
    typedef P_Alarms_PSM_C_Platform_With_Alarms_CPDataReader DataReader;
    #endif

    P_LDM_Common_T_IdentifierType   A_sourceID ;
    P_LDM_Common_T_DateTimeType   A_timeOfDataGeneration ;
    P_LDM_Common_T_IdentifierType   A_Platform_With_Alarms_sourceID ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* P_Alarms_PSM_C_Platform_With_Alarms_CP_get_typecode(void); /* Type code */

DDS_SEQUENCE(P_Alarms_PSM_C_Platform_With_Alarms_CPSeq, P_Alarms_PSM_C_Platform_With_Alarms_CP);                                        

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Platform_With_Alarms_CP_initialize(
    P_Alarms_PSM_C_Platform_With_Alarms_CP* self);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Platform_With_Alarms_CP_initialize_ex(
    P_Alarms_PSM_C_Platform_With_Alarms_CP* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Platform_With_Alarms_CP_initialize_w_params(
    P_Alarms_PSM_C_Platform_With_Alarms_CP* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void P_Alarms_PSM_C_Platform_With_Alarms_CP_finalize(
    P_Alarms_PSM_C_Platform_With_Alarms_CP* self);

NDDSUSERDllExport
void P_Alarms_PSM_C_Platform_With_Alarms_CP_finalize_ex(
    P_Alarms_PSM_C_Platform_With_Alarms_CP* self,RTIBool deletePointers);

NDDSUSERDllExport
void P_Alarms_PSM_C_Platform_With_Alarms_CP_finalize_w_params(
    P_Alarms_PSM_C_Platform_With_Alarms_CP* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void P_Alarms_PSM_C_Platform_With_Alarms_CP_finalize_optional_members(
    P_Alarms_PSM_C_Platform_With_Alarms_CP* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool P_Alarms_PSM_C_Platform_With_Alarms_CP_copy(
    P_Alarms_PSM_C_Platform_With_Alarms_CP* dst,
    const P_Alarms_PSM_C_Platform_With_Alarms_CP* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Alarms_PSM_RTI */

