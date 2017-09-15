

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Alarms_PSM_RTI.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <string.h>

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
#include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
#include "osapi/osapi_utility.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
#include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
#include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
#include "cdr/cdr_stream.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "Alarms_PSM_RTIPlugin.h"


/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

RTIBool 
P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_T_Actual_Alarm_StateType *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if (!RTICdrStream_serializeEnum(stream, sample))
        {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_T_Actual_Alarm_StateType *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;
    DDS_Enum enum_tmp;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        if (!RTICdrStream_deserializeEnum(stream, &enum_tmp))
        {
            return RTI_FALSE;
        }
        switch (enum_tmp) {
            case L_Actual_Alarm_StateType_Unacknowledged:
            *sample=L_Actual_Alarm_StateType_Unacknowledged;
            break;
            case L_Actual_Alarm_StateType_Acknowledged:
            *sample=L_Actual_Alarm_StateType_Acknowledged;
            break;
            case L_Actual_Alarm_StateType_Resolved:
            *sample=L_Actual_Alarm_StateType_Resolved;
            break;
            case L_Actual_Alarm_StateType_Destroyed:
            *sample=L_Actual_Alarm_StateType_Destroyed;
            break;
            case L_Actual_Alarm_StateType_Cleared:
            *sample=L_Actual_Alarm_StateType_Cleared;
            break;
            default:
            stream->_xTypesState.unassignable = RTI_TRUE;
            return RTI_FALSE;
        }

    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!RTICdrStream_skipEnum(stream)) {
            return RTI_FALSE;
        }
    }

    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += RTICdrType_getEnumMaxSizeSerialized(current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data,
        NULL,
        include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

unsigned int P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_get_serialized_sample_max_size(
        endpoint_data,include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const P_Alarms_PSM_T_Actual_Alarm_StateType * sample) 
{

    unsigned int initial_alignment = current_alignment;

    if (sample==NULL) {
        return 0;
    }

    current_alignment += P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_get_serialized_sample_max_size(
        endpoint_data,include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

RTIBool 
P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_T_Actual_Alarm_StateType *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    return  P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_serialize(
        endpoint_data, sample, stream, 
        serialize_encapsulation, encapsulation_id, 
        serialize_key, endpoint_plugin_qos);

}

RTIBool P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_T_Actual_Alarm_StateType *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    return  P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_deserialize_sample(
        endpoint_data, sample, stream, deserialize_encapsulation, 
        deserialize_key, endpoint_plugin_qos);
}

unsigned int
P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    current_alignment +=  P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

RTIBool 
P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_T_Actual_Alarm_StateType *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{

    return  P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_deserialize_sample(
        endpoint_data, sample, stream, deserialize_encapsulation, 
        deserialize_key, endpoint_plugin_qos);

}

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

void P_Alarms_PSM_T_Actual_Alarm_StateTypePluginSupport_print_data(
    const P_Alarms_PSM_T_Actual_Alarm_StateType *sample,
    const char *description, int indent_level)
{
    if (description != NULL) {
        RTICdrType_printIndent(indent_level);
        RTILog_debug("%s:\n", description);
    }

    if (sample == NULL) {
        RTICdrType_printIndent(indent_level+1);
        RTILog_debug("NULL\n");
        return;
    }

    RTICdrType_printEnum((RTICdrEnum *)sample, "P_Alarms_PSM_T_Actual_Alarm_StateType", indent_level + 1);
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

RTIBool 
P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_T_Alarm_Condition_Specification_StateType *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if (!RTICdrStream_serializeEnum(stream, sample))
        {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateType *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;
    DDS_Enum enum_tmp;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        if (!RTICdrStream_deserializeEnum(stream, &enum_tmp))
        {
            return RTI_FALSE;
        }
        switch (enum_tmp) {
            case L_Alarm_Condition_Specification_StateType_condition_overridden:
            *sample=L_Alarm_Condition_Specification_StateType_condition_overridden;
            break;
            case L_Alarm_Condition_Specification_StateType_condition_not_overridden:
            *sample=L_Alarm_Condition_Specification_StateType_condition_not_overridden;
            break;
            default:
            stream->_xTypesState.unassignable = RTI_TRUE;
            return RTI_FALSE;
        }

    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!RTICdrStream_skipEnum(stream)) {
            return RTI_FALSE;
        }
    }

    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += RTICdrType_getEnumMaxSizeSerialized(current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data,
        NULL,
        include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

unsigned int P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_get_serialized_sample_max_size(
        endpoint_data,include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const P_Alarms_PSM_T_Alarm_Condition_Specification_StateType * sample) 
{

    unsigned int initial_alignment = current_alignment;

    if (sample==NULL) {
        return 0;
    }

    current_alignment += P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_get_serialized_sample_max_size(
        endpoint_data,include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

RTIBool 
P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_T_Alarm_Condition_Specification_StateType *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    return  P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_serialize(
        endpoint_data, sample, stream, 
        serialize_encapsulation, encapsulation_id, 
        serialize_key, endpoint_plugin_qos);

}

RTIBool P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateType *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    return  P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_deserialize_sample(
        endpoint_data, sample, stream, deserialize_encapsulation, 
        deserialize_key, endpoint_plugin_qos);
}

unsigned int
P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    current_alignment +=  P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

RTIBool 
P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_T_Alarm_Condition_Specification_StateType *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{

    return  P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_deserialize_sample(
        endpoint_data, sample, stream, deserialize_encapsulation, 
        deserialize_key, endpoint_plugin_qos);

}

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

void P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePluginSupport_print_data(
    const P_Alarms_PSM_T_Alarm_Condition_Specification_StateType *sample,
    const char *description, int indent_level)
{
    if (description != NULL) {
        RTICdrType_printIndent(indent_level);
        RTILog_debug("%s:\n", description);
    }

    if (sample == NULL) {
        RTICdrType_printIndent(indent_level+1);
        RTILog_debug("NULL\n");
        return;
    }

    RTICdrType_printEnum((RTICdrEnum *)sample, "P_Alarms_PSM_T_Alarm_Condition_Specification_StateType", indent_level + 1);
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

RTIBool 
P_Alarms_PSM_T_AlarmCategoryTypePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_T_AlarmCategoryType *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if (!RTICdrStream_serializeEnum(stream, sample))
        {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_T_AlarmCategoryTypePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_T_AlarmCategoryType *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;
    DDS_Enum enum_tmp;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        if (!RTICdrStream_deserializeEnum(stream, &enum_tmp))
        {
            return RTI_FALSE;
        }
        switch (enum_tmp) {
            case L_AlarmCategoryType_Warning:
            *sample=L_AlarmCategoryType_Warning;
            break;
            case L_AlarmCategoryType_Caution:
            *sample=L_AlarmCategoryType_Caution;
            break;
            case L_AlarmCategoryType_Advisory:
            *sample=L_AlarmCategoryType_Advisory;
            break;
            default:
            stream->_xTypesState.unassignable = RTI_TRUE;
            return RTI_FALSE;
        }

    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_T_AlarmCategoryTypePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!RTICdrStream_skipEnum(stream)) {
            return RTI_FALSE;
        }
    }

    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
P_Alarms_PSM_T_AlarmCategoryTypePlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += RTICdrType_getEnumMaxSizeSerialized(current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
P_Alarms_PSM_T_AlarmCategoryTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += P_Alarms_PSM_T_AlarmCategoryTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data,
        NULL,
        include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

unsigned int P_Alarms_PSM_T_AlarmCategoryTypePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += P_Alarms_PSM_T_AlarmCategoryTypePlugin_get_serialized_sample_max_size(
        endpoint_data,include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
P_Alarms_PSM_T_AlarmCategoryTypePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const P_Alarms_PSM_T_AlarmCategoryType * sample) 
{

    unsigned int initial_alignment = current_alignment;

    if (sample==NULL) {
        return 0;
    }

    current_alignment += P_Alarms_PSM_T_AlarmCategoryTypePlugin_get_serialized_sample_max_size(
        endpoint_data,include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

RTIBool 
P_Alarms_PSM_T_AlarmCategoryTypePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_T_AlarmCategoryType *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    return  P_Alarms_PSM_T_AlarmCategoryTypePlugin_serialize(
        endpoint_data, sample, stream, 
        serialize_encapsulation, encapsulation_id, 
        serialize_key, endpoint_plugin_qos);

}

RTIBool P_Alarms_PSM_T_AlarmCategoryTypePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_T_AlarmCategoryType *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    return  P_Alarms_PSM_T_AlarmCategoryTypePlugin_deserialize_sample(
        endpoint_data, sample, stream, deserialize_encapsulation, 
        deserialize_key, endpoint_plugin_qos);
}

unsigned int
P_Alarms_PSM_T_AlarmCategoryTypePlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    current_alignment +=  P_Alarms_PSM_T_AlarmCategoryTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

RTIBool 
P_Alarms_PSM_T_AlarmCategoryTypePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_T_AlarmCategoryType *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{

    return  P_Alarms_PSM_T_AlarmCategoryTypePlugin_deserialize_sample(
        endpoint_data, sample, stream, deserialize_encapsulation, 
        deserialize_key, endpoint_plugin_qos);

}

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

void P_Alarms_PSM_T_AlarmCategoryTypePluginSupport_print_data(
    const P_Alarms_PSM_T_AlarmCategoryType *sample,
    const char *description, int indent_level)
{
    if (description != NULL) {
        RTICdrType_printIndent(indent_level);
        RTILog_debug("%s:\n", description);
    }

    if (sample == NULL) {
        RTICdrType_printIndent(indent_level+1);
        RTILog_debug("NULL\n");
        return;
    }

    RTICdrType_printEnum((RTICdrEnum *)sample, "P_Alarms_PSM_T_AlarmCategoryType", indent_level + 1);
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

RTIBool 
P_Alarms_PSM_T_MissionStateTypePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_T_MissionStateType *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if (!RTICdrStream_serializeEnum(stream, sample))
        {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_T_MissionStateTypePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_T_MissionStateType *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;
    DDS_Enum enum_tmp;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        if (!RTICdrStream_deserializeEnum(stream, &enum_tmp))
        {
            return RTI_FALSE;
        }
        switch (enum_tmp) {
            case L_MissionStateType_Driving:
            *sample=L_MissionStateType_Driving;
            break;
            case L_MissionStateType_Engagement:
            *sample=L_MissionStateType_Engagement;
            break;
            case L_MissionStateType_Reconnaissance:
            *sample=L_MissionStateType_Reconnaissance;
            break;
            default:
            stream->_xTypesState.unassignable = RTI_TRUE;
            return RTI_FALSE;
        }

    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_T_MissionStateTypePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!RTICdrStream_skipEnum(stream)) {
            return RTI_FALSE;
        }
    }

    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
P_Alarms_PSM_T_MissionStateTypePlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += RTICdrType_getEnumMaxSizeSerialized(current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
P_Alarms_PSM_T_MissionStateTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += P_Alarms_PSM_T_MissionStateTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data,
        NULL,
        include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

unsigned int P_Alarms_PSM_T_MissionStateTypePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += P_Alarms_PSM_T_MissionStateTypePlugin_get_serialized_sample_max_size(
        endpoint_data,include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
P_Alarms_PSM_T_MissionStateTypePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const P_Alarms_PSM_T_MissionStateType * sample) 
{

    unsigned int initial_alignment = current_alignment;

    if (sample==NULL) {
        return 0;
    }

    current_alignment += P_Alarms_PSM_T_MissionStateTypePlugin_get_serialized_sample_max_size(
        endpoint_data,include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

RTIBool 
P_Alarms_PSM_T_MissionStateTypePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_T_MissionStateType *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    return  P_Alarms_PSM_T_MissionStateTypePlugin_serialize(
        endpoint_data, sample, stream, 
        serialize_encapsulation, encapsulation_id, 
        serialize_key, endpoint_plugin_qos);

}

RTIBool P_Alarms_PSM_T_MissionStateTypePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_T_MissionStateType *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    return  P_Alarms_PSM_T_MissionStateTypePlugin_deserialize_sample(
        endpoint_data, sample, stream, deserialize_encapsulation, 
        deserialize_key, endpoint_plugin_qos);
}

unsigned int
P_Alarms_PSM_T_MissionStateTypePlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    current_alignment +=  P_Alarms_PSM_T_MissionStateTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

RTIBool 
P_Alarms_PSM_T_MissionStateTypePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_T_MissionStateType *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{

    return  P_Alarms_PSM_T_MissionStateTypePlugin_deserialize_sample(
        endpoint_data, sample, stream, deserialize_encapsulation, 
        deserialize_key, endpoint_plugin_qos);

}

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

void P_Alarms_PSM_T_MissionStateTypePluginSupport_print_data(
    const P_Alarms_PSM_T_MissionStateType *sample,
    const char *description, int indent_level)
{
    if (description != NULL) {
        RTICdrType_printIndent(indent_level);
        RTILog_debug("%s:\n", description);
    }

    if (sample == NULL) {
        RTICdrType_printIndent(indent_level+1);
        RTILog_debug("NULL\n");
        return;
    }

    RTICdrType_printEnum((RTICdrEnum *)sample, "P_Alarms_PSM_T_MissionStateType", indent_level + 1);
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
*  Type P_Alarms_PSM_C_Crew_Role_In_Mission_State
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

P_Alarms_PSM_C_Crew_Role_In_Mission_State*
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    P_Alarms_PSM_C_Crew_Role_In_Mission_State *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Crew_Role_In_Mission_State);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Crew_Role_In_Mission_State_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
} 

P_Alarms_PSM_C_Crew_Role_In_Mission_State *
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_create_data_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Crew_Role_In_Mission_State *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Crew_Role_In_Mission_State);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Crew_Role_In_Mission_State_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }
    return sample; 
}

P_Alarms_PSM_C_Crew_Role_In_Mission_State *
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_create_data(void)
{
    return P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_create_data_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_destroy_data_w_params(
    P_Alarms_PSM_C_Crew_Role_In_Mission_State *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    P_Alarms_PSM_C_Crew_Role_In_Mission_State_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_destroy_data_ex(
    P_Alarms_PSM_C_Crew_Role_In_Mission_State *sample,RTIBool deallocate_pointers) {

    P_Alarms_PSM_C_Crew_Role_In_Mission_State_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_destroy_data(
    P_Alarms_PSM_C_Crew_Role_In_Mission_State *sample) {

    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_copy_data(
    P_Alarms_PSM_C_Crew_Role_In_Mission_State *dst,
    const P_Alarms_PSM_C_Crew_Role_In_Mission_State *src)
{
    return P_Alarms_PSM_C_Crew_Role_In_Mission_State_copy(dst,src);
}

void 
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_print_data(
    const P_Alarms_PSM_C_Crew_Role_In_Mission_State *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_sourceID, "A_sourceID", indent_level + 1);

    P_LDM_Common_T_DateTimeTypePluginSupport_print_data(
        &sample->A_timeOfDataGeneration, "A_timeOfDataGeneration", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_crewRoleName, "A_crewRoleName", indent_level + 1);

    if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_relevantAlarmType_sourceID) != NULL) {
        RTICdrType_printArray(
            P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_relevantAlarmType_sourceID), 
            P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_relevantAlarmType_sourceID),
            sizeof(P_LDM_Common_T_IdentifierType),
            (RTICdrTypePrintFunction)P_LDM_Common_T_IdentifierTypePluginSupport_print_data,
            "A_relevantAlarmType_sourceID", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_relevantAlarmType_sourceID), 
            P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_relevantAlarmType_sourceID),
            (RTICdrTypePrintFunction)P_LDM_Common_T_IdentifierTypePluginSupport_print_data,
            "A_relevantAlarmType_sourceID", indent_level + 1);
    }

    if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_missionState_sourceID) != NULL) {
        RTICdrType_printArray(
            P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_missionState_sourceID), 
            P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_missionState_sourceID),
            sizeof(P_LDM_Common_T_IdentifierType),
            (RTICdrTypePrintFunction)P_LDM_Common_T_IdentifierTypePluginSupport_print_data,
            "A_missionState_sourceID", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_missionState_sourceID), 
            P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_missionState_sourceID),
            (RTICdrTypePrintFunction)P_LDM_Common_T_IdentifierTypePluginSupport_print_data,
            "A_missionState_sourceID", indent_level + 1);
    }

}
P_Alarms_PSM_C_Crew_Role_In_Mission_State *
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_create_key_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Crew_Role_In_Mission_State *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, P_Alarms_PSM_C_Crew_Role_In_Mission_StateKeyHolder);

    P_Alarms_PSM_C_Crew_Role_In_Mission_State_initialize_ex(key,allocate_pointers, RTI_TRUE);
    return key;
}

P_Alarms_PSM_C_Crew_Role_In_Mission_State *
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_create_key(void)
{
    return  P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_create_key_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_destroy_key_ex(
    P_Alarms_PSM_C_Crew_Role_In_Mission_StateKeyHolder *key,RTIBool deallocate_pointers)
{
    P_Alarms_PSM_C_Crew_Role_In_Mission_State_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}

void 
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_destroy_key(
    P_Alarms_PSM_C_Crew_Role_In_Mission_StateKeyHolder *key) {

    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_destroy_key_ex(key,RTI_TRUE);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    unsigned int serializedKeyMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_destroy_data,
        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
        P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_create_key ,            
        (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
        P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    } 
    serializedKeyMaxSize =  P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

    if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
        epd,endpoint_info,serializedKeyMaxSize))  
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Crew_Role_In_Mission_State *sample,
    void *handle)
{

    P_Alarms_PSM_C_Crew_Role_In_Mission_State_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Crew_Role_In_Mission_State *dst,
    const P_Alarms_PSM_C_Crew_Role_In_Mission_State *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return P_Alarms_PSM_C_Crew_Role_In_Mission_StatePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Crew_Role_In_Mission_State *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_DateTimeTypePlugin_serialize(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_crewRoleName,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_relevantAlarmType_sourceID) != NULL) {
            if (!RTICdrStream_serializeNonPrimitiveSequence(
                stream,
                P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_relevantAlarmType_sourceID),
                P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_relevantAlarmType_sourceID),
                (100),
                sizeof(P_LDM_Common_T_IdentifierType),
                (RTICdrStreamSerializeFunction)P_LDM_Common_T_IdentifierTypePlugin_serialize,
                RTI_FALSE, encapsulation_id,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            } 
        } else {
            if (!RTICdrStream_serializeNonPrimitivePointerSequence(
                stream,
                (const void **) P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_relevantAlarmType_sourceID),
                P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_relevantAlarmType_sourceID),
                (100),
                (RTICdrStreamSerializeFunction)P_LDM_Common_T_IdentifierTypePlugin_serialize,
                RTI_FALSE, encapsulation_id,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            } 

        } 

        if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_missionState_sourceID) != NULL) {
            if (!RTICdrStream_serializeNonPrimitiveSequence(
                stream,
                P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_missionState_sourceID),
                P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_missionState_sourceID),
                (100),
                sizeof(P_LDM_Common_T_IdentifierType),
                (RTICdrStreamSerializeFunction)P_LDM_Common_T_IdentifierTypePlugin_serialize,
                RTI_FALSE, encapsulation_id,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            } 
        } else {
            if (!RTICdrStream_serializeNonPrimitivePointerSequence(
                stream,
                (const void **) P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_missionState_sourceID),
                P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_missionState_sourceID),
                (100),
                (RTICdrStreamSerializeFunction)P_LDM_Common_T_IdentifierTypePlugin_serialize,
                RTI_FALSE, encapsulation_id,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            } 

        } 

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Crew_Role_In_Mission_State *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        P_Alarms_PSM_C_Crew_Role_In_Mission_State_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_DateTimeTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_crewRoleName,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_relevantAlarmType_sourceID) != NULL) {
                if (!RTICdrStream_deserializeNonPrimitiveSequence(
                    stream,
                    P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_relevantAlarmType_sourceID),
                    &sequence_length,
                    P_LDM_Common_T_IdentifierTypeSeq_get_maximum(&sample->A_relevantAlarmType_sourceID),
                    sizeof(P_LDM_Common_T_IdentifierType),
                    (RTICdrStreamDeserializeFunction)P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample,
                    RTI_FALSE,RTI_TRUE,
                    endpoint_data,endpoint_plugin_qos)) {
                    goto fin; 
                }
            } else {
                if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                    stream,
                    (void **) P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_relevantAlarmType_sourceID),
                    &sequence_length,
                    P_LDM_Common_T_IdentifierTypeSeq_get_maximum(&sample->A_relevantAlarmType_sourceID),
                    (RTICdrStreamDeserializeFunction)P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample,
                    RTI_FALSE,RTI_TRUE,
                    endpoint_data,endpoint_plugin_qos)) {
                    goto fin; 
                }
            }
            if (!P_LDM_Common_T_IdentifierTypeSeq_set_length(
                &sample->A_relevantAlarmType_sourceID,sequence_length)) {
                return RTI_FALSE;
            }        

        }
        {
            RTICdrUnsignedLong sequence_length;
            if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_missionState_sourceID) != NULL) {
                if (!RTICdrStream_deserializeNonPrimitiveSequence(
                    stream,
                    P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_missionState_sourceID),
                    &sequence_length,
                    P_LDM_Common_T_IdentifierTypeSeq_get_maximum(&sample->A_missionState_sourceID),
                    sizeof(P_LDM_Common_T_IdentifierType),
                    (RTICdrStreamDeserializeFunction)P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample,
                    RTI_FALSE,RTI_TRUE,
                    endpoint_data,endpoint_plugin_qos)) {
                    goto fin; 
                }
            } else {
                if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                    stream,
                    (void **) P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_missionState_sourceID),
                    &sequence_length,
                    P_LDM_Common_T_IdentifierTypeSeq_get_maximum(&sample->A_missionState_sourceID),
                    (RTICdrStreamDeserializeFunction)P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample,
                    RTI_FALSE,RTI_TRUE,
                    endpoint_data,endpoint_plugin_qos)) {
                    goto fin; 
                }
            }
            if (!P_LDM_Common_T_IdentifierTypeSeq_set_length(
                &sample->A_missionState_sourceID,sequence_length)) {
                return RTI_FALSE;
            }        

        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const P_Alarms_PSM_C_Crew_Role_In_Mission_State *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 0);

    if (buffer == NULL) {
        *length = 
        P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_deserialize_from_cdr_buffer(
    P_Alarms_PSM_C_Crew_Role_In_Mission_State *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    return P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

RTIBool 
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Crew_Role_In_Mission_State **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;

}

RTIBool P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipNonPrimitiveSequence(
                stream,
                &sequence_length,
                sizeof(P_LDM_Common_T_IdentifierType),
                (RTICdrStreamSkipFunction)P_LDM_Common_T_IdentifierTypePlugin_skip,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                goto fin; 
            }
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipNonPrimitiveSequence(
                stream,
                &sequence_length,
                sizeof(P_LDM_Common_T_IdentifierType),
                (RTICdrStreamSkipFunction)P_LDM_Common_T_IdentifierTypePlugin_skip,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                goto fin; 
            }
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=RTICdrType_getNonPrimitiveSequenceMaxSizeSerializedEx(
        overflow,
        current_alignment, (100),
        P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex,
        RTI_FALSE,encapsulation_id,endpoint_data);

    current_alignment +=RTICdrType_getNonPrimitiveSequenceMaxSizeSerializedEx(
        overflow,
        current_alignment, (100),
        P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex,
        RTI_FALSE,encapsulation_id,endpoint_data);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=RTICdrType_getNonPrimitiveSequenceMaxSizeSerialized(
        current_alignment, 0,
        P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size,
        RTI_FALSE,encapsulation_id,endpoint_data);
    current_alignment +=RTICdrType_getNonPrimitiveSequenceMaxSizeSerialized(
        current_alignment, 0,
        P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size,
        RTI_FALSE,encapsulation_id,endpoint_data);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const P_Alarms_PSM_C_Crew_Role_In_Mission_State * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (sample==NULL) {
        return 0;
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_sourceID);
    current_alignment += P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_timeOfDataGeneration);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_crewRoleName);
    if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_relevantAlarmType_sourceID) != NULL) {
        current_alignment += RTICdrStream_getNonPrimitiveSequenceSerializedSize(
            current_alignment, P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_relevantAlarmType_sourceID),
            sizeof(P_LDM_Common_T_IdentifierType),
            (RTICdrTypeGetSerializedSampleSizeFunction)P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_relevantAlarmType_sourceID),
            endpoint_data);
    } else {
        current_alignment += RTICdrStream_getNonPrimitivePointerSequenceSerializedSize(
            current_alignment,  
            P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_relevantAlarmType_sourceID),
            sizeof(P_LDM_Common_T_IdentifierType),
            (RTICdrTypeGetSerializedSampleSizeFunction)P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            (const void **)P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_relevantAlarmType_sourceID),
            endpoint_data);
    }
    if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_missionState_sourceID) != NULL) {
        current_alignment += RTICdrStream_getNonPrimitiveSequenceSerializedSize(
            current_alignment, P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_missionState_sourceID),
            sizeof(P_LDM_Common_T_IdentifierType),
            (RTICdrTypeGetSerializedSampleSizeFunction)P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_missionState_sourceID),
            endpoint_data);
    } else {
        current_alignment += RTICdrStream_getNonPrimitivePointerSequenceSerializedSize(
            current_alignment,  
            P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_missionState_sourceID),
            sizeof(P_LDM_Common_T_IdentifierType),
            (RTICdrTypeGetSerializedSampleSizeFunction)P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            (const void **)P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_missionState_sourceID),
            endpoint_data);
    }

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_USER_KEY;
}

