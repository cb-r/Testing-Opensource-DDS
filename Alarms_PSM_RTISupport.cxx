
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Alarms_PSM_RTI.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "Alarms_PSM_RTISupport.h"
#include "Alarms_PSM_RTIPlugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'P_Alarms_PSM_C_Crew_Role_In_Mission_State' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Crew_Role_In_Mission_StateTYPENAME

/* Defines */
#define TDataWriter P_Alarms_PSM_C_Crew_Role_In_Mission_StateDataWriter
#define TData       P_Alarms_PSM_C_Crew_Role_In_Mission_State

#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Crew_Role_In_Mission_StateTYPENAME

/* Defines */
#define TDataReader P_Alarms_PSM_C_Crew_Role_In_Mission_StateDataReader
#define TDataSeq    P_Alarms_PSM_C_Crew_Role_In_Mission_StateSeq
#define TData       P_Alarms_PSM_C_Crew_Role_In_Mission_State

#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    P_Alarms_PSM_C_Crew_Role_In_Mission_StateTYPENAME
#define TPlugin_new  P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_new
#define TPlugin_delete  P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_delete

/* Defines */
#define TTypeSupport P_Alarms_PSM_C_Crew_Role_In_Mission_StateTypeSupport
#define TData        P_Alarms_PSM_C_Crew_Role_In_Mission_State
#define TDataReader  P_Alarms_PSM_C_Crew_Role_In_Mission_StateDataReader
#define TDataWriter  P_Alarms_PSM_C_Crew_Role_In_Mission_StateDataWriter
#define TGENERATE_SER_CODE
#define TGENERATE_TYPECODE

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#undef TGENERATE_TYPECODE
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete



/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'P_Alarms_PSM_C_Alarm_Category_Specification' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Alarm_Category_SpecificationTYPENAME

/* Defines */
#define TDataWriter P_Alarms_PSM_C_Alarm_Category_SpecificationDataWriter
#define TData       P_Alarms_PSM_C_Alarm_Category_Specification

#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Alarm_Category_SpecificationTYPENAME

/* Defines */
#define TDataReader P_Alarms_PSM_C_Alarm_Category_SpecificationDataReader
#define TDataSeq    P_Alarms_PSM_C_Alarm_Category_SpecificationSeq
#define TData       P_Alarms_PSM_C_Alarm_Category_Specification

#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    P_Alarms_PSM_C_Alarm_Category_SpecificationTYPENAME
#define TPlugin_new  P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_new
#define TPlugin_delete  P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_delete

/* Defines */
#define TTypeSupport P_Alarms_PSM_C_Alarm_Category_SpecificationTypeSupport
#define TData        P_Alarms_PSM_C_Alarm_Category_Specification
#define TDataReader  P_Alarms_PSM_C_Alarm_Category_SpecificationDataReader
#define TDataWriter  P_Alarms_PSM_C_Alarm_Category_SpecificationDataWriter
#define TGENERATE_SER_CODE
#define TGENERATE_TYPECODE

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#undef TGENERATE_TYPECODE
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'P_Alarms_PSM_C_Mission_State_setMissionState' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Mission_State_setMissionStateTYPENAME

/* Defines */
#define TDataWriter P_Alarms_PSM_C_Mission_State_setMissionStateDataWriter
#define TData       P_Alarms_PSM_C_Mission_State_setMissionState

#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Mission_State_setMissionStateTYPENAME

/* Defines */
#define TDataReader P_Alarms_PSM_C_Mission_State_setMissionStateDataReader
#define TDataSeq    P_Alarms_PSM_C_Mission_State_setMissionStateSeq
#define TData       P_Alarms_PSM_C_Mission_State_setMissionState

#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    P_Alarms_PSM_C_Mission_State_setMissionStateTYPENAME
#define TPlugin_new  P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_new
#define TPlugin_delete  P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_delete

/* Defines */
#define TTypeSupport P_Alarms_PSM_C_Mission_State_setMissionStateTypeSupport
#define TData        P_Alarms_PSM_C_Mission_State_setMissionState
#define TDataReader  P_Alarms_PSM_C_Mission_State_setMissionStateDataReader
#define TDataWriter  P_Alarms_PSM_C_Mission_State_setMissionStateDataWriter
#define TGENERATE_SER_CODE
#define TGENERATE_TYPECODE

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#undef TGENERATE_TYPECODE
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'P_Alarms_PSM_C_Mission_State' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Mission_StateTYPENAME

/* Defines */
#define TDataWriter P_Alarms_PSM_C_Mission_StateDataWriter
#define TData       P_Alarms_PSM_C_Mission_State

#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Mission_StateTYPENAME

/* Defines */
#define TDataReader P_Alarms_PSM_C_Mission_StateDataReader
#define TDataSeq    P_Alarms_PSM_C_Mission_StateSeq
#define TData       P_Alarms_PSM_C_Mission_State

