

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Alarms_PSM_RTI.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Alarms_PSM_RTIPlugin_41728481_h
#define Alarms_PSM_RTIPlugin_41728481_h

#include "Alarms_PSM_RTI.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "LDM_CommonPlugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

extern "C" {

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_T_Actual_Alarm_StateType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_T_Actual_Alarm_StateType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_Alarms_PSM_T_Actual_Alarm_StateType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_T_Actual_Alarm_StateType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_T_Actual_Alarm_StateType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_T_Actual_Alarm_StateType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    P_Alarms_PSM_T_Actual_Alarm_StateTypePluginSupport_print_data(
        const P_Alarms_PSM_T_Actual_Alarm_StateType *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_T_Alarm_Condition_Specification_StateType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_T_Alarm_Condition_Specification_StateType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_Alarms_PSM_T_Alarm_Condition_Specification_StateType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_T_Alarm_Condition_Specification_StateType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_T_Alarm_Condition_Specification_StateType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_T_Alarm_Condition_Specification_StateType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePluginSupport_print_data(
        const P_Alarms_PSM_T_Alarm_Condition_Specification_StateType *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_T_AlarmCategoryTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_T_AlarmCategoryType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_T_AlarmCategoryTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_T_AlarmCategoryType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_T_AlarmCategoryTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_T_AlarmCategoryTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_T_AlarmCategoryTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_T_AlarmCategoryTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_Alarms_PSM_T_AlarmCategoryTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_Alarms_PSM_T_AlarmCategoryType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_T_AlarmCategoryTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_T_AlarmCategoryTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_T_AlarmCategoryTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_T_AlarmCategoryType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_T_AlarmCategoryTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_T_AlarmCategoryType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_T_AlarmCategoryTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_T_AlarmCategoryType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    P_Alarms_PSM_T_AlarmCategoryTypePluginSupport_print_data(
        const P_Alarms_PSM_T_AlarmCategoryType *sample, const char *desc, int indent_level);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_T_MissionStateTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_T_MissionStateType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_T_MissionStateTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_T_MissionStateType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_T_MissionStateTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_T_MissionStateTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_T_MissionStateTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_T_MissionStateTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_Alarms_PSM_T_MissionStateTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_Alarms_PSM_T_MissionStateType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_T_MissionStateTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_T_MissionStateTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_T_MissionStateTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_T_MissionStateType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_T_MissionStateTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_T_MissionStateType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_T_MissionStateTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_T_MissionStateType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    P_Alarms_PSM_T_MissionStateTypePluginSupport_print_data(
        const P_Alarms_PSM_T_MissionStateType *sample, const char *desc, int indent_level);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct C_Crew_Role_In_Mission_State
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct C_Crew_Role_In_Mission_State)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * C_Crew_Role_In_Mission_State must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct C_Crew_Role_In_Mission_State.
    */
    typedef  class P_Alarms_PSM_C_Crew_Role_In_Mission_State P_Alarms_PSM_C_Crew_Role_In_Mission_StateKeyHolder;

    #define P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_Alarms_PSM_C_Crew_Role_In_Mission_State*
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Crew_Role_In_Mission_State*
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Crew_Role_In_Mission_State*
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_copy_data(
        P_Alarms_PSM_C_Crew_Role_In_Mission_State *out,
        const P_Alarms_PSM_C_Crew_Role_In_Mission_State *in);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_destroy_data_w_params(
        P_Alarms_PSM_C_Crew_Role_In_Mission_State *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_destroy_data_ex(
        P_Alarms_PSM_C_Crew_Role_In_Mission_State *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_destroy_data(
        P_Alarms_PSM_C_Crew_Role_In_Mission_State *sample);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_print_data(
        const P_Alarms_PSM_C_Crew_Role_In_Mission_State *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Crew_Role_In_Mission_State*
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Crew_Role_In_Mission_State*
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_destroy_key_ex(
        P_Alarms_PSM_C_Crew_Role_In_Mission_StateKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_destroy_key(
        P_Alarms_PSM_C_Crew_Role_In_Mission_StateKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Crew_Role_In_Mission_State *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Crew_Role_In_Mission_State *out,
        const P_Alarms_PSM_C_Crew_Role_In_Mission_State *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Crew_Role_In_Mission_State *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Crew_Role_In_Mission_State *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_Alarms_PSM_C_Crew_Role_In_Mission_State *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Crew_Role_In_Mission_State **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_deserialize_from_cdr_buffer(
        P_Alarms_PSM_C_Crew_Role_In_Mission_State *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_Alarms_PSM_C_Crew_Role_In_Mission_State * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Crew_Role_In_Mission_State *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Crew_Role_In_Mission_State * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Crew_Role_In_Mission_State ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Crew_Role_In_Mission_State *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Crew_Role_In_Mission_StateKeyHolder *key, 
        const P_Alarms_PSM_C_Crew_Role_In_Mission_State *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Crew_Role_In_Mission_State *instance, 
        const P_Alarms_PSM_C_Crew_Role_In_Mission_StateKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const P_Alarms_PSM_C_Crew_Role_In_Mission_State *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_new(void);

    NDDSUSERDllExport extern void
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct C_Alarm_Category_Specification
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct C_Alarm_Category_Specification)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * C_Alarm_Category_Specification must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct C_Alarm_Category_Specification.
    */
    typedef  class P_Alarms_PSM_C_Alarm_Category_Specification P_Alarms_PSM_C_Alarm_Category_SpecificationKeyHolder;

    #define P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_Alarms_PSM_C_Alarm_Category_Specification*
    P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Alarm_Category_Specification*
    P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Alarm_Category_Specification*
    P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_copy_data(
        P_Alarms_PSM_C_Alarm_Category_Specification *out,
        const P_Alarms_PSM_C_Alarm_Category_Specification *in);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_destroy_data_w_params(
        P_Alarms_PSM_C_Alarm_Category_Specification *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_destroy_data_ex(
        P_Alarms_PSM_C_Alarm_Category_Specification *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_destroy_data(
        P_Alarms_PSM_C_Alarm_Category_Specification *sample);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_print_data(
        const P_Alarms_PSM_C_Alarm_Category_Specification *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Alarm_Category_Specification*
    P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Alarm_Category_Specification*
    P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_destroy_key_ex(
        P_Alarms_PSM_C_Alarm_Category_SpecificationKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_destroy_key(
        P_Alarms_PSM_C_Alarm_Category_SpecificationKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Category_Specification *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Category_Specification *out,
        const P_Alarms_PSM_C_Alarm_Category_Specification *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Alarm_Category_Specification *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Category_Specification *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_Alarms_PSM_C_Alarm_Category_Specification *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Category_Specification **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_deserialize_from_cdr_buffer(
        P_Alarms_PSM_C_Alarm_Category_Specification *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_Alarms_PSM_C_Alarm_Category_Specification * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Alarm_Category_Specification *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Category_Specification * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Category_Specification ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Category_Specification *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Category_SpecificationKeyHolder *key, 
        const P_Alarms_PSM_C_Alarm_Category_Specification *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Category_Specification *instance, 
        const P_Alarms_PSM_C_Alarm_Category_SpecificationKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const P_Alarms_PSM_C_Alarm_Category_Specification *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_new(void);

    NDDSUSERDllExport extern void
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct C_Mission_State_setMissionState
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct C_Mission_State_setMissionState)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * C_Mission_State_setMissionState must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct C_Mission_State_setMissionState.
    */
    typedef  class P_Alarms_PSM_C_Mission_State_setMissionState P_Alarms_PSM_C_Mission_State_setMissionStateKeyHolder;

    #define P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_Alarms_PSM_C_Mission_State_setMissionState*
    P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Mission_State_setMissionState*
    P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Mission_State_setMissionState*
    P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_copy_data(
        P_Alarms_PSM_C_Mission_State_setMissionState *out,
        const P_Alarms_PSM_C_Mission_State_setMissionState *in);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_destroy_data_w_params(
        P_Alarms_PSM_C_Mission_State_setMissionState *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_destroy_data_ex(
        P_Alarms_PSM_C_Mission_State_setMissionState *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_destroy_data(
        P_Alarms_PSM_C_Mission_State_setMissionState *sample);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_print_data(
        const P_Alarms_PSM_C_Mission_State_setMissionState *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Mission_State_setMissionState*
    P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Mission_State_setMissionState*
    P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_destroy_key_ex(
        P_Alarms_PSM_C_Mission_State_setMissionStateKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_destroy_key(
        P_Alarms_PSM_C_Mission_State_setMissionStateKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Mission_State_setMissionState *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Mission_State_setMissionState *out,
        const P_Alarms_PSM_C_Mission_State_setMissionState *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Mission_State_setMissionState *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Mission_State_setMissionState *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_Alarms_PSM_C_Mission_State_setMissionState *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Mission_State_setMissionState **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_deserialize_from_cdr_buffer(
        P_Alarms_PSM_C_Mission_State_setMissionState *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_Alarms_PSM_C_Mission_State_setMissionState * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Mission_State_setMissionState *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Mission_State_setMissionState * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Mission_State_setMissionState ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Mission_State_setMissionState *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Mission_State_setMissionStateKeyHolder *key, 
        const P_Alarms_PSM_C_Mission_State_setMissionState *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Mission_State_setMissionState *instance, 
        const P_Alarms_PSM_C_Mission_State_setMissionStateKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const P_Alarms_PSM_C_Mission_State_setMissionState *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_new(void);

    NDDSUSERDllExport extern void
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct C_Mission_State
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct C_Mission_State)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * C_Mission_State must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct C_Mission_State.
    */
    typedef  class P_Alarms_PSM_C_Mission_State P_Alarms_PSM_C_Mission_StateKeyHolder;

    #define P_Alarms_PSM_C_Mission_StatePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_Alarms_PSM_C_Mission_StatePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_Alarms_PSM_C_Mission_StatePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_Alarms_PSM_C_Mission_StatePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define P_Alarms_PSM_C_Mission_StatePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define P_Alarms_PSM_C_Mission_StatePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_Alarms_PSM_C_Mission_StatePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_Alarms_PSM_C_Mission_State*
    P_Alarms_PSM_C_Mission_StatePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Mission_State*
    P_Alarms_PSM_C_Mission_StatePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Mission_State*
    P_Alarms_PSM_C_Mission_StatePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Mission_StatePluginSupport_copy_data(
        P_Alarms_PSM_C_Mission_State *out,
        const P_Alarms_PSM_C_Mission_State *in);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Mission_StatePluginSupport_destroy_data_w_params(
        P_Alarms_PSM_C_Mission_State *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Mission_StatePluginSupport_destroy_data_ex(
        P_Alarms_PSM_C_Mission_State *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Mission_StatePluginSupport_destroy_data(
        P_Alarms_PSM_C_Mission_State *sample);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Mission_StatePluginSupport_print_data(
        const P_Alarms_PSM_C_Mission_State *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Mission_State*
    P_Alarms_PSM_C_Mission_StatePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Mission_State*
    P_Alarms_PSM_C_Mission_StatePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Mission_StatePluginSupport_destroy_key_ex(
        P_Alarms_PSM_C_Mission_StateKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Mission_StatePluginSupport_destroy_key(
        P_Alarms_PSM_C_Mission_StateKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    P_Alarms_PSM_C_Mission_StatePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Mission_StatePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    P_Alarms_PSM_C_Mission_StatePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Mission_StatePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    P_Alarms_PSM_C_Mission_StatePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Mission_State *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Mission_StatePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Mission_State *out,
        const P_Alarms_PSM_C_Mission_State *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Mission_StatePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Mission_State *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Mission_StatePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Mission_State *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Mission_StatePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_Alarms_PSM_C_Mission_State *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Mission_StatePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Mission_State **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Mission_StatePlugin_deserialize_from_cdr_buffer(
        P_Alarms_PSM_C_Mission_State *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Mission_StatePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Mission_StatePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Mission_StatePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Mission_StatePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_Alarms_PSM_C_Mission_StatePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_Alarms_PSM_C_Mission_State * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_Alarms_PSM_C_Mission_StatePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Mission_StatePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Mission_StatePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Mission_StatePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Mission_State *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Mission_StatePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Mission_State * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Mission_StatePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Mission_State ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Mission_StatePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Mission_State *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Mission_StatePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Mission_StateKeyHolder *key, 
        const P_Alarms_PSM_C_Mission_State *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Mission_StatePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Mission_State *instance, 
        const P_Alarms_PSM_C_Mission_StateKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Mission_StatePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const P_Alarms_PSM_C_Mission_State *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Mission_StatePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    P_Alarms_PSM_C_Mission_StatePlugin_new(void);

    NDDSUSERDllExport extern void
    P_Alarms_PSM_C_Mission_StatePlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct C_Actual_Alarm_acknowledgeAlarm
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct C_Actual_Alarm_acknowledgeAlarm)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * C_Actual_Alarm_acknowledgeAlarm must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct C_Actual_Alarm_acknowledgeAlarm.
    */
    typedef  class P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmKeyHolder;

    #define P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm*
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm*
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm*
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_copy_data(
        P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *out,
        const P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *in);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_destroy_data_w_params(
        P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_destroy_data_ex(
        P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_destroy_data(
        P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *sample);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_print_data(
        const P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm*
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm*
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_destroy_key_ex(
        P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_destroy_key(
        P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *out,
        const P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_deserialize_from_cdr_buffer(
        P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmKeyHolder *key, 
        const P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *instance, 
        const P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_new(void);

    NDDSUSERDllExport extern void
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct C_Actual_Alarm
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct C_Actual_Alarm)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * C_Actual_Alarm must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct C_Actual_Alarm.
    */
    typedef  class P_Alarms_PSM_C_Actual_Alarm P_Alarms_PSM_C_Actual_AlarmKeyHolder;

    #define P_Alarms_PSM_C_Actual_AlarmPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_Alarms_PSM_C_Actual_AlarmPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_Alarms_PSM_C_Actual_AlarmPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_Alarms_PSM_C_Actual_AlarmPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define P_Alarms_PSM_C_Actual_AlarmPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define P_Alarms_PSM_C_Actual_AlarmPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_Alarms_PSM_C_Actual_AlarmPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm*
    P_Alarms_PSM_C_Actual_AlarmPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm*
    P_Alarms_PSM_C_Actual_AlarmPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm*
    P_Alarms_PSM_C_Actual_AlarmPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_AlarmPluginSupport_copy_data(
        P_Alarms_PSM_C_Actual_Alarm *out,
        const P_Alarms_PSM_C_Actual_Alarm *in);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_AlarmPluginSupport_destroy_data_w_params(
        P_Alarms_PSM_C_Actual_Alarm *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_AlarmPluginSupport_destroy_data_ex(
        P_Alarms_PSM_C_Actual_Alarm *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_AlarmPluginSupport_destroy_data(
        P_Alarms_PSM_C_Actual_Alarm *sample);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_AlarmPluginSupport_print_data(
        const P_Alarms_PSM_C_Actual_Alarm *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm*
    P_Alarms_PSM_C_Actual_AlarmPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm*
    P_Alarms_PSM_C_Actual_AlarmPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_AlarmPluginSupport_destroy_key_ex(
        P_Alarms_PSM_C_Actual_AlarmKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_AlarmPluginSupport_destroy_key(
        P_Alarms_PSM_C_Actual_AlarmKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    P_Alarms_PSM_C_Actual_AlarmPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_AlarmPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    P_Alarms_PSM_C_Actual_AlarmPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_AlarmPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    P_Alarms_PSM_C_Actual_AlarmPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_AlarmPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm *out,
        const P_Alarms_PSM_C_Actual_Alarm *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_AlarmPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Actual_Alarm *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_AlarmPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Actual_AlarmPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_Alarms_PSM_C_Actual_Alarm *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_AlarmPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Actual_AlarmPlugin_deserialize_from_cdr_buffer(
        P_Alarms_PSM_C_Actual_Alarm *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Actual_AlarmPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_AlarmPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_AlarmPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_AlarmPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_Alarms_PSM_C_Actual_AlarmPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_Alarms_PSM_C_Actual_Alarm * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_Alarms_PSM_C_Actual_AlarmPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_AlarmPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_AlarmPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_AlarmPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Actual_Alarm *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_AlarmPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_AlarmPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Actual_AlarmPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_AlarmPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_AlarmKeyHolder *key, 
        const P_Alarms_PSM_C_Actual_Alarm *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_AlarmPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm *instance, 
        const P_Alarms_PSM_C_Actual_AlarmKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_AlarmPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const P_Alarms_PSM_C_Actual_Alarm *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_AlarmPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    P_Alarms_PSM_C_Actual_AlarmPlugin_new(void);

    NDDSUSERDllExport extern void
    P_Alarms_PSM_C_Actual_AlarmPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct C_Alarm_Condition_Specification_raiseAlarmCondition
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct C_Alarm_Condition_Specification_raiseAlarmCondition)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * C_Alarm_Condition_Specification_raiseAlarmCondition must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct C_Alarm_Condition_Specification_raiseAlarmCondition.
    */
    typedef  class P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionKeyHolder;

    #define P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition*
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition*
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition*
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_copy_data(
        P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *out,
        const P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *in);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_destroy_data_w_params(
        P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_destroy_data_ex(
        P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_destroy_data(
        P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *sample);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_print_data(
        const P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition*
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition*
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_destroy_key_ex(
        P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_destroy_key(
        P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *out,
        const P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_deserialize_from_cdr_buffer(
        P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionKeyHolder *key, 
        const P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *instance, 
        const P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_new(void);

    NDDSUSERDllExport extern void
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct C_Alarm_Condition_Specification_isOfInterestToCrewRole
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct C_Alarm_Condition_Specification_isOfInterestToCrewRole)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * C_Alarm_Condition_Specification_isOfInterestToCrewRole must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct C_Alarm_Condition_Specification_isOfInterestToCrewRole.
    */
    typedef  class P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleKeyHolder;

    #define P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole*
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole*
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole*
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_copy_data(
        P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *out,
        const P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *in);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_destroy_data_w_params(
        P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_destroy_data_ex(
        P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_destroy_data(
        P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *sample);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_print_data(
        const P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole*
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole*
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_destroy_key_ex(
        P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_destroy_key(
        P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *out,
        const P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_deserialize_from_cdr_buffer(
        P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleKeyHolder *key, 
        const P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *instance, 
        const P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_new(void);

    NDDSUSERDllExport extern void
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct C_Alarm_Condition_Specification
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct C_Alarm_Condition_Specification)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * C_Alarm_Condition_Specification must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct C_Alarm_Condition_Specification.
    */
    typedef  class P_Alarms_PSM_C_Alarm_Condition_Specification P_Alarms_PSM_C_Alarm_Condition_SpecificationKeyHolder;

    #define P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_Alarms_PSM_C_Alarm_Condition_Specification*
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Alarm_Condition_Specification*
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Alarm_Condition_Specification*
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_copy_data(
        P_Alarms_PSM_C_Alarm_Condition_Specification *out,
        const P_Alarms_PSM_C_Alarm_Condition_Specification *in);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_destroy_data_w_params(
        P_Alarms_PSM_C_Alarm_Condition_Specification *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_destroy_data_ex(
        P_Alarms_PSM_C_Alarm_Condition_Specification *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_destroy_data(
        P_Alarms_PSM_C_Alarm_Condition_Specification *sample);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_print_data(
        const P_Alarms_PSM_C_Alarm_Condition_Specification *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Alarm_Condition_Specification*
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Alarm_Condition_Specification*
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_destroy_key_ex(
        P_Alarms_PSM_C_Alarm_Condition_SpecificationKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_destroy_key(
        P_Alarms_PSM_C_Alarm_Condition_SpecificationKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Condition_Specification *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Condition_Specification *out,
        const P_Alarms_PSM_C_Alarm_Condition_Specification *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Alarm_Condition_Specification *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Condition_Specification *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_Alarms_PSM_C_Alarm_Condition_Specification *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Condition_Specification **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_deserialize_from_cdr_buffer(
        P_Alarms_PSM_C_Alarm_Condition_Specification *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_Alarms_PSM_C_Alarm_Condition_Specification * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Alarm_Condition_Specification *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Condition_Specification * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Condition_Specification ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Condition_Specification *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Condition_SpecificationKeyHolder *key, 
        const P_Alarms_PSM_C_Alarm_Condition_Specification *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Condition_Specification *instance, 
        const P_Alarms_PSM_C_Alarm_Condition_SpecificationKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const P_Alarms_PSM_C_Alarm_Condition_Specification *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_new(void);

    NDDSUSERDllExport extern void
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct C_Tone_Specification
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct C_Tone_Specification)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * C_Tone_Specification must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct C_Tone_Specification.
    */
    typedef  class P_Alarms_PSM_C_Tone_Specification P_Alarms_PSM_C_Tone_SpecificationKeyHolder;

    #define P_Alarms_PSM_C_Tone_SpecificationPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_Alarms_PSM_C_Tone_SpecificationPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_Alarms_PSM_C_Tone_SpecificationPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_Alarms_PSM_C_Tone_SpecificationPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define P_Alarms_PSM_C_Tone_SpecificationPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define P_Alarms_PSM_C_Tone_SpecificationPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_Alarms_PSM_C_Tone_SpecificationPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_Alarms_PSM_C_Tone_Specification*
    P_Alarms_PSM_C_Tone_SpecificationPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Tone_Specification*
    P_Alarms_PSM_C_Tone_SpecificationPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Tone_Specification*
    P_Alarms_PSM_C_Tone_SpecificationPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Tone_SpecificationPluginSupport_copy_data(
        P_Alarms_PSM_C_Tone_Specification *out,
        const P_Alarms_PSM_C_Tone_Specification *in);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Tone_SpecificationPluginSupport_destroy_data_w_params(
        P_Alarms_PSM_C_Tone_Specification *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Tone_SpecificationPluginSupport_destroy_data_ex(
        P_Alarms_PSM_C_Tone_Specification *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Tone_SpecificationPluginSupport_destroy_data(
        P_Alarms_PSM_C_Tone_Specification *sample);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Tone_SpecificationPluginSupport_print_data(
        const P_Alarms_PSM_C_Tone_Specification *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Tone_Specification*
    P_Alarms_PSM_C_Tone_SpecificationPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Tone_Specification*
    P_Alarms_PSM_C_Tone_SpecificationPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Tone_SpecificationPluginSupport_destroy_key_ex(
        P_Alarms_PSM_C_Tone_SpecificationKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Tone_SpecificationPluginSupport_destroy_key(
        P_Alarms_PSM_C_Tone_SpecificationKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    P_Alarms_PSM_C_Tone_SpecificationPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Tone_SpecificationPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    P_Alarms_PSM_C_Tone_SpecificationPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Tone_SpecificationPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    P_Alarms_PSM_C_Tone_SpecificationPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Tone_Specification *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Tone_SpecificationPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Tone_Specification *out,
        const P_Alarms_PSM_C_Tone_Specification *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Tone_SpecificationPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Tone_Specification *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Tone_SpecificationPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Tone_Specification *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Tone_SpecificationPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_Alarms_PSM_C_Tone_Specification *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Tone_SpecificationPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Tone_Specification **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Tone_SpecificationPlugin_deserialize_from_cdr_buffer(
        P_Alarms_PSM_C_Tone_Specification *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Tone_SpecificationPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Tone_SpecificationPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Tone_SpecificationPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Tone_SpecificationPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_Alarms_PSM_C_Tone_SpecificationPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_Alarms_PSM_C_Tone_Specification * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_Alarms_PSM_C_Tone_SpecificationPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Tone_SpecificationPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Tone_SpecificationPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Tone_SpecificationPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Tone_Specification *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Tone_SpecificationPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Tone_Specification * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Tone_SpecificationPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Tone_Specification ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Tone_SpecificationPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Tone_Specification *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Tone_SpecificationPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Tone_SpecificationKeyHolder *key, 
        const P_Alarms_PSM_C_Tone_Specification *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Tone_SpecificationPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Tone_Specification *instance, 
        const P_Alarms_PSM_C_Tone_SpecificationKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Tone_SpecificationPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const P_Alarms_PSM_C_Tone_Specification *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Tone_SpecificationPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    P_Alarms_PSM_C_Tone_SpecificationPlugin_new(void);

    NDDSUSERDllExport extern void
    P_Alarms_PSM_C_Tone_SpecificationPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct C_Platform_With_Alarms
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct C_Platform_With_Alarms)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * C_Platform_With_Alarms must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct C_Platform_With_Alarms.
    */
    typedef  class P_Alarms_PSM_C_Platform_With_Alarms P_Alarms_PSM_C_Platform_With_AlarmsKeyHolder;

    #define P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_Alarms_PSM_C_Platform_With_AlarmsPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define P_Alarms_PSM_C_Platform_With_AlarmsPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define P_Alarms_PSM_C_Platform_With_AlarmsPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_Alarms_PSM_C_Platform_With_AlarmsPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_Alarms_PSM_C_Platform_With_Alarms*
    P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Platform_With_Alarms*
    P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Platform_With_Alarms*
    P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_copy_data(
        P_Alarms_PSM_C_Platform_With_Alarms *out,
        const P_Alarms_PSM_C_Platform_With_Alarms *in);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_destroy_data_w_params(
        P_Alarms_PSM_C_Platform_With_Alarms *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_destroy_data_ex(
        P_Alarms_PSM_C_Platform_With_Alarms *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_destroy_data(
        P_Alarms_PSM_C_Platform_With_Alarms *sample);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_print_data(
        const P_Alarms_PSM_C_Platform_With_Alarms *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Platform_With_Alarms*
    P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Platform_With_Alarms*
    P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_destroy_key_ex(
        P_Alarms_PSM_C_Platform_With_AlarmsKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_destroy_key(
        P_Alarms_PSM_C_Platform_With_AlarmsKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Platform_With_Alarms *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Platform_With_Alarms *out,
        const P_Alarms_PSM_C_Platform_With_Alarms *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Platform_With_Alarms *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Platform_With_Alarms *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_Alarms_PSM_C_Platform_With_Alarms *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Platform_With_Alarms **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_deserialize_from_cdr_buffer(
        P_Alarms_PSM_C_Platform_With_Alarms *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_Alarms_PSM_C_Platform_With_Alarms * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Platform_With_Alarms *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Platform_With_Alarms * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Platform_With_Alarms ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Platform_With_Alarms *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Platform_With_AlarmsKeyHolder *key, 
        const P_Alarms_PSM_C_Platform_With_Alarms *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Platform_With_Alarms *instance, 
        const P_Alarms_PSM_C_Platform_With_AlarmsKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const P_Alarms_PSM_C_Platform_With_Alarms *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_new(void);

    NDDSUSERDllExport extern void
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct C_Actual_Alarm_Condition_unoverrideAlarmCondition
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct C_Actual_Alarm_Condition_unoverrideAlarmCondition)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * C_Actual_Alarm_Condition_unoverrideAlarmCondition must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct C_Actual_Alarm_Condition_unoverrideAlarmCondition.
    */
    typedef  class P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionKeyHolder;

    #define P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition*
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition*
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition*
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_copy_data(
        P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *out,
        const P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *in);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_destroy_data_w_params(
        P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_destroy_data_ex(
        P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_destroy_data(
        P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *sample);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_print_data(
        const P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition*
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition*
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_destroy_key_ex(
        P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_destroy_key(
        P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *out,
        const P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_deserialize_from_cdr_buffer(
        P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionKeyHolder *key, 
        const P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *instance, 
        const P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_new(void);

    NDDSUSERDllExport extern void
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct C_Actual_Alarm_Condition_overrideAlarmCondition
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct C_Actual_Alarm_Condition_overrideAlarmCondition)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * C_Actual_Alarm_Condition_overrideAlarmCondition must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct C_Actual_Alarm_Condition_overrideAlarmCondition.
    */
    typedef  class P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionKeyHolder;

    #define P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition*
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition*
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition*
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_copy_data(
        P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *out,
        const P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *in);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_destroy_data_w_params(
        P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_destroy_data_ex(
        P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_destroy_data(
        P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *sample);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_print_data(
        const P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition*
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition*
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_destroy_key_ex(
        P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_destroy_key(
        P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *out,
        const P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_deserialize_from_cdr_buffer(
        P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionKeyHolder *key, 
        const P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *instance, 
        const P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_new(void);

    NDDSUSERDllExport extern void
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct C_Actual_Alarm_Condition_clearAlarmCondition
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct C_Actual_Alarm_Condition_clearAlarmCondition)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * C_Actual_Alarm_Condition_clearAlarmCondition must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct C_Actual_Alarm_Condition_clearAlarmCondition.
    */
    typedef  class P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionKeyHolder;

    #define P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition*
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition*
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition*
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_copy_data(
        P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *out,
        const P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *in);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_destroy_data_w_params(
        P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_destroy_data_ex(
        P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_destroy_data(
        P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *sample);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_print_data(
        const P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition*
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition*
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_destroy_key_ex(
        P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_destroy_key(
        P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *out,
        const P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_deserialize_from_cdr_buffer(
        P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionKeyHolder *key, 
        const P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *instance, 
        const P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_new(void);

    NDDSUSERDllExport extern void
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct C_Actual_Alarm_Condition
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct C_Actual_Alarm_Condition)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * C_Actual_Alarm_Condition must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct C_Actual_Alarm_Condition.
    */
    typedef  class P_Alarms_PSM_C_Actual_Alarm_Condition P_Alarms_PSM_C_Actual_Alarm_ConditionKeyHolder;

    #define P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm_Condition*
    P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm_Condition*
    P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm_Condition*
    P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_copy_data(
        P_Alarms_PSM_C_Actual_Alarm_Condition *out,
        const P_Alarms_PSM_C_Actual_Alarm_Condition *in);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_destroy_data_w_params(
        P_Alarms_PSM_C_Actual_Alarm_Condition *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_destroy_data_ex(
        P_Alarms_PSM_C_Actual_Alarm_Condition *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_destroy_data(
        P_Alarms_PSM_C_Actual_Alarm_Condition *sample);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_print_data(
        const P_Alarms_PSM_C_Actual_Alarm_Condition *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm_Condition*
    P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Actual_Alarm_Condition*
    P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_destroy_key_ex(
        P_Alarms_PSM_C_Actual_Alarm_ConditionKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_destroy_key(
        P_Alarms_PSM_C_Actual_Alarm_ConditionKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition *out,
        const P_Alarms_PSM_C_Actual_Alarm_Condition *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Actual_Alarm_Condition *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_Alarms_PSM_C_Actual_Alarm_Condition *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_deserialize_from_cdr_buffer(
        P_Alarms_PSM_C_Actual_Alarm_Condition *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_Alarms_PSM_C_Actual_Alarm_Condition * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Actual_Alarm_Condition *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_ConditionKeyHolder *key, 
        const P_Alarms_PSM_C_Actual_Alarm_Condition *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Actual_Alarm_Condition *instance, 
        const P_Alarms_PSM_C_Actual_Alarm_ConditionKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const P_Alarms_PSM_C_Actual_Alarm_Condition *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_new(void);

    NDDSUSERDllExport extern void
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct C_Alarm_Category
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct C_Alarm_Category)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * C_Alarm_Category must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct C_Alarm_Category.
    */
    typedef  class P_Alarms_PSM_C_Alarm_Category P_Alarms_PSM_C_Alarm_CategoryKeyHolder;

    #define P_Alarms_PSM_C_Alarm_CategoryPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_Alarms_PSM_C_Alarm_CategoryPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_Alarms_PSM_C_Alarm_CategoryPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_Alarms_PSM_C_Alarm_CategoryPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define P_Alarms_PSM_C_Alarm_CategoryPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define P_Alarms_PSM_C_Alarm_CategoryPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_Alarms_PSM_C_Alarm_CategoryPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_Alarms_PSM_C_Alarm_Category*
    P_Alarms_PSM_C_Alarm_CategoryPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Alarm_Category*
    P_Alarms_PSM_C_Alarm_CategoryPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Alarm_Category*
    P_Alarms_PSM_C_Alarm_CategoryPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_CategoryPluginSupport_copy_data(
        P_Alarms_PSM_C_Alarm_Category *out,
        const P_Alarms_PSM_C_Alarm_Category *in);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_CategoryPluginSupport_destroy_data_w_params(
        P_Alarms_PSM_C_Alarm_Category *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_CategoryPluginSupport_destroy_data_ex(
        P_Alarms_PSM_C_Alarm_Category *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_CategoryPluginSupport_destroy_data(
        P_Alarms_PSM_C_Alarm_Category *sample);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_CategoryPluginSupport_print_data(
        const P_Alarms_PSM_C_Alarm_Category *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Alarm_Category*
    P_Alarms_PSM_C_Alarm_CategoryPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Alarm_Category*
    P_Alarms_PSM_C_Alarm_CategoryPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_CategoryPluginSupport_destroy_key_ex(
        P_Alarms_PSM_C_Alarm_CategoryKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_CategoryPluginSupport_destroy_key(
        P_Alarms_PSM_C_Alarm_CategoryKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    P_Alarms_PSM_C_Alarm_CategoryPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_CategoryPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    P_Alarms_PSM_C_Alarm_CategoryPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Alarm_CategoryPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    P_Alarms_PSM_C_Alarm_CategoryPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Category *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_CategoryPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Category *out,
        const P_Alarms_PSM_C_Alarm_Category *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_CategoryPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Alarm_Category *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_CategoryPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Category *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Alarm_CategoryPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_Alarms_PSM_C_Alarm_Category *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_CategoryPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Category **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Alarm_CategoryPlugin_deserialize_from_cdr_buffer(
        P_Alarms_PSM_C_Alarm_Category *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Alarm_CategoryPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Alarm_CategoryPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Alarm_CategoryPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Alarm_CategoryPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_Alarms_PSM_C_Alarm_CategoryPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_Alarms_PSM_C_Alarm_Category * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_Alarms_PSM_C_Alarm_CategoryPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Alarm_CategoryPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Alarm_CategoryPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_CategoryPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Alarm_Category *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_CategoryPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Category * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_CategoryPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Category ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Alarm_CategoryPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Category *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_CategoryPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_CategoryKeyHolder *key, 
        const P_Alarms_PSM_C_Alarm_Category *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_CategoryPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Alarm_Category *instance, 
        const P_Alarms_PSM_C_Alarm_CategoryKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_CategoryPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const P_Alarms_PSM_C_Alarm_Category *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Alarm_CategoryPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    P_Alarms_PSM_C_Alarm_CategoryPlugin_new(void);

    NDDSUSERDllExport extern void
    P_Alarms_PSM_C_Alarm_CategoryPlugin_delete(struct PRESTypePlugin *);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct C_Platform_With_Alarms_CP
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct C_Platform_With_Alarms_CP)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * C_Platform_With_Alarms_CP must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct C_Platform_With_Alarms_CP.
    */
    typedef  class P_Alarms_PSM_C_Platform_With_Alarms_CP P_Alarms_PSM_C_Platform_With_Alarms_CPKeyHolder;

    #define P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_Alarms_PSM_C_Platform_With_Alarms_CP*
    P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Platform_With_Alarms_CP*
    P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Platform_With_Alarms_CP*
    P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_copy_data(
        P_Alarms_PSM_C_Platform_With_Alarms_CP *out,
        const P_Alarms_PSM_C_Platform_With_Alarms_CP *in);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_destroy_data_w_params(
        P_Alarms_PSM_C_Platform_With_Alarms_CP *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_destroy_data_ex(
        P_Alarms_PSM_C_Platform_With_Alarms_CP *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_destroy_data(
        P_Alarms_PSM_C_Platform_With_Alarms_CP *sample);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_print_data(
        const P_Alarms_PSM_C_Platform_With_Alarms_CP *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Platform_With_Alarms_CP*
    P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_Alarms_PSM_C_Platform_With_Alarms_CP*
    P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_destroy_key_ex(
        P_Alarms_PSM_C_Platform_With_Alarms_CPKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_destroy_key(
        P_Alarms_PSM_C_Platform_With_Alarms_CPKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Platform_With_Alarms_CP *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Platform_With_Alarms_CP *out,
        const P_Alarms_PSM_C_Platform_With_Alarms_CP *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Platform_With_Alarms_CP *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Platform_With_Alarms_CP *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_Alarms_PSM_C_Platform_With_Alarms_CP *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Platform_With_Alarms_CP **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_deserialize_from_cdr_buffer(
        P_Alarms_PSM_C_Platform_With_Alarms_CP *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_Alarms_PSM_C_Platform_With_Alarms_CP * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_Alarms_PSM_C_Platform_With_Alarms_CP *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Platform_With_Alarms_CP * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Platform_With_Alarms_CP ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Platform_With_Alarms_CP *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Platform_With_Alarms_CPKeyHolder *key, 
        const P_Alarms_PSM_C_Platform_With_Alarms_CP *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        P_Alarms_PSM_C_Platform_With_Alarms_CP *instance, 
        const P_Alarms_PSM_C_Platform_With_Alarms_CPKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const P_Alarms_PSM_C_Platform_With_Alarms_CP *instance);

    NDDSUSERDllExport extern RTIBool 
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_new(void);

    NDDSUSERDllExport extern void
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* Alarms_PSM_RTIPlugin_41728481_h */