RTIBool 
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Crew_Role_In_Mission_State *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Crew_Role_In_Mission_State *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_key_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Crew_Role_In_Mission_State **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_key_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Crew_Role_In_Mission_State *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipNonPrimitiveSequence(
                stream,
                &sequence_length,
                sizeof(P_LDM_Common_T_IdentifierType),
                (RTICdrStreamSkipFunction)P_LDM_Common_T_IdentifierTypePlugin_skip,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                goto fin; 
            }
        }

        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipNonPrimitiveSequence(
                stream,
                &sequence_length,
                sizeof(P_LDM_Common_T_IdentifierType),
                (RTICdrStreamSkipFunction)P_LDM_Common_T_IdentifierTypePlugin_skip,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                goto fin; 
            }
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Crew_Role_In_Mission_StateKeyHolder *dst, 
    const P_Alarms_PSM_C_Crew_Role_In_Mission_State *src)
{

    if (endpoint_data) {} /* To avoid warnings */   

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Crew_Role_In_Mission_State *dst, const
    P_Alarms_PSM_C_Crew_Role_In_Mission_StateKeyHolder *src)
{

    if (endpoint_data) {} /* To avoid warnings */   
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const P_Alarms_PSM_C_Crew_Role_In_Mission_State *instance)
{
    struct RTICdrStream * md5Stream = NULL;
    struct RTICdrStreamState cdrState;
    char * buffer = NULL;

    RTICdrStreamState_init(&cdrState);
    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_serialize_key(
        endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {

        int size;

        RTICdrStream_pushState(md5Stream, &cdrState, -1);

        size = (int)P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_serialized_sample_size(
            endpoint_data,
            RTI_FALSE,
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            0,
            instance);

        if (size <= RTICdrStream_getBufferLength(md5Stream)) {
            RTICdrStream_popState(md5Stream, &cdrState);        
            return RTI_FALSE;
        }   

        RTIOsapiHeap_allocateBuffer(&buffer,size,0);

        if (buffer == NULL) {
            RTICdrStream_popState(md5Stream, &cdrState);
            return RTI_FALSE;
        }

        RTICdrStream_set(md5Stream, buffer, size);
        RTIOsapiMemory_zero(
            RTICdrStream_getBuffer(md5Stream),
            RTICdrStream_getBufferLength(md5Stream));
        RTICdrStream_resetPosition(md5Stream);
        RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
        if (!P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) 
        {
            RTICdrStream_popState(md5Stream, &cdrState);
            RTIOsapiHeap_freeBuffer(buffer);
            return RTI_FALSE;
        }        
    }   

    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

    if (buffer != NULL) {
        RTICdrStream_popState(md5Stream, &cdrState);
        RTIOsapiHeap_freeBuffer(buffer);
    }
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;
    P_Alarms_PSM_C_Crew_Role_In_Mission_State * sample=NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }

    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    sample = (P_Alarms_PSM_C_Crew_Role_In_Mission_State *)
    PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }

    if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
        endpoint_data,
        &sample->A_sourceID,
        stream,
        RTI_FALSE, RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    } 

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    if (!P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_instance_to_keyhash(
        endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_destroy_sample;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_key_kind;

    plugin->getSerializedKeyMaxSizeFnc =   
    (PRESTypePluginGetSerializedKeyMaxSizeFunction)
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
    (PRESTypePluginSerializeKeyFunction)
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_serialize_key;
    plugin->deserializeKeyFnc =
    (PRESTypePluginDeserializeKeyFunction)
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
    (PRESTypePluginDeserializeKeySampleFunction)
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_deserialize_key_sample;

    plugin-> instanceToKeyHashFnc = 
    (PRESTypePluginInstanceToKeyHashFunction)
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
    (PRESTypePluginSerializedSampleToKeyHashFunction)
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
    (PRESTypePluginGetKeyFunction)
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_key;
    plugin->returnKeyFnc =
    (PRESTypePluginReturnKeyFunction)
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_return_key;

    plugin->instanceToKeyFnc =
    (PRESTypePluginInstanceToKeyFunction)
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_instance_to_key;
    plugin->keyToInstanceFnc =
    (PRESTypePluginKeyToInstanceFunction)
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    plugin->typeCode =  (struct RTICdrTypeCode *)P_Alarms_PSM_C_Crew_Role_In_Mission_State_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_get_serialized_sample_size;

    plugin->endpointTypeName = P_Alarms_PSM_C_Crew_Role_In_Mission_StateTYPENAME;

    return plugin;
}

void
P_Alarms_PSM_C_Crew_Role_In_Mission_StatePlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type P_Alarms_PSM_C_Alarm_Category_Specification
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

P_Alarms_PSM_C_Alarm_Category_Specification*
P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    P_Alarms_PSM_C_Alarm_Category_Specification *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Alarm_Category_Specification);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Alarm_Category_Specification_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
} 

P_Alarms_PSM_C_Alarm_Category_Specification *
P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_create_data_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Alarm_Category_Specification *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Alarm_Category_Specification);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Alarm_Category_Specification_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }
    return sample; 
}

P_Alarms_PSM_C_Alarm_Category_Specification *
P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_create_data(void)
{
    return P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_create_data_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_destroy_data_w_params(
    P_Alarms_PSM_C_Alarm_Category_Specification *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    P_Alarms_PSM_C_Alarm_Category_Specification_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_destroy_data_ex(
    P_Alarms_PSM_C_Alarm_Category_Specification *sample,RTIBool deallocate_pointers) {

    P_Alarms_PSM_C_Alarm_Category_Specification_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_destroy_data(
    P_Alarms_PSM_C_Alarm_Category_Specification *sample) {

    P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_copy_data(
    P_Alarms_PSM_C_Alarm_Category_Specification *dst,
    const P_Alarms_PSM_C_Alarm_Category_Specification *src)
{
    return P_Alarms_PSM_C_Alarm_Category_Specification_copy(dst,src);
}

void 
P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_print_data(
    const P_Alarms_PSM_C_Alarm_Category_Specification *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_sourceID, "A_sourceID", indent_level + 1);

    P_LDM_Common_T_DateTimeTypePluginSupport_print_data(
        &sample->A_timeOfDataGeneration, "A_timeOfDataGeneration", indent_level + 1);

    P_Alarms_PSM_T_AlarmCategoryTypePluginSupport_print_data(
        &sample->A_alarmCategoryName, "A_alarmCategoryName", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_alarmCategoryAbbreviation, "A_alarmCategoryAbbreviation", indent_level + 1);

    P_LDM_Common_T_BooleanPluginSupport_print_data(
        &sample->A_isAutoAcknowledged, "A_isAutoAcknowledged", indent_level + 1);

    P_LDM_Common_T_DurationTypePluginSupport_print_data(
        &sample->A_automaticAcknowledgeTimeout, "A_automaticAcknowledgeTimeout", indent_level + 1);

    P_LDM_Common_T_BooleanPluginSupport_print_data(
        &sample->A_hideOnAcknowledge, "A_hideOnAcknowledge", indent_level + 1);

    P_LDM_Common_T_BooleanPluginSupport_print_data(
        &sample->A_isRepeated, "A_isRepeated", indent_level + 1);

    P_LDM_Common_T_DurationTypePluginSupport_print_data(
        &sample->A_repeatTimeout, "A_repeatTimeout", indent_level + 1);

    if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_categorisedConditionSpecification_sourceID) != NULL) {
        RTICdrType_printArray(
            P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_categorisedConditionSpecification_sourceID), 
            P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_categorisedConditionSpecification_sourceID),
            sizeof(P_LDM_Common_T_IdentifierType),
            (RTICdrTypePrintFunction)P_LDM_Common_T_IdentifierTypePluginSupport_print_data,
            "A_categorisedConditionSpecification_sourceID", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_categorisedConditionSpecification_sourceID), 
            P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_categorisedConditionSpecification_sourceID),
            (RTICdrTypePrintFunction)P_LDM_Common_T_IdentifierTypePluginSupport_print_data,
            "A_categorisedConditionSpecification_sourceID", indent_level + 1);
    }

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_notifyingToneSpecification_sourceID, "A_notifyingToneSpecification_sourceID", indent_level + 1);

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_alarmCategory_sourceID, "A_alarmCategory_sourceID", indent_level + 1);

}
P_Alarms_PSM_C_Alarm_Category_Specification *
P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_create_key_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Alarm_Category_Specification *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, P_Alarms_PSM_C_Alarm_Category_SpecificationKeyHolder);

    P_Alarms_PSM_C_Alarm_Category_Specification_initialize_ex(key,allocate_pointers, RTI_TRUE);
    return key;
}

P_Alarms_PSM_C_Alarm_Category_Specification *
P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_create_key(void)
{
    return  P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_create_key_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_destroy_key_ex(
    P_Alarms_PSM_C_Alarm_Category_SpecificationKeyHolder *key,RTIBool deallocate_pointers)
{
    P_Alarms_PSM_C_Alarm_Category_Specification_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}

void 
P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_destroy_key(
    P_Alarms_PSM_C_Alarm_Category_SpecificationKeyHolder *key) {

    P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_destroy_key_ex(key,RTI_TRUE);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    unsigned int serializedKeyMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_destroy_data,
        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
        P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_create_key ,            
        (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
        P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    } 
    serializedKeyMaxSize =  P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

    if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
        epd,endpoint_info,serializedKeyMaxSize))  
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Category_Specification *sample,
    void *handle)
{

    P_Alarms_PSM_C_Alarm_Category_Specification_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Category_Specification *dst,
    const P_Alarms_PSM_C_Alarm_Category_Specification *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return P_Alarms_PSM_C_Alarm_Category_SpecificationPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Alarm_Category_Specification *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_DateTimeTypePlugin_serialize(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_Alarms_PSM_T_AlarmCategoryTypePlugin_serialize(
            endpoint_data,
            &sample->A_alarmCategoryName,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_alarmCategoryAbbreviation,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_BooleanPlugin_serialize(
            endpoint_data,
            &sample->A_isAutoAcknowledged,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_DurationTypePlugin_serialize(
            endpoint_data,
            &sample->A_automaticAcknowledgeTimeout,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_BooleanPlugin_serialize(
            endpoint_data,
            &sample->A_hideOnAcknowledge,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_BooleanPlugin_serialize(
            endpoint_data,
            &sample->A_isRepeated,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_DurationTypePlugin_serialize(
            endpoint_data,
            &sample->A_repeatTimeout,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_categorisedConditionSpecification_sourceID) != NULL) {
            if (!RTICdrStream_serializeNonPrimitiveSequence(
                stream,
                P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_categorisedConditionSpecification_sourceID),
                P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_categorisedConditionSpecification_sourceID),
                (100),
                sizeof(P_LDM_Common_T_IdentifierType),
                (RTICdrStreamSerializeFunction)P_LDM_Common_T_IdentifierTypePlugin_serialize,
                RTI_FALSE, encapsulation_id,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            } 
        } else {
            if (!RTICdrStream_serializeNonPrimitivePointerSequence(
                stream,
                (const void **) P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_categorisedConditionSpecification_sourceID),
                P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_categorisedConditionSpecification_sourceID),
                (100),
                (RTICdrStreamSerializeFunction)P_LDM_Common_T_IdentifierTypePlugin_serialize,
                RTI_FALSE, encapsulation_id,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            } 

        } 

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_notifyingToneSpecification_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_alarmCategory_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Category_Specification *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        P_Alarms_PSM_C_Alarm_Category_Specification_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_DateTimeTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_Alarms_PSM_T_AlarmCategoryTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_alarmCategoryName,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_alarmCategoryAbbreviation,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_BooleanPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_isAutoAcknowledged,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_DurationTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_automaticAcknowledgeTimeout,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_BooleanPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_hideOnAcknowledge,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_BooleanPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_isRepeated,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_DurationTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_repeatTimeout,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_categorisedConditionSpecification_sourceID) != NULL) {
                if (!RTICdrStream_deserializeNonPrimitiveSequence(
                    stream,
                    P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_categorisedConditionSpecification_sourceID),
                    &sequence_length,
                    P_LDM_Common_T_IdentifierTypeSeq_get_maximum(&sample->A_categorisedConditionSpecification_sourceID),
                    sizeof(P_LDM_Common_T_IdentifierType),
                    (RTICdrStreamDeserializeFunction)P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample,
                    RTI_FALSE,RTI_TRUE,
                    endpoint_data,endpoint_plugin_qos)) {
                    goto fin; 
                }
            } else {
                if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                    stream,
                    (void **) P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_categorisedConditionSpecification_sourceID),
                    &sequence_length,
                    P_LDM_Common_T_IdentifierTypeSeq_get_maximum(&sample->A_categorisedConditionSpecification_sourceID),
                    (RTICdrStreamDeserializeFunction)P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample,
                    RTI_FALSE,RTI_TRUE,
                    endpoint_data,endpoint_plugin_qos)) {
                    goto fin; 
                }
            }
            if (!P_LDM_Common_T_IdentifierTypeSeq_set_length(
                &sample->A_categorisedConditionSpecification_sourceID,sequence_length)) {
                return RTI_FALSE;
            }        

        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_notifyingToneSpecification_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_alarmCategory_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool
P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const P_Alarms_PSM_C_Alarm_Category_Specification *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 0);

    if (buffer == NULL) {
        *length = 
        P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_deserialize_from_cdr_buffer(
    P_Alarms_PSM_C_Alarm_Category_Specification *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    return P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

RTIBool 
P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Category_Specification **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;

}

RTIBool P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_Alarms_PSM_T_AlarmCategoryTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_BooleanPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_DurationTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_BooleanPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_BooleanPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_DurationTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipNonPrimitiveSequence(
                stream,
                &sequence_length,
                sizeof(P_LDM_Common_T_IdentifierType),
                (RTICdrStreamSkipFunction)P_LDM_Common_T_IdentifierTypePlugin_skip,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                goto fin; 
            }
        }
        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_Alarms_PSM_T_AlarmCategoryTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_BooleanPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_DurationTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_BooleanPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_BooleanPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_DurationTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=RTICdrType_getNonPrimitiveSequenceMaxSizeSerializedEx(
        overflow,
        current_alignment, (100),
        P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex,
        RTI_FALSE,encapsulation_id,endpoint_data);

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_Alarms_PSM_T_AlarmCategoryTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_BooleanPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_DurationTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_BooleanPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_BooleanPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_DurationTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=RTICdrType_getNonPrimitiveSequenceMaxSizeSerialized(
        current_alignment, 0,
        P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size,
        RTI_FALSE,encapsulation_id,endpoint_data);
    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const P_Alarms_PSM_C_Alarm_Category_Specification * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (sample==NULL) {
        return 0;
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_sourceID);
    current_alignment += P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_timeOfDataGeneration);
    current_alignment += P_Alarms_PSM_T_AlarmCategoryTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_alarmCategoryName);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_alarmCategoryAbbreviation);
    current_alignment += P_LDM_Common_T_BooleanPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_isAutoAcknowledged);
    current_alignment += P_LDM_Common_T_DurationTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_automaticAcknowledgeTimeout);
    current_alignment += P_LDM_Common_T_BooleanPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_hideOnAcknowledge);
    current_alignment += P_LDM_Common_T_BooleanPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_isRepeated);
    current_alignment += P_LDM_Common_T_DurationTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_repeatTimeout);
    if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_categorisedConditionSpecification_sourceID) != NULL) {
        current_alignment += RTICdrStream_getNonPrimitiveSequenceSerializedSize(
            current_alignment, P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_categorisedConditionSpecification_sourceID),
            sizeof(P_LDM_Common_T_IdentifierType),
            (RTICdrTypeGetSerializedSampleSizeFunction)P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_categorisedConditionSpecification_sourceID),
            endpoint_data);
    } else {
        current_alignment += RTICdrStream_getNonPrimitivePointerSequenceSerializedSize(
            current_alignment,  
            P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_categorisedConditionSpecification_sourceID),
            sizeof(P_LDM_Common_T_IdentifierType),
            (RTICdrTypeGetSerializedSampleSizeFunction)P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            (const void **)P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_categorisedConditionSpecification_sourceID),
            endpoint_data);
    }
    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_notifyingToneSpecification_sourceID);
    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_alarmCategory_sourceID);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_USER_KEY;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Alarm_Category_Specification *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Category_Specification *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_key_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Category_Specification **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_key_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Category_Specification *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_Alarms_PSM_T_AlarmCategoryTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_BooleanPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_DurationTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_BooleanPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_BooleanPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_DurationTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipNonPrimitiveSequence(
                stream,
                &sequence_length,
                sizeof(P_LDM_Common_T_IdentifierType),
                (RTICdrStreamSkipFunction)P_LDM_Common_T_IdentifierTypePlugin_skip,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                goto fin; 
            }
        }

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Category_SpecificationKeyHolder *dst, 
    const P_Alarms_PSM_C_Alarm_Category_Specification *src)
{

    if (endpoint_data) {} /* To avoid warnings */   

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Category_Specification *dst, const
    P_Alarms_PSM_C_Alarm_Category_SpecificationKeyHolder *src)
{

    if (endpoint_data) {} /* To avoid warnings */   
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const P_Alarms_PSM_C_Alarm_Category_Specification *instance)
{
    struct RTICdrStream * md5Stream = NULL;
    struct RTICdrStreamState cdrState;
    char * buffer = NULL;

    RTICdrStreamState_init(&cdrState);
    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_serialize_key(
        endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {

        int size;

        RTICdrStream_pushState(md5Stream, &cdrState, -1);

        size = (int)P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_serialized_sample_size(
            endpoint_data,
            RTI_FALSE,
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            0,
            instance);

        if (size <= RTICdrStream_getBufferLength(md5Stream)) {
            RTICdrStream_popState(md5Stream, &cdrState);        
            return RTI_FALSE;
        }   

        RTIOsapiHeap_allocateBuffer(&buffer,size,0);

        if (buffer == NULL) {
            RTICdrStream_popState(md5Stream, &cdrState);
            return RTI_FALSE;
        }

        RTICdrStream_set(md5Stream, buffer, size);
        RTIOsapiMemory_zero(
            RTICdrStream_getBuffer(md5Stream),
            RTICdrStream_getBufferLength(md5Stream));
        RTICdrStream_resetPosition(md5Stream);
        RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
        if (!P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) 
        {
            RTICdrStream_popState(md5Stream, &cdrState);
            RTIOsapiHeap_freeBuffer(buffer);
            return RTI_FALSE;
        }        
    }   

    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

    if (buffer != NULL) {
        RTICdrStream_popState(md5Stream, &cdrState);
        RTIOsapiHeap_freeBuffer(buffer);
    }
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;
    P_Alarms_PSM_C_Alarm_Category_Specification * sample=NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }

    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    sample = (P_Alarms_PSM_C_Alarm_Category_Specification *)
    PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }

    if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
        endpoint_data,
        &sample->A_sourceID,
        stream,
        RTI_FALSE, RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    } 

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    if (!P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_instance_to_keyhash(
        endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_destroy_sample;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_key_kind;

    plugin->getSerializedKeyMaxSizeFnc =   
    (PRESTypePluginGetSerializedKeyMaxSizeFunction)
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
    (PRESTypePluginSerializeKeyFunction)
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_serialize_key;
    plugin->deserializeKeyFnc =
    (PRESTypePluginDeserializeKeyFunction)
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
    (PRESTypePluginDeserializeKeySampleFunction)
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_deserialize_key_sample;

    plugin-> instanceToKeyHashFnc = 
    (PRESTypePluginInstanceToKeyHashFunction)
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
    (PRESTypePluginSerializedSampleToKeyHashFunction)
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
    (PRESTypePluginGetKeyFunction)
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_key;
    plugin->returnKeyFnc =
    (PRESTypePluginReturnKeyFunction)
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_return_key;

    plugin->instanceToKeyFnc =
    (PRESTypePluginInstanceToKeyFunction)
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
    (PRESTypePluginKeyToInstanceFunction)
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    plugin->typeCode =  (struct RTICdrTypeCode *)P_Alarms_PSM_C_Alarm_Category_Specification_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = P_Alarms_PSM_C_Alarm_Category_SpecificationTYPENAME;

    return plugin;
}

void
P_Alarms_PSM_C_Alarm_Category_SpecificationPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type P_Alarms_PSM_C_Mission_State_setMissionState
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

P_Alarms_PSM_C_Mission_State_setMissionState*
P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    P_Alarms_PSM_C_Mission_State_setMissionState *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Mission_State_setMissionState);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Mission_State_setMissionState_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
} 

P_Alarms_PSM_C_Mission_State_setMissionState *
P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_create_data_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Mission_State_setMissionState *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Mission_State_setMissionState);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Mission_State_setMissionState_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }
    return sample; 
}

P_Alarms_PSM_C_Mission_State_setMissionState *
P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_create_data(void)
{
    return P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_create_data_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_destroy_data_w_params(
    P_Alarms_PSM_C_Mission_State_setMissionState *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    P_Alarms_PSM_C_Mission_State_setMissionState_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_destroy_data_ex(
    P_Alarms_PSM_C_Mission_State_setMissionState *sample,RTIBool deallocate_pointers) {

    P_Alarms_PSM_C_Mission_State_setMissionState_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_destroy_data(
    P_Alarms_PSM_C_Mission_State_setMissionState *sample) {

    P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_copy_data(
    P_Alarms_PSM_C_Mission_State_setMissionState *dst,
    const P_Alarms_PSM_C_Mission_State_setMissionState *src)
{
    return P_Alarms_PSM_C_Mission_State_setMissionState_copy(dst,src);
}

void 
P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_print_data(
    const P_Alarms_PSM_C_Mission_State_setMissionState *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_recipientID, "A_recipientID", indent_level + 1);

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_sourceID, "A_sourceID", indent_level + 1);

    P_LDM_Common_T_Int64PluginSupport_print_data(
        &sample->A_referenceNum, "A_referenceNum", indent_level + 1);

    P_LDM_Common_T_DateTimeTypePluginSupport_print_data(
        &sample->A_timeOfDataGeneration, "A_timeOfDataGeneration", indent_level + 1);

    P_Alarms_PSM_T_MissionStateTypePluginSupport_print_data(
        &sample->A_missionState, "A_missionState", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_missionStateName, "A_missionStateName", indent_level + 1);

}
P_Alarms_PSM_C_Mission_State_setMissionState *
P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_create_key_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Mission_State_setMissionState *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, P_Alarms_PSM_C_Mission_State_setMissionStateKeyHolder);

    P_Alarms_PSM_C_Mission_State_setMissionState_initialize_ex(key,allocate_pointers, RTI_TRUE);
    return key;
}

P_Alarms_PSM_C_Mission_State_setMissionState *
P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_create_key(void)
{
    return  P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_create_key_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_destroy_key_ex(
    P_Alarms_PSM_C_Mission_State_setMissionStateKeyHolder *key,RTIBool deallocate_pointers)
{
    P_Alarms_PSM_C_Mission_State_setMissionState_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}

void 
P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_destroy_key(
    P_Alarms_PSM_C_Mission_State_setMissionStateKeyHolder *key) {

    P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_destroy_key_ex(key,RTI_TRUE);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    unsigned int serializedKeyMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_destroy_data,
        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
        P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_create_key ,            
        (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
        P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    } 
    serializedKeyMaxSize =  P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

    if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
        epd,endpoint_info,serializedKeyMaxSize))  
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Mission_State_setMissionState *sample,
    void *handle)
{

    P_Alarms_PSM_C_Mission_State_setMissionState_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Mission_State_setMissionState *dst,
    const P_Alarms_PSM_C_Mission_State_setMissionState *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return P_Alarms_PSM_C_Mission_State_setMissionStatePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Mission_State_setMissionState *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_Int64Plugin_serialize(
            endpoint_data,
            &sample->A_referenceNum,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_DateTimeTypePlugin_serialize(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_Alarms_PSM_T_MissionStateTypePlugin_serialize(
            endpoint_data,
            &sample->A_missionState,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_missionStateName,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Mission_State_setMissionState *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        P_Alarms_PSM_C_Mission_State_setMissionState_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_Int64Plugin_deserialize_sample(
            endpoint_data,
            &sample->A_referenceNum,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_DateTimeTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_Alarms_PSM_T_MissionStateTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_missionState,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_missionStateName,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool
P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const P_Alarms_PSM_C_Mission_State_setMissionState *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 0);

    if (buffer == NULL) {
        *length = 
        P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_deserialize_from_cdr_buffer(
    P_Alarms_PSM_C_Mission_State_setMissionState *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    return P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

RTIBool 
P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Mission_State_setMissionState **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;

}

RTIBool P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_Int64Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_Alarms_PSM_T_MissionStateTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_Int64Plugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_Alarms_PSM_T_MissionStateTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_Int64Plugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_Alarms_PSM_T_MissionStateTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const P_Alarms_PSM_C_Mission_State_setMissionState * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (sample==NULL) {
        return 0;
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_recipientID);
    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_sourceID);
    current_alignment += P_LDM_Common_T_Int64Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_referenceNum);
    current_alignment += P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_timeOfDataGeneration);
    current_alignment += P_Alarms_PSM_T_MissionStateTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_missionState);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_missionStateName);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_USER_KEY;
}