#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    P_Alarms_PSM_C_Mission_StateTYPENAME
#define TPlugin_new  P_Alarms_PSM_C_Mission_StatePlugin_new
#define TPlugin_delete  P_Alarms_PSM_C_Mission_StatePlugin_delete

/* Defines */
#define TTypeSupport P_Alarms_PSM_C_Mission_StateTypeSupport
#define TData        P_Alarms_PSM_C_Mission_State
#define TDataReader  P_Alarms_PSM_C_Mission_StateDataReader
#define TDataWriter  P_Alarms_PSM_C_Mission_StateDataWriter
#define TGENERATE_SER_CODE
#define TGENERATE_TYPECODE

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#undef TGENERATE_TYPECODE
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmTYPENAME

/* Defines */
#define TDataWriter P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmDataWriter
#define TData       P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm

#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmTYPENAME

/* Defines */
#define TDataReader P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmDataReader
#define TDataSeq    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmSeq
#define TData       P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm

#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmTYPENAME
#define TPlugin_new  P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_new
#define TPlugin_delete  P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_delete

/* Defines */
#define TTypeSupport P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmTypeSupport
#define TData        P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm
#define TDataReader  P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmDataReader
#define TDataWriter  P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmDataWriter
#define TGENERATE_SER_CODE
#define TGENERATE_TYPECODE

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#undef TGENERATE_TYPECODE
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'P_Alarms_PSM_C_Actual_Alarm' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Actual_AlarmTYPENAME

/* Defines */
#define TDataWriter P_Alarms_PSM_C_Actual_AlarmDataWriter
#define TData       P_Alarms_PSM_C_Actual_Alarm

#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Actual_AlarmTYPENAME

/* Defines */
#define TDataReader P_Alarms_PSM_C_Actual_AlarmDataReader
#define TDataSeq    P_Alarms_PSM_C_Actual_AlarmSeq
#define TData       P_Alarms_PSM_C_Actual_Alarm

#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    P_Alarms_PSM_C_Actual_AlarmTYPENAME
#define TPlugin_new  P_Alarms_PSM_C_Actual_AlarmPlugin_new
#define TPlugin_delete  P_Alarms_PSM_C_Actual_AlarmPlugin_delete

/* Defines */
#define TTypeSupport P_Alarms_PSM_C_Actual_AlarmTypeSupport
#define TData        P_Alarms_PSM_C_Actual_Alarm
#define TDataReader  P_Alarms_PSM_C_Actual_AlarmDataReader
#define TDataWriter  P_Alarms_PSM_C_Actual_AlarmDataWriter
#define TGENERATE_SER_CODE
#define TGENERATE_TYPECODE

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#undef TGENERATE_TYPECODE
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionTYPENAME

/* Defines */
#define TDataWriter P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionDataWriter
#define TData       P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition

#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionTYPENAME

/* Defines */
#define TDataReader P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionDataReader
#define TDataSeq    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionSeq
#define TData       P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition

#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionTYPENAME
#define TPlugin_new  P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_new
#define TPlugin_delete  P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_delete

/* Defines */
#define TTypeSupport P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionTypeSupport
#define TData        P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition
#define TDataReader  P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionDataReader
#define TDataWriter  P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionDataWriter
#define TGENERATE_SER_CODE
#define TGENERATE_TYPECODE

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#undef TGENERATE_TYPECODE
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleTYPENAME

/* Defines */
#define TDataWriter P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleDataWriter
#define TData       P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole

#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleTYPENAME

/* Defines */
#define TDataReader P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleDataReader
#define TDataSeq    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleSeq
#define TData       P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole

#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleTYPENAME
#define TPlugin_new  P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_new
#define TPlugin_delete  P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_delete

/* Defines */
#define TTypeSupport P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleTypeSupport
#define TData        P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole
#define TDataReader  P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleDataReader
#define TDataWriter  P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleDataWriter
#define TGENERATE_SER_CODE
#define TGENERATE_TYPECODE

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#undef TGENERATE_TYPECODE
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'P_Alarms_PSM_C_Alarm_Condition_Specification' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Alarm_Condition_SpecificationTYPENAME

/* Defines */
#define TDataWriter P_Alarms_PSM_C_Alarm_Condition_SpecificationDataWriter
#define TData       P_Alarms_PSM_C_Alarm_Condition_Specification

#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Alarm_Condition_SpecificationTYPENAME

/* Defines */
#define TDataReader P_Alarms_PSM_C_Alarm_Condition_SpecificationDataReader
#define TDataSeq    P_Alarms_PSM_C_Alarm_Condition_SpecificationSeq
#define TData       P_Alarms_PSM_C_Alarm_Condition_Specification

