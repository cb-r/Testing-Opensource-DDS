

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LDM_Common.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LDM_CommonPlugin_1219687462_h
#define LDM_CommonPlugin_1219687462_h

#include "LDM_Common.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

extern "C" {

    #define P_LDM_Common_T_Int32Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_Int32Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_Int32Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_Int32Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_Int32Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_Int32*
    P_LDM_Common_T_Int32PluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_Int32*
    P_LDM_Common_T_Int32PluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_Int32*
    P_LDM_Common_T_Int32PluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Int32PluginSupport_copy_data(
        P_LDM_Common_T_Int32 *out,
        const P_LDM_Common_T_Int32 *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Int32PluginSupport_destroy_data_w_params(
        P_LDM_Common_T_Int32 *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Int32PluginSupport_destroy_data_ex(
        P_LDM_Common_T_Int32 *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Int32PluginSupport_destroy_data(
        P_LDM_Common_T_Int32 *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Int32PluginSupport_print_data(
        const P_LDM_Common_T_Int32 *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Int32Plugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Int32 *out,
        const P_LDM_Common_T_Int32 *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Int32Plugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_Int32 *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Int32Plugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Int32 *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_Int32Plugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Int32Plugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Int32Plugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Int32Plugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_Int32Plugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_Int32 * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_Int32Plugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Int32Plugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Int32Plugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Int32Plugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_Int32 *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Int32Plugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Int32 * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_Int32Plugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Int32 *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_Position2DTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_Position2DTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_Position2DTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_Position2DTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_Position2DTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_Position2DType*
    P_LDM_Common_T_Position2DTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_Position2DType*
    P_LDM_Common_T_Position2DTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_Position2DType*
    P_LDM_Common_T_Position2DTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Position2DTypePluginSupport_copy_data(
        P_LDM_Common_T_Position2DType *out,
        const P_LDM_Common_T_Position2DType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Position2DTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_Position2DType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Position2DTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_Position2DType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Position2DTypePluginSupport_destroy_data(
        P_LDM_Common_T_Position2DType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Position2DTypePluginSupport_print_data(
        const P_LDM_Common_T_Position2DType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Position2DTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Position2DType *out,
        const P_LDM_Common_T_Position2DType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Position2DTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_Position2DType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Position2DTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Position2DType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_Position2DTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_LDM_Common_T_Position2DType *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Position2DTypePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Position2DType **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_Position2DTypePlugin_deserialize_from_cdr_buffer(
        P_LDM_Common_T_Position2DType *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_Position2DTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Position2DTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Position2DTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Position2DTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_Position2DTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_Position2DType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_Position2DTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Position2DTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Position2DTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Position2DTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_Position2DType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Position2DTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Position2DType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Position2DTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Position2DType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_Position2DTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Position2DType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Axis3DTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_Axis3DType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Axis3DTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Axis3DType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_Axis3DTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Axis3DTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Axis3DTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Axis3DTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_Axis3DTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_Axis3DType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Axis3DTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Axis3DTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Axis3DTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_Axis3DType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Axis3DTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Axis3DType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_Axis3DTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Axis3DType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    P_LDM_Common_T_Axis3DTypePluginSupport_print_data(
        const P_LDM_Common_T_Axis3DType *sample, const char *desc, int indent_level);

    #define P_LDM_Common_T_DoublePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_DoublePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_DoublePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_DoublePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_DoublePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_Double*
    P_LDM_Common_T_DoublePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_Double*
    P_LDM_Common_T_DoublePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_Double*
    P_LDM_Common_T_DoublePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DoublePluginSupport_copy_data(
        P_LDM_Common_T_Double *out,
        const P_LDM_Common_T_Double *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_DoublePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_Double *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_DoublePluginSupport_destroy_data_ex(
        P_LDM_Common_T_Double *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_DoublePluginSupport_destroy_data(
        P_LDM_Common_T_Double *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_DoublePluginSupport_print_data(
        const P_LDM_Common_T_Double *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DoublePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Double *out,
        const P_LDM_Common_T_Double *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DoublePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_Double *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DoublePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Double *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_DoublePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_DoublePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_DoublePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_DoublePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_DoublePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_Double * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_DoublePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_DoublePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_DoublePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DoublePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_Double *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DoublePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Double * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_DoublePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Double *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_CharPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_CharPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_CharPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_CharPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_CharPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_Char*
    P_LDM_Common_T_CharPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_Char*
    P_LDM_Common_T_CharPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_Char*
    P_LDM_Common_T_CharPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CharPluginSupport_copy_data(
        P_LDM_Common_T_Char *out,
        const P_LDM_Common_T_Char *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_CharPluginSupport_destroy_data_w_params(
        P_LDM_Common_T_Char *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_CharPluginSupport_destroy_data_ex(
        P_LDM_Common_T_Char *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_CharPluginSupport_destroy_data(
        P_LDM_Common_T_Char *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_CharPluginSupport_print_data(
        const P_LDM_Common_T_Char *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CharPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Char *out,
        const P_LDM_Common_T_Char *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CharPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_Char *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CharPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Char *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_CharPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CharPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CharPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CharPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_CharPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_Char * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_CharPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CharPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CharPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CharPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_Char *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CharPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Char * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_CharPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Char *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_CapacityInAmpereHoursTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_CapacityInAmpereHoursTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_CapacityInAmpereHoursTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_CapacityInAmpereHoursTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_CapacityInAmpereHoursTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_CapacityInAmpereHoursType*
    P_LDM_Common_T_CapacityInAmpereHoursTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_CapacityInAmpereHoursType*
    P_LDM_Common_T_CapacityInAmpereHoursTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_CapacityInAmpereHoursType*
    P_LDM_Common_T_CapacityInAmpereHoursTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CapacityInAmpereHoursTypePluginSupport_copy_data(
        P_LDM_Common_T_CapacityInAmpereHoursType *out,
        const P_LDM_Common_T_CapacityInAmpereHoursType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_CapacityInAmpereHoursTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_CapacityInAmpereHoursType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_CapacityInAmpereHoursTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_CapacityInAmpereHoursType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_CapacityInAmpereHoursTypePluginSupport_destroy_data(
        P_LDM_Common_T_CapacityInAmpereHoursType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_CapacityInAmpereHoursTypePluginSupport_print_data(
        const P_LDM_Common_T_CapacityInAmpereHoursType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CapacityInAmpereHoursTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_CapacityInAmpereHoursType *out,
        const P_LDM_Common_T_CapacityInAmpereHoursType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CapacityInAmpereHoursTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_CapacityInAmpereHoursType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CapacityInAmpereHoursTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_CapacityInAmpereHoursType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_CapacityInAmpereHoursTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CapacityInAmpereHoursTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CapacityInAmpereHoursTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CapacityInAmpereHoursTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_CapacityInAmpereHoursTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_CapacityInAmpereHoursType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_CapacityInAmpereHoursTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CapacityInAmpereHoursTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CapacityInAmpereHoursTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CapacityInAmpereHoursTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_CapacityInAmpereHoursType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CapacityInAmpereHoursTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_CapacityInAmpereHoursType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_CapacityInAmpereHoursTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_CapacityInAmpereHoursType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_BooleanPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_BooleanPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_BooleanPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_BooleanPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_BooleanPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_Boolean*
    P_LDM_Common_T_BooleanPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_Boolean*
    P_LDM_Common_T_BooleanPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_Boolean*
    P_LDM_Common_T_BooleanPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_BooleanPluginSupport_copy_data(
        P_LDM_Common_T_Boolean *out,
        const P_LDM_Common_T_Boolean *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_BooleanPluginSupport_destroy_data_w_params(
        P_LDM_Common_T_Boolean *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_BooleanPluginSupport_destroy_data_ex(
        P_LDM_Common_T_Boolean *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_BooleanPluginSupport_destroy_data(
        P_LDM_Common_T_Boolean *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_BooleanPluginSupport_print_data(
        const P_LDM_Common_T_Boolean *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_BooleanPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Boolean *out,
        const P_LDM_Common_T_Boolean *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_BooleanPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_Boolean *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_BooleanPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Boolean *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_BooleanPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_BooleanPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_BooleanPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_BooleanPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_BooleanPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_Boolean * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_BooleanPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_BooleanPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_BooleanPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_BooleanPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_Boolean *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_BooleanPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Boolean * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_BooleanPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Boolean *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_Int64Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_Int64Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_Int64Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_Int64Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_Int64Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_Int64*
    P_LDM_Common_T_Int64PluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_Int64*
    P_LDM_Common_T_Int64PluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_Int64*
    P_LDM_Common_T_Int64PluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Int64PluginSupport_copy_data(
        P_LDM_Common_T_Int64 *out,
        const P_LDM_Common_T_Int64 *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Int64PluginSupport_destroy_data_w_params(
        P_LDM_Common_T_Int64 *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Int64PluginSupport_destroy_data_ex(
        P_LDM_Common_T_Int64 *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Int64PluginSupport_destroy_data(
        P_LDM_Common_T_Int64 *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Int64PluginSupport_print_data(
        const P_LDM_Common_T_Int64 *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Int64Plugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Int64 *out,
        const P_LDM_Common_T_Int64 *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Int64Plugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_Int64 *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Int64Plugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Int64 *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_Int64Plugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Int64Plugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Int64Plugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Int64Plugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_Int64Plugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_Int64 * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_Int64Plugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Int64Plugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Int64Plugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Int64Plugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_Int64 *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Int64Plugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Int64 * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_Int64Plugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Int64 *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_Size2DTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_Size2DTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_Size2DTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_Size2DTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_Size2DTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_Size2DType*
    P_LDM_Common_T_Size2DTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_Size2DType*
    P_LDM_Common_T_Size2DTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_Size2DType*
    P_LDM_Common_T_Size2DTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Size2DTypePluginSupport_copy_data(
        P_LDM_Common_T_Size2DType *out,
        const P_LDM_Common_T_Size2DType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Size2DTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_Size2DType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Size2DTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_Size2DType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Size2DTypePluginSupport_destroy_data(
        P_LDM_Common_T_Size2DType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Size2DTypePluginSupport_print_data(
        const P_LDM_Common_T_Size2DType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Size2DTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Size2DType *out,
        const P_LDM_Common_T_Size2DType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Size2DTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_Size2DType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Size2DTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Size2DType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_Size2DTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_LDM_Common_T_Size2DType *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Size2DTypePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Size2DType **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_Size2DTypePlugin_deserialize_from_cdr_buffer(
        P_LDM_Common_T_Size2DType *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_Size2DTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Size2DTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Size2DTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Size2DTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_Size2DTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_Size2DType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_Size2DTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Size2DTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Size2DTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Size2DTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_Size2DType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Size2DTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Size2DType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Size2DTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Size2DType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_Size2DTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Size2DType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_AngleInRadiansTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_AngleInRadiansTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_AngleInRadiansTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_AngleInRadiansTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_AngleInRadiansTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_AngleInRadiansType*
    P_LDM_Common_T_AngleInRadiansTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_AngleInRadiansType*
    P_LDM_Common_T_AngleInRadiansTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_AngleInRadiansType*
    P_LDM_Common_T_AngleInRadiansTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngleInRadiansTypePluginSupport_copy_data(
        P_LDM_Common_T_AngleInRadiansType *out,
        const P_LDM_Common_T_AngleInRadiansType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AngleInRadiansTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_AngleInRadiansType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AngleInRadiansTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_AngleInRadiansType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AngleInRadiansTypePluginSupport_destroy_data(
        P_LDM_Common_T_AngleInRadiansType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AngleInRadiansTypePluginSupport_print_data(
        const P_LDM_Common_T_AngleInRadiansType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngleInRadiansTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AngleInRadiansType *out,
        const P_LDM_Common_T_AngleInRadiansType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngleInRadiansTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_AngleInRadiansType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngleInRadiansTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AngleInRadiansType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_AngleInRadiansTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AngleInRadiansTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AngleInRadiansTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AngleInRadiansTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_AngleInRadiansTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_AngleInRadiansType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_AngleInRadiansTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AngleInRadiansTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AngleInRadiansTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngleInRadiansTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_AngleInRadiansType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngleInRadiansTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AngleInRadiansType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_AngleInRadiansTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AngleInRadiansType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_Int16Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_Int16Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_Int16Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_Int16Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_Int16Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_Int16*
    P_LDM_Common_T_Int16PluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_Int16*
    P_LDM_Common_T_Int16PluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_Int16*
    P_LDM_Common_T_Int16PluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Int16PluginSupport_copy_data(
        P_LDM_Common_T_Int16 *out,
        const P_LDM_Common_T_Int16 *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Int16PluginSupport_destroy_data_w_params(
        P_LDM_Common_T_Int16 *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Int16PluginSupport_destroy_data_ex(
        P_LDM_Common_T_Int16 *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Int16PluginSupport_destroy_data(
        P_LDM_Common_T_Int16 *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Int16PluginSupport_print_data(
        const P_LDM_Common_T_Int16 *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Int16Plugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Int16 *out,
        const P_LDM_Common_T_Int16 *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Int16Plugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_Int16 *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Int16Plugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Int16 *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_Int16Plugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Int16Plugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Int16Plugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Int16Plugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_Int16Plugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_Int16 * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_Int16Plugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Int16Plugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Int16Plugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Int16Plugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_Int16 *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Int16Plugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Int16 * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_Int16Plugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Int16 *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_LongStringPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_LongStringPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_LongStringPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_LongStringPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_LongStringPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_LongString*
    P_LDM_Common_T_LongStringPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_LongString*
    P_LDM_Common_T_LongStringPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_LongString*
    P_LDM_Common_T_LongStringPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LongStringPluginSupport_copy_data(
        P_LDM_Common_T_LongString *out,
        const P_LDM_Common_T_LongString *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LongStringPluginSupport_destroy_data_w_params(
        P_LDM_Common_T_LongString *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LongStringPluginSupport_destroy_data_ex(
        P_LDM_Common_T_LongString *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LongStringPluginSupport_destroy_data(
        P_LDM_Common_T_LongString *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LongStringPluginSupport_print_data(
        const P_LDM_Common_T_LongString *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LongStringPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LongString *out,
        const P_LDM_Common_T_LongString *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LongStringPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_LongString *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LongStringPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LongString *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LongStringPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LongStringPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LongStringPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LongStringPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_LongStringPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_LongString * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_LongStringPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LongStringPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LongStringPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LongStringPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_LongString *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LongStringPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LongString * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LongStringPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LongString *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_MediumStringPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_MediumStringPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_MediumStringPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_MediumStringPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_MediumStringPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_MediumString*
    P_LDM_Common_T_MediumStringPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_MediumString*
    P_LDM_Common_T_MediumStringPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_MediumString*
    P_LDM_Common_T_MediumStringPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_MediumStringPluginSupport_copy_data(
        P_LDM_Common_T_MediumString *out,
        const P_LDM_Common_T_MediumString *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_MediumStringPluginSupport_destroy_data_w_params(
        P_LDM_Common_T_MediumString *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_MediumStringPluginSupport_destroy_data_ex(
        P_LDM_Common_T_MediumString *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_MediumStringPluginSupport_destroy_data(
        P_LDM_Common_T_MediumString *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_MediumStringPluginSupport_print_data(
        const P_LDM_Common_T_MediumString *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_MediumStringPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_MediumString *out,
        const P_LDM_Common_T_MediumString *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_MediumStringPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_MediumString *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_MediumStringPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_MediumString *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_MediumStringPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_MediumStringPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_MediumStringPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_MediumStringPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_MediumStringPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_MediumString * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_MediumStringPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_MediumStringPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_MediumStringPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_MediumStringPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_MediumString *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_MediumStringPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_MediumString * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_MediumStringPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_MediumString *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_ShortStringPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_ShortStringPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_ShortStringPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_ShortStringPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_ShortStringPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_ShortString*
    P_LDM_Common_T_ShortStringPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_ShortString*
    P_LDM_Common_T_ShortStringPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_ShortString*
    P_LDM_Common_T_ShortStringPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_ShortStringPluginSupport_copy_data(
        P_LDM_Common_T_ShortString *out,
        const P_LDM_Common_T_ShortString *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_ShortStringPluginSupport_destroy_data_w_params(
        P_LDM_Common_T_ShortString *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_ShortStringPluginSupport_destroy_data_ex(
        P_LDM_Common_T_ShortString *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_ShortStringPluginSupport_destroy_data(
        P_LDM_Common_T_ShortString *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_ShortStringPluginSupport_print_data(
        const P_LDM_Common_T_ShortString *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_ShortStringPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_ShortString *out,
        const P_LDM_Common_T_ShortString *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_ShortStringPlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_ShortString *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_ShortStringPlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_ShortString *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_ShortStringPlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_ShortStringPlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_ShortString * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_ShortStringPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_ShortStringPlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_ShortStringPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_ShortStringPlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_ShortString *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_ShortStringPlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_ShortString * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_ShortStringPlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_ShortString *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_IdentifierTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_IdentifierTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_IdentifierTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_IdentifierTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_IdentifierTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_IdentifierType*
    P_LDM_Common_T_IdentifierTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_IdentifierType*
    P_LDM_Common_T_IdentifierTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_IdentifierType*
    P_LDM_Common_T_IdentifierTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_IdentifierTypePluginSupport_copy_data(
        P_LDM_Common_T_IdentifierType *out,
        const P_LDM_Common_T_IdentifierType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_IdentifierTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_IdentifierType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_IdentifierTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_IdentifierType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_IdentifierTypePluginSupport_destroy_data(
        P_LDM_Common_T_IdentifierType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_IdentifierTypePluginSupport_print_data(
        const P_LDM_Common_T_IdentifierType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_IdentifierTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_IdentifierType *out,
        const P_LDM_Common_T_IdentifierType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_IdentifierTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_IdentifierType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_IdentifierTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_IdentifierType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_IdentifierTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_LDM_Common_T_IdentifierType *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_IdentifierTypePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_IdentifierType **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_IdentifierTypePlugin_deserialize_from_cdr_buffer(
        P_LDM_Common_T_IdentifierType *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_IdentifierTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_IdentifierTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_IdentifierType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_IdentifierTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_IdentifierTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_IdentifierTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_IdentifierTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_IdentifierType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_IdentifierTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_IdentifierType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_IdentifierTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_IdentifierType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_IdentifierTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_IdentifierType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_DurationTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_DurationTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_DurationTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_DurationTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_DurationTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_DurationType*
    P_LDM_Common_T_DurationTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_DurationType*
    P_LDM_Common_T_DurationTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_DurationType*
    P_LDM_Common_T_DurationTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DurationTypePluginSupport_copy_data(
        P_LDM_Common_T_DurationType *out,
        const P_LDM_Common_T_DurationType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_DurationTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_DurationType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_DurationTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_DurationType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_DurationTypePluginSupport_destroy_data(
        P_LDM_Common_T_DurationType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_DurationTypePluginSupport_print_data(
        const P_LDM_Common_T_DurationType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DurationTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_DurationType *out,
        const P_LDM_Common_T_DurationType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DurationTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_DurationType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DurationTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_DurationType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_DurationTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_LDM_Common_T_DurationType *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DurationTypePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_DurationType **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_DurationTypePlugin_deserialize_from_cdr_buffer(
        P_LDM_Common_T_DurationType *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_DurationTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_DurationTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_DurationTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_DurationTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_DurationTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_DurationType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_DurationTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_DurationTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_DurationTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DurationTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_DurationType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DurationTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_DurationType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DurationTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_DurationType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_DurationTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_DurationType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_HeartbeatTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_HeartbeatTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_HeartbeatTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_HeartbeatTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_HeartbeatTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_HeartbeatType*
    P_LDM_Common_T_HeartbeatTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_HeartbeatType*
    P_LDM_Common_T_HeartbeatTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_HeartbeatType*
    P_LDM_Common_T_HeartbeatTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_HeartbeatTypePluginSupport_copy_data(
        P_LDM_Common_T_HeartbeatType *out,
        const P_LDM_Common_T_HeartbeatType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_HeartbeatTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_HeartbeatType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_HeartbeatTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_HeartbeatType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_HeartbeatTypePluginSupport_destroy_data(
        P_LDM_Common_T_HeartbeatType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_HeartbeatTypePluginSupport_print_data(
        const P_LDM_Common_T_HeartbeatType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_HeartbeatTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_HeartbeatType *out,
        const P_LDM_Common_T_HeartbeatType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_HeartbeatTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_HeartbeatType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_HeartbeatTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_HeartbeatType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_HeartbeatTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_HeartbeatTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_HeartbeatTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_HeartbeatTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_HeartbeatTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_HeartbeatType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_HeartbeatTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_HeartbeatTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_HeartbeatTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_HeartbeatTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_HeartbeatType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_HeartbeatTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_HeartbeatType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_HeartbeatTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_HeartbeatType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_DateTimeTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_DateTimeTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_DateTimeTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_DateTimeTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_DateTimeTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_DateTimeType*
    P_LDM_Common_T_DateTimeTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_DateTimeType*
    P_LDM_Common_T_DateTimeTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_DateTimeType*
    P_LDM_Common_T_DateTimeTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DateTimeTypePluginSupport_copy_data(
        P_LDM_Common_T_DateTimeType *out,
        const P_LDM_Common_T_DateTimeType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_DateTimeTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_DateTimeType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_DateTimeTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_DateTimeType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_DateTimeTypePluginSupport_destroy_data(
        P_LDM_Common_T_DateTimeType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_DateTimeTypePluginSupport_print_data(
        const P_LDM_Common_T_DateTimeType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DateTimeTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_DateTimeType *out,
        const P_LDM_Common_T_DateTimeType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DateTimeTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_DateTimeType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DateTimeTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_DateTimeType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_DateTimeTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_LDM_Common_T_DateTimeType *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DateTimeTypePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_DateTimeType **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_DateTimeTypePlugin_deserialize_from_cdr_buffer(
        P_LDM_Common_T_DateTimeType *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_DateTimeTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_DateTimeTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_DateTimeType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_DateTimeTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_DateTimeTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_DateTimeTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DateTimeTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_DateTimeType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DateTimeTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_DateTimeType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DateTimeTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_DateTimeType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_DateTimeTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_DateTimeType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_TorqueInNewtonMetresTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_TorqueInNewtonMetresTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_TorqueInNewtonMetresTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_TorqueInNewtonMetresTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_TorqueInNewtonMetresTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_TorqueInNewtonMetresType*
    P_LDM_Common_T_TorqueInNewtonMetresTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_TorqueInNewtonMetresType*
    P_LDM_Common_T_TorqueInNewtonMetresTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_TorqueInNewtonMetresType*
    P_LDM_Common_T_TorqueInNewtonMetresTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_TorqueInNewtonMetresTypePluginSupport_copy_data(
        P_LDM_Common_T_TorqueInNewtonMetresType *out,
        const P_LDM_Common_T_TorqueInNewtonMetresType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_TorqueInNewtonMetresTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_TorqueInNewtonMetresType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_TorqueInNewtonMetresTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_TorqueInNewtonMetresType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_TorqueInNewtonMetresTypePluginSupport_destroy_data(
        P_LDM_Common_T_TorqueInNewtonMetresType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_TorqueInNewtonMetresTypePluginSupport_print_data(
        const P_LDM_Common_T_TorqueInNewtonMetresType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_TorqueInNewtonMetresTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_TorqueInNewtonMetresType *out,
        const P_LDM_Common_T_TorqueInNewtonMetresType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_TorqueInNewtonMetresTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_TorqueInNewtonMetresType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_TorqueInNewtonMetresTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_TorqueInNewtonMetresType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_TorqueInNewtonMetresTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_TorqueInNewtonMetresTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_TorqueInNewtonMetresTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_TorqueInNewtonMetresTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_TorqueInNewtonMetresTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_TorqueInNewtonMetresType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_TorqueInNewtonMetresTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_TorqueInNewtonMetresTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_TorqueInNewtonMetresTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_TorqueInNewtonMetresTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_TorqueInNewtonMetresType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_TorqueInNewtonMetresTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_TorqueInNewtonMetresType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_TorqueInNewtonMetresTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_TorqueInNewtonMetresType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType*
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType*
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType*
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypePluginSupport_copy_data(
        P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType *out,
        const P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypePluginSupport_destroy_data(
        P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypePluginSupport_print_data(
        const P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType *out,
        const P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearAccelerationInMetresPerSecPerSecType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_LinearAcceleration3DTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_LinearAcceleration3DTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_LinearAcceleration3DTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_LinearAcceleration3DTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_LinearAcceleration3DTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_LinearAcceleration3DType*
    P_LDM_Common_T_LinearAcceleration3DTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_LinearAcceleration3DType*
    P_LDM_Common_T_LinearAcceleration3DTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_LinearAcceleration3DType*
    P_LDM_Common_T_LinearAcceleration3DTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearAcceleration3DTypePluginSupport_copy_data(
        P_LDM_Common_T_LinearAcceleration3DType *out,
        const P_LDM_Common_T_LinearAcceleration3DType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LinearAcceleration3DTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_LinearAcceleration3DType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LinearAcceleration3DTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_LinearAcceleration3DType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LinearAcceleration3DTypePluginSupport_destroy_data(
        P_LDM_Common_T_LinearAcceleration3DType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LinearAcceleration3DTypePluginSupport_print_data(
        const P_LDM_Common_T_LinearAcceleration3DType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearAcceleration3DTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearAcceleration3DType *out,
        const P_LDM_Common_T_LinearAcceleration3DType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearAcceleration3DTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_LinearAcceleration3DType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearAcceleration3DTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearAcceleration3DType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LinearAcceleration3DTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_LDM_Common_T_LinearAcceleration3DType *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearAcceleration3DTypePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearAcceleration3DType **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LinearAcceleration3DTypePlugin_deserialize_from_cdr_buffer(
        P_LDM_Common_T_LinearAcceleration3DType *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LinearAcceleration3DTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearAcceleration3DTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearAcceleration3DTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearAcceleration3DTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_LinearAcceleration3DTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_LinearAcceleration3DType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_LinearAcceleration3DTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearAcceleration3DTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearAcceleration3DTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearAcceleration3DTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_LinearAcceleration3DType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearAcceleration3DTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearAcceleration3DType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearAcceleration3DTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearAcceleration3DType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LinearAcceleration3DTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearAcceleration3DType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_AttitudeTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_AttitudeTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_AttitudeTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_AttitudeTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_AttitudeTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_AttitudeType*
    P_LDM_Common_T_AttitudeTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_AttitudeType*
    P_LDM_Common_T_AttitudeTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_AttitudeType*
    P_LDM_Common_T_AttitudeTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AttitudeTypePluginSupport_copy_data(
        P_LDM_Common_T_AttitudeType *out,
        const P_LDM_Common_T_AttitudeType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AttitudeTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_AttitudeType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AttitudeTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_AttitudeType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AttitudeTypePluginSupport_destroy_data(
        P_LDM_Common_T_AttitudeType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AttitudeTypePluginSupport_print_data(
        const P_LDM_Common_T_AttitudeType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AttitudeTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AttitudeType *out,
        const P_LDM_Common_T_AttitudeType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AttitudeTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_AttitudeType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AttitudeTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AttitudeType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_AttitudeTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_LDM_Common_T_AttitudeType *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AttitudeTypePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AttitudeType **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_AttitudeTypePlugin_deserialize_from_cdr_buffer(
        P_LDM_Common_T_AttitudeType *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_AttitudeTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AttitudeTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AttitudeTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AttitudeTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_AttitudeTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_AttitudeType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_AttitudeTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AttitudeTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AttitudeTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AttitudeTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_AttitudeType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AttitudeTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AttitudeType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AttitudeTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AttitudeType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_AttitudeTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AttitudeType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_DistanceInMetresTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_DistanceInMetresTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_DistanceInMetresTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_DistanceInMetresTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_DistanceInMetresTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_DistanceInMetresType*
    P_LDM_Common_T_DistanceInMetresTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_DistanceInMetresType*
    P_LDM_Common_T_DistanceInMetresTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_DistanceInMetresType*
    P_LDM_Common_T_DistanceInMetresTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DistanceInMetresTypePluginSupport_copy_data(
        P_LDM_Common_T_DistanceInMetresType *out,
        const P_LDM_Common_T_DistanceInMetresType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_DistanceInMetresTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_DistanceInMetresType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_DistanceInMetresTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_DistanceInMetresType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_DistanceInMetresTypePluginSupport_destroy_data(
        P_LDM_Common_T_DistanceInMetresType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_DistanceInMetresTypePluginSupport_print_data(
        const P_LDM_Common_T_DistanceInMetresType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DistanceInMetresTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_DistanceInMetresType *out,
        const P_LDM_Common_T_DistanceInMetresType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DistanceInMetresTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_DistanceInMetresType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DistanceInMetresTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_DistanceInMetresType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_DistanceInMetresTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_DistanceInMetresTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_DistanceInMetresTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_DistanceInMetresTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_DistanceInMetresTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_DistanceInMetresType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_DistanceInMetresTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_DistanceInMetresTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_DistanceInMetresTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DistanceInMetresTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_DistanceInMetresType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_DistanceInMetresTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_DistanceInMetresType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_DistanceInMetresTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_DistanceInMetresType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_SpeedInMetresPerSecTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_SpeedInMetresPerSecTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_SpeedInMetresPerSecTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_SpeedInMetresPerSecTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_SpeedInMetresPerSecTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_SpeedInMetresPerSecType*
    P_LDM_Common_T_SpeedInMetresPerSecTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_SpeedInMetresPerSecType*
    P_LDM_Common_T_SpeedInMetresPerSecTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_SpeedInMetresPerSecType*
    P_LDM_Common_T_SpeedInMetresPerSecTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_SpeedInMetresPerSecTypePluginSupport_copy_data(
        P_LDM_Common_T_SpeedInMetresPerSecType *out,
        const P_LDM_Common_T_SpeedInMetresPerSecType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_SpeedInMetresPerSecTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_SpeedInMetresPerSecType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_SpeedInMetresPerSecTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_SpeedInMetresPerSecType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_SpeedInMetresPerSecTypePluginSupport_destroy_data(
        P_LDM_Common_T_SpeedInMetresPerSecType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_SpeedInMetresPerSecTypePluginSupport_print_data(
        const P_LDM_Common_T_SpeedInMetresPerSecType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_SpeedInMetresPerSecTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_SpeedInMetresPerSecType *out,
        const P_LDM_Common_T_SpeedInMetresPerSecType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_SpeedInMetresPerSecTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_SpeedInMetresPerSecType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_SpeedInMetresPerSecTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_SpeedInMetresPerSecType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_SpeedInMetresPerSecTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_SpeedInMetresPerSecTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_SpeedInMetresPerSecTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_SpeedInMetresPerSecTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_SpeedInMetresPerSecTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_SpeedInMetresPerSecType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_SpeedInMetresPerSecTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_SpeedInMetresPerSecTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_SpeedInMetresPerSecTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_SpeedInMetresPerSecTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_SpeedInMetresPerSecType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_SpeedInMetresPerSecTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_SpeedInMetresPerSecType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_SpeedInMetresPerSecTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_SpeedInMetresPerSecType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_PointPolar3DTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_PointPolar3DTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_PointPolar3DTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_PointPolar3DTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_PointPolar3DTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_PointPolar3DType*
    P_LDM_Common_T_PointPolar3DTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_PointPolar3DType*
    P_LDM_Common_T_PointPolar3DTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_PointPolar3DType*
    P_LDM_Common_T_PointPolar3DTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_PointPolar3DTypePluginSupport_copy_data(
        P_LDM_Common_T_PointPolar3DType *out,
        const P_LDM_Common_T_PointPolar3DType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_PointPolar3DTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_PointPolar3DType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_PointPolar3DTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_PointPolar3DType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_PointPolar3DTypePluginSupport_destroy_data(
        P_LDM_Common_T_PointPolar3DType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_PointPolar3DTypePluginSupport_print_data(
        const P_LDM_Common_T_PointPolar3DType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_PointPolar3DTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_PointPolar3DType *out,
        const P_LDM_Common_T_PointPolar3DType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_PointPolar3DTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_PointPolar3DType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_PointPolar3DTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_PointPolar3DType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_PointPolar3DTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_LDM_Common_T_PointPolar3DType *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_PointPolar3DTypePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_PointPolar3DType **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_PointPolar3DTypePlugin_deserialize_from_cdr_buffer(
        P_LDM_Common_T_PointPolar3DType *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_PointPolar3DTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_PointPolar3DTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_PointPolar3DTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_PointPolar3DTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_PointPolar3DTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_PointPolar3DType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_PointPolar3DTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_PointPolar3DTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_PointPolar3DTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_PointPolar3DTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_PointPolar3DType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_PointPolar3DTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_PointPolar3DType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_PointPolar3DTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_PointPolar3DType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_PointPolar3DTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_PointPolar3DType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_CoordinatePolar3DTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_CoordinatePolar3DTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_CoordinatePolar3DTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_CoordinatePolar3DTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_CoordinatePolar3DTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_CoordinatePolar3DType*
    P_LDM_Common_T_CoordinatePolar3DTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_CoordinatePolar3DType*
    P_LDM_Common_T_CoordinatePolar3DTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_CoordinatePolar3DType*
    P_LDM_Common_T_CoordinatePolar3DTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CoordinatePolar3DTypePluginSupport_copy_data(
        P_LDM_Common_T_CoordinatePolar3DType *out,
        const P_LDM_Common_T_CoordinatePolar3DType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_CoordinatePolar3DTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_CoordinatePolar3DType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_CoordinatePolar3DTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_CoordinatePolar3DType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_CoordinatePolar3DTypePluginSupport_destroy_data(
        P_LDM_Common_T_CoordinatePolar3DType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_CoordinatePolar3DTypePluginSupport_print_data(
        const P_LDM_Common_T_CoordinatePolar3DType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CoordinatePolar3DTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_CoordinatePolar3DType *out,
        const P_LDM_Common_T_CoordinatePolar3DType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CoordinatePolar3DTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_CoordinatePolar3DType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CoordinatePolar3DTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_CoordinatePolar3DType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_CoordinatePolar3DTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_LDM_Common_T_CoordinatePolar3DType *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CoordinatePolar3DTypePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_CoordinatePolar3DType **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_CoordinatePolar3DTypePlugin_deserialize_from_cdr_buffer(
        P_LDM_Common_T_CoordinatePolar3DType *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_CoordinatePolar3DTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CoordinatePolar3DTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CoordinatePolar3DTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CoordinatePolar3DTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_CoordinatePolar3DTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_CoordinatePolar3DType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_CoordinatePolar3DTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CoordinatePolar3DTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CoordinatePolar3DTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CoordinatePolar3DTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_CoordinatePolar3DType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CoordinatePolar3DTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_CoordinatePolar3DType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CoordinatePolar3DTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_CoordinatePolar3DType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_CoordinatePolar3DTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_CoordinatePolar3DType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_CoordinatePolar2DTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_CoordinatePolar2DTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_CoordinatePolar2DTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_CoordinatePolar2DTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_CoordinatePolar2DTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_CoordinatePolar2DType*
    P_LDM_Common_T_CoordinatePolar2DTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_CoordinatePolar2DType*
    P_LDM_Common_T_CoordinatePolar2DTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_CoordinatePolar2DType*
    P_LDM_Common_T_CoordinatePolar2DTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CoordinatePolar2DTypePluginSupport_copy_data(
        P_LDM_Common_T_CoordinatePolar2DType *out,
        const P_LDM_Common_T_CoordinatePolar2DType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_CoordinatePolar2DTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_CoordinatePolar2DType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_CoordinatePolar2DTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_CoordinatePolar2DType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_CoordinatePolar2DTypePluginSupport_destroy_data(
        P_LDM_Common_T_CoordinatePolar2DType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_CoordinatePolar2DTypePluginSupport_print_data(
        const P_LDM_Common_T_CoordinatePolar2DType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CoordinatePolar2DTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_CoordinatePolar2DType *out,
        const P_LDM_Common_T_CoordinatePolar2DType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CoordinatePolar2DTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_CoordinatePolar2DType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CoordinatePolar2DTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_CoordinatePolar2DType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_CoordinatePolar2DTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_LDM_Common_T_CoordinatePolar2DType *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CoordinatePolar2DTypePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_CoordinatePolar2DType **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_CoordinatePolar2DTypePlugin_deserialize_from_cdr_buffer(
        P_LDM_Common_T_CoordinatePolar2DType *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_CoordinatePolar2DTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CoordinatePolar2DTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CoordinatePolar2DTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CoordinatePolar2DTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_CoordinatePolar2DTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_CoordinatePolar2DType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_CoordinatePolar2DTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CoordinatePolar2DTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CoordinatePolar2DTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CoordinatePolar2DTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_CoordinatePolar2DType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CoordinatePolar2DTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_CoordinatePolar2DType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CoordinatePolar2DTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_CoordinatePolar2DType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_CoordinatePolar2DTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_CoordinatePolar2DType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType*
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType*
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType*
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypePluginSupport_copy_data(
        P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType *out,
        const P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypePluginSupport_destroy_data(
        P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypePluginSupport_print_data(
        const P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType *out,
        const P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AngularAccelerationInRadiansPerSecPerSecType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_AngularAcceleration3DTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_AngularAcceleration3DTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_AngularAcceleration3DTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_AngularAcceleration3DTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_AngularAcceleration3DTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_AngularAcceleration3DType*
    P_LDM_Common_T_AngularAcceleration3DTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_AngularAcceleration3DType*
    P_LDM_Common_T_AngularAcceleration3DTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_AngularAcceleration3DType*
    P_LDM_Common_T_AngularAcceleration3DTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularAcceleration3DTypePluginSupport_copy_data(
        P_LDM_Common_T_AngularAcceleration3DType *out,
        const P_LDM_Common_T_AngularAcceleration3DType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AngularAcceleration3DTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_AngularAcceleration3DType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AngularAcceleration3DTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_AngularAcceleration3DType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AngularAcceleration3DTypePluginSupport_destroy_data(
        P_LDM_Common_T_AngularAcceleration3DType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AngularAcceleration3DTypePluginSupport_print_data(
        const P_LDM_Common_T_AngularAcceleration3DType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularAcceleration3DTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AngularAcceleration3DType *out,
        const P_LDM_Common_T_AngularAcceleration3DType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularAcceleration3DTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_AngularAcceleration3DType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularAcceleration3DTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AngularAcceleration3DType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_AngularAcceleration3DTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_LDM_Common_T_AngularAcceleration3DType *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularAcceleration3DTypePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AngularAcceleration3DType **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_AngularAcceleration3DTypePlugin_deserialize_from_cdr_buffer(
        P_LDM_Common_T_AngularAcceleration3DType *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_AngularAcceleration3DTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AngularAcceleration3DTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AngularAcceleration3DTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AngularAcceleration3DTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_AngularAcceleration3DTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_AngularAcceleration3DType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_AngularAcceleration3DTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AngularAcceleration3DTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AngularAcceleration3DTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularAcceleration3DTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_AngularAcceleration3DType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularAcceleration3DTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AngularAcceleration3DType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularAcceleration3DTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AngularAcceleration3DType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_AngularAcceleration3DTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AngularAcceleration3DType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_AngularVelocityinRadiansPerSecTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_AngularVelocityinRadiansPerSecTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_AngularVelocityinRadiansPerSecTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_AngularVelocityinRadiansPerSecTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_AngularVelocityinRadiansPerSecTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_AngularVelocityinRadiansPerSecType*
    P_LDM_Common_T_AngularVelocityinRadiansPerSecTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_AngularVelocityinRadiansPerSecType*
    P_LDM_Common_T_AngularVelocityinRadiansPerSecTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_AngularVelocityinRadiansPerSecType*
    P_LDM_Common_T_AngularVelocityinRadiansPerSecTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularVelocityinRadiansPerSecTypePluginSupport_copy_data(
        P_LDM_Common_T_AngularVelocityinRadiansPerSecType *out,
        const P_LDM_Common_T_AngularVelocityinRadiansPerSecType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AngularVelocityinRadiansPerSecTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_AngularVelocityinRadiansPerSecType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AngularVelocityinRadiansPerSecTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_AngularVelocityinRadiansPerSecType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AngularVelocityinRadiansPerSecTypePluginSupport_destroy_data(
        P_LDM_Common_T_AngularVelocityinRadiansPerSecType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AngularVelocityinRadiansPerSecTypePluginSupport_print_data(
        const P_LDM_Common_T_AngularVelocityinRadiansPerSecType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularVelocityinRadiansPerSecTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AngularVelocityinRadiansPerSecType *out,
        const P_LDM_Common_T_AngularVelocityinRadiansPerSecType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularVelocityinRadiansPerSecTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_AngularVelocityinRadiansPerSecType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularVelocityinRadiansPerSecTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AngularVelocityinRadiansPerSecType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_AngularVelocityinRadiansPerSecTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AngularVelocityinRadiansPerSecTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AngularVelocityinRadiansPerSecTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AngularVelocityinRadiansPerSecTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_AngularVelocityinRadiansPerSecTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_AngularVelocityinRadiansPerSecType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_AngularVelocityinRadiansPerSecTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AngularVelocityinRadiansPerSecTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AngularVelocityinRadiansPerSecTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularVelocityinRadiansPerSecTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_AngularVelocityinRadiansPerSecType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularVelocityinRadiansPerSecTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AngularVelocityinRadiansPerSecType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_AngularVelocityinRadiansPerSecTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AngularVelocityinRadiansPerSecType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_AngularVelocity3DTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_AngularVelocity3DTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_AngularVelocity3DTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_AngularVelocity3DTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_AngularVelocity3DTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_AngularVelocity3DType*
    P_LDM_Common_T_AngularVelocity3DTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_AngularVelocity3DType*
    P_LDM_Common_T_AngularVelocity3DTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_AngularVelocity3DType*
    P_LDM_Common_T_AngularVelocity3DTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularVelocity3DTypePluginSupport_copy_data(
        P_LDM_Common_T_AngularVelocity3DType *out,
        const P_LDM_Common_T_AngularVelocity3DType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AngularVelocity3DTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_AngularVelocity3DType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AngularVelocity3DTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_AngularVelocity3DType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AngularVelocity3DTypePluginSupport_destroy_data(
        P_LDM_Common_T_AngularVelocity3DType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AngularVelocity3DTypePluginSupport_print_data(
        const P_LDM_Common_T_AngularVelocity3DType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularVelocity3DTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AngularVelocity3DType *out,
        const P_LDM_Common_T_AngularVelocity3DType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularVelocity3DTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_AngularVelocity3DType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularVelocity3DTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AngularVelocity3DType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_AngularVelocity3DTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_LDM_Common_T_AngularVelocity3DType *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularVelocity3DTypePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AngularVelocity3DType **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_AngularVelocity3DTypePlugin_deserialize_from_cdr_buffer(
        P_LDM_Common_T_AngularVelocity3DType *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_AngularVelocity3DTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AngularVelocity3DTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AngularVelocity3DTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AngularVelocity3DTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_AngularVelocity3DTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_AngularVelocity3DType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_AngularVelocity3DTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AngularVelocity3DTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AngularVelocity3DTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularVelocity3DTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_AngularVelocity3DType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularVelocity3DTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AngularVelocity3DType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AngularVelocity3DTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AngularVelocity3DType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_AngularVelocity3DTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AngularVelocity3DType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_LinearVelocity3DTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_LinearVelocity3DTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_LinearVelocity3DTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_LinearVelocity3DTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_LinearVelocity3DTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_LinearVelocity3DType*
    P_LDM_Common_T_LinearVelocity3DTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_LinearVelocity3DType*
    P_LDM_Common_T_LinearVelocity3DTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_LinearVelocity3DType*
    P_LDM_Common_T_LinearVelocity3DTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearVelocity3DTypePluginSupport_copy_data(
        P_LDM_Common_T_LinearVelocity3DType *out,
        const P_LDM_Common_T_LinearVelocity3DType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LinearVelocity3DTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_LinearVelocity3DType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LinearVelocity3DTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_LinearVelocity3DType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LinearVelocity3DTypePluginSupport_destroy_data(
        P_LDM_Common_T_LinearVelocity3DType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LinearVelocity3DTypePluginSupport_print_data(
        const P_LDM_Common_T_LinearVelocity3DType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearVelocity3DTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearVelocity3DType *out,
        const P_LDM_Common_T_LinearVelocity3DType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearVelocity3DTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_LinearVelocity3DType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearVelocity3DTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearVelocity3DType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LinearVelocity3DTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_LDM_Common_T_LinearVelocity3DType *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearVelocity3DTypePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearVelocity3DType **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LinearVelocity3DTypePlugin_deserialize_from_cdr_buffer(
        P_LDM_Common_T_LinearVelocity3DType *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LinearVelocity3DTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearVelocity3DTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearVelocity3DTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearVelocity3DTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_LinearVelocity3DTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_LinearVelocity3DType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_LinearVelocity3DTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearVelocity3DTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearVelocity3DTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearVelocity3DTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_LinearVelocity3DType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearVelocity3DTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearVelocity3DType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearVelocity3DTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearVelocity3DType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LinearVelocity3DTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearVelocity3DType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_LatitudeTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_LatitudeTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_LatitudeTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_LatitudeTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_LatitudeTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_LatitudeType*
    P_LDM_Common_T_LatitudeTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_LatitudeType*
    P_LDM_Common_T_LatitudeTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_LatitudeType*
    P_LDM_Common_T_LatitudeTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LatitudeTypePluginSupport_copy_data(
        P_LDM_Common_T_LatitudeType *out,
        const P_LDM_Common_T_LatitudeType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LatitudeTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_LatitudeType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LatitudeTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_LatitudeType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LatitudeTypePluginSupport_destroy_data(
        P_LDM_Common_T_LatitudeType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LatitudeTypePluginSupport_print_data(
        const P_LDM_Common_T_LatitudeType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LatitudeTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LatitudeType *out,
        const P_LDM_Common_T_LatitudeType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LatitudeTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_LatitudeType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LatitudeTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LatitudeType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LatitudeTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LatitudeTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LatitudeTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LatitudeTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_LatitudeTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_LatitudeType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_LatitudeTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LatitudeTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LatitudeTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LatitudeTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_LatitudeType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LatitudeTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LatitudeType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LatitudeTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LatitudeType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_AltitudeTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_AltitudeTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_AltitudeTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_AltitudeTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_AltitudeTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_AltitudeType*
    P_LDM_Common_T_AltitudeTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_AltitudeType*
    P_LDM_Common_T_AltitudeTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_AltitudeType*
    P_LDM_Common_T_AltitudeTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AltitudeTypePluginSupport_copy_data(
        P_LDM_Common_T_AltitudeType *out,
        const P_LDM_Common_T_AltitudeType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AltitudeTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_AltitudeType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AltitudeTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_AltitudeType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AltitudeTypePluginSupport_destroy_data(
        P_LDM_Common_T_AltitudeType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_AltitudeTypePluginSupport_print_data(
        const P_LDM_Common_T_AltitudeType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AltitudeTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AltitudeType *out,
        const P_LDM_Common_T_AltitudeType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AltitudeTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_AltitudeType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AltitudeTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AltitudeType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_AltitudeTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AltitudeTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AltitudeTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AltitudeTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_AltitudeTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_AltitudeType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_AltitudeTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AltitudeTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_AltitudeTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AltitudeTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_AltitudeType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_AltitudeTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AltitudeType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_AltitudeTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_AltitudeType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_RotationalOffsetTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_RotationalOffsetTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_RotationalOffsetTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_RotationalOffsetTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_RotationalOffsetTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_RotationalOffsetType*
    P_LDM_Common_T_RotationalOffsetTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_RotationalOffsetType*
    P_LDM_Common_T_RotationalOffsetTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_RotationalOffsetType*
    P_LDM_Common_T_RotationalOffsetTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_RotationalOffsetTypePluginSupport_copy_data(
        P_LDM_Common_T_RotationalOffsetType *out,
        const P_LDM_Common_T_RotationalOffsetType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_RotationalOffsetTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_RotationalOffsetType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_RotationalOffsetTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_RotationalOffsetType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_RotationalOffsetTypePluginSupport_destroy_data(
        P_LDM_Common_T_RotationalOffsetType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_RotationalOffsetTypePluginSupport_print_data(
        const P_LDM_Common_T_RotationalOffsetType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_RotationalOffsetTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_RotationalOffsetType *out,
        const P_LDM_Common_T_RotationalOffsetType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_RotationalOffsetTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_RotationalOffsetType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_RotationalOffsetTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_RotationalOffsetType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_RotationalOffsetTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_LDM_Common_T_RotationalOffsetType *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_RotationalOffsetTypePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_RotationalOffsetType **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_RotationalOffsetTypePlugin_deserialize_from_cdr_buffer(
        P_LDM_Common_T_RotationalOffsetType *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_RotationalOffsetTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_RotationalOffsetTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_RotationalOffsetTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_RotationalOffsetTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_RotationalOffsetTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_RotationalOffsetType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_RotationalOffsetTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_RotationalOffsetTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_RotationalOffsetTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_RotationalOffsetTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_RotationalOffsetType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_RotationalOffsetTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_RotationalOffsetType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_RotationalOffsetTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_RotationalOffsetType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_RotationalOffsetTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_RotationalOffsetType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_LongitudeTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_LongitudeTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_LongitudeTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_LongitudeTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_LongitudeTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_LongitudeType*
    P_LDM_Common_T_LongitudeTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_LongitudeType*
    P_LDM_Common_T_LongitudeTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_LongitudeType*
    P_LDM_Common_T_LongitudeTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LongitudeTypePluginSupport_copy_data(
        P_LDM_Common_T_LongitudeType *out,
        const P_LDM_Common_T_LongitudeType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LongitudeTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_LongitudeType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LongitudeTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_LongitudeType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LongitudeTypePluginSupport_destroy_data(
        P_LDM_Common_T_LongitudeType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LongitudeTypePluginSupport_print_data(
        const P_LDM_Common_T_LongitudeType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LongitudeTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LongitudeType *out,
        const P_LDM_Common_T_LongitudeType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LongitudeTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_LongitudeType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LongitudeTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LongitudeType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LongitudeTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LongitudeTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LongitudeTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LongitudeTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_LongitudeTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_LongitudeType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_LongitudeTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LongitudeTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LongitudeTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LongitudeTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_LongitudeType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LongitudeTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LongitudeType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LongitudeTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LongitudeType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_Coordinate2DTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_Coordinate2DTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_Coordinate2DTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_Coordinate2DTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_Coordinate2DTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_Coordinate2DType*
    P_LDM_Common_T_Coordinate2DTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_Coordinate2DType*
    P_LDM_Common_T_Coordinate2DTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_Coordinate2DType*
    P_LDM_Common_T_Coordinate2DTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Coordinate2DTypePluginSupport_copy_data(
        P_LDM_Common_T_Coordinate2DType *out,
        const P_LDM_Common_T_Coordinate2DType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Coordinate2DTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_Coordinate2DType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Coordinate2DTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_Coordinate2DType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Coordinate2DTypePluginSupport_destroy_data(
        P_LDM_Common_T_Coordinate2DType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Coordinate2DTypePluginSupport_print_data(
        const P_LDM_Common_T_Coordinate2DType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Coordinate2DTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Coordinate2DType *out,
        const P_LDM_Common_T_Coordinate2DType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Coordinate2DTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_Coordinate2DType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Coordinate2DTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Coordinate2DType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_Coordinate2DTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_LDM_Common_T_Coordinate2DType *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Coordinate2DTypePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Coordinate2DType **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_Coordinate2DTypePlugin_deserialize_from_cdr_buffer(
        P_LDM_Common_T_Coordinate2DType *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_Coordinate2DTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Coordinate2DTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Coordinate2DTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Coordinate2DTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_Coordinate2DTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_Coordinate2DType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_Coordinate2DTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Coordinate2DTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Coordinate2DTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Coordinate2DTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_Coordinate2DType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Coordinate2DTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Coordinate2DType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Coordinate2DTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Coordinate2DType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_Coordinate2DTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Coordinate2DType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_LinearSpeed3DTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_LinearSpeed3DTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_LinearSpeed3DTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_LinearSpeed3DTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_LinearSpeed3DTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_LinearSpeed3DType*
    P_LDM_Common_T_LinearSpeed3DTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_LinearSpeed3DType*
    P_LDM_Common_T_LinearSpeed3DTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_LinearSpeed3DType*
    P_LDM_Common_T_LinearSpeed3DTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearSpeed3DTypePluginSupport_copy_data(
        P_LDM_Common_T_LinearSpeed3DType *out,
        const P_LDM_Common_T_LinearSpeed3DType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LinearSpeed3DTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_LinearSpeed3DType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LinearSpeed3DTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_LinearSpeed3DType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LinearSpeed3DTypePluginSupport_destroy_data(
        P_LDM_Common_T_LinearSpeed3DType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LinearSpeed3DTypePluginSupport_print_data(
        const P_LDM_Common_T_LinearSpeed3DType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearSpeed3DTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearSpeed3DType *out,
        const P_LDM_Common_T_LinearSpeed3DType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearSpeed3DTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_LinearSpeed3DType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearSpeed3DTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearSpeed3DType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LinearSpeed3DTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_LDM_Common_T_LinearSpeed3DType *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearSpeed3DTypePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearSpeed3DType **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LinearSpeed3DTypePlugin_deserialize_from_cdr_buffer(
        P_LDM_Common_T_LinearSpeed3DType *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LinearSpeed3DTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearSpeed3DTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearSpeed3DTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearSpeed3DTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_LinearSpeed3DTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_LinearSpeed3DType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_LinearSpeed3DTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearSpeed3DTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearSpeed3DTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearSpeed3DTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_LinearSpeed3DType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearSpeed3DTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearSpeed3DType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearSpeed3DTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearSpeed3DType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LinearSpeed3DTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearSpeed3DType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_LinearOffsetTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_LinearOffsetTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_LinearOffsetTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_LinearOffsetTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_LinearOffsetTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_LinearOffsetType*
    P_LDM_Common_T_LinearOffsetTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_LinearOffsetType*
    P_LDM_Common_T_LinearOffsetTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_LinearOffsetType*
    P_LDM_Common_T_LinearOffsetTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearOffsetTypePluginSupport_copy_data(
        P_LDM_Common_T_LinearOffsetType *out,
        const P_LDM_Common_T_LinearOffsetType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LinearOffsetTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_LinearOffsetType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LinearOffsetTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_LinearOffsetType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LinearOffsetTypePluginSupport_destroy_data(
        P_LDM_Common_T_LinearOffsetType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LinearOffsetTypePluginSupport_print_data(
        const P_LDM_Common_T_LinearOffsetType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearOffsetTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearOffsetType *out,
        const P_LDM_Common_T_LinearOffsetType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearOffsetTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_LinearOffsetType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearOffsetTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearOffsetType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LinearOffsetTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_LDM_Common_T_LinearOffsetType *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearOffsetTypePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearOffsetType **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LinearOffsetTypePlugin_deserialize_from_cdr_buffer(
        P_LDM_Common_T_LinearOffsetType *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LinearOffsetTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearOffsetTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearOffsetTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearOffsetTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_LinearOffsetTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_LinearOffsetType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_LinearOffsetTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearOffsetTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearOffsetTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearOffsetTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_LinearOffsetType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearOffsetTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearOffsetType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearOffsetTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearOffsetType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LinearOffsetTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearOffsetType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_BearingTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_BearingTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_BearingTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_BearingTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_BearingTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_BearingType*
    P_LDM_Common_T_BearingTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_BearingType*
    P_LDM_Common_T_BearingTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_BearingType*
    P_LDM_Common_T_BearingTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_BearingTypePluginSupport_copy_data(
        P_LDM_Common_T_BearingType *out,
        const P_LDM_Common_T_BearingType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_BearingTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_BearingType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_BearingTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_BearingType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_BearingTypePluginSupport_destroy_data(
        P_LDM_Common_T_BearingType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_BearingTypePluginSupport_print_data(
        const P_LDM_Common_T_BearingType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_BearingTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_BearingType *out,
        const P_LDM_Common_T_BearingType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_BearingTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_BearingType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_BearingTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_BearingType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_BearingTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_BearingTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_BearingTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_BearingTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_BearingTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_BearingType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_BearingTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_BearingTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_BearingTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_BearingTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_BearingType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_BearingTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_BearingType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_BearingTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_BearingType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_VolumeInCubicMetresTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_VolumeInCubicMetresTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_VolumeInCubicMetresTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_VolumeInCubicMetresTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_VolumeInCubicMetresTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_VolumeInCubicMetresType*
    P_LDM_Common_T_VolumeInCubicMetresTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_VolumeInCubicMetresType*
    P_LDM_Common_T_VolumeInCubicMetresTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_VolumeInCubicMetresType*
    P_LDM_Common_T_VolumeInCubicMetresTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_VolumeInCubicMetresTypePluginSupport_copy_data(
        P_LDM_Common_T_VolumeInCubicMetresType *out,
        const P_LDM_Common_T_VolumeInCubicMetresType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_VolumeInCubicMetresTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_VolumeInCubicMetresType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_VolumeInCubicMetresTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_VolumeInCubicMetresType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_VolumeInCubicMetresTypePluginSupport_destroy_data(
        P_LDM_Common_T_VolumeInCubicMetresType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_VolumeInCubicMetresTypePluginSupport_print_data(
        const P_LDM_Common_T_VolumeInCubicMetresType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_VolumeInCubicMetresTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_VolumeInCubicMetresType *out,
        const P_LDM_Common_T_VolumeInCubicMetresType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_VolumeInCubicMetresTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_VolumeInCubicMetresType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_VolumeInCubicMetresTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_VolumeInCubicMetresType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_VolumeInCubicMetresTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_VolumeInCubicMetresTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_VolumeInCubicMetresTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_VolumeInCubicMetresTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_VolumeInCubicMetresTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_VolumeInCubicMetresType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_VolumeInCubicMetresTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_VolumeInCubicMetresTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_VolumeInCubicMetresTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_VolumeInCubicMetresTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_VolumeInCubicMetresType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_VolumeInCubicMetresTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_VolumeInCubicMetresType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_VolumeInCubicMetresTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_VolumeInCubicMetresType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_VoltageInVoltsTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_VoltageInVoltsTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_VoltageInVoltsTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_VoltageInVoltsTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_VoltageInVoltsTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_VoltageInVoltsType*
    P_LDM_Common_T_VoltageInVoltsTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_VoltageInVoltsType*
    P_LDM_Common_T_VoltageInVoltsTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_VoltageInVoltsType*
    P_LDM_Common_T_VoltageInVoltsTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_VoltageInVoltsTypePluginSupport_copy_data(
        P_LDM_Common_T_VoltageInVoltsType *out,
        const P_LDM_Common_T_VoltageInVoltsType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_VoltageInVoltsTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_VoltageInVoltsType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_VoltageInVoltsTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_VoltageInVoltsType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_VoltageInVoltsTypePluginSupport_destroy_data(
        P_LDM_Common_T_VoltageInVoltsType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_VoltageInVoltsTypePluginSupport_print_data(
        const P_LDM_Common_T_VoltageInVoltsType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_VoltageInVoltsTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_VoltageInVoltsType *out,
        const P_LDM_Common_T_VoltageInVoltsType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_VoltageInVoltsTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_VoltageInVoltsType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_VoltageInVoltsTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_VoltageInVoltsType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_VoltageInVoltsTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_VoltageInVoltsTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_VoltageInVoltsTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_VoltageInVoltsTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_VoltageInVoltsTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_VoltageInVoltsType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_VoltageInVoltsTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_VoltageInVoltsTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_VoltageInVoltsTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_VoltageInVoltsTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_VoltageInVoltsType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_VoltageInVoltsTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_VoltageInVoltsType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_VoltageInVoltsTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_VoltageInVoltsType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_TemperatureInDegreesKelvinTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_TemperatureInDegreesKelvinTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_TemperatureInDegreesKelvinTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_TemperatureInDegreesKelvinTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_TemperatureInDegreesKelvinTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_TemperatureInDegreesKelvinType*
    P_LDM_Common_T_TemperatureInDegreesKelvinTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_TemperatureInDegreesKelvinType*
    P_LDM_Common_T_TemperatureInDegreesKelvinTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_TemperatureInDegreesKelvinType*
    P_LDM_Common_T_TemperatureInDegreesKelvinTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_TemperatureInDegreesKelvinTypePluginSupport_copy_data(
        P_LDM_Common_T_TemperatureInDegreesKelvinType *out,
        const P_LDM_Common_T_TemperatureInDegreesKelvinType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_TemperatureInDegreesKelvinTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_TemperatureInDegreesKelvinType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_TemperatureInDegreesKelvinTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_TemperatureInDegreesKelvinType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_TemperatureInDegreesKelvinTypePluginSupport_destroy_data(
        P_LDM_Common_T_TemperatureInDegreesKelvinType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_TemperatureInDegreesKelvinTypePluginSupport_print_data(
        const P_LDM_Common_T_TemperatureInDegreesKelvinType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_TemperatureInDegreesKelvinTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_TemperatureInDegreesKelvinType *out,
        const P_LDM_Common_T_TemperatureInDegreesKelvinType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_TemperatureInDegreesKelvinTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_TemperatureInDegreesKelvinType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_TemperatureInDegreesKelvinTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_TemperatureInDegreesKelvinType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_TemperatureInDegreesKelvinTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_TemperatureInDegreesKelvinTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_TemperatureInDegreesKelvinTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_TemperatureInDegreesKelvinTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_TemperatureInDegreesKelvinTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_TemperatureInDegreesKelvinType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_TemperatureInDegreesKelvinTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_TemperatureInDegreesKelvinTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_TemperatureInDegreesKelvinTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_TemperatureInDegreesKelvinTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_TemperatureInDegreesKelvinType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_TemperatureInDegreesKelvinTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_TemperatureInDegreesKelvinType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_TemperatureInDegreesKelvinTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_TemperatureInDegreesKelvinType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_LinearVelocity2DTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_LinearVelocity2DTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_LinearVelocity2DTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_LinearVelocity2DTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_LinearVelocity2DTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_LinearVelocity2DType*
    P_LDM_Common_T_LinearVelocity2DTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_LinearVelocity2DType*
    P_LDM_Common_T_LinearVelocity2DTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_LinearVelocity2DType*
    P_LDM_Common_T_LinearVelocity2DTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearVelocity2DTypePluginSupport_copy_data(
        P_LDM_Common_T_LinearVelocity2DType *out,
        const P_LDM_Common_T_LinearVelocity2DType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LinearVelocity2DTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_LinearVelocity2DType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LinearVelocity2DTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_LinearVelocity2DType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LinearVelocity2DTypePluginSupport_destroy_data(
        P_LDM_Common_T_LinearVelocity2DType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_LinearVelocity2DTypePluginSupport_print_data(
        const P_LDM_Common_T_LinearVelocity2DType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearVelocity2DTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearVelocity2DType *out,
        const P_LDM_Common_T_LinearVelocity2DType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearVelocity2DTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_LinearVelocity2DType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearVelocity2DTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearVelocity2DType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LinearVelocity2DTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_LDM_Common_T_LinearVelocity2DType *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearVelocity2DTypePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearVelocity2DType **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LinearVelocity2DTypePlugin_deserialize_from_cdr_buffer(
        P_LDM_Common_T_LinearVelocity2DType *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LinearVelocity2DTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearVelocity2DTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearVelocity2DTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearVelocity2DTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_LinearVelocity2DTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_LinearVelocity2DType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_LinearVelocity2DTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearVelocity2DTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_LinearVelocity2DTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearVelocity2DTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_LinearVelocity2DType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearVelocity2DTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearVelocity2DType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_LinearVelocity2DTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearVelocity2DType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_LinearVelocity2DTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_LinearVelocity2DType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_PressureInPascalTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_PressureInPascalTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_PressureInPascalTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_PressureInPascalTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_PressureInPascalTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_PressureInPascalType*
    P_LDM_Common_T_PressureInPascalTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_PressureInPascalType*
    P_LDM_Common_T_PressureInPascalTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_PressureInPascalType*
    P_LDM_Common_T_PressureInPascalTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_PressureInPascalTypePluginSupport_copy_data(
        P_LDM_Common_T_PressureInPascalType *out,
        const P_LDM_Common_T_PressureInPascalType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_PressureInPascalTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_PressureInPascalType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_PressureInPascalTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_PressureInPascalType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_PressureInPascalTypePluginSupport_destroy_data(
        P_LDM_Common_T_PressureInPascalType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_PressureInPascalTypePluginSupport_print_data(
        const P_LDM_Common_T_PressureInPascalType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_PressureInPascalTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_PressureInPascalType *out,
        const P_LDM_Common_T_PressureInPascalType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_PressureInPascalTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_PressureInPascalType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_PressureInPascalTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_PressureInPascalType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_PressureInPascalTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_PressureInPascalTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_PressureInPascalTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_PressureInPascalTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_PressureInPascalTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_PressureInPascalType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_PressureInPascalTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_PressureInPascalTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_PressureInPascalTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_PressureInPascalTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_PressureInPascalType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_PressureInPascalTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_PressureInPascalType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_PressureInPascalTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_PressureInPascalType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_PowerInWattsTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_PowerInWattsTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_PowerInWattsTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_PowerInWattsTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_PowerInWattsTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_PowerInWattsType*
    P_LDM_Common_T_PowerInWattsTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_PowerInWattsType*
    P_LDM_Common_T_PowerInWattsTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_PowerInWattsType*
    P_LDM_Common_T_PowerInWattsTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_PowerInWattsTypePluginSupport_copy_data(
        P_LDM_Common_T_PowerInWattsType *out,
        const P_LDM_Common_T_PowerInWattsType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_PowerInWattsTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_PowerInWattsType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_PowerInWattsTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_PowerInWattsType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_PowerInWattsTypePluginSupport_destroy_data(
        P_LDM_Common_T_PowerInWattsType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_PowerInWattsTypePluginSupport_print_data(
        const P_LDM_Common_T_PowerInWattsType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_PowerInWattsTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_PowerInWattsType *out,
        const P_LDM_Common_T_PowerInWattsType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_PowerInWattsTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_PowerInWattsType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_PowerInWattsTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_PowerInWattsType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_PowerInWattsTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_PowerInWattsTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_PowerInWattsTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_PowerInWattsTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_PowerInWattsTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_PowerInWattsType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_PowerInWattsTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_PowerInWattsTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_PowerInWattsTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_PowerInWattsTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_PowerInWattsType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_PowerInWattsTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_PowerInWattsType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_PowerInWattsTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_PowerInWattsType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_PercentageTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_PercentageTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_PercentageTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_PercentageTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_PercentageTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_PercentageType*
    P_LDM_Common_T_PercentageTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_PercentageType*
    P_LDM_Common_T_PercentageTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_PercentageType*
    P_LDM_Common_T_PercentageTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_PercentageTypePluginSupport_copy_data(
        P_LDM_Common_T_PercentageType *out,
        const P_LDM_Common_T_PercentageType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_PercentageTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_PercentageType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_PercentageTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_PercentageType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_PercentageTypePluginSupport_destroy_data(
        P_LDM_Common_T_PercentageType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_PercentageTypePluginSupport_print_data(
        const P_LDM_Common_T_PercentageType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_PercentageTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_PercentageType *out,
        const P_LDM_Common_T_PercentageType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_PercentageTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_PercentageType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_PercentageTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_PercentageType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_PercentageTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_PercentageTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_PercentageTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_PercentageTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_PercentageTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_PercentageType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_PercentageTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_PercentageTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_PercentageTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_PercentageTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_PercentageType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_PercentageTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_PercentageType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_PercentageTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_PercentageType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_ChargeInCoulombsTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_ChargeInCoulombsTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_ChargeInCoulombsTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_ChargeInCoulombsTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_ChargeInCoulombsTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_ChargeInCoulombsType*
    P_LDM_Common_T_ChargeInCoulombsTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_ChargeInCoulombsType*
    P_LDM_Common_T_ChargeInCoulombsTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_ChargeInCoulombsType*
    P_LDM_Common_T_ChargeInCoulombsTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_ChargeInCoulombsTypePluginSupport_copy_data(
        P_LDM_Common_T_ChargeInCoulombsType *out,
        const P_LDM_Common_T_ChargeInCoulombsType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_ChargeInCoulombsTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_ChargeInCoulombsType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_ChargeInCoulombsTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_ChargeInCoulombsType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_ChargeInCoulombsTypePluginSupport_destroy_data(
        P_LDM_Common_T_ChargeInCoulombsType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_ChargeInCoulombsTypePluginSupport_print_data(
        const P_LDM_Common_T_ChargeInCoulombsType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_ChargeInCoulombsTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_ChargeInCoulombsType *out,
        const P_LDM_Common_T_ChargeInCoulombsType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_ChargeInCoulombsTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_ChargeInCoulombsType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_ChargeInCoulombsTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_ChargeInCoulombsType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_ChargeInCoulombsTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_ChargeInCoulombsTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_ChargeInCoulombsTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_ChargeInCoulombsTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_ChargeInCoulombsTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_ChargeInCoulombsType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_ChargeInCoulombsTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_ChargeInCoulombsTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_ChargeInCoulombsTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_ChargeInCoulombsTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_ChargeInCoulombsType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_ChargeInCoulombsTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_ChargeInCoulombsType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_ChargeInCoulombsTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_ChargeInCoulombsType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_FrequencyInHertzTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_FrequencyInHertzTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_FrequencyInHertzTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_FrequencyInHertzTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_FrequencyInHertzTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_FrequencyInHertzType*
    P_LDM_Common_T_FrequencyInHertzTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_FrequencyInHertzType*
    P_LDM_Common_T_FrequencyInHertzTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_FrequencyInHertzType*
    P_LDM_Common_T_FrequencyInHertzTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_FrequencyInHertzTypePluginSupport_copy_data(
        P_LDM_Common_T_FrequencyInHertzType *out,
        const P_LDM_Common_T_FrequencyInHertzType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_FrequencyInHertzTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_FrequencyInHertzType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_FrequencyInHertzTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_FrequencyInHertzType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_FrequencyInHertzTypePluginSupport_destroy_data(
        P_LDM_Common_T_FrequencyInHertzType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_FrequencyInHertzTypePluginSupport_print_data(
        const P_LDM_Common_T_FrequencyInHertzType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_FrequencyInHertzTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_FrequencyInHertzType *out,
        const P_LDM_Common_T_FrequencyInHertzType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_FrequencyInHertzTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_FrequencyInHertzType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_FrequencyInHertzTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_FrequencyInHertzType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_FrequencyInHertzTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_FrequencyInHertzTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_FrequencyInHertzTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_FrequencyInHertzTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_FrequencyInHertzTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_FrequencyInHertzType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_FrequencyInHertzTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_FrequencyInHertzTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_FrequencyInHertzTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_FrequencyInHertzTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_FrequencyInHertzType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_FrequencyInHertzTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_FrequencyInHertzType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_FrequencyInHertzTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_FrequencyInHertzType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_FlowRateInCubicMetresPerSecTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_FlowRateInCubicMetresPerSecTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_FlowRateInCubicMetresPerSecTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_FlowRateInCubicMetresPerSecTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_FlowRateInCubicMetresPerSecTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_FlowRateInCubicMetresPerSecType*
    P_LDM_Common_T_FlowRateInCubicMetresPerSecTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_FlowRateInCubicMetresPerSecType*
    P_LDM_Common_T_FlowRateInCubicMetresPerSecTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_FlowRateInCubicMetresPerSecType*
    P_LDM_Common_T_FlowRateInCubicMetresPerSecTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_FlowRateInCubicMetresPerSecTypePluginSupport_copy_data(
        P_LDM_Common_T_FlowRateInCubicMetresPerSecType *out,
        const P_LDM_Common_T_FlowRateInCubicMetresPerSecType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_FlowRateInCubicMetresPerSecTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_FlowRateInCubicMetresPerSecType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_FlowRateInCubicMetresPerSecTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_FlowRateInCubicMetresPerSecType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_FlowRateInCubicMetresPerSecTypePluginSupport_destroy_data(
        P_LDM_Common_T_FlowRateInCubicMetresPerSecType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_FlowRateInCubicMetresPerSecTypePluginSupport_print_data(
        const P_LDM_Common_T_FlowRateInCubicMetresPerSecType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_FlowRateInCubicMetresPerSecTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_FlowRateInCubicMetresPerSecType *out,
        const P_LDM_Common_T_FlowRateInCubicMetresPerSecType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_FlowRateInCubicMetresPerSecTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_FlowRateInCubicMetresPerSecType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_FlowRateInCubicMetresPerSecTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_FlowRateInCubicMetresPerSecType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_FlowRateInCubicMetresPerSecTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_FlowRateInCubicMetresPerSecTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_FlowRateInCubicMetresPerSecTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_FlowRateInCubicMetresPerSecTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_FlowRateInCubicMetresPerSecTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_FlowRateInCubicMetresPerSecType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_FlowRateInCubicMetresPerSecTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_FlowRateInCubicMetresPerSecTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_FlowRateInCubicMetresPerSecTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_FlowRateInCubicMetresPerSecTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_FlowRateInCubicMetresPerSecType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_FlowRateInCubicMetresPerSecTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_FlowRateInCubicMetresPerSecType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_FlowRateInCubicMetresPerSecTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_FlowRateInCubicMetresPerSecType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_Coordinate3DTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_Coordinate3DTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_Coordinate3DTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_Coordinate3DTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_Coordinate3DTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_Coordinate3DType*
    P_LDM_Common_T_Coordinate3DTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_Coordinate3DType*
    P_LDM_Common_T_Coordinate3DTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_Coordinate3DType*
    P_LDM_Common_T_Coordinate3DTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Coordinate3DTypePluginSupport_copy_data(
        P_LDM_Common_T_Coordinate3DType *out,
        const P_LDM_Common_T_Coordinate3DType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Coordinate3DTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_Coordinate3DType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Coordinate3DTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_Coordinate3DType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Coordinate3DTypePluginSupport_destroy_data(
        P_LDM_Common_T_Coordinate3DType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_Coordinate3DTypePluginSupport_print_data(
        const P_LDM_Common_T_Coordinate3DType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Coordinate3DTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Coordinate3DType *out,
        const P_LDM_Common_T_Coordinate3DType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Coordinate3DTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_Coordinate3DType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Coordinate3DTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Coordinate3DType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_Coordinate3DTypePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const P_LDM_Common_T_Coordinate3DType *sample); 

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Coordinate3DTypePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Coordinate3DType **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_Coordinate3DTypePlugin_deserialize_from_cdr_buffer(
        P_LDM_Common_T_Coordinate3DType *sample,
        const char * buffer,
        unsigned int length);    

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_Coordinate3DTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Coordinate3DTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Coordinate3DTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Coordinate3DTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_Coordinate3DTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_Coordinate3DType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_Coordinate3DTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Coordinate3DTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_Coordinate3DTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Coordinate3DTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_Coordinate3DType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Coordinate3DTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Coordinate3DType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_Coordinate3DTypePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Coordinate3DType ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_Coordinate3DTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_Coordinate3DType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    #define P_LDM_Common_T_CurrentInAmpsTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
    #define P_LDM_Common_T_CurrentInAmpsTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define P_LDM_Common_T_CurrentInAmpsTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

    #define P_LDM_Common_T_CurrentInAmpsTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define P_LDM_Common_T_CurrentInAmpsTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern P_LDM_Common_T_CurrentInAmpsType*
    P_LDM_Common_T_CurrentInAmpsTypePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern P_LDM_Common_T_CurrentInAmpsType*
    P_LDM_Common_T_CurrentInAmpsTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern P_LDM_Common_T_CurrentInAmpsType*
    P_LDM_Common_T_CurrentInAmpsTypePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CurrentInAmpsTypePluginSupport_copy_data(
        P_LDM_Common_T_CurrentInAmpsType *out,
        const P_LDM_Common_T_CurrentInAmpsType *in);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_CurrentInAmpsTypePluginSupport_destroy_data_w_params(
        P_LDM_Common_T_CurrentInAmpsType *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_CurrentInAmpsTypePluginSupport_destroy_data_ex(
        P_LDM_Common_T_CurrentInAmpsType *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_CurrentInAmpsTypePluginSupport_destroy_data(
        P_LDM_Common_T_CurrentInAmpsType *sample);

    NDDSUSERDllExport extern void 
    P_LDM_Common_T_CurrentInAmpsTypePluginSupport_print_data(
        const P_LDM_Common_T_CurrentInAmpsType *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CurrentInAmpsTypePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_CurrentInAmpsType *out,
        const P_LDM_Common_T_CurrentInAmpsType *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CurrentInAmpsTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_CurrentInAmpsType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CurrentInAmpsTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_CurrentInAmpsType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_CurrentInAmpsTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CurrentInAmpsTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CurrentInAmpsTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CurrentInAmpsTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_CurrentInAmpsTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_CurrentInAmpsType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    P_LDM_Common_T_CurrentInAmpsTypePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CurrentInAmpsTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CurrentInAmpsTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CurrentInAmpsTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_CurrentInAmpsType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CurrentInAmpsTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_CurrentInAmpsType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_CurrentInAmpsTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_CurrentInAmpsType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CommandResponseTypePlugin_serialize(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_CommandResponseType *sample,
        struct RTICdrStream *stream, 
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CommandResponseTypePlugin_deserialize_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_CommandResponseType *sample, 
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_CommandResponseTypePlugin_skip(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        RTIBool skip_encapsulation,  
        RTIBool skip_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CommandResponseTypePlugin_get_serialized_sample_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);    

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CommandResponseTypePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CommandResponseTypePlugin_get_serialized_sample_min_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int
    P_LDM_Common_T_CommandResponseTypePlugin_get_serialized_sample_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment,
        const P_LDM_Common_T_CommandResponseType * sample);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CommandResponseTypePlugin_get_serialized_key_max_size_ex(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool * overflow,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    P_LDM_Common_T_CommandResponseTypePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CommandResponseTypePlugin_serialize_key(
        PRESTypePluginEndpointData endpoint_data,
        const P_LDM_Common_T_CommandResponseType *sample,
        struct RTICdrStream *stream,
        RTIBool serialize_encapsulation,
        RTIEncapsulationId encapsulation_id,
        RTIBool serialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    P_LDM_Common_T_CommandResponseTypePlugin_deserialize_key_sample(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_CommandResponseType * sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    P_LDM_Common_T_CommandResponseTypePlugin_serialized_sample_to_key(
        PRESTypePluginEndpointData endpoint_data,
        P_LDM_Common_T_CommandResponseType *sample,
        struct RTICdrStream *stream, 
        RTIBool deserialize_encapsulation,  
        RTIBool deserialize_key, 
        void *endpoint_plugin_qos);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    P_LDM_Common_T_CommandResponseTypePluginSupport_print_data(
        const P_LDM_Common_T_CommandResponseType *sample, const char *desc, int indent_level);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LDM_CommonPlugin_1219687462_h */