RTIBool 
P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Mission_State_setMissionState *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize_key(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Mission_State_setMissionState *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_key_sample(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_key_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Mission_State_setMissionState **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_key_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_key_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Mission_State_setMissionState *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if (!P_LDM_Common_T_Int64Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_Alarms_PSM_T_MissionStateTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Mission_State_setMissionStateKeyHolder *dst, 
    const P_Alarms_PSM_C_Mission_State_setMissionState *src)
{

    if (endpoint_data) {} /* To avoid warnings */   

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_recipientID, &src->A_recipientID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Mission_State_setMissionState *dst, const
    P_Alarms_PSM_C_Mission_State_setMissionStateKeyHolder *src)
{

    if (endpoint_data) {} /* To avoid warnings */   
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_recipientID, &src->A_recipientID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const P_Alarms_PSM_C_Mission_State_setMissionState *instance)
{
    struct RTICdrStream * md5Stream = NULL;
    struct RTICdrStreamState cdrState;
    char * buffer = NULL;

    RTICdrStreamState_init(&cdrState);
    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_serialize_key(
        endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {

        int size;

        RTICdrStream_pushState(md5Stream, &cdrState, -1);

        size = (int)P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_serialized_sample_size(
            endpoint_data,
            RTI_FALSE,
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            0,
            instance);

        if (size <= RTICdrStream_getBufferLength(md5Stream)) {
            RTICdrStream_popState(md5Stream, &cdrState);        
            return RTI_FALSE;
        }   

        RTIOsapiHeap_allocateBuffer(&buffer,size,0);

        if (buffer == NULL) {
            RTICdrStream_popState(md5Stream, &cdrState);
            return RTI_FALSE;
        }

        RTICdrStream_set(md5Stream, buffer, size);
        RTIOsapiMemory_zero(
            RTICdrStream_getBuffer(md5Stream),
            RTICdrStream_getBufferLength(md5Stream));
        RTICdrStream_resetPosition(md5Stream);
        RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
        if (!P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) 
        {
            RTICdrStream_popState(md5Stream, &cdrState);
            RTIOsapiHeap_freeBuffer(buffer);
            return RTI_FALSE;
        }        
    }   

    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

    if (buffer != NULL) {
        RTICdrStream_popState(md5Stream, &cdrState);
        RTIOsapiHeap_freeBuffer(buffer);
    }
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;
    P_Alarms_PSM_C_Mission_State_setMissionState * sample=NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }

    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    sample = (P_Alarms_PSM_C_Mission_State_setMissionState *)
    PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }

    if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
        endpoint_data,
        &sample->A_recipientID,
        stream,
        RTI_FALSE, RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
        endpoint_data,
        &sample->A_sourceID,
        stream,
        RTI_FALSE, RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    } 

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    if (!P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_instance_to_keyhash(
        endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_destroy_sample;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_key_kind;

    plugin->getSerializedKeyMaxSizeFnc =   
    (PRESTypePluginGetSerializedKeyMaxSizeFunction)
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
    (PRESTypePluginSerializeKeyFunction)
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_serialize_key;
    plugin->deserializeKeyFnc =
    (PRESTypePluginDeserializeKeyFunction)
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
    (PRESTypePluginDeserializeKeySampleFunction)
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_deserialize_key_sample;

    plugin-> instanceToKeyHashFnc = 
    (PRESTypePluginInstanceToKeyHashFunction)
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
    (PRESTypePluginSerializedSampleToKeyHashFunction)
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
    (PRESTypePluginGetKeyFunction)
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_key;
    plugin->returnKeyFnc =
    (PRESTypePluginReturnKeyFunction)
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_return_key;

    plugin->instanceToKeyFnc =
    (PRESTypePluginInstanceToKeyFunction)
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_instance_to_key;
    plugin->keyToInstanceFnc =
    (PRESTypePluginKeyToInstanceFunction)
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    plugin->typeCode =  (struct RTICdrTypeCode *)P_Alarms_PSM_C_Mission_State_setMissionState_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_get_serialized_sample_size;

    plugin->endpointTypeName = P_Alarms_PSM_C_Mission_State_setMissionStateTYPENAME;

    return plugin;
}

void
P_Alarms_PSM_C_Mission_State_setMissionStatePlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type P_Alarms_PSM_C_Mission_State
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

P_Alarms_PSM_C_Mission_State*
P_Alarms_PSM_C_Mission_StatePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    P_Alarms_PSM_C_Mission_State *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Mission_State);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Mission_State_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
} 

P_Alarms_PSM_C_Mission_State *
P_Alarms_PSM_C_Mission_StatePluginSupport_create_data_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Mission_State *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Mission_State);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Mission_State_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }
    return sample; 
}

P_Alarms_PSM_C_Mission_State *
P_Alarms_PSM_C_Mission_StatePluginSupport_create_data(void)
{
    return P_Alarms_PSM_C_Mission_StatePluginSupport_create_data_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Mission_StatePluginSupport_destroy_data_w_params(
    P_Alarms_PSM_C_Mission_State *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    P_Alarms_PSM_C_Mission_State_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Mission_StatePluginSupport_destroy_data_ex(
    P_Alarms_PSM_C_Mission_State *sample,RTIBool deallocate_pointers) {

    P_Alarms_PSM_C_Mission_State_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Mission_StatePluginSupport_destroy_data(
    P_Alarms_PSM_C_Mission_State *sample) {

    P_Alarms_PSM_C_Mission_StatePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
P_Alarms_PSM_C_Mission_StatePluginSupport_copy_data(
    P_Alarms_PSM_C_Mission_State *dst,
    const P_Alarms_PSM_C_Mission_State *src)
{
    return P_Alarms_PSM_C_Mission_State_copy(dst,src);
}

void 
P_Alarms_PSM_C_Mission_StatePluginSupport_print_data(
    const P_Alarms_PSM_C_Mission_State *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_sourceID, "A_sourceID", indent_level + 1);

    P_LDM_Common_T_DateTimeTypePluginSupport_print_data(
        &sample->A_timeOfDataGeneration, "A_timeOfDataGeneration", indent_level + 1);

    P_Alarms_PSM_T_MissionStateTypePluginSupport_print_data(
        &sample->A_missionState, "A_missionState", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_missionStateName, "A_missionStateName", indent_level + 1);

    if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_crewRoleInMissionState_sourceID) != NULL) {
        RTICdrType_printArray(
            P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_crewRoleInMissionState_sourceID), 
            P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_crewRoleInMissionState_sourceID),
            sizeof(P_LDM_Common_T_IdentifierType),
            (RTICdrTypePrintFunction)P_LDM_Common_T_IdentifierTypePluginSupport_print_data,
            "A_crewRoleInMissionState_sourceID", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_crewRoleInMissionState_sourceID), 
            P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_crewRoleInMissionState_sourceID),
            (RTICdrTypePrintFunction)P_LDM_Common_T_IdentifierTypePluginSupport_print_data,
            "A_crewRoleInMissionState_sourceID", indent_level + 1);
    }

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_ownPlatform_sourceID, "A_ownPlatform_sourceID", indent_level + 1);

}
P_Alarms_PSM_C_Mission_State *
P_Alarms_PSM_C_Mission_StatePluginSupport_create_key_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Mission_State *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, P_Alarms_PSM_C_Mission_StateKeyHolder);

    P_Alarms_PSM_C_Mission_State_initialize_ex(key,allocate_pointers, RTI_TRUE);
    return key;
}

P_Alarms_PSM_C_Mission_State *
P_Alarms_PSM_C_Mission_StatePluginSupport_create_key(void)
{
    return  P_Alarms_PSM_C_Mission_StatePluginSupport_create_key_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Mission_StatePluginSupport_destroy_key_ex(
    P_Alarms_PSM_C_Mission_StateKeyHolder *key,RTIBool deallocate_pointers)
{
    P_Alarms_PSM_C_Mission_State_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}

void 
P_Alarms_PSM_C_Mission_StatePluginSupport_destroy_key(
    P_Alarms_PSM_C_Mission_StateKeyHolder *key) {

    P_Alarms_PSM_C_Mission_StatePluginSupport_destroy_key_ex(key,RTI_TRUE);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
P_Alarms_PSM_C_Mission_StatePlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
P_Alarms_PSM_C_Mission_StatePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
P_Alarms_PSM_C_Mission_StatePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    unsigned int serializedKeyMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        P_Alarms_PSM_C_Mission_StatePluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        P_Alarms_PSM_C_Mission_StatePluginSupport_destroy_data,
        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
        P_Alarms_PSM_C_Mission_StatePluginSupport_create_key ,            
        (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
        P_Alarms_PSM_C_Mission_StatePluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    } 
    serializedKeyMaxSize =  P_Alarms_PSM_C_Mission_StatePlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

    if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
        epd,endpoint_info,serializedKeyMaxSize))  
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = P_Alarms_PSM_C_Mission_StatePlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            P_Alarms_PSM_C_Mission_StatePlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            P_Alarms_PSM_C_Mission_StatePlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
P_Alarms_PSM_C_Mission_StatePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
P_Alarms_PSM_C_Mission_StatePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Mission_State *sample,
    void *handle)
{

    P_Alarms_PSM_C_Mission_State_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
P_Alarms_PSM_C_Mission_StatePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Mission_State *dst,
    const P_Alarms_PSM_C_Mission_State *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return P_Alarms_PSM_C_Mission_StatePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
P_Alarms_PSM_C_Mission_StatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
P_Alarms_PSM_C_Mission_StatePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Mission_State *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_DateTimeTypePlugin_serialize(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_Alarms_PSM_T_MissionStateTypePlugin_serialize(
            endpoint_data,
            &sample->A_missionState,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_missionStateName,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_crewRoleInMissionState_sourceID) != NULL) {
            if (!RTICdrStream_serializeNonPrimitiveSequence(
                stream,
                P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_crewRoleInMissionState_sourceID),
                P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_crewRoleInMissionState_sourceID),
                (100),
                sizeof(P_LDM_Common_T_IdentifierType),
                (RTICdrStreamSerializeFunction)P_LDM_Common_T_IdentifierTypePlugin_serialize,
                RTI_FALSE, encapsulation_id,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            } 
        } else {
            if (!RTICdrStream_serializeNonPrimitivePointerSequence(
                stream,
                (const void **) P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_crewRoleInMissionState_sourceID),
                P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_crewRoleInMissionState_sourceID),
                (100),
                (RTICdrStreamSerializeFunction)P_LDM_Common_T_IdentifierTypePlugin_serialize,
                RTI_FALSE, encapsulation_id,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            } 

        } 

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_ownPlatform_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
P_Alarms_PSM_C_Mission_StatePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Mission_State *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        P_Alarms_PSM_C_Mission_State_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_DateTimeTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_Alarms_PSM_T_MissionStateTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_missionState,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_missionStateName,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_crewRoleInMissionState_sourceID) != NULL) {
                if (!RTICdrStream_deserializeNonPrimitiveSequence(
                    stream,
                    P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_crewRoleInMissionState_sourceID),
                    &sequence_length,
                    P_LDM_Common_T_IdentifierTypeSeq_get_maximum(&sample->A_crewRoleInMissionState_sourceID),
                    sizeof(P_LDM_Common_T_IdentifierType),
                    (RTICdrStreamDeserializeFunction)P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample,
                    RTI_FALSE,RTI_TRUE,
                    endpoint_data,endpoint_plugin_qos)) {
                    goto fin; 
                }
            } else {
                if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                    stream,
                    (void **) P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_crewRoleInMissionState_sourceID),
                    &sequence_length,
                    P_LDM_Common_T_IdentifierTypeSeq_get_maximum(&sample->A_crewRoleInMissionState_sourceID),
                    (RTICdrStreamDeserializeFunction)P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample,
                    RTI_FALSE,RTI_TRUE,
                    endpoint_data,endpoint_plugin_qos)) {
                    goto fin; 
                }
            }
            if (!P_LDM_Common_T_IdentifierTypeSeq_set_length(
                &sample->A_crewRoleInMissionState_sourceID,sequence_length)) {
                return RTI_FALSE;
            }        

        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_ownPlatform_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool
P_Alarms_PSM_C_Mission_StatePlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const P_Alarms_PSM_C_Mission_State *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    P_Alarms_PSM_C_Mission_StatePlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 0);

    if (buffer == NULL) {
        *length = 
        P_Alarms_PSM_C_Mission_StatePlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = P_Alarms_PSM_C_Mission_StatePlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
P_Alarms_PSM_C_Mission_StatePlugin_deserialize_from_cdr_buffer(
    P_Alarms_PSM_C_Mission_State *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    return P_Alarms_PSM_C_Mission_StatePlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

RTIBool 
P_Alarms_PSM_C_Mission_StatePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Mission_State **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Mission_StatePlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;

}

RTIBool P_Alarms_PSM_C_Mission_StatePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_Alarms_PSM_T_MissionStateTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipNonPrimitiveSequence(
                stream,
                &sequence_length,
                sizeof(P_LDM_Common_T_IdentifierType),
                (RTICdrStreamSkipFunction)P_LDM_Common_T_IdentifierTypePlugin_skip,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                goto fin; 
            }
        }
        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
P_Alarms_PSM_C_Mission_StatePlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_Alarms_PSM_T_MissionStateTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=RTICdrType_getNonPrimitiveSequenceMaxSizeSerializedEx(
        overflow,
        current_alignment, (100),
        P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex,
        RTI_FALSE,encapsulation_id,endpoint_data);

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
P_Alarms_PSM_C_Mission_StatePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Mission_StatePlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
P_Alarms_PSM_C_Mission_StatePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_Alarms_PSM_T_MissionStateTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=RTICdrType_getNonPrimitiveSequenceMaxSizeSerialized(
        current_alignment, 0,
        P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size,
        RTI_FALSE,encapsulation_id,endpoint_data);
    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
P_Alarms_PSM_C_Mission_StatePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const P_Alarms_PSM_C_Mission_State * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (sample==NULL) {
        return 0;
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_sourceID);
    current_alignment += P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_timeOfDataGeneration);
    current_alignment += P_Alarms_PSM_T_MissionStateTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_missionState);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_missionStateName);
    if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_crewRoleInMissionState_sourceID) != NULL) {
        current_alignment += RTICdrStream_getNonPrimitiveSequenceSerializedSize(
            current_alignment, P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_crewRoleInMissionState_sourceID),
            sizeof(P_LDM_Common_T_IdentifierType),
            (RTICdrTypeGetSerializedSampleSizeFunction)P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_crewRoleInMissionState_sourceID),
            endpoint_data);
    } else {
        current_alignment += RTICdrStream_getNonPrimitivePointerSequenceSerializedSize(
            current_alignment,  
            P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_crewRoleInMissionState_sourceID),
            sizeof(P_LDM_Common_T_IdentifierType),
            (RTICdrTypeGetSerializedSampleSizeFunction)P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            (const void **)P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_crewRoleInMissionState_sourceID),
            endpoint_data);
    }
    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_ownPlatform_sourceID);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
P_Alarms_PSM_C_Mission_StatePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_USER_KEY;
}

RTIBool 
P_Alarms_PSM_C_Mission_StatePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Mission_State *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Mission_StatePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Mission_State *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_key_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Mission_StatePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Mission_State **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Mission_StatePlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
P_Alarms_PSM_C_Mission_StatePlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_key_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
P_Alarms_PSM_C_Mission_StatePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Mission_StatePlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
P_Alarms_PSM_C_Mission_StatePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Mission_State *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_Alarms_PSM_T_MissionStateTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipNonPrimitiveSequence(
                stream,
                &sequence_length,
                sizeof(P_LDM_Common_T_IdentifierType),
                (RTICdrStreamSkipFunction)P_LDM_Common_T_IdentifierTypePlugin_skip,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                goto fin; 
            }
        }

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Mission_StatePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Mission_StateKeyHolder *dst, 
    const P_Alarms_PSM_C_Mission_State *src)
{

    if (endpoint_data) {} /* To avoid warnings */   

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Mission_StatePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Mission_State *dst, const
    P_Alarms_PSM_C_Mission_StateKeyHolder *src)
{

    if (endpoint_data) {} /* To avoid warnings */   
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Mission_StatePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const P_Alarms_PSM_C_Mission_State *instance)
{
    struct RTICdrStream * md5Stream = NULL;
    struct RTICdrStreamState cdrState;
    char * buffer = NULL;

    RTICdrStreamState_init(&cdrState);
    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!P_Alarms_PSM_C_Mission_StatePlugin_serialize_key(
        endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {

        int size;

        RTICdrStream_pushState(md5Stream, &cdrState, -1);

        size = (int)P_Alarms_PSM_C_Mission_StatePlugin_get_serialized_sample_size(
            endpoint_data,
            RTI_FALSE,
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            0,
            instance);

        if (size <= RTICdrStream_getBufferLength(md5Stream)) {
            RTICdrStream_popState(md5Stream, &cdrState);        
            return RTI_FALSE;
        }   

        RTIOsapiHeap_allocateBuffer(&buffer,size,0);

        if (buffer == NULL) {
            RTICdrStream_popState(md5Stream, &cdrState);
            return RTI_FALSE;
        }

        RTICdrStream_set(md5Stream, buffer, size);
        RTIOsapiMemory_zero(
            RTICdrStream_getBuffer(md5Stream),
            RTICdrStream_getBufferLength(md5Stream));
        RTICdrStream_resetPosition(md5Stream);
        RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
        if (!P_Alarms_PSM_C_Mission_StatePlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) 
        {
            RTICdrStream_popState(md5Stream, &cdrState);
            RTIOsapiHeap_freeBuffer(buffer);
            return RTI_FALSE;
        }        
    }   

    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

    if (buffer != NULL) {
        RTICdrStream_popState(md5Stream, &cdrState);
        RTIOsapiHeap_freeBuffer(buffer);
    }
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Mission_StatePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;
    P_Alarms_PSM_C_Mission_State * sample=NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }

    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    sample = (P_Alarms_PSM_C_Mission_State *)
    PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }

    if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
        endpoint_data,
        &sample->A_sourceID,
        stream,
        RTI_FALSE, RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    } 

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    if (!P_Alarms_PSM_C_Mission_StatePlugin_instance_to_keyhash(
        endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *P_Alarms_PSM_C_Mission_StatePlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    P_Alarms_PSM_C_Mission_StatePlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    P_Alarms_PSM_C_Mission_StatePlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    P_Alarms_PSM_C_Mission_StatePlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    P_Alarms_PSM_C_Mission_StatePlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    P_Alarms_PSM_C_Mission_StatePlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    P_Alarms_PSM_C_Mission_StatePlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    P_Alarms_PSM_C_Mission_StatePlugin_destroy_sample;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    P_Alarms_PSM_C_Mission_StatePlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    P_Alarms_PSM_C_Mission_StatePlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    P_Alarms_PSM_C_Mission_StatePlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    P_Alarms_PSM_C_Mission_StatePlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    P_Alarms_PSM_C_Mission_StatePlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    P_Alarms_PSM_C_Mission_StatePlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    P_Alarms_PSM_C_Mission_StatePlugin_get_key_kind;

    plugin->getSerializedKeyMaxSizeFnc =   
    (PRESTypePluginGetSerializedKeyMaxSizeFunction)
    P_Alarms_PSM_C_Mission_StatePlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
    (PRESTypePluginSerializeKeyFunction)
    P_Alarms_PSM_C_Mission_StatePlugin_serialize_key;
    plugin->deserializeKeyFnc =
    (PRESTypePluginDeserializeKeyFunction)
    P_Alarms_PSM_C_Mission_StatePlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
    (PRESTypePluginDeserializeKeySampleFunction)
    P_Alarms_PSM_C_Mission_StatePlugin_deserialize_key_sample;

    plugin-> instanceToKeyHashFnc = 
    (PRESTypePluginInstanceToKeyHashFunction)
    P_Alarms_PSM_C_Mission_StatePlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
    (PRESTypePluginSerializedSampleToKeyHashFunction)
    P_Alarms_PSM_C_Mission_StatePlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
    (PRESTypePluginGetKeyFunction)
    P_Alarms_PSM_C_Mission_StatePlugin_get_key;
    plugin->returnKeyFnc =
    (PRESTypePluginReturnKeyFunction)
    P_Alarms_PSM_C_Mission_StatePlugin_return_key;

    plugin->instanceToKeyFnc =
    (PRESTypePluginInstanceToKeyFunction)
    P_Alarms_PSM_C_Mission_StatePlugin_instance_to_key;
    plugin->keyToInstanceFnc =
    (PRESTypePluginKeyToInstanceFunction)
    P_Alarms_PSM_C_Mission_StatePlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    plugin->typeCode =  (struct RTICdrTypeCode *)P_Alarms_PSM_C_Mission_State_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    P_Alarms_PSM_C_Mission_StatePlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    P_Alarms_PSM_C_Mission_StatePlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    P_Alarms_PSM_C_Mission_StatePlugin_get_serialized_sample_size;

    plugin->endpointTypeName = P_Alarms_PSM_C_Mission_StateTYPENAME;

    return plugin;
}

void
P_Alarms_PSM_C_Mission_StatePlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm*
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
} 

P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_create_data_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }
    return sample; 
}

P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_create_data(void)
{
    return P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_create_data_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_destroy_data_w_params(
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_destroy_data_ex(
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *sample,RTIBool deallocate_pointers) {

    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_destroy_data(
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *sample) {

    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_copy_data(
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *dst,
    const P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *src)
{
    return P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_copy(dst,src);
}

void 
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_print_data(
    const P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_recipientID, "A_recipientID", indent_level + 1);

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_sourceID, "A_sourceID", indent_level + 1);

    P_LDM_Common_T_Int64PluginSupport_print_data(
        &sample->A_referenceNum, "A_referenceNum", indent_level + 1);

    P_LDM_Common_T_DateTimeTypePluginSupport_print_data(
        &sample->A_timeOfDataGeneration, "A_timeOfDataGeneration", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_subsystemName, "A_subsystemName", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_componentName, "A_componentName", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_measure, "A_measure", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_nature, "A_nature", indent_level + 1);

}
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_create_key_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmKeyHolder);

    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_initialize_ex(key,allocate_pointers, RTI_TRUE);
    return key;
}

P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_create_key(void)
{
    return  P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_create_key_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_destroy_key_ex(
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmKeyHolder *key,RTIBool deallocate_pointers)
{
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}

void 
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_destroy_key(
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmKeyHolder *key) {

    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_destroy_key_ex(key,RTI_TRUE);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    unsigned int serializedKeyMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_destroy_data,
        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
        P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_create_key ,            
        (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
        P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    } 
    serializedKeyMaxSize =  P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

    if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
        epd,endpoint_info,serializedKeyMaxSize))  
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *sample,
    void *handle)
{

    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *dst,
    const P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_Int64Plugin_serialize(
            endpoint_data,
            &sample->A_referenceNum,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_DateTimeTypePlugin_serialize(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_subsystemName,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_componentName,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_measure,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_nature,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_Int64Plugin_deserialize_sample(
            endpoint_data,
            &sample->A_referenceNum,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_DateTimeTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_subsystemName,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_componentName,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_measure,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_nature,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 0);

    if (buffer == NULL) {
        *length = 
        P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_deserialize_from_cdr_buffer(
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    return P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;

}

RTIBool P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_Int64Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_Int64Plugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_Int64Plugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (sample==NULL) {
        return 0;
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_recipientID);
    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_sourceID);
    current_alignment += P_LDM_Common_T_Int64Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_referenceNum);
    current_alignment += P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_timeOfDataGeneration);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_subsystemName);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_componentName);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_measure);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_nature);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_USER_KEY;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize_key(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_key_sample(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_key_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_key_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_key_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if (!P_LDM_Common_T_Int64Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmKeyHolder *dst, 
    const P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *src)
{

    if (endpoint_data) {} /* To avoid warnings */   

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_recipientID, &src->A_recipientID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *dst, const
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmKeyHolder *src)
{

    if (endpoint_data) {} /* To avoid warnings */   
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_recipientID, &src->A_recipientID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *instance)
{
    struct RTICdrStream * md5Stream = NULL;
    struct RTICdrStreamState cdrState;
    char * buffer = NULL;

    RTICdrStreamState_init(&cdrState);
    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_serialize_key(
        endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {

        int size;

        RTICdrStream_pushState(md5Stream, &cdrState, -1);

        size = (int)P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_serialized_sample_size(
            endpoint_data,
            RTI_FALSE,
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            0,
            instance);

        if (size <= RTICdrStream_getBufferLength(md5Stream)) {
            RTICdrStream_popState(md5Stream, &cdrState);        
            return RTI_FALSE;
        }   

        RTIOsapiHeap_allocateBuffer(&buffer,size,0);

        if (buffer == NULL) {
            RTICdrStream_popState(md5Stream, &cdrState);
            return RTI_FALSE;
        }

        RTICdrStream_set(md5Stream, buffer, size);
        RTIOsapiMemory_zero(
            RTICdrStream_getBuffer(md5Stream),
            RTICdrStream_getBufferLength(md5Stream));
        RTICdrStream_resetPosition(md5Stream);
        RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
        if (!P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) 
        {
            RTICdrStream_popState(md5Stream, &cdrState);
            RTIOsapiHeap_freeBuffer(buffer);
            return RTI_FALSE;
        }        
    }   

    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

    if (buffer != NULL) {
        RTICdrStream_popState(md5Stream, &cdrState);
        RTIOsapiHeap_freeBuffer(buffer);
    }
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm * sample=NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }

    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    sample = (P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm *)
    PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }

    if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
        endpoint_data,
        &sample->A_recipientID,
        stream,
        RTI_FALSE, RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
        endpoint_data,
        &sample->A_sourceID,
        stream,
        RTI_FALSE, RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    } 

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    if (!P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_instance_to_keyhash(
        endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_destroy_sample;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_key_kind;

    plugin->getSerializedKeyMaxSizeFnc =   
    (PRESTypePluginGetSerializedKeyMaxSizeFunction)
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
    (PRESTypePluginSerializeKeyFunction)
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_serialize_key;
    plugin->deserializeKeyFnc =
    (PRESTypePluginDeserializeKeyFunction)
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
    (PRESTypePluginDeserializeKeySampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_deserialize_key_sample;

    plugin-> instanceToKeyHashFnc = 
    (PRESTypePluginInstanceToKeyHashFunction)
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
    (PRESTypePluginSerializedSampleToKeyHashFunction)
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
    (PRESTypePluginGetKeyFunction)
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_key;
    plugin->returnKeyFnc =
    (PRESTypePluginReturnKeyFunction)
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_return_key;

    plugin->instanceToKeyFnc =
    (PRESTypePluginInstanceToKeyFunction)
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
    (PRESTypePluginKeyToInstanceFunction)
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    plugin->typeCode =  (struct RTICdrTypeCode *)P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarm_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmTYPENAME;

    return plugin;
}

void
P_Alarms_PSM_C_Actual_Alarm_acknowledgeAlarmPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type P_Alarms_PSM_C_Actual_Alarm
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

P_Alarms_PSM_C_Actual_Alarm*
P_Alarms_PSM_C_Actual_AlarmPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    P_Alarms_PSM_C_Actual_Alarm *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Actual_Alarm);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Actual_Alarm_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
} 

P_Alarms_PSM_C_Actual_Alarm *
P_Alarms_PSM_C_Actual_AlarmPluginSupport_create_data_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Actual_Alarm *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Actual_Alarm);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Actual_Alarm_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }
    return sample; 
}