#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    P_Alarms_PSM_C_Alarm_Condition_SpecificationTYPENAME
#define TPlugin_new  P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_new
#define TPlugin_delete  P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_delete

/* Defines */
#define TTypeSupport P_Alarms_PSM_C_Alarm_Condition_SpecificationTypeSupport
#define TData        P_Alarms_PSM_C_Alarm_Condition_Specification
#define TDataReader  P_Alarms_PSM_C_Alarm_Condition_SpecificationDataReader
#define TDataWriter  P_Alarms_PSM_C_Alarm_Condition_SpecificationDataWriter
#define TGENERATE_SER_CODE
#define TGENERATE_TYPECODE

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#undef TGENERATE_TYPECODE
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'P_Alarms_PSM_C_Tone_Specification' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Tone_SpecificationTYPENAME

/* Defines */
#define TDataWriter P_Alarms_PSM_C_Tone_SpecificationDataWriter
#define TData       P_Alarms_PSM_C_Tone_Specification

#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Tone_SpecificationTYPENAME

/* Defines */
#define TDataReader P_Alarms_PSM_C_Tone_SpecificationDataReader
#define TDataSeq    P_Alarms_PSM_C_Tone_SpecificationSeq
#define TData       P_Alarms_PSM_C_Tone_Specification

#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    P_Alarms_PSM_C_Tone_SpecificationTYPENAME
#define TPlugin_new  P_Alarms_PSM_C_Tone_SpecificationPlugin_new
#define TPlugin_delete  P_Alarms_PSM_C_Tone_SpecificationPlugin_delete

/* Defines */
#define TTypeSupport P_Alarms_PSM_C_Tone_SpecificationTypeSupport
#define TData        P_Alarms_PSM_C_Tone_Specification
#define TDataReader  P_Alarms_PSM_C_Tone_SpecificationDataReader
#define TDataWriter  P_Alarms_PSM_C_Tone_SpecificationDataWriter
#define TGENERATE_SER_CODE
#define TGENERATE_TYPECODE

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#undef TGENERATE_TYPECODE
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'P_Alarms_PSM_C_Platform_With_Alarms' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Platform_With_AlarmsTYPENAME

/* Defines */
#define TDataWriter P_Alarms_PSM_C_Platform_With_AlarmsDataWriter
#define TData       P_Alarms_PSM_C_Platform_With_Alarms

#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Platform_With_AlarmsTYPENAME

/* Defines */
#define TDataReader P_Alarms_PSM_C_Platform_With_AlarmsDataReader
#define TDataSeq    P_Alarms_PSM_C_Platform_With_AlarmsSeq
#define TData       P_Alarms_PSM_C_Platform_With_Alarms

#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    P_Alarms_PSM_C_Platform_With_AlarmsTYPENAME
#define TPlugin_new  P_Alarms_PSM_C_Platform_With_AlarmsPlugin_new
#define TPlugin_delete  P_Alarms_PSM_C_Platform_With_AlarmsPlugin_delete

/* Defines */
#define TTypeSupport P_Alarms_PSM_C_Platform_With_AlarmsTypeSupport
#define TData        P_Alarms_PSM_C_Platform_With_Alarms
#define TDataReader  P_Alarms_PSM_C_Platform_With_AlarmsDataReader
#define TDataWriter  P_Alarms_PSM_C_Platform_With_AlarmsDataWriter
#define TGENERATE_SER_CODE
#define TGENERATE_TYPECODE

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#undef TGENERATE_TYPECODE
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionTYPENAME

/* Defines */
#define TDataWriter P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionDataWriter
#define TData       P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition

#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionTYPENAME

/* Defines */
#define TDataReader P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionDataReader
#define TDataSeq    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionSeq
#define TData       P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition

#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionTYPENAME
#define TPlugin_new  P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_new
#define TPlugin_delete  P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_delete

/* Defines */
#define TTypeSupport P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionTypeSupport
#define TData        P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition
#define TDataReader  P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionDataReader
#define TDataWriter  P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionDataWriter
#define TGENERATE_SER_CODE
#define TGENERATE_TYPECODE

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#undef TGENERATE_TYPECODE
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionTYPENAME

/* Defines */
#define TDataWriter P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionDataWriter
#define TData       P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition

#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionTYPENAME

/* Defines */
#define TDataReader P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionDataReader
#define TDataSeq    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionSeq
#define TData       P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition

#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionTYPENAME
#define TPlugin_new  P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_new
#define TPlugin_delete  P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_delete

/* Defines */
#define TTypeSupport P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionTypeSupport
#define TData        P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition
#define TDataReader  P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionDataReader
#define TDataWriter  P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionDataWriter
#define TGENERATE_SER_CODE
#define TGENERATE_TYPECODE

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#undef TGENERATE_TYPECODE
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionTYPENAME

/* Defines */
#define TDataWriter P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionDataWriter
#define TData       P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition

#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionTYPENAME

/* Defines */
#define TDataReader P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionDataReader
#define TDataSeq    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionSeq
#define TData       P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition

#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionTYPENAME
#define TPlugin_new  P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_new
#define TPlugin_delete  P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_delete

/* Defines */
#define TTypeSupport P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionTypeSupport
#define TData        P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition
#define TDataReader  P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionDataReader
#define TDataWriter  P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionDataWriter
#define TGENERATE_SER_CODE
#define TGENERATE_TYPECODE

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#undef TGENERATE_TYPECODE
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'P_Alarms_PSM_C_Actual_Alarm_Condition' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Actual_Alarm_ConditionTYPENAME

/* Defines */
#define TDataWriter P_Alarms_PSM_C_Actual_Alarm_ConditionDataWriter
#define TData       P_Alarms_PSM_C_Actual_Alarm_Condition

#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Actual_Alarm_ConditionTYPENAME

/* Defines */
#define TDataReader P_Alarms_PSM_C_Actual_Alarm_ConditionDataReader
#define TDataSeq    P_Alarms_PSM_C_Actual_Alarm_ConditionSeq
#define TData       P_Alarms_PSM_C_Actual_Alarm_Condition

#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    P_Alarms_PSM_C_Actual_Alarm_ConditionTYPENAME
#define TPlugin_new  P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_new
#define TPlugin_delete  P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_delete

/* Defines */
#define TTypeSupport P_Alarms_PSM_C_Actual_Alarm_ConditionTypeSupport
#define TData        P_Alarms_PSM_C_Actual_Alarm_Condition
#define TDataReader  P_Alarms_PSM_C_Actual_Alarm_ConditionDataReader
#define TDataWriter  P_Alarms_PSM_C_Actual_Alarm_ConditionDataWriter
#define TGENERATE_SER_CODE
#define TGENERATE_TYPECODE

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#undef TGENERATE_TYPECODE
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'P_Alarms_PSM_C_Alarm_Category' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Alarm_CategoryTYPENAME

/* Defines */
#define TDataWriter P_Alarms_PSM_C_Alarm_CategoryDataWriter
#define TData       P_Alarms_PSM_C_Alarm_Category

#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Alarm_CategoryTYPENAME

/* Defines */
#define TDataReader P_Alarms_PSM_C_Alarm_CategoryDataReader
#define TDataSeq    P_Alarms_PSM_C_Alarm_CategorySeq
#define TData       P_Alarms_PSM_C_Alarm_Category

#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    P_Alarms_PSM_C_Alarm_CategoryTYPENAME
#define TPlugin_new  P_Alarms_PSM_C_Alarm_CategoryPlugin_new
#define TPlugin_delete  P_Alarms_PSM_C_Alarm_CategoryPlugin_delete

/* Defines */
#define TTypeSupport P_Alarms_PSM_C_Alarm_CategoryTypeSupport
#define TData        P_Alarms_PSM_C_Alarm_Category
#define TDataReader  P_Alarms_PSM_C_Alarm_CategoryDataReader
#define TDataWriter  P_Alarms_PSM_C_Alarm_CategoryDataWriter
#define TGENERATE_SER_CODE
#define TGENERATE_TYPECODE

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#undef TGENERATE_TYPECODE
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'P_Alarms_PSM_C_Platform_With_Alarms_CP' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Platform_With_Alarms_CPTYPENAME

/* Defines */
#define TDataWriter P_Alarms_PSM_C_Platform_With_Alarms_CPDataWriter
#define TData       P_Alarms_PSM_C_Platform_With_Alarms_CP

#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   P_Alarms_PSM_C_Platform_With_Alarms_CPTYPENAME

/* Defines */
#define TDataReader P_Alarms_PSM_C_Platform_With_Alarms_CPDataReader
#define TDataSeq    P_Alarms_PSM_C_Platform_With_Alarms_CPSeq
#define TData       P_Alarms_PSM_C_Platform_With_Alarms_CP

#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    P_Alarms_PSM_C_Platform_With_Alarms_CPTYPENAME
#define TPlugin_new  P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_new
#define TPlugin_delete  P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_delete

/* Defines */
#define TTypeSupport P_Alarms_PSM_C_Platform_With_Alarms_CPTypeSupport
#define TData        P_Alarms_PSM_C_Platform_With_Alarms_CP
#define TDataReader  P_Alarms_PSM_C_Platform_With_Alarms_CPDataReader
#define TDataWriter  P_Alarms_PSM_C_Platform_With_Alarms_CPDataWriter
#define TGENERATE_SER_CODE
#define TGENERATE_TYPECODE

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#undef TGENERATE_TYPECODE
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