P_Alarms_PSM_C_Actual_Alarm *
P_Alarms_PSM_C_Actual_AlarmPluginSupport_create_data(void)
{
    return P_Alarms_PSM_C_Actual_AlarmPluginSupport_create_data_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Actual_AlarmPluginSupport_destroy_data_w_params(
    P_Alarms_PSM_C_Actual_Alarm *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    P_Alarms_PSM_C_Actual_Alarm_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Actual_AlarmPluginSupport_destroy_data_ex(
    P_Alarms_PSM_C_Actual_Alarm *sample,RTIBool deallocate_pointers) {

    P_Alarms_PSM_C_Actual_Alarm_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Actual_AlarmPluginSupport_destroy_data(
    P_Alarms_PSM_C_Actual_Alarm *sample) {

    P_Alarms_PSM_C_Actual_AlarmPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
P_Alarms_PSM_C_Actual_AlarmPluginSupport_copy_data(
    P_Alarms_PSM_C_Actual_Alarm *dst,
    const P_Alarms_PSM_C_Actual_Alarm *src)
{
    return P_Alarms_PSM_C_Actual_Alarm_copy(dst,src);
}

void 
P_Alarms_PSM_C_Actual_AlarmPluginSupport_print_data(
    const P_Alarms_PSM_C_Actual_Alarm *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_sourceID, "A_sourceID", indent_level + 1);

    P_LDM_Common_T_DateTimeTypePluginSupport_print_data(
        &sample->A_timeOfDataGeneration, "A_timeOfDataGeneration", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_componentName, "A_componentName", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_nature, "A_nature", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_subsystemName, "A_subsystemName", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_measure, "A_measure", indent_level + 1);

    P_LDM_Common_T_DateTimeTypePluginSupport_print_data(
        &sample->A_dateTimeRaised, "A_dateTimeRaised", indent_level + 1);

    P_Alarms_PSM_T_Actual_Alarm_StateTypePluginSupport_print_data(
        &sample->A_alarmState, "A_alarmState", indent_level + 1);

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_raisingCondition_sourceID, "A_raisingCondition_sourceID", indent_level + 1);

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_alarmCategory_sourceID, "A_alarmCategory_sourceID", indent_level + 1);

}
P_Alarms_PSM_C_Actual_Alarm *
P_Alarms_PSM_C_Actual_AlarmPluginSupport_create_key_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Actual_Alarm *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, P_Alarms_PSM_C_Actual_AlarmKeyHolder);

    P_Alarms_PSM_C_Actual_Alarm_initialize_ex(key,allocate_pointers, RTI_TRUE);
    return key;
}

P_Alarms_PSM_C_Actual_Alarm *
P_Alarms_PSM_C_Actual_AlarmPluginSupport_create_key(void)
{
    return  P_Alarms_PSM_C_Actual_AlarmPluginSupport_create_key_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Actual_AlarmPluginSupport_destroy_key_ex(
    P_Alarms_PSM_C_Actual_AlarmKeyHolder *key,RTIBool deallocate_pointers)
{
    P_Alarms_PSM_C_Actual_Alarm_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}

void 
P_Alarms_PSM_C_Actual_AlarmPluginSupport_destroy_key(
    P_Alarms_PSM_C_Actual_AlarmKeyHolder *key) {

    P_Alarms_PSM_C_Actual_AlarmPluginSupport_destroy_key_ex(key,RTI_TRUE);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
P_Alarms_PSM_C_Actual_AlarmPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
P_Alarms_PSM_C_Actual_AlarmPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
P_Alarms_PSM_C_Actual_AlarmPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    unsigned int serializedKeyMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        P_Alarms_PSM_C_Actual_AlarmPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        P_Alarms_PSM_C_Actual_AlarmPluginSupport_destroy_data,
        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
        P_Alarms_PSM_C_Actual_AlarmPluginSupport_create_key ,            
        (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
        P_Alarms_PSM_C_Actual_AlarmPluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    } 
    serializedKeyMaxSize =  P_Alarms_PSM_C_Actual_AlarmPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

    if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
        epd,endpoint_info,serializedKeyMaxSize))  
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = P_Alarms_PSM_C_Actual_AlarmPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            P_Alarms_PSM_C_Actual_AlarmPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            P_Alarms_PSM_C_Actual_AlarmPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
P_Alarms_PSM_C_Actual_AlarmPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
P_Alarms_PSM_C_Actual_AlarmPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm *sample,
    void *handle)
{

    P_Alarms_PSM_C_Actual_Alarm_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
P_Alarms_PSM_C_Actual_AlarmPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm *dst,
    const P_Alarms_PSM_C_Actual_Alarm *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return P_Alarms_PSM_C_Actual_AlarmPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
P_Alarms_PSM_C_Actual_AlarmPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
P_Alarms_PSM_C_Actual_AlarmPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Actual_Alarm *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_DateTimeTypePlugin_serialize(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_componentName,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_nature,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_subsystemName,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_measure,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_DateTimeTypePlugin_serialize(
            endpoint_data,
            &sample->A_dateTimeRaised,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_serialize(
            endpoint_data,
            &sample->A_alarmState,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_raisingCondition_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_alarmCategory_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
P_Alarms_PSM_C_Actual_AlarmPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        P_Alarms_PSM_C_Actual_Alarm_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_DateTimeTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_componentName,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_nature,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_subsystemName,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_measure,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_DateTimeTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_dateTimeRaised,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_alarmState,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_raisingCondition_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_alarmCategory_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool
P_Alarms_PSM_C_Actual_AlarmPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const P_Alarms_PSM_C_Actual_Alarm *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    P_Alarms_PSM_C_Actual_AlarmPlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 0);

    if (buffer == NULL) {
        *length = 
        P_Alarms_PSM_C_Actual_AlarmPlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = P_Alarms_PSM_C_Actual_AlarmPlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
P_Alarms_PSM_C_Actual_AlarmPlugin_deserialize_from_cdr_buffer(
    P_Alarms_PSM_C_Actual_Alarm *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    return P_Alarms_PSM_C_Actual_AlarmPlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

RTIBool 
P_Alarms_PSM_C_Actual_AlarmPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Actual_AlarmPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;

}

RTIBool P_Alarms_PSM_C_Actual_AlarmPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
P_Alarms_PSM_C_Actual_AlarmPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
P_Alarms_PSM_C_Actual_AlarmPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Actual_AlarmPlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
P_Alarms_PSM_C_Actual_AlarmPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
P_Alarms_PSM_C_Actual_AlarmPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const P_Alarms_PSM_C_Actual_Alarm * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (sample==NULL) {
        return 0;
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_sourceID);
    current_alignment += P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_timeOfDataGeneration);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_componentName);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_nature);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_subsystemName);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_measure);
    current_alignment += P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_dateTimeRaised);
    current_alignment += P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_alarmState);
    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_raisingCondition_sourceID);
    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_alarmCategory_sourceID);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
P_Alarms_PSM_C_Actual_AlarmPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_USER_KEY;
}

RTIBool 
P_Alarms_PSM_C_Actual_AlarmPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Actual_Alarm *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Actual_AlarmPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_key_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Actual_AlarmPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Actual_AlarmPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
P_Alarms_PSM_C_Actual_AlarmPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_key_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
P_Alarms_PSM_C_Actual_AlarmPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Actual_AlarmPlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
P_Alarms_PSM_C_Actual_AlarmPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_Alarms_PSM_T_Actual_Alarm_StateTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Actual_AlarmPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_AlarmKeyHolder *dst, 
    const P_Alarms_PSM_C_Actual_Alarm *src)
{

    if (endpoint_data) {} /* To avoid warnings */   

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Actual_AlarmPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm *dst, const
    P_Alarms_PSM_C_Actual_AlarmKeyHolder *src)
{

    if (endpoint_data) {} /* To avoid warnings */   
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Actual_AlarmPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const P_Alarms_PSM_C_Actual_Alarm *instance)
{
    struct RTICdrStream * md5Stream = NULL;
    struct RTICdrStreamState cdrState;
    char * buffer = NULL;

    RTICdrStreamState_init(&cdrState);
    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!P_Alarms_PSM_C_Actual_AlarmPlugin_serialize_key(
        endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {

        int size;

        RTICdrStream_pushState(md5Stream, &cdrState, -1);

        size = (int)P_Alarms_PSM_C_Actual_AlarmPlugin_get_serialized_sample_size(
            endpoint_data,
            RTI_FALSE,
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            0,
            instance);

        if (size <= RTICdrStream_getBufferLength(md5Stream)) {
            RTICdrStream_popState(md5Stream, &cdrState);        
            return RTI_FALSE;
        }   

        RTIOsapiHeap_allocateBuffer(&buffer,size,0);

        if (buffer == NULL) {
            RTICdrStream_popState(md5Stream, &cdrState);
            return RTI_FALSE;
        }

        RTICdrStream_set(md5Stream, buffer, size);
        RTIOsapiMemory_zero(
            RTICdrStream_getBuffer(md5Stream),
            RTICdrStream_getBufferLength(md5Stream));
        RTICdrStream_resetPosition(md5Stream);
        RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
        if (!P_Alarms_PSM_C_Actual_AlarmPlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) 
        {
            RTICdrStream_popState(md5Stream, &cdrState);
            RTIOsapiHeap_freeBuffer(buffer);
            return RTI_FALSE;
        }        
    }   

    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

    if (buffer != NULL) {
        RTICdrStream_popState(md5Stream, &cdrState);
        RTIOsapiHeap_freeBuffer(buffer);
    }
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Actual_AlarmPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;
    P_Alarms_PSM_C_Actual_Alarm * sample=NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }

    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    sample = (P_Alarms_PSM_C_Actual_Alarm *)
    PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }

    if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
        endpoint_data,
        &sample->A_sourceID,
        stream,
        RTI_FALSE, RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    } 

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    if (!P_Alarms_PSM_C_Actual_AlarmPlugin_instance_to_keyhash(
        endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *P_Alarms_PSM_C_Actual_AlarmPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    P_Alarms_PSM_C_Actual_AlarmPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    P_Alarms_PSM_C_Actual_AlarmPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    P_Alarms_PSM_C_Actual_AlarmPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    P_Alarms_PSM_C_Actual_AlarmPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    P_Alarms_PSM_C_Actual_AlarmPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    P_Alarms_PSM_C_Actual_AlarmPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    P_Alarms_PSM_C_Actual_AlarmPlugin_destroy_sample;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    P_Alarms_PSM_C_Actual_AlarmPlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    P_Alarms_PSM_C_Actual_AlarmPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    P_Alarms_PSM_C_Actual_AlarmPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    P_Alarms_PSM_C_Actual_AlarmPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    P_Alarms_PSM_C_Actual_AlarmPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    P_Alarms_PSM_C_Actual_AlarmPlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    P_Alarms_PSM_C_Actual_AlarmPlugin_get_key_kind;

    plugin->getSerializedKeyMaxSizeFnc =   
    (PRESTypePluginGetSerializedKeyMaxSizeFunction)
    P_Alarms_PSM_C_Actual_AlarmPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
    (PRESTypePluginSerializeKeyFunction)
    P_Alarms_PSM_C_Actual_AlarmPlugin_serialize_key;
    plugin->deserializeKeyFnc =
    (PRESTypePluginDeserializeKeyFunction)
    P_Alarms_PSM_C_Actual_AlarmPlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
    (PRESTypePluginDeserializeKeySampleFunction)
    P_Alarms_PSM_C_Actual_AlarmPlugin_deserialize_key_sample;

    plugin-> instanceToKeyHashFnc = 
    (PRESTypePluginInstanceToKeyHashFunction)
    P_Alarms_PSM_C_Actual_AlarmPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
    (PRESTypePluginSerializedSampleToKeyHashFunction)
    P_Alarms_PSM_C_Actual_AlarmPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
    (PRESTypePluginGetKeyFunction)
    P_Alarms_PSM_C_Actual_AlarmPlugin_get_key;
    plugin->returnKeyFnc =
    (PRESTypePluginReturnKeyFunction)
    P_Alarms_PSM_C_Actual_AlarmPlugin_return_key;

    plugin->instanceToKeyFnc =
    (PRESTypePluginInstanceToKeyFunction)
    P_Alarms_PSM_C_Actual_AlarmPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
    (PRESTypePluginKeyToInstanceFunction)
    P_Alarms_PSM_C_Actual_AlarmPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    plugin->typeCode =  (struct RTICdrTypeCode *)P_Alarms_PSM_C_Actual_Alarm_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    P_Alarms_PSM_C_Actual_AlarmPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    P_Alarms_PSM_C_Actual_AlarmPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    P_Alarms_PSM_C_Actual_AlarmPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = P_Alarms_PSM_C_Actual_AlarmTYPENAME;

    return plugin;
}

void
P_Alarms_PSM_C_Actual_AlarmPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition*
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
} 

P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_create_data_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }
    return sample; 
}

P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_create_data(void)
{
    return P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_create_data_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_destroy_data_w_params(
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_destroy_data_ex(
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *sample,RTIBool deallocate_pointers) {

    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_destroy_data(
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *sample) {

    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_copy_data(
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *dst,
    const P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *src)
{
    return P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_copy(dst,src);
}

void 
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_print_data(
    const P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_recipientID, "A_recipientID", indent_level + 1);

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_sourceID, "A_sourceID", indent_level + 1);

    P_LDM_Common_T_Int64PluginSupport_print_data(
        &sample->A_referenceNum, "A_referenceNum", indent_level + 1);

    P_LDM_Common_T_DateTimeTypePluginSupport_print_data(
        &sample->A_timeOfDataGeneration, "A_timeOfDataGeneration", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_componentName, "A_componentName", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_subsystemName, "A_subsystemName", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_measure, "A_measure", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_nature, "A_nature", indent_level + 1);

}
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_create_key_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionKeyHolder);

    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_initialize_ex(key,allocate_pointers, RTI_TRUE);
    return key;
}

P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_create_key(void)
{
    return  P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_create_key_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_destroy_key_ex(
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionKeyHolder *key,RTIBool deallocate_pointers)
{
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}

void 
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_destroy_key(
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionKeyHolder *key) {

    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_destroy_key_ex(key,RTI_TRUE);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    unsigned int serializedKeyMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_destroy_data,
        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
        P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_create_key ,            
        (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
        P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    } 
    serializedKeyMaxSize =  P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

    if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
        epd,endpoint_info,serializedKeyMaxSize))  
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *sample,
    void *handle)
{

    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *dst,
    const P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_Int64Plugin_serialize(
            endpoint_data,
            &sample->A_referenceNum,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_DateTimeTypePlugin_serialize(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_componentName,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_subsystemName,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_measure,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_nature,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_Int64Plugin_deserialize_sample(
            endpoint_data,
            &sample->A_referenceNum,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_DateTimeTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_componentName,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_subsystemName,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_measure,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_nature,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 0);

    if (buffer == NULL) {
        *length = 
        P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_deserialize_from_cdr_buffer(
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    return P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;

}

RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_Int64Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_Int64Plugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_Int64Plugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (sample==NULL) {
        return 0;
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_recipientID);
    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_sourceID);
    current_alignment += P_LDM_Common_T_Int64Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_referenceNum);
    current_alignment += P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_timeOfDataGeneration);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_componentName);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_subsystemName);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_measure);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_nature);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_USER_KEY;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize_key(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_key_sample(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_key_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_key_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_key_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if (!P_LDM_Common_T_Int64Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionKeyHolder *dst, 
    const P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *src)
{

    if (endpoint_data) {} /* To avoid warnings */   

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_recipientID, &src->A_recipientID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *dst, const
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionKeyHolder *src)
{

    if (endpoint_data) {} /* To avoid warnings */   
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_recipientID, &src->A_recipientID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *instance)
{
    struct RTICdrStream * md5Stream = NULL;
    struct RTICdrStreamState cdrState;
    char * buffer = NULL;

    RTICdrStreamState_init(&cdrState);
    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_serialize_key(
        endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {

        int size;

        RTICdrStream_pushState(md5Stream, &cdrState, -1);

        size = (int)P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_serialized_sample_size(
            endpoint_data,
            RTI_FALSE,
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            0,
            instance);

        if (size <= RTICdrStream_getBufferLength(md5Stream)) {
            RTICdrStream_popState(md5Stream, &cdrState);        
            return RTI_FALSE;
        }   

        RTIOsapiHeap_allocateBuffer(&buffer,size,0);

        if (buffer == NULL) {
            RTICdrStream_popState(md5Stream, &cdrState);
            return RTI_FALSE;
        }

        RTICdrStream_set(md5Stream, buffer, size);
        RTIOsapiMemory_zero(
            RTICdrStream_getBuffer(md5Stream),
            RTICdrStream_getBufferLength(md5Stream));
        RTICdrStream_resetPosition(md5Stream);
        RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
        if (!P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) 
        {
            RTICdrStream_popState(md5Stream, &cdrState);
            RTIOsapiHeap_freeBuffer(buffer);
            return RTI_FALSE;
        }        
    }   

    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

    if (buffer != NULL) {
        RTICdrStream_popState(md5Stream, &cdrState);
        RTIOsapiHeap_freeBuffer(buffer);
    }
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition * sample=NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }

    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    sample = (P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition *)
    PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }

    if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
        endpoint_data,
        &sample->A_recipientID,
        stream,
        RTI_FALSE, RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
        endpoint_data,
        &sample->A_sourceID,
        stream,
        RTI_FALSE, RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    } 

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    if (!P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_instance_to_keyhash(
        endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_destroy_sample;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_key_kind;

    plugin->getSerializedKeyMaxSizeFnc =   
    (PRESTypePluginGetSerializedKeyMaxSizeFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
    (PRESTypePluginSerializeKeyFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_serialize_key;
    plugin->deserializeKeyFnc =
    (PRESTypePluginDeserializeKeyFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
    (PRESTypePluginDeserializeKeySampleFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_deserialize_key_sample;

    plugin-> instanceToKeyHashFnc = 
    (PRESTypePluginInstanceToKeyHashFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
    (PRESTypePluginSerializedSampleToKeyHashFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
    (PRESTypePluginGetKeyFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_key;
    plugin->returnKeyFnc =
    (PRESTypePluginReturnKeyFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_return_key;

    plugin->instanceToKeyFnc =
    (PRESTypePluginInstanceToKeyFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
    (PRESTypePluginKeyToInstanceFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    plugin->typeCode =  (struct RTICdrTypeCode *)P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmCondition_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionTYPENAME;

    return plugin;
}

void
P_Alarms_PSM_C_Alarm_Condition_Specification_raiseAlarmConditionPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole*
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
} 

P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_create_data_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }
    return sample; 
}

P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_create_data(void)
{
    return P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_create_data_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_destroy_data_w_params(
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_destroy_data_ex(
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *sample,RTIBool deallocate_pointers) {

    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_destroy_data(
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *sample) {

    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_copy_data(
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *dst,
    const P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *src)
{
    return P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_copy(dst,src);
}

void 
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_print_data(
    const P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_recipientID, "A_recipientID", indent_level + 1);

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_sourceID, "A_sourceID", indent_level + 1);

    P_LDM_Common_T_Int64PluginSupport_print_data(
        &sample->A_referenceNum, "A_referenceNum", indent_level + 1);

    P_LDM_Common_T_DateTimeTypePluginSupport_print_data(
        &sample->A_timeOfDataGeneration, "A_timeOfDataGeneration", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_crewRole, "A_crewRole", indent_level + 1);

}
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_create_key_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleKeyHolder);

    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_initialize_ex(key,allocate_pointers, RTI_TRUE);
    return key;
}

P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_create_key(void)
{
    return  P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_create_key_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_destroy_key_ex(
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleKeyHolder *key,RTIBool deallocate_pointers)
{
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}

void 
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_destroy_key(
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleKeyHolder *key) {

    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_destroy_key_ex(key,RTI_TRUE);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    unsigned int serializedKeyMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_destroy_data,
        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
        P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_create_key ,            
        (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
        P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    } 
    serializedKeyMaxSize =  P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

    if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
        epd,endpoint_info,serializedKeyMaxSize))  
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *sample,
    void *handle)
{

    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *dst,
    const P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_Int64Plugin_serialize(
            endpoint_data,
            &sample->A_referenceNum,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_DateTimeTypePlugin_serialize(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_crewRole,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_Int64Plugin_deserialize_sample(
            endpoint_data,
            &sample->A_referenceNum,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_DateTimeTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_crewRole,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 0);

    if (buffer == NULL) {
        *length = 
        P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_deserialize_from_cdr_buffer(
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    return P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;

}

RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_Int64Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_Int64Plugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_Int64Plugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (sample==NULL) {
        return 0;
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_recipientID);
    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_sourceID);
    current_alignment += P_LDM_Common_T_Int64Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_referenceNum);
    current_alignment += P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_timeOfDataGeneration);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_crewRole);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_USER_KEY;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize_key(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_key_sample(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_key_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_key_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_key_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if (!P_LDM_Common_T_Int64Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleKeyHolder *dst, 
    const P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *src)
{

    if (endpoint_data) {} /* To avoid warnings */   

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_recipientID, &src->A_recipientID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *dst, const
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleKeyHolder *src)
{

    if (endpoint_data) {} /* To avoid warnings */   
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_recipientID, &src->A_recipientID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *instance)
{
    struct RTICdrStream * md5Stream = NULL;
    struct RTICdrStreamState cdrState;
    char * buffer = NULL;

    RTICdrStreamState_init(&cdrState);
    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_serialize_key(
        endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {

        int size;

        RTICdrStream_pushState(md5Stream, &cdrState, -1);

        size = (int)P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_serialized_sample_size(
            endpoint_data,
            RTI_FALSE,
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            0,
            instance);

        if (size <= RTICdrStream_getBufferLength(md5Stream)) {
            RTICdrStream_popState(md5Stream, &cdrState);        
            return RTI_FALSE;
        }   

        RTIOsapiHeap_allocateBuffer(&buffer,size,0);

        if (buffer == NULL) {
            RTICdrStream_popState(md5Stream, &cdrState);
            return RTI_FALSE;
        }

        RTICdrStream_set(md5Stream, buffer, size);
        RTIOsapiMemory_zero(
            RTICdrStream_getBuffer(md5Stream),
            RTICdrStream_getBufferLength(md5Stream));
        RTICdrStream_resetPosition(md5Stream);
        RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
        if (!P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) 
        {
            RTICdrStream_popState(md5Stream, &cdrState);
            RTIOsapiHeap_freeBuffer(buffer);
            return RTI_FALSE;
        }        
    }   

    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

    if (buffer != NULL) {
        RTICdrStream_popState(md5Stream, &cdrState);
        RTIOsapiHeap_freeBuffer(buffer);
    }
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole * sample=NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }

    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    sample = (P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole *)
    PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }

    if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
        endpoint_data,
        &sample->A_recipientID,
        stream,
        RTI_FALSE, RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
        endpoint_data,
        &sample->A_sourceID,
        stream,
        RTI_FALSE, RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    } 

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    if (!P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_instance_to_keyhash(
        endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_destroy_sample;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_key_kind;

    plugin->getSerializedKeyMaxSizeFnc =   
    (PRESTypePluginGetSerializedKeyMaxSizeFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
    (PRESTypePluginSerializeKeyFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_serialize_key;
    plugin->deserializeKeyFnc =
    (PRESTypePluginDeserializeKeyFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
    (PRESTypePluginDeserializeKeySampleFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_deserialize_key_sample;

    plugin-> instanceToKeyHashFnc = 
    (PRESTypePluginInstanceToKeyHashFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
    (PRESTypePluginSerializedSampleToKeyHashFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
    (PRESTypePluginGetKeyFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_key;
    plugin->returnKeyFnc =
    (PRESTypePluginReturnKeyFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_return_key;

    plugin->instanceToKeyFnc =
    (PRESTypePluginInstanceToKeyFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_instance_to_key;
    plugin->keyToInstanceFnc =
    (PRESTypePluginKeyToInstanceFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    plugin->typeCode =  (struct RTICdrTypeCode *)P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRole_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_get_serialized_sample_size;

    plugin->endpointTypeName = P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRoleTYPENAME;

    return plugin;
}

void
P_Alarms_PSM_C_Alarm_Condition_Specification_isOfInterestToCrewRolePlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type P_Alarms_PSM_C_Alarm_Condition_Specification
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

P_Alarms_PSM_C_Alarm_Condition_Specification*
P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    P_Alarms_PSM_C_Alarm_Condition_Specification *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Alarm_Condition_Specification);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Alarm_Condition_Specification_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
} 

P_Alarms_PSM_C_Alarm_Condition_Specification *
P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_create_data_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Alarm_Condition_Specification *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Alarm_Condition_Specification);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Alarm_Condition_Specification_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }
    return sample; 
}

P_Alarms_PSM_C_Alarm_Condition_Specification *
P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_create_data(void)
{
    return P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_create_data_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_destroy_data_w_params(
    P_Alarms_PSM_C_Alarm_Condition_Specification *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    P_Alarms_PSM_C_Alarm_Condition_Specification_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_destroy_data_ex(
    P_Alarms_PSM_C_Alarm_Condition_Specification *sample,RTIBool deallocate_pointers) {

    P_Alarms_PSM_C_Alarm_Condition_Specification_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_destroy_data(
    P_Alarms_PSM_C_Alarm_Condition_Specification *sample) {

    P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_copy_data(
    P_Alarms_PSM_C_Alarm_Condition_Specification *dst,
    const P_Alarms_PSM_C_Alarm_Condition_Specification *src)
{
    return P_Alarms_PSM_C_Alarm_Condition_Specification_copy(dst,src);
}

void 
P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_print_data(
    const P_Alarms_PSM_C_Alarm_Condition_Specification *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_sourceID, "A_sourceID", indent_level + 1);

    P_LDM_Common_T_DateTimeTypePluginSupport_print_data(
        &sample->A_timeOfDataGeneration, "A_timeOfDataGeneration", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_subsystemName, "A_subsystemName", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_componentName, "A_componentName", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_measure, "A_measure", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_nature, "A_nature", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_alarmConditionCategory, "A_alarmConditionCategory", indent_level + 1);

    P_LDM_Common_T_MediumStringPluginSupport_print_data(
        &sample->A_alarmConditionName, "A_alarmConditionName", indent_level + 1);

    P_LDM_Common_T_BooleanPluginSupport_print_data(
        &sample->A_hasMultipleInstances, "A_hasMultipleInstances", indent_level + 1);

    P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePluginSupport_print_data(
        &sample->A_overrideState, "A_overrideState", indent_level + 1);

    if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_actualAlarmCondition_sourceID) != NULL) {
        RTICdrType_printArray(
            P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_actualAlarmCondition_sourceID), 
            P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_actualAlarmCondition_sourceID),
            sizeof(P_LDM_Common_T_IdentifierType),
            (RTICdrTypePrintFunction)P_LDM_Common_T_IdentifierTypePluginSupport_print_data,
            "A_actualAlarmCondition_sourceID", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_actualAlarmCondition_sourceID), 
            P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_actualAlarmCondition_sourceID),
            (RTICdrTypePrintFunction)P_LDM_Common_T_IdentifierTypePluginSupport_print_data,
            "A_actualAlarmCondition_sourceID", indent_level + 1);
    }

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_alarmCategory_sourceID, "A_alarmCategory_sourceID", indent_level + 1);

    if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_interestedRole_sourceID) != NULL) {
        RTICdrType_printArray(
            P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_interestedRole_sourceID), 
            P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_interestedRole_sourceID),
            sizeof(P_LDM_Common_T_IdentifierType),
            (RTICdrTypePrintFunction)P_LDM_Common_T_IdentifierTypePluginSupport_print_data,
            "A_interestedRole_sourceID", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_interestedRole_sourceID), 
            P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_interestedRole_sourceID),
            (RTICdrTypePrintFunction)P_LDM_Common_T_IdentifierTypePluginSupport_print_data,
            "A_interestedRole_sourceID", indent_level + 1);
    }

}
P_Alarms_PSM_C_Alarm_Condition_Specification *
P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_create_key_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Alarm_Condition_Specification *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, P_Alarms_PSM_C_Alarm_Condition_SpecificationKeyHolder);

    P_Alarms_PSM_C_Alarm_Condition_Specification_initialize_ex(key,allocate_pointers, RTI_TRUE);
    return key;
}

P_Alarms_PSM_C_Alarm_Condition_Specification *
P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_create_key(void)
{
    return  P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_create_key_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_destroy_key_ex(
    P_Alarms_PSM_C_Alarm_Condition_SpecificationKeyHolder *key,RTIBool deallocate_pointers)
{
    P_Alarms_PSM_C_Alarm_Condition_Specification_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}

void 
P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_destroy_key(
    P_Alarms_PSM_C_Alarm_Condition_SpecificationKeyHolder *key) {

    P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_destroy_key_ex(key,RTI_TRUE);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    unsigned int serializedKeyMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_destroy_data,
        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
        P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_create_key ,            
        (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
        P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    } 
    serializedKeyMaxSize =  P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

    if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
        epd,endpoint_info,serializedKeyMaxSize))  
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Condition_Specification *sample,
    void *handle)
{

    P_Alarms_PSM_C_Alarm_Condition_Specification_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Condition_Specification *dst,
    const P_Alarms_PSM_C_Alarm_Condition_Specification *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return P_Alarms_PSM_C_Alarm_Condition_SpecificationPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Alarm_Condition_Specification *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_DateTimeTypePlugin_serialize(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_subsystemName,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_componentName,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_measure,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_nature,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_alarmConditionCategory,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_MediumStringPlugin_serialize(
            endpoint_data,
            &sample->A_alarmConditionName,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_BooleanPlugin_serialize(
            endpoint_data,
            &sample->A_hasMultipleInstances,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_serialize(
            endpoint_data,
            &sample->A_overrideState,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_actualAlarmCondition_sourceID) != NULL) {
            if (!RTICdrStream_serializeNonPrimitiveSequence(
                stream,
                P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_actualAlarmCondition_sourceID),
                P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_actualAlarmCondition_sourceID),
                (100),
                sizeof(P_LDM_Common_T_IdentifierType),
                (RTICdrStreamSerializeFunction)P_LDM_Common_T_IdentifierTypePlugin_serialize,
                RTI_FALSE, encapsulation_id,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            } 
        } else {
            if (!RTICdrStream_serializeNonPrimitivePointerSequence(
                stream,
                (const void **) P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_actualAlarmCondition_sourceID),
                P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_actualAlarmCondition_sourceID),
                (100),
                (RTICdrStreamSerializeFunction)P_LDM_Common_T_IdentifierTypePlugin_serialize,
                RTI_FALSE, encapsulation_id,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            } 

        } 

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_alarmCategory_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_interestedRole_sourceID) != NULL) {
            if (!RTICdrStream_serializeNonPrimitiveSequence(
                stream,
                P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_interestedRole_sourceID),
                P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_interestedRole_sourceID),
                (100),
                sizeof(P_LDM_Common_T_IdentifierType),
                (RTICdrStreamSerializeFunction)P_LDM_Common_T_IdentifierTypePlugin_serialize,
                RTI_FALSE, encapsulation_id,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            } 
        } else {
            if (!RTICdrStream_serializeNonPrimitivePointerSequence(
                stream,
                (const void **) P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_interestedRole_sourceID),
                P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_interestedRole_sourceID),
                (100),
                (RTICdrStreamSerializeFunction)P_LDM_Common_T_IdentifierTypePlugin_serialize,
                RTI_FALSE, encapsulation_id,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            } 

        } 

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Condition_Specification *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        P_Alarms_PSM_C_Alarm_Condition_Specification_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_DateTimeTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_subsystemName,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_componentName,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_measure,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_nature,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_alarmConditionCategory,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_MediumStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_alarmConditionName,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_BooleanPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_hasMultipleInstances,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_overrideState,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_actualAlarmCondition_sourceID) != NULL) {
                if (!RTICdrStream_deserializeNonPrimitiveSequence(
                    stream,
                    P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_actualAlarmCondition_sourceID),
                    &sequence_length,
                    P_LDM_Common_T_IdentifierTypeSeq_get_maximum(&sample->A_actualAlarmCondition_sourceID),
                    sizeof(P_LDM_Common_T_IdentifierType),
                    (RTICdrStreamDeserializeFunction)P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample,
                    RTI_FALSE,RTI_TRUE,
                    endpoint_data,endpoint_plugin_qos)) {
                    goto fin; 
                }
            } else {
                if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                    stream,
                    (void **) P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_actualAlarmCondition_sourceID),
                    &sequence_length,
                    P_LDM_Common_T_IdentifierTypeSeq_get_maximum(&sample->A_actualAlarmCondition_sourceID),
                    (RTICdrStreamDeserializeFunction)P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample,
                    RTI_FALSE,RTI_TRUE,
                    endpoint_data,endpoint_plugin_qos)) {
                    goto fin; 
                }
            }
            if (!P_LDM_Common_T_IdentifierTypeSeq_set_length(
                &sample->A_actualAlarmCondition_sourceID,sequence_length)) {
                return RTI_FALSE;
            }        

        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_alarmCategory_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_interestedRole_sourceID) != NULL) {
                if (!RTICdrStream_deserializeNonPrimitiveSequence(
                    stream,
                    P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_interestedRole_sourceID),
                    &sequence_length,
                    P_LDM_Common_T_IdentifierTypeSeq_get_maximum(&sample->A_interestedRole_sourceID),
                    sizeof(P_LDM_Common_T_IdentifierType),
                    (RTICdrStreamDeserializeFunction)P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample,
                    RTI_FALSE,RTI_TRUE,
                    endpoint_data,endpoint_plugin_qos)) {
                    goto fin; 
                }
            } else {
                if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                    stream,
                    (void **) P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_interestedRole_sourceID),
                    &sequence_length,
                    P_LDM_Common_T_IdentifierTypeSeq_get_maximum(&sample->A_interestedRole_sourceID),
                    (RTICdrStreamDeserializeFunction)P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample,
                    RTI_FALSE,RTI_TRUE,
                    endpoint_data,endpoint_plugin_qos)) {
                    goto fin; 
                }
            }
            if (!P_LDM_Common_T_IdentifierTypeSeq_set_length(
                &sample->A_interestedRole_sourceID,sequence_length)) {
                return RTI_FALSE;
            }        

        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool
P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const P_Alarms_PSM_C_Alarm_Condition_Specification *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 0);

    if (buffer == NULL) {
        *length = 
        P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_deserialize_from_cdr_buffer(
    P_Alarms_PSM_C_Alarm_Condition_Specification *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    return P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Condition_Specification **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;

}

RTIBool P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_MediumStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_BooleanPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipNonPrimitiveSequence(
                stream,
                &sequence_length,
                sizeof(P_LDM_Common_T_IdentifierType),
                (RTICdrStreamSkipFunction)P_LDM_Common_T_IdentifierTypePlugin_skip,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                goto fin; 
            }
        }
        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipNonPrimitiveSequence(
                stream,
                &sequence_length,
                sizeof(P_LDM_Common_T_IdentifierType),
                (RTICdrStreamSkipFunction)P_LDM_Common_T_IdentifierTypePlugin_skip,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                goto fin; 
            }
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_MediumStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_BooleanPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=RTICdrType_getNonPrimitiveSequenceMaxSizeSerializedEx(
        overflow,
        current_alignment, (100),
        P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex,
        RTI_FALSE,encapsulation_id,endpoint_data);

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=RTICdrType_getNonPrimitiveSequenceMaxSizeSerializedEx(
        overflow,
        current_alignment, (100),
        P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex,
        RTI_FALSE,encapsulation_id,endpoint_data);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_MediumStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_BooleanPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=RTICdrType_getNonPrimitiveSequenceMaxSizeSerialized(
        current_alignment, 0,
        P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size,
        RTI_FALSE,encapsulation_id,endpoint_data);
    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=RTICdrType_getNonPrimitiveSequenceMaxSizeSerialized(
        current_alignment, 0,
        P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size,
        RTI_FALSE,encapsulation_id,endpoint_data);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const P_Alarms_PSM_C_Alarm_Condition_Specification * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (sample==NULL) {
        return 0;
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_sourceID);
    current_alignment += P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_timeOfDataGeneration);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_subsystemName);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_componentName);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_measure);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_nature);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_alarmConditionCategory);
    current_alignment += P_LDM_Common_T_MediumStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_alarmConditionName);
    current_alignment += P_LDM_Common_T_BooleanPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_hasMultipleInstances);
    current_alignment += P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_overrideState);
    if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_actualAlarmCondition_sourceID) != NULL) {
        current_alignment += RTICdrStream_getNonPrimitiveSequenceSerializedSize(
            current_alignment, P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_actualAlarmCondition_sourceID),
            sizeof(P_LDM_Common_T_IdentifierType),
            (RTICdrTypeGetSerializedSampleSizeFunction)P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_actualAlarmCondition_sourceID),
            endpoint_data);
    } else {
        current_alignment += RTICdrStream_getNonPrimitivePointerSequenceSerializedSize(
            current_alignment,  
            P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_actualAlarmCondition_sourceID),
            sizeof(P_LDM_Common_T_IdentifierType),
            (RTICdrTypeGetSerializedSampleSizeFunction)P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            (const void **)P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_actualAlarmCondition_sourceID),
            endpoint_data);
    }
    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_alarmCategory_sourceID);
    if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_interestedRole_sourceID) != NULL) {
        current_alignment += RTICdrStream_getNonPrimitiveSequenceSerializedSize(
            current_alignment, P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_interestedRole_sourceID),
            sizeof(P_LDM_Common_T_IdentifierType),
            (RTICdrTypeGetSerializedSampleSizeFunction)P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_interestedRole_sourceID),
            endpoint_data);
    } else {
        current_alignment += RTICdrStream_getNonPrimitivePointerSequenceSerializedSize(
            current_alignment,  
            P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_interestedRole_sourceID),
            sizeof(P_LDM_Common_T_IdentifierType),
            (RTICdrTypeGetSerializedSampleSizeFunction)P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            (const void **)P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_interestedRole_sourceID),
            endpoint_data);
    }

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_USER_KEY;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Alarm_Condition_Specification *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Condition_Specification *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_key_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Condition_Specification **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_key_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Condition_Specification *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_MediumStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_BooleanPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_Alarms_PSM_T_Alarm_Condition_Specification_StateTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipNonPrimitiveSequence(
                stream,
                &sequence_length,
                sizeof(P_LDM_Common_T_IdentifierType),
                (RTICdrStreamSkipFunction)P_LDM_Common_T_IdentifierTypePlugin_skip,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                goto fin; 
            }
        }

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipNonPrimitiveSequence(
                stream,
                &sequence_length,
                sizeof(P_LDM_Common_T_IdentifierType),
                (RTICdrStreamSkipFunction)P_LDM_Common_T_IdentifierTypePlugin_skip,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                goto fin; 
            }
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Condition_SpecificationKeyHolder *dst, 
    const P_Alarms_PSM_C_Alarm_Condition_Specification *src)
{

    if (endpoint_data) {} /* To avoid warnings */   

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Condition_Specification *dst, const
    P_Alarms_PSM_C_Alarm_Condition_SpecificationKeyHolder *src)
{

    if (endpoint_data) {} /* To avoid warnings */   
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const P_Alarms_PSM_C_Alarm_Condition_Specification *instance)
{
    struct RTICdrStream * md5Stream = NULL;
    struct RTICdrStreamState cdrState;
    char * buffer = NULL;

    RTICdrStreamState_init(&cdrState);
    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_serialize_key(
        endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {

        int size;

        RTICdrStream_pushState(md5Stream, &cdrState, -1);

        size = (int)P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_serialized_sample_size(
            endpoint_data,
            RTI_FALSE,
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            0,
            instance);

        if (size <= RTICdrStream_getBufferLength(md5Stream)) {
            RTICdrStream_popState(md5Stream, &cdrState);        
            return RTI_FALSE;
        }   

        RTIOsapiHeap_allocateBuffer(&buffer,size,0);

        if (buffer == NULL) {
            RTICdrStream_popState(md5Stream, &cdrState);
            return RTI_FALSE;
        }

        RTICdrStream_set(md5Stream, buffer, size);
        RTIOsapiMemory_zero(
            RTICdrStream_getBuffer(md5Stream),
            RTICdrStream_getBufferLength(md5Stream));
        RTICdrStream_resetPosition(md5Stream);
        RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
        if (!P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) 
        {
            RTICdrStream_popState(md5Stream, &cdrState);
            RTIOsapiHeap_freeBuffer(buffer);
            return RTI_FALSE;
        }        
    }   

    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

    if (buffer != NULL) {
        RTICdrStream_popState(md5Stream, &cdrState);
        RTIOsapiHeap_freeBuffer(buffer);
    }
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;
    P_Alarms_PSM_C_Alarm_Condition_Specification * sample=NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }

    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    sample = (P_Alarms_PSM_C_Alarm_Condition_Specification *)
    PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }

    if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
        endpoint_data,
        &sample->A_sourceID,
        stream,
        RTI_FALSE, RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    } 

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    if (!P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_instance_to_keyhash(
        endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_destroy_sample;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_key_kind;

    plugin->getSerializedKeyMaxSizeFnc =   
    (PRESTypePluginGetSerializedKeyMaxSizeFunction)
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
    (PRESTypePluginSerializeKeyFunction)
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_serialize_key;
    plugin->deserializeKeyFnc =
    (PRESTypePluginDeserializeKeyFunction)
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
    (PRESTypePluginDeserializeKeySampleFunction)
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_deserialize_key_sample;

    plugin-> instanceToKeyHashFnc = 
    (PRESTypePluginInstanceToKeyHashFunction)
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
    (PRESTypePluginSerializedSampleToKeyHashFunction)
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
    (PRESTypePluginGetKeyFunction)
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_key;
    plugin->returnKeyFnc =
    (PRESTypePluginReturnKeyFunction)
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_return_key;

    plugin->instanceToKeyFnc =
    (PRESTypePluginInstanceToKeyFunction)
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
    (PRESTypePluginKeyToInstanceFunction)
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    plugin->typeCode =  (struct RTICdrTypeCode *)P_Alarms_PSM_C_Alarm_Condition_Specification_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = P_Alarms_PSM_C_Alarm_Condition_SpecificationTYPENAME;

    return plugin;
}

void
P_Alarms_PSM_C_Alarm_Condition_SpecificationPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type P_Alarms_PSM_C_Tone_Specification
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

P_Alarms_PSM_C_Tone_Specification*
P_Alarms_PSM_C_Tone_SpecificationPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    P_Alarms_PSM_C_Tone_Specification *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Tone_Specification);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Tone_Specification_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
} 

P_Alarms_PSM_C_Tone_Specification *
P_Alarms_PSM_C_Tone_SpecificationPluginSupport_create_data_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Tone_Specification *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Tone_Specification);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Tone_Specification_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }
    return sample; 
}

P_Alarms_PSM_C_Tone_Specification *
P_Alarms_PSM_C_Tone_SpecificationPluginSupport_create_data(void)
{
    return P_Alarms_PSM_C_Tone_SpecificationPluginSupport_create_data_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Tone_SpecificationPluginSupport_destroy_data_w_params(
    P_Alarms_PSM_C_Tone_Specification *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    P_Alarms_PSM_C_Tone_Specification_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Tone_SpecificationPluginSupport_destroy_data_ex(
    P_Alarms_PSM_C_Tone_Specification *sample,RTIBool deallocate_pointers) {

    P_Alarms_PSM_C_Tone_Specification_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Tone_SpecificationPluginSupport_destroy_data(
    P_Alarms_PSM_C_Tone_Specification *sample) {

    P_Alarms_PSM_C_Tone_SpecificationPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
P_Alarms_PSM_C_Tone_SpecificationPluginSupport_copy_data(
    P_Alarms_PSM_C_Tone_Specification *dst,
    const P_Alarms_PSM_C_Tone_Specification *src)
{
    return P_Alarms_PSM_C_Tone_Specification_copy(dst,src);
}

void 
P_Alarms_PSM_C_Tone_SpecificationPluginSupport_print_data(
    const P_Alarms_PSM_C_Tone_Specification *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_sourceID, "A_sourceID", indent_level + 1);

    P_LDM_Common_T_DateTimeTypePluginSupport_print_data(
        &sample->A_timeOfDataGeneration, "A_timeOfDataGeneration", indent_level + 1);

    P_LDM_Common_T_FrequencyInHertzTypePluginSupport_print_data(
        &sample->A_toneFrequency, "A_toneFrequency", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_toneModulationType, "A_toneModulationType", indent_level + 1);

    P_LDM_Common_T_FrequencyInHertzTypePluginSupport_print_data(
        &sample->A_toneRepetitionFrequency, "A_toneRepetitionFrequency", indent_level + 1);

    P_LDM_Common_T_PowerInWattsTypePluginSupport_print_data(
        &sample->A_toneMaxVolume, "A_toneMaxVolume", indent_level + 1);

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_alarmCategorySpecification_sourceID, "A_alarmCategorySpecification_sourceID", indent_level + 1);

}
P_Alarms_PSM_C_Tone_Specification *
P_Alarms_PSM_C_Tone_SpecificationPluginSupport_create_key_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Tone_Specification *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, P_Alarms_PSM_C_Tone_SpecificationKeyHolder);

    P_Alarms_PSM_C_Tone_Specification_initialize_ex(key,allocate_pointers, RTI_TRUE);
    return key;
}

P_Alarms_PSM_C_Tone_Specification *
P_Alarms_PSM_C_Tone_SpecificationPluginSupport_create_key(void)
{
    return  P_Alarms_PSM_C_Tone_SpecificationPluginSupport_create_key_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Tone_SpecificationPluginSupport_destroy_key_ex(
    P_Alarms_PSM_C_Tone_SpecificationKeyHolder *key,RTIBool deallocate_pointers)
{
    P_Alarms_PSM_C_Tone_Specification_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}

void 
P_Alarms_PSM_C_Tone_SpecificationPluginSupport_destroy_key(
    P_Alarms_PSM_C_Tone_SpecificationKeyHolder *key) {

    P_Alarms_PSM_C_Tone_SpecificationPluginSupport_destroy_key_ex(key,RTI_TRUE);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
P_Alarms_PSM_C_Tone_SpecificationPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
P_Alarms_PSM_C_Tone_SpecificationPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
P_Alarms_PSM_C_Tone_SpecificationPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    unsigned int serializedKeyMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        P_Alarms_PSM_C_Tone_SpecificationPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        P_Alarms_PSM_C_Tone_SpecificationPluginSupport_destroy_data,
        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
        P_Alarms_PSM_C_Tone_SpecificationPluginSupport_create_key ,            
        (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
        P_Alarms_PSM_C_Tone_SpecificationPluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    } 
    serializedKeyMaxSize =  P_Alarms_PSM_C_Tone_SpecificationPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

    if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
        epd,endpoint_info,serializedKeyMaxSize))  
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = P_Alarms_PSM_C_Tone_SpecificationPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            P_Alarms_PSM_C_Tone_SpecificationPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            P_Alarms_PSM_C_Tone_SpecificationPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
P_Alarms_PSM_C_Tone_SpecificationPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
P_Alarms_PSM_C_Tone_SpecificationPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Tone_Specification *sample,
    void *handle)
{

    P_Alarms_PSM_C_Tone_Specification_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
P_Alarms_PSM_C_Tone_SpecificationPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Tone_Specification *dst,
    const P_Alarms_PSM_C_Tone_Specification *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return P_Alarms_PSM_C_Tone_SpecificationPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
P_Alarms_PSM_C_Tone_SpecificationPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
P_Alarms_PSM_C_Tone_SpecificationPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Tone_Specification *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_DateTimeTypePlugin_serialize(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_FrequencyInHertzTypePlugin_serialize(
            endpoint_data,
            &sample->A_toneFrequency,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_toneModulationType,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_FrequencyInHertzTypePlugin_serialize(
            endpoint_data,
            &sample->A_toneRepetitionFrequency,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_PowerInWattsTypePlugin_serialize(
            endpoint_data,
            &sample->A_toneMaxVolume,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_alarmCategorySpecification_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
P_Alarms_PSM_C_Tone_SpecificationPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Tone_Specification *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        P_Alarms_PSM_C_Tone_Specification_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_DateTimeTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_FrequencyInHertzTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_toneFrequency,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_toneModulationType,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_FrequencyInHertzTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_toneRepetitionFrequency,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_PowerInWattsTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_toneMaxVolume,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_alarmCategorySpecification_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool
P_Alarms_PSM_C_Tone_SpecificationPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const P_Alarms_PSM_C_Tone_Specification *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    P_Alarms_PSM_C_Tone_SpecificationPlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 0);

    if (buffer == NULL) {
        *length = 
        P_Alarms_PSM_C_Tone_SpecificationPlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = P_Alarms_PSM_C_Tone_SpecificationPlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
P_Alarms_PSM_C_Tone_SpecificationPlugin_deserialize_from_cdr_buffer(
    P_Alarms_PSM_C_Tone_Specification *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    return P_Alarms_PSM_C_Tone_SpecificationPlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

RTIBool 
P_Alarms_PSM_C_Tone_SpecificationPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Tone_Specification **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Tone_SpecificationPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;

}

RTIBool P_Alarms_PSM_C_Tone_SpecificationPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_FrequencyInHertzTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_FrequencyInHertzTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_PowerInWattsTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
P_Alarms_PSM_C_Tone_SpecificationPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_FrequencyInHertzTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_FrequencyInHertzTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_PowerInWattsTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
P_Alarms_PSM_C_Tone_SpecificationPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Tone_SpecificationPlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
P_Alarms_PSM_C_Tone_SpecificationPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_FrequencyInHertzTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_FrequencyInHertzTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_PowerInWattsTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
P_Alarms_PSM_C_Tone_SpecificationPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const P_Alarms_PSM_C_Tone_Specification * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (sample==NULL) {
        return 0;
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_sourceID);
    current_alignment += P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_timeOfDataGeneration);
    current_alignment += P_LDM_Common_T_FrequencyInHertzTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_toneFrequency);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_toneModulationType);
    current_alignment += P_LDM_Common_T_FrequencyInHertzTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_toneRepetitionFrequency);
    current_alignment += P_LDM_Common_T_PowerInWattsTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_toneMaxVolume);
    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_alarmCategorySpecification_sourceID);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
P_Alarms_PSM_C_Tone_SpecificationPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_USER_KEY;
}

RTIBool 
P_Alarms_PSM_C_Tone_SpecificationPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Tone_Specification *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Tone_SpecificationPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Tone_Specification *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_key_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Tone_SpecificationPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Tone_Specification **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Tone_SpecificationPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
P_Alarms_PSM_C_Tone_SpecificationPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_key_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
P_Alarms_PSM_C_Tone_SpecificationPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Tone_SpecificationPlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
P_Alarms_PSM_C_Tone_SpecificationPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Tone_Specification *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_FrequencyInHertzTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_FrequencyInHertzTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_PowerInWattsTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Tone_SpecificationPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Tone_SpecificationKeyHolder *dst, 
    const P_Alarms_PSM_C_Tone_Specification *src)
{

    if (endpoint_data) {} /* To avoid warnings */   

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Tone_SpecificationPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Tone_Specification *dst, const
    P_Alarms_PSM_C_Tone_SpecificationKeyHolder *src)
{

    if (endpoint_data) {} /* To avoid warnings */   
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Tone_SpecificationPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const P_Alarms_PSM_C_Tone_Specification *instance)
{
    struct RTICdrStream * md5Stream = NULL;
    struct RTICdrStreamState cdrState;
    char * buffer = NULL;

    RTICdrStreamState_init(&cdrState);
    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!P_Alarms_PSM_C_Tone_SpecificationPlugin_serialize_key(
        endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {

        int size;

        RTICdrStream_pushState(md5Stream, &cdrState, -1);

        size = (int)P_Alarms_PSM_C_Tone_SpecificationPlugin_get_serialized_sample_size(
            endpoint_data,
            RTI_FALSE,
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            0,
            instance);

        if (size <= RTICdrStream_getBufferLength(md5Stream)) {
            RTICdrStream_popState(md5Stream, &cdrState);        
            return RTI_FALSE;
        }   

        RTIOsapiHeap_allocateBuffer(&buffer,size,0);

        if (buffer == NULL) {
            RTICdrStream_popState(md5Stream, &cdrState);
            return RTI_FALSE;
        }

        RTICdrStream_set(md5Stream, buffer, size);
        RTIOsapiMemory_zero(
            RTICdrStream_getBuffer(md5Stream),
            RTICdrStream_getBufferLength(md5Stream));
        RTICdrStream_resetPosition(md5Stream);
        RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
        if (!P_Alarms_PSM_C_Tone_SpecificationPlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) 
        {
            RTICdrStream_popState(md5Stream, &cdrState);
            RTIOsapiHeap_freeBuffer(buffer);
            return RTI_FALSE;
        }        
    }   

    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

    if (buffer != NULL) {
        RTICdrStream_popState(md5Stream, &cdrState);
        RTIOsapiHeap_freeBuffer(buffer);
    }
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Tone_SpecificationPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;
    P_Alarms_PSM_C_Tone_Specification * sample=NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }

    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    sample = (P_Alarms_PSM_C_Tone_Specification *)
    PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }

    if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
        endpoint_data,
        &sample->A_sourceID,
        stream,
        RTI_FALSE, RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    } 

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    if (!P_Alarms_PSM_C_Tone_SpecificationPlugin_instance_to_keyhash(
        endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *P_Alarms_PSM_C_Tone_SpecificationPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    P_Alarms_PSM_C_Tone_SpecificationPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    P_Alarms_PSM_C_Tone_SpecificationPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    P_Alarms_PSM_C_Tone_SpecificationPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    P_Alarms_PSM_C_Tone_SpecificationPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    P_Alarms_PSM_C_Tone_SpecificationPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    P_Alarms_PSM_C_Tone_SpecificationPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    P_Alarms_PSM_C_Tone_SpecificationPlugin_destroy_sample;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    P_Alarms_PSM_C_Tone_SpecificationPlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    P_Alarms_PSM_C_Tone_SpecificationPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    P_Alarms_PSM_C_Tone_SpecificationPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    P_Alarms_PSM_C_Tone_SpecificationPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    P_Alarms_PSM_C_Tone_SpecificationPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    P_Alarms_PSM_C_Tone_SpecificationPlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    P_Alarms_PSM_C_Tone_SpecificationPlugin_get_key_kind;

    plugin->getSerializedKeyMaxSizeFnc =   
    (PRESTypePluginGetSerializedKeyMaxSizeFunction)
    P_Alarms_PSM_C_Tone_SpecificationPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
    (PRESTypePluginSerializeKeyFunction)
    P_Alarms_PSM_C_Tone_SpecificationPlugin_serialize_key;
    plugin->deserializeKeyFnc =
    (PRESTypePluginDeserializeKeyFunction)
    P_Alarms_PSM_C_Tone_SpecificationPlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
    (PRESTypePluginDeserializeKeySampleFunction)
    P_Alarms_PSM_C_Tone_SpecificationPlugin_deserialize_key_sample;

    plugin-> instanceToKeyHashFnc = 
    (PRESTypePluginInstanceToKeyHashFunction)
    P_Alarms_PSM_C_Tone_SpecificationPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
    (PRESTypePluginSerializedSampleToKeyHashFunction)
    P_Alarms_PSM_C_Tone_SpecificationPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
    (PRESTypePluginGetKeyFunction)
    P_Alarms_PSM_C_Tone_SpecificationPlugin_get_key;
    plugin->returnKeyFnc =
    (PRESTypePluginReturnKeyFunction)
    P_Alarms_PSM_C_Tone_SpecificationPlugin_return_key;

    plugin->instanceToKeyFnc =
    (PRESTypePluginInstanceToKeyFunction)
    P_Alarms_PSM_C_Tone_SpecificationPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
    (PRESTypePluginKeyToInstanceFunction)
    P_Alarms_PSM_C_Tone_SpecificationPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    plugin->typeCode =  (struct RTICdrTypeCode *)P_Alarms_PSM_C_Tone_Specification_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    P_Alarms_PSM_C_Tone_SpecificationPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    P_Alarms_PSM_C_Tone_SpecificationPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    P_Alarms_PSM_C_Tone_SpecificationPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = P_Alarms_PSM_C_Tone_SpecificationTYPENAME;

    return plugin;
}

void
P_Alarms_PSM_C_Tone_SpecificationPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type P_Alarms_PSM_C_Platform_With_Alarms
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

P_Alarms_PSM_C_Platform_With_Alarms*
P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    P_Alarms_PSM_C_Platform_With_Alarms *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Platform_With_Alarms);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Platform_With_Alarms_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
} 

P_Alarms_PSM_C_Platform_With_Alarms *
P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_create_data_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Platform_With_Alarms *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Platform_With_Alarms);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Platform_With_Alarms_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }
    return sample; 
}

P_Alarms_PSM_C_Platform_With_Alarms *
P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_create_data(void)
{
    return P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_create_data_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_destroy_data_w_params(
    P_Alarms_PSM_C_Platform_With_Alarms *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    P_Alarms_PSM_C_Platform_With_Alarms_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_destroy_data_ex(
    P_Alarms_PSM_C_Platform_With_Alarms *sample,RTIBool deallocate_pointers) {

    P_Alarms_PSM_C_Platform_With_Alarms_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_destroy_data(
    P_Alarms_PSM_C_Platform_With_Alarms *sample) {

    P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_copy_data(
    P_Alarms_PSM_C_Platform_With_Alarms *dst,
    const P_Alarms_PSM_C_Platform_With_Alarms *src)
{
    return P_Alarms_PSM_C_Platform_With_Alarms_copy(dst,src);
}

void 
P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_print_data(
    const P_Alarms_PSM_C_Platform_With_Alarms *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_sourceID, "A_sourceID", indent_level + 1);

    P_LDM_Common_T_DateTimeTypePluginSupport_print_data(
        &sample->A_timeOfDataGeneration, "A_timeOfDataGeneration", indent_level + 1);

    P_LDM_Common_T_BooleanPluginSupport_print_data(
        &sample->A_activeAlarmsExist, "A_activeAlarmsExist", indent_level + 1);

    if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_possibleMissionState_sourceID) != NULL) {
        RTICdrType_printArray(
            P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_possibleMissionState_sourceID), 
            P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_possibleMissionState_sourceID),
            sizeof(P_LDM_Common_T_IdentifierType),
            (RTICdrTypePrintFunction)P_LDM_Common_T_IdentifierTypePluginSupport_print_data,
            "A_possibleMissionState_sourceID", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_possibleMissionState_sourceID), 
            P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_possibleMissionState_sourceID),
            (RTICdrTypePrintFunction)P_LDM_Common_T_IdentifierTypePluginSupport_print_data,
            "A_possibleMissionState_sourceID", indent_level + 1);
    }

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_Platform_With_Alarms_CP_sourceID, "A_Platform_With_Alarms_CP_sourceID", indent_level + 1);

}
P_Alarms_PSM_C_Platform_With_Alarms *
P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_create_key_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Platform_With_Alarms *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, P_Alarms_PSM_C_Platform_With_AlarmsKeyHolder);

    P_Alarms_PSM_C_Platform_With_Alarms_initialize_ex(key,allocate_pointers, RTI_TRUE);
    return key;
}

P_Alarms_PSM_C_Platform_With_Alarms *
P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_create_key(void)
{
    return  P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_create_key_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_destroy_key_ex(
    P_Alarms_PSM_C_Platform_With_AlarmsKeyHolder *key,RTIBool deallocate_pointers)
{
    P_Alarms_PSM_C_Platform_With_Alarms_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}

void 
P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_destroy_key(
    P_Alarms_PSM_C_Platform_With_AlarmsKeyHolder *key) {

    P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_destroy_key_ex(key,RTI_TRUE);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
P_Alarms_PSM_C_Platform_With_AlarmsPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
P_Alarms_PSM_C_Platform_With_AlarmsPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
P_Alarms_PSM_C_Platform_With_AlarmsPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    unsigned int serializedKeyMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_destroy_data,
        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
        P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_create_key ,            
        (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
        P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    } 
    serializedKeyMaxSize =  P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

    if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
        epd,endpoint_info,serializedKeyMaxSize))  
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
P_Alarms_PSM_C_Platform_With_AlarmsPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
P_Alarms_PSM_C_Platform_With_AlarmsPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Platform_With_Alarms *sample,
    void *handle)
{

    P_Alarms_PSM_C_Platform_With_Alarms_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
P_Alarms_PSM_C_Platform_With_AlarmsPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Platform_With_Alarms *dst,
    const P_Alarms_PSM_C_Platform_With_Alarms *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return P_Alarms_PSM_C_Platform_With_AlarmsPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
P_Alarms_PSM_C_Platform_With_AlarmsPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Platform_With_Alarms *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_DateTimeTypePlugin_serialize(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_BooleanPlugin_serialize(
            endpoint_data,
            &sample->A_activeAlarmsExist,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_possibleMissionState_sourceID) != NULL) {
            if (!RTICdrStream_serializeNonPrimitiveSequence(
                stream,
                P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_possibleMissionState_sourceID),
                P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_possibleMissionState_sourceID),
                (100),
                sizeof(P_LDM_Common_T_IdentifierType),
                (RTICdrStreamSerializeFunction)P_LDM_Common_T_IdentifierTypePlugin_serialize,
                RTI_FALSE, encapsulation_id,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            } 
        } else {
            if (!RTICdrStream_serializeNonPrimitivePointerSequence(
                stream,
                (const void **) P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_possibleMissionState_sourceID),
                P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_possibleMissionState_sourceID),
                (100),
                (RTICdrStreamSerializeFunction)P_LDM_Common_T_IdentifierTypePlugin_serialize,
                RTI_FALSE, encapsulation_id,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            } 

        } 

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_Platform_With_Alarms_CP_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
P_Alarms_PSM_C_Platform_With_AlarmsPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Platform_With_Alarms *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        P_Alarms_PSM_C_Platform_With_Alarms_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_DateTimeTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_BooleanPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_activeAlarmsExist,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_possibleMissionState_sourceID) != NULL) {
                if (!RTICdrStream_deserializeNonPrimitiveSequence(
                    stream,
                    P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_possibleMissionState_sourceID),
                    &sequence_length,
                    P_LDM_Common_T_IdentifierTypeSeq_get_maximum(&sample->A_possibleMissionState_sourceID),
                    sizeof(P_LDM_Common_T_IdentifierType),
                    (RTICdrStreamDeserializeFunction)P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample,
                    RTI_FALSE,RTI_TRUE,
                    endpoint_data,endpoint_plugin_qos)) {
                    goto fin; 
                }
            } else {
                if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                    stream,
                    (void **) P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_possibleMissionState_sourceID),
                    &sequence_length,
                    P_LDM_Common_T_IdentifierTypeSeq_get_maximum(&sample->A_possibleMissionState_sourceID),
                    (RTICdrStreamDeserializeFunction)P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample,
                    RTI_FALSE,RTI_TRUE,
                    endpoint_data,endpoint_plugin_qos)) {
                    goto fin; 
                }
            }
            if (!P_LDM_Common_T_IdentifierTypeSeq_set_length(
                &sample->A_possibleMissionState_sourceID,sequence_length)) {
                return RTI_FALSE;
            }        

        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_Platform_With_Alarms_CP_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool
P_Alarms_PSM_C_Platform_With_AlarmsPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const P_Alarms_PSM_C_Platform_With_Alarms *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 0);

    if (buffer == NULL) {
        *length = 
        P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = P_Alarms_PSM_C_Platform_With_AlarmsPlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
P_Alarms_PSM_C_Platform_With_AlarmsPlugin_deserialize_from_cdr_buffer(
    P_Alarms_PSM_C_Platform_With_Alarms *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    return P_Alarms_PSM_C_Platform_With_AlarmsPlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

RTIBool 
P_Alarms_PSM_C_Platform_With_AlarmsPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Platform_With_Alarms **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Platform_With_AlarmsPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;

}

RTIBool P_Alarms_PSM_C_Platform_With_AlarmsPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_BooleanPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipNonPrimitiveSequence(
                stream,
                &sequence_length,
                sizeof(P_LDM_Common_T_IdentifierType),
                (RTICdrStreamSkipFunction)P_LDM_Common_T_IdentifierTypePlugin_skip,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                goto fin; 
            }
        }
        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_BooleanPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=RTICdrType_getNonPrimitiveSequenceMaxSizeSerializedEx(
        overflow,
        current_alignment, (100),
        P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex,
        RTI_FALSE,encapsulation_id,endpoint_data);

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_BooleanPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=RTICdrType_getNonPrimitiveSequenceMaxSizeSerialized(
        current_alignment, 0,
        P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size,
        RTI_FALSE,encapsulation_id,endpoint_data);
    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const P_Alarms_PSM_C_Platform_With_Alarms * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (sample==NULL) {
        return 0;
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_sourceID);
    current_alignment += P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_timeOfDataGeneration);
    current_alignment += P_LDM_Common_T_BooleanPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_activeAlarmsExist);
    if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_possibleMissionState_sourceID) != NULL) {
        current_alignment += RTICdrStream_getNonPrimitiveSequenceSerializedSize(
            current_alignment, P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_possibleMissionState_sourceID),
            sizeof(P_LDM_Common_T_IdentifierType),
            (RTICdrTypeGetSerializedSampleSizeFunction)P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_possibleMissionState_sourceID),
            endpoint_data);
    } else {
        current_alignment += RTICdrStream_getNonPrimitivePointerSequenceSerializedSize(
            current_alignment,  
            P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_possibleMissionState_sourceID),
            sizeof(P_LDM_Common_T_IdentifierType),
            (RTICdrTypeGetSerializedSampleSizeFunction)P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            (const void **)P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_possibleMissionState_sourceID),
            endpoint_data);
    }
    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_Platform_With_Alarms_CP_sourceID);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_USER_KEY;
}

RTIBool 
P_Alarms_PSM_C_Platform_With_AlarmsPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Platform_With_Alarms *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Platform_With_AlarmsPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Platform_With_Alarms *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_key_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Platform_With_AlarmsPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Platform_With_Alarms **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Platform_With_AlarmsPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_key_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
P_Alarms_PSM_C_Platform_With_AlarmsPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Platform_With_Alarms *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_BooleanPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipNonPrimitiveSequence(
                stream,
                &sequence_length,
                sizeof(P_LDM_Common_T_IdentifierType),
                (RTICdrStreamSkipFunction)P_LDM_Common_T_IdentifierTypePlugin_skip,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                goto fin; 
            }
        }

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Platform_With_AlarmsPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Platform_With_AlarmsKeyHolder *dst, 
    const P_Alarms_PSM_C_Platform_With_Alarms *src)
{

    if (endpoint_data) {} /* To avoid warnings */   

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Platform_With_AlarmsPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Platform_With_Alarms *dst, const
    P_Alarms_PSM_C_Platform_With_AlarmsKeyHolder *src)
{

    if (endpoint_data) {} /* To avoid warnings */   
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Platform_With_AlarmsPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const P_Alarms_PSM_C_Platform_With_Alarms *instance)
{
    struct RTICdrStream * md5Stream = NULL;
    struct RTICdrStreamState cdrState;
    char * buffer = NULL;

    RTICdrStreamState_init(&cdrState);
    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!P_Alarms_PSM_C_Platform_With_AlarmsPlugin_serialize_key(
        endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {

        int size;

        RTICdrStream_pushState(md5Stream, &cdrState, -1);

        size = (int)P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_serialized_sample_size(
            endpoint_data,
            RTI_FALSE,
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            0,
            instance);

        if (size <= RTICdrStream_getBufferLength(md5Stream)) {
            RTICdrStream_popState(md5Stream, &cdrState);        
            return RTI_FALSE;
        }   

        RTIOsapiHeap_allocateBuffer(&buffer,size,0);

        if (buffer == NULL) {
            RTICdrStream_popState(md5Stream, &cdrState);
            return RTI_FALSE;
        }

        RTICdrStream_set(md5Stream, buffer, size);
        RTIOsapiMemory_zero(
            RTICdrStream_getBuffer(md5Stream),
            RTICdrStream_getBufferLength(md5Stream));
        RTICdrStream_resetPosition(md5Stream);
        RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
        if (!P_Alarms_PSM_C_Platform_With_AlarmsPlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) 
        {
            RTICdrStream_popState(md5Stream, &cdrState);
            RTIOsapiHeap_freeBuffer(buffer);
            return RTI_FALSE;
        }        
    }   

    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

    if (buffer != NULL) {
        RTICdrStream_popState(md5Stream, &cdrState);
        RTIOsapiHeap_freeBuffer(buffer);
    }
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Platform_With_AlarmsPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;
    P_Alarms_PSM_C_Platform_With_Alarms * sample=NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }

    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    sample = (P_Alarms_PSM_C_Platform_With_Alarms *)
    PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }

    if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
        endpoint_data,
        &sample->A_sourceID,
        stream,
        RTI_FALSE, RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    } 

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    if (!P_Alarms_PSM_C_Platform_With_AlarmsPlugin_instance_to_keyhash(
        endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *P_Alarms_PSM_C_Platform_With_AlarmsPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_destroy_sample;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_key_kind;

    plugin->getSerializedKeyMaxSizeFnc =   
    (PRESTypePluginGetSerializedKeyMaxSizeFunction)
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
    (PRESTypePluginSerializeKeyFunction)
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_serialize_key;
    plugin->deserializeKeyFnc =
    (PRESTypePluginDeserializeKeyFunction)
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
    (PRESTypePluginDeserializeKeySampleFunction)
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_deserialize_key_sample;

    plugin-> instanceToKeyHashFnc = 
    (PRESTypePluginInstanceToKeyHashFunction)
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
    (PRESTypePluginSerializedSampleToKeyHashFunction)
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
    (PRESTypePluginGetKeyFunction)
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_key;
    plugin->returnKeyFnc =
    (PRESTypePluginReturnKeyFunction)
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_return_key;

    plugin->instanceToKeyFnc =
    (PRESTypePluginInstanceToKeyFunction)
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
    (PRESTypePluginKeyToInstanceFunction)
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    plugin->typeCode =  (struct RTICdrTypeCode *)P_Alarms_PSM_C_Platform_With_Alarms_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    P_Alarms_PSM_C_Platform_With_AlarmsPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = P_Alarms_PSM_C_Platform_With_AlarmsTYPENAME;

    return plugin;
}

void
P_Alarms_PSM_C_Platform_With_AlarmsPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition*
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
} 

P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_create_data_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }
    return sample; 
}

P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_create_data(void)
{
    return P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_create_data_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_destroy_data_w_params(
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_destroy_data_ex(
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *sample,RTIBool deallocate_pointers) {

    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_destroy_data(
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *sample) {

    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_copy_data(
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *dst,
    const P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *src)
{
    return P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_copy(dst,src);
}

void 
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_print_data(
    const P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_recipientID, "A_recipientID", indent_level + 1);

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_sourceID, "A_sourceID", indent_level + 1);

    P_LDM_Common_T_Int64PluginSupport_print_data(
        &sample->A_referenceNum, "A_referenceNum", indent_level + 1);

    P_LDM_Common_T_DateTimeTypePluginSupport_print_data(
        &sample->A_timeOfDataGeneration, "A_timeOfDataGeneration", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_componentName, "A_componentName", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_subsystemName, "A_subsystemName", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_measure, "A_measure", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_nature, "A_nature", indent_level + 1);

}
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_create_key_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionKeyHolder);

    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_initialize_ex(key,allocate_pointers, RTI_TRUE);
    return key;
}

P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_create_key(void)
{
    return  P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_create_key_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_destroy_key_ex(
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionKeyHolder *key,RTIBool deallocate_pointers)
{
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}

void 
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_destroy_key(
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionKeyHolder *key) {

    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_destroy_key_ex(key,RTI_TRUE);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    unsigned int serializedKeyMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_destroy_data,
        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
        P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_create_key ,            
        (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
        P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    } 
    serializedKeyMaxSize =  P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

    if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
        epd,endpoint_info,serializedKeyMaxSize))  
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *sample,
    void *handle)
{

    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *dst,
    const P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_Int64Plugin_serialize(
            endpoint_data,
            &sample->A_referenceNum,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_DateTimeTypePlugin_serialize(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_componentName,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_subsystemName,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_measure,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_nature,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_Int64Plugin_deserialize_sample(
            endpoint_data,
            &sample->A_referenceNum,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_DateTimeTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_componentName,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_subsystemName,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_measure,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_nature,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 0);

    if (buffer == NULL) {
        *length = 
        P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_deserialize_from_cdr_buffer(
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    return P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;

}

RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_Int64Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_Int64Plugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_Int64Plugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (sample==NULL) {
        return 0;
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_recipientID);
    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_sourceID);
    current_alignment += P_LDM_Common_T_Int64Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_referenceNum);
    current_alignment += P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_timeOfDataGeneration);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_componentName);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_subsystemName);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_measure);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_nature);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_USER_KEY;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize_key(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_key_sample(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_key_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_key_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_key_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if (!P_LDM_Common_T_Int64Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionKeyHolder *dst, 
    const P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *src)
{

    if (endpoint_data) {} /* To avoid warnings */   

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_recipientID, &src->A_recipientID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *dst, const
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionKeyHolder *src)
{

    if (endpoint_data) {} /* To avoid warnings */   
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_recipientID, &src->A_recipientID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *instance)
{
    struct RTICdrStream * md5Stream = NULL;
    struct RTICdrStreamState cdrState;
    char * buffer = NULL;

    RTICdrStreamState_init(&cdrState);
    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_serialize_key(
        endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {

        int size;

        RTICdrStream_pushState(md5Stream, &cdrState, -1);

        size = (int)P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_serialized_sample_size(
            endpoint_data,
            RTI_FALSE,
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            0,
            instance);

        if (size <= RTICdrStream_getBufferLength(md5Stream)) {
            RTICdrStream_popState(md5Stream, &cdrState);        
            return RTI_FALSE;
        }   

        RTIOsapiHeap_allocateBuffer(&buffer,size,0);

        if (buffer == NULL) {
            RTICdrStream_popState(md5Stream, &cdrState);
            return RTI_FALSE;
        }

        RTICdrStream_set(md5Stream, buffer, size);
        RTIOsapiMemory_zero(
            RTICdrStream_getBuffer(md5Stream),
            RTICdrStream_getBufferLength(md5Stream));
        RTICdrStream_resetPosition(md5Stream);
        RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
        if (!P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) 
        {
            RTICdrStream_popState(md5Stream, &cdrState);
            RTIOsapiHeap_freeBuffer(buffer);
            return RTI_FALSE;
        }        
    }   

    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

    if (buffer != NULL) {
        RTICdrStream_popState(md5Stream, &cdrState);
        RTIOsapiHeap_freeBuffer(buffer);
    }
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition * sample=NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }

    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    sample = (P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition *)
    PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }

    if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
        endpoint_data,
        &sample->A_recipientID,
        stream,
        RTI_FALSE, RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
        endpoint_data,
        &sample->A_sourceID,
        stream,
        RTI_FALSE, RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    } 

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    if (!P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_instance_to_keyhash(
        endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_destroy_sample;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_key_kind;

    plugin->getSerializedKeyMaxSizeFnc =   
    (PRESTypePluginGetSerializedKeyMaxSizeFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
    (PRESTypePluginSerializeKeyFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_serialize_key;
    plugin->deserializeKeyFnc =
    (PRESTypePluginDeserializeKeyFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
    (PRESTypePluginDeserializeKeySampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_deserialize_key_sample;

    plugin-> instanceToKeyHashFnc = 
    (PRESTypePluginInstanceToKeyHashFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
    (PRESTypePluginSerializedSampleToKeyHashFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
    (PRESTypePluginGetKeyFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_key;
    plugin->returnKeyFnc =
    (PRESTypePluginReturnKeyFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_return_key;

    plugin->instanceToKeyFnc =
    (PRESTypePluginInstanceToKeyFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
    (PRESTypePluginKeyToInstanceFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    plugin->typeCode =  (struct RTICdrTypeCode *)P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmCondition_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionTYPENAME;

    return plugin;
}

void
P_Alarms_PSM_C_Actual_Alarm_Condition_unoverrideAlarmConditionPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition*
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
} 

P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_create_data_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }
    return sample; 
}

P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_create_data(void)
{
    return P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_create_data_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_destroy_data_w_params(
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_destroy_data_ex(
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *sample,RTIBool deallocate_pointers) {

    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_destroy_data(
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *sample) {

    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_copy_data(
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *dst,
    const P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *src)
{
    return P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_copy(dst,src);
}

void 
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_print_data(
    const P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_recipientID, "A_recipientID", indent_level + 1);

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_sourceID, "A_sourceID", indent_level + 1);

    P_LDM_Common_T_Int64PluginSupport_print_data(
        &sample->A_referenceNum, "A_referenceNum", indent_level + 1);

    P_LDM_Common_T_DateTimeTypePluginSupport_print_data(
        &sample->A_timeOfDataGeneration, "A_timeOfDataGeneration", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_componentName, "A_componentName", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_subsystemName, "A_subsystemName", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_measure, "A_measure", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_nature, "A_nature", indent_level + 1);

}
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_create_key_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionKeyHolder);

    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_initialize_ex(key,allocate_pointers, RTI_TRUE);
    return key;
}

P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_create_key(void)
{
    return  P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_create_key_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_destroy_key_ex(
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionKeyHolder *key,RTIBool deallocate_pointers)
{
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}

void 
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_destroy_key(
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionKeyHolder *key) {

    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_destroy_key_ex(key,RTI_TRUE);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    unsigned int serializedKeyMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_destroy_data,
        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
        P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_create_key ,            
        (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
        P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    } 
    serializedKeyMaxSize =  P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

    if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
        epd,endpoint_info,serializedKeyMaxSize))  
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *sample,
    void *handle)
{

    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *dst,
    const P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_Int64Plugin_serialize(
            endpoint_data,
            &sample->A_referenceNum,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_DateTimeTypePlugin_serialize(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_componentName,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_subsystemName,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_measure,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_nature,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_Int64Plugin_deserialize_sample(
            endpoint_data,
            &sample->A_referenceNum,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_DateTimeTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_componentName,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_subsystemName,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_measure,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_nature,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 0);

    if (buffer == NULL) {
        *length = 
        P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_deserialize_from_cdr_buffer(
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    return P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;

}

RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_Int64Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_Int64Plugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_Int64Plugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (sample==NULL) {
        return 0;
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_recipientID);
    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_sourceID);
    current_alignment += P_LDM_Common_T_Int64Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_referenceNum);
    current_alignment += P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_timeOfDataGeneration);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_componentName);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_subsystemName);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_measure);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_nature);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_USER_KEY;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize_key(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_key_sample(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_key_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_key_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_key_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if (!P_LDM_Common_T_Int64Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionKeyHolder *dst, 
    const P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *src)
{

    if (endpoint_data) {} /* To avoid warnings */   

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_recipientID, &src->A_recipientID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *dst, const
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionKeyHolder *src)
{

    if (endpoint_data) {} /* To avoid warnings */   
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_recipientID, &src->A_recipientID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *instance)
{
    struct RTICdrStream * md5Stream = NULL;
    struct RTICdrStreamState cdrState;
    char * buffer = NULL;

    RTICdrStreamState_init(&cdrState);
    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_serialize_key(
        endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {

        int size;

        RTICdrStream_pushState(md5Stream, &cdrState, -1);

        size = (int)P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_serialized_sample_size(
            endpoint_data,
            RTI_FALSE,
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            0,
            instance);

        if (size <= RTICdrStream_getBufferLength(md5Stream)) {
            RTICdrStream_popState(md5Stream, &cdrState);        
            return RTI_FALSE;
        }   

        RTIOsapiHeap_allocateBuffer(&buffer,size,0);

        if (buffer == NULL) {
            RTICdrStream_popState(md5Stream, &cdrState);
            return RTI_FALSE;
        }

        RTICdrStream_set(md5Stream, buffer, size);
        RTIOsapiMemory_zero(
            RTICdrStream_getBuffer(md5Stream),
            RTICdrStream_getBufferLength(md5Stream));
        RTICdrStream_resetPosition(md5Stream);
        RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
        if (!P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) 
        {
            RTICdrStream_popState(md5Stream, &cdrState);
            RTIOsapiHeap_freeBuffer(buffer);
            return RTI_FALSE;
        }        
    }   

    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

    if (buffer != NULL) {
        RTICdrStream_popState(md5Stream, &cdrState);
        RTIOsapiHeap_freeBuffer(buffer);
    }
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition * sample=NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }

    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    sample = (P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition *)
    PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }

    if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
        endpoint_data,
        &sample->A_recipientID,
        stream,
        RTI_FALSE, RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
        endpoint_data,
        &sample->A_sourceID,
        stream,
        RTI_FALSE, RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    } 

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    if (!P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_instance_to_keyhash(
        endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_destroy_sample;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_key_kind;

    plugin->getSerializedKeyMaxSizeFnc =   
    (PRESTypePluginGetSerializedKeyMaxSizeFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
    (PRESTypePluginSerializeKeyFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_serialize_key;
    plugin->deserializeKeyFnc =
    (PRESTypePluginDeserializeKeyFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
    (PRESTypePluginDeserializeKeySampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_deserialize_key_sample;

    plugin-> instanceToKeyHashFnc = 
    (PRESTypePluginInstanceToKeyHashFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
    (PRESTypePluginSerializedSampleToKeyHashFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
    (PRESTypePluginGetKeyFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_key;
    plugin->returnKeyFnc =
    (PRESTypePluginReturnKeyFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_return_key;

    plugin->instanceToKeyFnc =
    (PRESTypePluginInstanceToKeyFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
    (PRESTypePluginKeyToInstanceFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    plugin->typeCode =  (struct RTICdrTypeCode *)P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmCondition_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionTYPENAME;

    return plugin;
}

void
P_Alarms_PSM_C_Actual_Alarm_Condition_overrideAlarmConditionPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition*
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
} 

P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_create_data_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }
    return sample; 
}

P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_create_data(void)
{
    return P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_create_data_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_destroy_data_w_params(
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_destroy_data_ex(
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *sample,RTIBool deallocate_pointers) {

    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_destroy_data(
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *sample) {

    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_copy_data(
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *dst,
    const P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *src)
{
    return P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_copy(dst,src);
}

void 
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_print_data(
    const P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_recipientID, "A_recipientID", indent_level + 1);

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_sourceID, "A_sourceID", indent_level + 1);

    P_LDM_Common_T_Int64PluginSupport_print_data(
        &sample->A_referenceNum, "A_referenceNum", indent_level + 1);

    P_LDM_Common_T_DateTimeTypePluginSupport_print_data(
        &sample->A_timeOfDataGeneration, "A_timeOfDataGeneration", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_componentName, "A_componentName", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_subsystemName, "A_subsystemName", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_measure, "A_measure", indent_level + 1);

    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        &sample->A_nature, "A_nature", indent_level + 1);

}
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_create_key_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionKeyHolder);

    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_initialize_ex(key,allocate_pointers, RTI_TRUE);
    return key;
}

P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_create_key(void)
{
    return  P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_create_key_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_destroy_key_ex(
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionKeyHolder *key,RTIBool deallocate_pointers)
{
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}

void 
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_destroy_key(
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionKeyHolder *key) {

    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_destroy_key_ex(key,RTI_TRUE);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    unsigned int serializedKeyMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_destroy_data,
        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
        P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_create_key ,            
        (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
        P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    } 
    serializedKeyMaxSize =  P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

    if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
        epd,endpoint_info,serializedKeyMaxSize))  
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *sample,
    void *handle)
{

    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *dst,
    const P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_Int64Plugin_serialize(
            endpoint_data,
            &sample->A_referenceNum,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_DateTimeTypePlugin_serialize(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_componentName,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_subsystemName,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_measure,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_ShortStringPlugin_serialize(
            endpoint_data,
            &sample->A_nature,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_Int64Plugin_deserialize_sample(
            endpoint_data,
            &sample->A_referenceNum,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_DateTimeTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_componentName,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_subsystemName,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_measure,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_nature,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 0);

    if (buffer == NULL) {
        *length = 
        P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_deserialize_from_cdr_buffer(
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    return P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;

}

RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_Int64Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_Int64Plugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_Int64Plugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (sample==NULL) {
        return 0;
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_recipientID);
    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_sourceID);
    current_alignment += P_LDM_Common_T_Int64Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_referenceNum);
    current_alignment += P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_timeOfDataGeneration);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_componentName);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_subsystemName);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_measure);
    current_alignment += P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_nature);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_USER_KEY;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize_key(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_key_sample(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_key_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_key_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_key_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
            endpoint_data,
            &sample->A_recipientID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if (!P_LDM_Common_T_Int64Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_ShortStringPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionKeyHolder *dst, 
    const P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *src)
{

    if (endpoint_data) {} /* To avoid warnings */   

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_recipientID, &src->A_recipientID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *dst, const
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionKeyHolder *src)
{

    if (endpoint_data) {} /* To avoid warnings */   
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_recipientID, &src->A_recipientID)) {
        return RTI_FALSE;
    } 
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *instance)
{
    struct RTICdrStream * md5Stream = NULL;
    struct RTICdrStreamState cdrState;
    char * buffer = NULL;

    RTICdrStreamState_init(&cdrState);
    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_serialize_key(
        endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {

        int size;

        RTICdrStream_pushState(md5Stream, &cdrState, -1);

        size = (int)P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_serialized_sample_size(
            endpoint_data,
            RTI_FALSE,
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            0,
            instance);

        if (size <= RTICdrStream_getBufferLength(md5Stream)) {
            RTICdrStream_popState(md5Stream, &cdrState);        
            return RTI_FALSE;
        }   

        RTIOsapiHeap_allocateBuffer(&buffer,size,0);

        if (buffer == NULL) {
            RTICdrStream_popState(md5Stream, &cdrState);
            return RTI_FALSE;
        }

        RTICdrStream_set(md5Stream, buffer, size);
        RTIOsapiMemory_zero(
            RTICdrStream_getBuffer(md5Stream),
            RTICdrStream_getBufferLength(md5Stream));
        RTICdrStream_resetPosition(md5Stream);
        RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
        if (!P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) 
        {
            RTICdrStream_popState(md5Stream, &cdrState);
            RTIOsapiHeap_freeBuffer(buffer);
            return RTI_FALSE;
        }        
    }   

    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

    if (buffer != NULL) {
        RTICdrStream_popState(md5Stream, &cdrState);
        RTIOsapiHeap_freeBuffer(buffer);
    }
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition * sample=NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }

    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    sample = (P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition *)
    PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }

    if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
        endpoint_data,
        &sample->A_recipientID,
        stream,
        RTI_FALSE, RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
        endpoint_data,
        &sample->A_sourceID,
        stream,
        RTI_FALSE, RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    } 

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    if (!P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_instance_to_keyhash(
        endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_destroy_sample;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_key_kind;

    plugin->getSerializedKeyMaxSizeFnc =   
    (PRESTypePluginGetSerializedKeyMaxSizeFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
    (PRESTypePluginSerializeKeyFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_serialize_key;
    plugin->deserializeKeyFnc =
    (PRESTypePluginDeserializeKeyFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
    (PRESTypePluginDeserializeKeySampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_deserialize_key_sample;

    plugin-> instanceToKeyHashFnc = 
    (PRESTypePluginInstanceToKeyHashFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
    (PRESTypePluginSerializedSampleToKeyHashFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
    (PRESTypePluginGetKeyFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_key;
    plugin->returnKeyFnc =
    (PRESTypePluginReturnKeyFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_return_key;

    plugin->instanceToKeyFnc =
    (PRESTypePluginInstanceToKeyFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
    (PRESTypePluginKeyToInstanceFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    plugin->typeCode =  (struct RTICdrTypeCode *)P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmCondition_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionTYPENAME;

    return plugin;
}

void
P_Alarms_PSM_C_Actual_Alarm_Condition_clearAlarmConditionPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type P_Alarms_PSM_C_Actual_Alarm_Condition
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

P_Alarms_PSM_C_Actual_Alarm_Condition*
P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    P_Alarms_PSM_C_Actual_Alarm_Condition *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Actual_Alarm_Condition);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Actual_Alarm_Condition_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
} 

P_Alarms_PSM_C_Actual_Alarm_Condition *
P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_create_data_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Actual_Alarm_Condition *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Actual_Alarm_Condition);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Actual_Alarm_Condition_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }
    return sample; 
}

P_Alarms_PSM_C_Actual_Alarm_Condition *
P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_create_data(void)
{
    return P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_create_data_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_destroy_data_w_params(
    P_Alarms_PSM_C_Actual_Alarm_Condition *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    P_Alarms_PSM_C_Actual_Alarm_Condition_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_destroy_data_ex(
    P_Alarms_PSM_C_Actual_Alarm_Condition *sample,RTIBool deallocate_pointers) {

    P_Alarms_PSM_C_Actual_Alarm_Condition_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_destroy_data(
    P_Alarms_PSM_C_Actual_Alarm_Condition *sample) {

    P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_copy_data(
    P_Alarms_PSM_C_Actual_Alarm_Condition *dst,
    const P_Alarms_PSM_C_Actual_Alarm_Condition *src)
{
    return P_Alarms_PSM_C_Actual_Alarm_Condition_copy(dst,src);
}

void 
P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_print_data(
    const P_Alarms_PSM_C_Actual_Alarm_Condition *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_sourceID, "A_sourceID", indent_level + 1);

    P_LDM_Common_T_DateTimeTypePluginSupport_print_data(
        &sample->A_timeOfDataGeneration, "A_timeOfDataGeneration", indent_level + 1);

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_alarmSourceID, "A_alarmSourceID", indent_level + 1);

    P_LDM_Common_T_DateTimeTypePluginSupport_print_data(
        &sample->A_dateTimeRaised, "A_dateTimeRaised", indent_level + 1);

    P_LDM_Common_T_BooleanPluginSupport_print_data(
        &sample->A_isOverridden, "A_isOverridden", indent_level + 1);

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_specification_sourceID, "A_specification_sourceID", indent_level + 1);

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_raisedActualAlarm_sourceID, "A_raisedActualAlarm_sourceID", indent_level + 1);

}
P_Alarms_PSM_C_Actual_Alarm_Condition *
P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_create_key_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Actual_Alarm_Condition *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, P_Alarms_PSM_C_Actual_Alarm_ConditionKeyHolder);

    P_Alarms_PSM_C_Actual_Alarm_Condition_initialize_ex(key,allocate_pointers, RTI_TRUE);
    return key;
}

P_Alarms_PSM_C_Actual_Alarm_Condition *
P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_create_key(void)
{
    return  P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_create_key_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_destroy_key_ex(
    P_Alarms_PSM_C_Actual_Alarm_ConditionKeyHolder *key,RTIBool deallocate_pointers)
{
    P_Alarms_PSM_C_Actual_Alarm_Condition_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}

void 
P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_destroy_key(
    P_Alarms_PSM_C_Actual_Alarm_ConditionKeyHolder *key) {

    P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_destroy_key_ex(key,RTI_TRUE);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    unsigned int serializedKeyMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_destroy_data,
        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
        P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_create_key ,            
        (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
        P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    } 
    serializedKeyMaxSize =  P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

    if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
        epd,endpoint_info,serializedKeyMaxSize))  
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition *sample,
    void *handle)
{

    P_Alarms_PSM_C_Actual_Alarm_Condition_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition *dst,
    const P_Alarms_PSM_C_Actual_Alarm_Condition *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return P_Alarms_PSM_C_Actual_Alarm_ConditionPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Actual_Alarm_Condition *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_DateTimeTypePlugin_serialize(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_alarmSourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_DateTimeTypePlugin_serialize(
            endpoint_data,
            &sample->A_dateTimeRaised,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_BooleanPlugin_serialize(
            endpoint_data,
            &sample->A_isOverridden,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_specification_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_raisedActualAlarm_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        P_Alarms_PSM_C_Actual_Alarm_Condition_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_DateTimeTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_alarmSourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_DateTimeTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_dateTimeRaised,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_BooleanPlugin_deserialize_sample(
            endpoint_data,
            &sample->A_isOverridden,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_specification_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_raisedActualAlarm_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool
P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const P_Alarms_PSM_C_Actual_Alarm_Condition *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 0);

    if (buffer == NULL) {
        *length = 
        P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_deserialize_from_cdr_buffer(
    P_Alarms_PSM_C_Actual_Alarm_Condition *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    return P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;

}

RTIBool P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_BooleanPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_BooleanPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_BooleanPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const P_Alarms_PSM_C_Actual_Alarm_Condition * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (sample==NULL) {
        return 0;
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_sourceID);
    current_alignment += P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_timeOfDataGeneration);
    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_alarmSourceID);
    current_alignment += P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_dateTimeRaised);
    current_alignment += P_LDM_Common_T_BooleanPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_isOverridden);
    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_specification_sourceID);
    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_raisedActualAlarm_sourceID);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_USER_KEY;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Actual_Alarm_Condition *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_key_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_key_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_BooleanPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_ConditionKeyHolder *dst, 
    const P_Alarms_PSM_C_Actual_Alarm_Condition *src)
{

    if (endpoint_data) {} /* To avoid warnings */   

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Actual_Alarm_Condition *dst, const
    P_Alarms_PSM_C_Actual_Alarm_ConditionKeyHolder *src)
{

    if (endpoint_data) {} /* To avoid warnings */   
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const P_Alarms_PSM_C_Actual_Alarm_Condition *instance)
{
    struct RTICdrStream * md5Stream = NULL;
    struct RTICdrStreamState cdrState;
    char * buffer = NULL;

    RTICdrStreamState_init(&cdrState);
    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_serialize_key(
        endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {

        int size;

        RTICdrStream_pushState(md5Stream, &cdrState, -1);

        size = (int)P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_serialized_sample_size(
            endpoint_data,
            RTI_FALSE,
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            0,
            instance);

        if (size <= RTICdrStream_getBufferLength(md5Stream)) {
            RTICdrStream_popState(md5Stream, &cdrState);        
            return RTI_FALSE;
        }   

        RTIOsapiHeap_allocateBuffer(&buffer,size,0);

        if (buffer == NULL) {
            RTICdrStream_popState(md5Stream, &cdrState);
            return RTI_FALSE;
        }

        RTICdrStream_set(md5Stream, buffer, size);
        RTIOsapiMemory_zero(
            RTICdrStream_getBuffer(md5Stream),
            RTICdrStream_getBufferLength(md5Stream));
        RTICdrStream_resetPosition(md5Stream);
        RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
        if (!P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) 
        {
            RTICdrStream_popState(md5Stream, &cdrState);
            RTIOsapiHeap_freeBuffer(buffer);
            return RTI_FALSE;
        }        
    }   

    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

    if (buffer != NULL) {
        RTICdrStream_popState(md5Stream, &cdrState);
        RTIOsapiHeap_freeBuffer(buffer);
    }
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;
    P_Alarms_PSM_C_Actual_Alarm_Condition * sample=NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }

    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    sample = (P_Alarms_PSM_C_Actual_Alarm_Condition *)
    PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }

    if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
        endpoint_data,
        &sample->A_sourceID,
        stream,
        RTI_FALSE, RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    } 

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    if (!P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_instance_to_keyhash(
        endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_destroy_sample;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_key_kind;

    plugin->getSerializedKeyMaxSizeFnc =   
    (PRESTypePluginGetSerializedKeyMaxSizeFunction)
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
    (PRESTypePluginSerializeKeyFunction)
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_serialize_key;
    plugin->deserializeKeyFnc =
    (PRESTypePluginDeserializeKeyFunction)
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
    (PRESTypePluginDeserializeKeySampleFunction)
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_deserialize_key_sample;

    plugin-> instanceToKeyHashFnc = 
    (PRESTypePluginInstanceToKeyHashFunction)
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
    (PRESTypePluginSerializedSampleToKeyHashFunction)
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
    (PRESTypePluginGetKeyFunction)
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_key;
    plugin->returnKeyFnc =
    (PRESTypePluginReturnKeyFunction)
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_return_key;

    plugin->instanceToKeyFnc =
    (PRESTypePluginInstanceToKeyFunction)
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
    (PRESTypePluginKeyToInstanceFunction)
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    plugin->typeCode =  (struct RTICdrTypeCode *)P_Alarms_PSM_C_Actual_Alarm_Condition_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = P_Alarms_PSM_C_Actual_Alarm_ConditionTYPENAME;

    return plugin;
}

void
P_Alarms_PSM_C_Actual_Alarm_ConditionPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type P_Alarms_PSM_C_Alarm_Category
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

P_Alarms_PSM_C_Alarm_Category*
P_Alarms_PSM_C_Alarm_CategoryPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    P_Alarms_PSM_C_Alarm_Category *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Alarm_Category);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Alarm_Category_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
} 

P_Alarms_PSM_C_Alarm_Category *
P_Alarms_PSM_C_Alarm_CategoryPluginSupport_create_data_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Alarm_Category *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Alarm_Category);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Alarm_Category_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }
    return sample; 
}

P_Alarms_PSM_C_Alarm_Category *
P_Alarms_PSM_C_Alarm_CategoryPluginSupport_create_data(void)
{
    return P_Alarms_PSM_C_Alarm_CategoryPluginSupport_create_data_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Alarm_CategoryPluginSupport_destroy_data_w_params(
    P_Alarms_PSM_C_Alarm_Category *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    P_Alarms_PSM_C_Alarm_Category_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Alarm_CategoryPluginSupport_destroy_data_ex(
    P_Alarms_PSM_C_Alarm_Category *sample,RTIBool deallocate_pointers) {

    P_Alarms_PSM_C_Alarm_Category_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Alarm_CategoryPluginSupport_destroy_data(
    P_Alarms_PSM_C_Alarm_Category *sample) {

    P_Alarms_PSM_C_Alarm_CategoryPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
P_Alarms_PSM_C_Alarm_CategoryPluginSupport_copy_data(
    P_Alarms_PSM_C_Alarm_Category *dst,
    const P_Alarms_PSM_C_Alarm_Category *src)
{
    return P_Alarms_PSM_C_Alarm_Category_copy(dst,src);
}

void 
P_Alarms_PSM_C_Alarm_CategoryPluginSupport_print_data(
    const P_Alarms_PSM_C_Alarm_Category *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_sourceID, "A_sourceID", indent_level + 1);

    P_LDM_Common_T_DateTimeTypePluginSupport_print_data(
        &sample->A_timeOfDataGeneration, "A_timeOfDataGeneration", indent_level + 1);

    P_LDM_Common_T_Int16PluginSupport_print_data(
        &sample->A_activeAlarmCount, "A_activeAlarmCount", indent_level + 1);

    P_LDM_Common_T_Int16PluginSupport_print_data(
        &sample->A_unacknowledgedAlarmCount, "A_unacknowledgedAlarmCount", indent_level + 1);

    if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_categorisedActualAlarm_sourceID) != NULL) {
        RTICdrType_printArray(
            P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_categorisedActualAlarm_sourceID), 
            P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_categorisedActualAlarm_sourceID),
            sizeof(P_LDM_Common_T_IdentifierType),
            (RTICdrTypePrintFunction)P_LDM_Common_T_IdentifierTypePluginSupport_print_data,
            "A_categorisedActualAlarm_sourceID", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_categorisedActualAlarm_sourceID), 
            P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_categorisedActualAlarm_sourceID),
            (RTICdrTypePrintFunction)P_LDM_Common_T_IdentifierTypePluginSupport_print_data,
            "A_categorisedActualAlarm_sourceID", indent_level + 1);
    }

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_alarmCategorySpecification_sourceID, "A_alarmCategorySpecification_sourceID", indent_level + 1);

}
P_Alarms_PSM_C_Alarm_Category *
P_Alarms_PSM_C_Alarm_CategoryPluginSupport_create_key_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Alarm_Category *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, P_Alarms_PSM_C_Alarm_CategoryKeyHolder);

    P_Alarms_PSM_C_Alarm_Category_initialize_ex(key,allocate_pointers, RTI_TRUE);
    return key;
}

P_Alarms_PSM_C_Alarm_Category *
P_Alarms_PSM_C_Alarm_CategoryPluginSupport_create_key(void)
{
    return  P_Alarms_PSM_C_Alarm_CategoryPluginSupport_create_key_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Alarm_CategoryPluginSupport_destroy_key_ex(
    P_Alarms_PSM_C_Alarm_CategoryKeyHolder *key,RTIBool deallocate_pointers)
{
    P_Alarms_PSM_C_Alarm_Category_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}

void 
P_Alarms_PSM_C_Alarm_CategoryPluginSupport_destroy_key(
    P_Alarms_PSM_C_Alarm_CategoryKeyHolder *key) {

    P_Alarms_PSM_C_Alarm_CategoryPluginSupport_destroy_key_ex(key,RTI_TRUE);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
P_Alarms_PSM_C_Alarm_CategoryPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
P_Alarms_PSM_C_Alarm_CategoryPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
P_Alarms_PSM_C_Alarm_CategoryPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    unsigned int serializedKeyMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        P_Alarms_PSM_C_Alarm_CategoryPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        P_Alarms_PSM_C_Alarm_CategoryPluginSupport_destroy_data,
        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
        P_Alarms_PSM_C_Alarm_CategoryPluginSupport_create_key ,            
        (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
        P_Alarms_PSM_C_Alarm_CategoryPluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    } 
    serializedKeyMaxSize =  P_Alarms_PSM_C_Alarm_CategoryPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

    if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
        epd,endpoint_info,serializedKeyMaxSize))  
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = P_Alarms_PSM_C_Alarm_CategoryPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            P_Alarms_PSM_C_Alarm_CategoryPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            P_Alarms_PSM_C_Alarm_CategoryPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
P_Alarms_PSM_C_Alarm_CategoryPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
P_Alarms_PSM_C_Alarm_CategoryPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Category *sample,
    void *handle)
{

    P_Alarms_PSM_C_Alarm_Category_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
P_Alarms_PSM_C_Alarm_CategoryPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Category *dst,
    const P_Alarms_PSM_C_Alarm_Category *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return P_Alarms_PSM_C_Alarm_CategoryPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
P_Alarms_PSM_C_Alarm_CategoryPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
P_Alarms_PSM_C_Alarm_CategoryPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Alarm_Category *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_DateTimeTypePlugin_serialize(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_Int16Plugin_serialize(
            endpoint_data,
            &sample->A_activeAlarmCount,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_Int16Plugin_serialize(
            endpoint_data,
            &sample->A_unacknowledgedAlarmCount,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_categorisedActualAlarm_sourceID) != NULL) {
            if (!RTICdrStream_serializeNonPrimitiveSequence(
                stream,
                P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_categorisedActualAlarm_sourceID),
                P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_categorisedActualAlarm_sourceID),
                (100),
                sizeof(P_LDM_Common_T_IdentifierType),
                (RTICdrStreamSerializeFunction)P_LDM_Common_T_IdentifierTypePlugin_serialize,
                RTI_FALSE, encapsulation_id,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            } 
        } else {
            if (!RTICdrStream_serializeNonPrimitivePointerSequence(
                stream,
                (const void **) P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_categorisedActualAlarm_sourceID),
                P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_categorisedActualAlarm_sourceID),
                (100),
                (RTICdrStreamSerializeFunction)P_LDM_Common_T_IdentifierTypePlugin_serialize,
                RTI_FALSE, encapsulation_id,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            } 

        } 

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_alarmCategorySpecification_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
P_Alarms_PSM_C_Alarm_CategoryPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Category *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        P_Alarms_PSM_C_Alarm_Category_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_DateTimeTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_Int16Plugin_deserialize_sample(
            endpoint_data,
            &sample->A_activeAlarmCount,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_Int16Plugin_deserialize_sample(
            endpoint_data,
            &sample->A_unacknowledgedAlarmCount,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_categorisedActualAlarm_sourceID) != NULL) {
                if (!RTICdrStream_deserializeNonPrimitiveSequence(
                    stream,
                    P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_categorisedActualAlarm_sourceID),
                    &sequence_length,
                    P_LDM_Common_T_IdentifierTypeSeq_get_maximum(&sample->A_categorisedActualAlarm_sourceID),
                    sizeof(P_LDM_Common_T_IdentifierType),
                    (RTICdrStreamDeserializeFunction)P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample,
                    RTI_FALSE,RTI_TRUE,
                    endpoint_data,endpoint_plugin_qos)) {
                    goto fin; 
                }
            } else {
                if (!RTICdrStream_deserializeNonPrimitivePointerSequence(
                    stream,
                    (void **) P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_categorisedActualAlarm_sourceID),
                    &sequence_length,
                    P_LDM_Common_T_IdentifierTypeSeq_get_maximum(&sample->A_categorisedActualAlarm_sourceID),
                    (RTICdrStreamDeserializeFunction)P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample,
                    RTI_FALSE,RTI_TRUE,
                    endpoint_data,endpoint_plugin_qos)) {
                    goto fin; 
                }
            }
            if (!P_LDM_Common_T_IdentifierTypeSeq_set_length(
                &sample->A_categorisedActualAlarm_sourceID,sequence_length)) {
                return RTI_FALSE;
            }        

        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_alarmCategorySpecification_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool
P_Alarms_PSM_C_Alarm_CategoryPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const P_Alarms_PSM_C_Alarm_Category *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    P_Alarms_PSM_C_Alarm_CategoryPlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 0);

    if (buffer == NULL) {
        *length = 
        P_Alarms_PSM_C_Alarm_CategoryPlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = P_Alarms_PSM_C_Alarm_CategoryPlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
P_Alarms_PSM_C_Alarm_CategoryPlugin_deserialize_from_cdr_buffer(
    P_Alarms_PSM_C_Alarm_Category *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    return P_Alarms_PSM_C_Alarm_CategoryPlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

RTIBool 
P_Alarms_PSM_C_Alarm_CategoryPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Category **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Alarm_CategoryPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;

}

RTIBool P_Alarms_PSM_C_Alarm_CategoryPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_Int16Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_Int16Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipNonPrimitiveSequence(
                stream,
                &sequence_length,
                sizeof(P_LDM_Common_T_IdentifierType),
                (RTICdrStreamSkipFunction)P_LDM_Common_T_IdentifierTypePlugin_skip,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                goto fin; 
            }
        }
        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
P_Alarms_PSM_C_Alarm_CategoryPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_Int16Plugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_Int16Plugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=RTICdrType_getNonPrimitiveSequenceMaxSizeSerializedEx(
        overflow,
        current_alignment, (100),
        P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex,
        RTI_FALSE,encapsulation_id,endpoint_data);

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
P_Alarms_PSM_C_Alarm_CategoryPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Alarm_CategoryPlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
P_Alarms_PSM_C_Alarm_CategoryPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_Int16Plugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_Int16Plugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=RTICdrType_getNonPrimitiveSequenceMaxSizeSerialized(
        current_alignment, 0,
        P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size,
        RTI_FALSE,encapsulation_id,endpoint_data);
    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
P_Alarms_PSM_C_Alarm_CategoryPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const P_Alarms_PSM_C_Alarm_Category * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (sample==NULL) {
        return 0;
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_sourceID);
    current_alignment += P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_timeOfDataGeneration);
    current_alignment += P_LDM_Common_T_Int16Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_activeAlarmCount);
    current_alignment += P_LDM_Common_T_Int16Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_unacknowledgedAlarmCount);
    if (P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_categorisedActualAlarm_sourceID) != NULL) {
        current_alignment += RTICdrStream_getNonPrimitiveSequenceSerializedSize(
            current_alignment, P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_categorisedActualAlarm_sourceID),
            sizeof(P_LDM_Common_T_IdentifierType),
            (RTICdrTypeGetSerializedSampleSizeFunction)P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            P_LDM_Common_T_IdentifierTypeSeq_get_contiguous_bufferI(&sample->A_categorisedActualAlarm_sourceID),
            endpoint_data);
    } else {
        current_alignment += RTICdrStream_getNonPrimitivePointerSequenceSerializedSize(
            current_alignment,  
            P_LDM_Common_T_IdentifierTypeSeq_get_length(&sample->A_categorisedActualAlarm_sourceID),
            sizeof(P_LDM_Common_T_IdentifierType),
            (RTICdrTypeGetSerializedSampleSizeFunction)P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            (const void **)P_LDM_Common_T_IdentifierTypeSeq_get_discontiguous_bufferI(&sample->A_categorisedActualAlarm_sourceID),
            endpoint_data);
    }
    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_alarmCategorySpecification_sourceID);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
P_Alarms_PSM_C_Alarm_CategoryPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_USER_KEY;
}

RTIBool 
P_Alarms_PSM_C_Alarm_CategoryPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Alarm_Category *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Alarm_CategoryPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Category *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_key_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Alarm_CategoryPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Category **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Alarm_CategoryPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
P_Alarms_PSM_C_Alarm_CategoryPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_key_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
P_Alarms_PSM_C_Alarm_CategoryPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Alarm_CategoryPlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
P_Alarms_PSM_C_Alarm_CategoryPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Category *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_Int16Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_Int16Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        {
            RTICdrUnsignedLong sequence_length;
            if (!RTICdrStream_skipNonPrimitiveSequence(
                stream,
                &sequence_length,
                sizeof(P_LDM_Common_T_IdentifierType),
                (RTICdrStreamSkipFunction)P_LDM_Common_T_IdentifierTypePlugin_skip,
                RTI_FALSE,RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                goto fin; 
            }
        }

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Alarm_CategoryPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_CategoryKeyHolder *dst, 
    const P_Alarms_PSM_C_Alarm_Category *src)
{

    if (endpoint_data) {} /* To avoid warnings */   

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Alarm_CategoryPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Alarm_Category *dst, const
    P_Alarms_PSM_C_Alarm_CategoryKeyHolder *src)
{

    if (endpoint_data) {} /* To avoid warnings */   
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Alarm_CategoryPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const P_Alarms_PSM_C_Alarm_Category *instance)
{
    struct RTICdrStream * md5Stream = NULL;
    struct RTICdrStreamState cdrState;
    char * buffer = NULL;

    RTICdrStreamState_init(&cdrState);
    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!P_Alarms_PSM_C_Alarm_CategoryPlugin_serialize_key(
        endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {

        int size;

        RTICdrStream_pushState(md5Stream, &cdrState, -1);

        size = (int)P_Alarms_PSM_C_Alarm_CategoryPlugin_get_serialized_sample_size(
            endpoint_data,
            RTI_FALSE,
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            0,
            instance);

        if (size <= RTICdrStream_getBufferLength(md5Stream)) {
            RTICdrStream_popState(md5Stream, &cdrState);        
            return RTI_FALSE;
        }   

        RTIOsapiHeap_allocateBuffer(&buffer,size,0);

        if (buffer == NULL) {
            RTICdrStream_popState(md5Stream, &cdrState);
            return RTI_FALSE;
        }

        RTICdrStream_set(md5Stream, buffer, size);
        RTIOsapiMemory_zero(
            RTICdrStream_getBuffer(md5Stream),
            RTICdrStream_getBufferLength(md5Stream));
        RTICdrStream_resetPosition(md5Stream);
        RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
        if (!P_Alarms_PSM_C_Alarm_CategoryPlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) 
        {
            RTICdrStream_popState(md5Stream, &cdrState);
            RTIOsapiHeap_freeBuffer(buffer);
            return RTI_FALSE;
        }        
    }   

    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

    if (buffer != NULL) {
        RTICdrStream_popState(md5Stream, &cdrState);
        RTIOsapiHeap_freeBuffer(buffer);
    }
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Alarm_CategoryPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;
    P_Alarms_PSM_C_Alarm_Category * sample=NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }

    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    sample = (P_Alarms_PSM_C_Alarm_Category *)
    PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }

    if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
        endpoint_data,
        &sample->A_sourceID,
        stream,
        RTI_FALSE, RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    } 

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    if (!P_Alarms_PSM_C_Alarm_CategoryPlugin_instance_to_keyhash(
        endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *P_Alarms_PSM_C_Alarm_CategoryPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    P_Alarms_PSM_C_Alarm_CategoryPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    P_Alarms_PSM_C_Alarm_CategoryPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    P_Alarms_PSM_C_Alarm_CategoryPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    P_Alarms_PSM_C_Alarm_CategoryPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    P_Alarms_PSM_C_Alarm_CategoryPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    P_Alarms_PSM_C_Alarm_CategoryPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    P_Alarms_PSM_C_Alarm_CategoryPlugin_destroy_sample;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    P_Alarms_PSM_C_Alarm_CategoryPlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    P_Alarms_PSM_C_Alarm_CategoryPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    P_Alarms_PSM_C_Alarm_CategoryPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    P_Alarms_PSM_C_Alarm_CategoryPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    P_Alarms_PSM_C_Alarm_CategoryPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    P_Alarms_PSM_C_Alarm_CategoryPlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    P_Alarms_PSM_C_Alarm_CategoryPlugin_get_key_kind;

    plugin->getSerializedKeyMaxSizeFnc =   
    (PRESTypePluginGetSerializedKeyMaxSizeFunction)
    P_Alarms_PSM_C_Alarm_CategoryPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
    (PRESTypePluginSerializeKeyFunction)
    P_Alarms_PSM_C_Alarm_CategoryPlugin_serialize_key;
    plugin->deserializeKeyFnc =
    (PRESTypePluginDeserializeKeyFunction)
    P_Alarms_PSM_C_Alarm_CategoryPlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
    (PRESTypePluginDeserializeKeySampleFunction)
    P_Alarms_PSM_C_Alarm_CategoryPlugin_deserialize_key_sample;

    plugin-> instanceToKeyHashFnc = 
    (PRESTypePluginInstanceToKeyHashFunction)
    P_Alarms_PSM_C_Alarm_CategoryPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
    (PRESTypePluginSerializedSampleToKeyHashFunction)
    P_Alarms_PSM_C_Alarm_CategoryPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
    (PRESTypePluginGetKeyFunction)
    P_Alarms_PSM_C_Alarm_CategoryPlugin_get_key;
    plugin->returnKeyFnc =
    (PRESTypePluginReturnKeyFunction)
    P_Alarms_PSM_C_Alarm_CategoryPlugin_return_key;

    plugin->instanceToKeyFnc =
    (PRESTypePluginInstanceToKeyFunction)
    P_Alarms_PSM_C_Alarm_CategoryPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
    (PRESTypePluginKeyToInstanceFunction)
    P_Alarms_PSM_C_Alarm_CategoryPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    plugin->typeCode =  (struct RTICdrTypeCode *)P_Alarms_PSM_C_Alarm_Category_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    P_Alarms_PSM_C_Alarm_CategoryPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    P_Alarms_PSM_C_Alarm_CategoryPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    P_Alarms_PSM_C_Alarm_CategoryPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = P_Alarms_PSM_C_Alarm_CategoryTYPENAME;

    return plugin;
}

void
P_Alarms_PSM_C_Alarm_CategoryPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type P_Alarms_PSM_C_Platform_With_Alarms_CP
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

P_Alarms_PSM_C_Platform_With_Alarms_CP*
P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    P_Alarms_PSM_C_Platform_With_Alarms_CP *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Platform_With_Alarms_CP);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Platform_With_Alarms_CP_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
} 

P_Alarms_PSM_C_Platform_With_Alarms_CP *
P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_create_data_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Platform_With_Alarms_CP *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, P_Alarms_PSM_C_Platform_With_Alarms_CP);

    if(sample != NULL) {
        if (!P_Alarms_PSM_C_Platform_With_Alarms_CP_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }
    return sample; 
}

P_Alarms_PSM_C_Platform_With_Alarms_CP *
P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_create_data(void)
{
    return P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_create_data_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_destroy_data_w_params(
    P_Alarms_PSM_C_Platform_With_Alarms_CP *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    P_Alarms_PSM_C_Platform_With_Alarms_CP_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_destroy_data_ex(
    P_Alarms_PSM_C_Platform_With_Alarms_CP *sample,RTIBool deallocate_pointers) {

    P_Alarms_PSM_C_Platform_With_Alarms_CP_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}

void 
P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_destroy_data(
    P_Alarms_PSM_C_Platform_With_Alarms_CP *sample) {

    P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_copy_data(
    P_Alarms_PSM_C_Platform_With_Alarms_CP *dst,
    const P_Alarms_PSM_C_Platform_With_Alarms_CP *src)
{
    return P_Alarms_PSM_C_Platform_With_Alarms_CP_copy(dst,src);
}

void 
P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_print_data(
    const P_Alarms_PSM_C_Platform_With_Alarms_CP *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_sourceID, "A_sourceID", indent_level + 1);

    P_LDM_Common_T_DateTimeTypePluginSupport_print_data(
        &sample->A_timeOfDataGeneration, "A_timeOfDataGeneration", indent_level + 1);

    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        &sample->A_Platform_With_Alarms_sourceID, "A_Platform_With_Alarms_sourceID", indent_level + 1);

}
P_Alarms_PSM_C_Platform_With_Alarms_CP *
P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_create_key_ex(RTIBool allocate_pointers){
    P_Alarms_PSM_C_Platform_With_Alarms_CP *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, P_Alarms_PSM_C_Platform_With_Alarms_CPKeyHolder);

    P_Alarms_PSM_C_Platform_With_Alarms_CP_initialize_ex(key,allocate_pointers, RTI_TRUE);
    return key;
}

P_Alarms_PSM_C_Platform_With_Alarms_CP *
P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_create_key(void)
{
    return  P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_create_key_ex(RTI_TRUE);
}

void 
P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_destroy_key_ex(
    P_Alarms_PSM_C_Platform_With_Alarms_CPKeyHolder *key,RTIBool deallocate_pointers)
{
    P_Alarms_PSM_C_Platform_With_Alarms_CP_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}

void 
P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_destroy_key(
    P_Alarms_PSM_C_Platform_With_Alarms_CPKeyHolder *key) {

    P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_destroy_key_ex(key,RTI_TRUE);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    return PRESTypePluginDefaultParticipantData_new(participant_info);

}

void 
P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

    PRESTypePluginDefaultParticipantData_delete(participant_data);
}

PRESTypePluginEndpointData
P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    unsigned int serializedKeyMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_destroy_data,
        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
        P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_create_key ,            
        (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
        P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    } 
    serializedKeyMaxSize =  P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

    if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
        epd,endpoint_info,serializedKeyMaxSize))  
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Platform_With_Alarms_CP *sample,
    void *handle)
{

    P_Alarms_PSM_C_Platform_With_Alarms_CP_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Platform_With_Alarms_CP *dst,
    const P_Alarms_PSM_C_Platform_With_Alarms_CP *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return P_Alarms_PSM_C_Platform_With_Alarms_CPPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Platform_With_Alarms_CP *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_sample) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_DateTimeTypePlugin_serialize(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize(
            endpoint_data,
            &sample->A_Platform_With_Alarms_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return retval;
}

RTIBool 
P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Platform_With_Alarms_CP *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        P_Alarms_PSM_C_Platform_With_Alarms_CP_initialize_ex(sample, RTI_FALSE, RTI_FALSE);

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_DateTimeTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_timeOfDataGeneration,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
            endpoint_data,
            &sample->A_Platform_With_Alarms_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool
P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const P_Alarms_PSM_C_Platform_With_Alarms_CP *sample)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;

    if (length == NULL) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_serialized_sample_max_size(
        NULL, RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 0);

    if (buffer == NULL) {
        *length = 
        P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_serialized_sample_size(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_serialize(
        (PRESTypePluginEndpointData)&epd, sample, &stream, 
        RTI_TRUE, RTI_CDR_ENCAPSULATION_ID_CDR_NATIVE, 
        RTI_TRUE, NULL);  

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;     
}

RTIBool
P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_deserialize_from_cdr_buffer(
    P_Alarms_PSM_C_Platform_With_Alarms_CP *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    return P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_deserialize_sample( 
        NULL, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

RTIBool 
P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Platform_With_Alarms_CP **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */

    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;

}

RTIBool P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

unsigned int 
P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

unsigned int 
P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_serialized_sample_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int 
P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;
}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const P_Alarms_PSM_C_Platform_With_Alarms_CP * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (sample==NULL) {
        return 0;
    }

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_sourceID);
    current_alignment += P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_timeOfDataGeneration);
    current_alignment += P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id,
        current_alignment, &sample->A_Platform_With_Alarms_sourceID);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_USER_KEY;
}

RTIBool 
P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const P_Alarms_PSM_C_Platform_With_Alarms_CP *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if(serialize_encapsulation) {
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    if(serialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialize_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, encapsulation_id,
            RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Platform_With_Alarms_CP *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(deserialize_encapsulation) {

        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }
    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_deserialize_key_sample(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Platform_With_Alarms_CP **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }

    return result;    

}

unsigned int
P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=P_LDM_Common_T_IdentifierTypePlugin_get_serialized_key_max_size_ex(
        endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;
}

unsigned int
P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_serialized_key_max_size_ex(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Platform_With_Alarms_CP *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
            endpoint_data,
            &sample->A_sourceID,
            stream,
            RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
        if (!P_LDM_Common_T_DateTimeTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

        if (!P_LDM_Common_T_IdentifierTypePlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
            goto fin; 
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Platform_With_Alarms_CPKeyHolder *dst, 
    const P_Alarms_PSM_C_Platform_With_Alarms_CP *src)
{

    if (endpoint_data) {} /* To avoid warnings */   

    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    P_Alarms_PSM_C_Platform_With_Alarms_CP *dst, const
    P_Alarms_PSM_C_Platform_With_Alarms_CPKeyHolder *src)
{

    if (endpoint_data) {} /* To avoid warnings */   
    if (!P_LDM_Common_T_IdentifierType_copy(
        &dst->A_sourceID, &src->A_sourceID)) {
        return RTI_FALSE;
    } 
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const P_Alarms_PSM_C_Platform_With_Alarms_CP *instance)
{
    struct RTICdrStream * md5Stream = NULL;
    struct RTICdrStreamState cdrState;
    char * buffer = NULL;

    RTICdrStreamState_init(&cdrState);
    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_serialize_key(
        endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {

        int size;

        RTICdrStream_pushState(md5Stream, &cdrState, -1);

        size = (int)P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_serialized_sample_size(
            endpoint_data,
            RTI_FALSE,
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            0,
            instance);

        if (size <= RTICdrStream_getBufferLength(md5Stream)) {
            RTICdrStream_popState(md5Stream, &cdrState);        
            return RTI_FALSE;
        }   

        RTIOsapiHeap_allocateBuffer(&buffer,size,0);

        if (buffer == NULL) {
            RTICdrStream_popState(md5Stream, &cdrState);
            return RTI_FALSE;
        }

        RTICdrStream_set(md5Stream, buffer, size);
        RTIOsapiMemory_zero(
            RTICdrStream_getBuffer(md5Stream),
            RTICdrStream_getBufferLength(md5Stream));
        RTICdrStream_resetPosition(md5Stream);
        RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
        if (!P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) 
        {
            RTICdrStream_popState(md5Stream, &cdrState);
            RTIOsapiHeap_freeBuffer(buffer);
            return RTI_FALSE;
        }        
    }   

    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

    if (buffer != NULL) {
        RTICdrStream_popState(md5Stream, &cdrState);
        RTIOsapiHeap_freeBuffer(buffer);
    }
    return RTI_TRUE;
}

RTIBool 
P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;
    P_Alarms_PSM_C_Platform_With_Alarms_CP * sample=NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }

    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }

    sample = (P_Alarms_PSM_C_Platform_With_Alarms_CP *)
    PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }

    if(!P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
        endpoint_data,
        &sample->A_sourceID,
        stream,
        RTI_FALSE, RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return error;
    } 

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }

    if (!P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_instance_to_keyhash(
        endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_destroy_sample;

    plugin->serializeFnc =
    (PRESTypePluginSerializeFunction)
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction)
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_serialized_sample_min_size;

    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_return_sample;

    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_key_kind;

    plugin->getSerializedKeyMaxSizeFnc =   
    (PRESTypePluginGetSerializedKeyMaxSizeFunction)
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
    (PRESTypePluginSerializeKeyFunction)
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_serialize_key;
    plugin->deserializeKeyFnc =
    (PRESTypePluginDeserializeKeyFunction)
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
    (PRESTypePluginDeserializeKeySampleFunction)
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_deserialize_key_sample;

    plugin-> instanceToKeyHashFnc = 
    (PRESTypePluginInstanceToKeyHashFunction)
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
    (PRESTypePluginSerializedSampleToKeyHashFunction)
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
    (PRESTypePluginGetKeyFunction)
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_key;
    plugin->returnKeyFnc =
    (PRESTypePluginReturnKeyFunction)
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_return_key;

    plugin->instanceToKeyFnc =
    (PRESTypePluginInstanceToKeyFunction)
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
    (PRESTypePluginKeyToInstanceFunction)
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    plugin->typeCode =  (struct RTICdrTypeCode *)P_Alarms_PSM_C_Platform_With_Alarms_CP_get_typecode();

    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_get_serialized_sample_size;

    plugin->endpointTypeName = P_Alarms_PSM_C_Platform_With_Alarms_CPTYPENAME;

    return plugin;
}

void
P_Alarms_PSM_C_Platform_With_Alarms_CPPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

