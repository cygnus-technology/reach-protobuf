// reach_proto_sizes.h
// Structure sizes defined in reach.options
// (c) 2023 i3pd.com, a Helios company.

#define REACH_MESSAGE_PAYLOAD_MAX               cr_StaticBufferSize_MESSAGE_PAYLOAD_MAX 
#define REACH_ERROR_BUFFER_LEN                  cr_StaticBufferSize_BIG_DATA_BUFFER_LEN
#define REACH_PING_ECHO_LEN                     cr_StaticBufferSize_BIG_DATA_BUFFER_LEN
#define REACH_DEVICE_NAME_LEN                   cr_StaticBufferSize_MEDIUM_STRING_LEN 
#define REACH_MANUFACTURER_NAME_LEN             cr_StaticBufferSize_MEDIUM_STRING_LEN 
#define REACH_DEVICE_INFO_LEN                   cr_StaticBufferSize_DEVICE_INFO_LEN
#define REACH_FW_VERSION_LEN                    cr_StaticBufferSize_SHORT_STRING_LEN
#define REACH_UUID_BYTE_LEN                     cr_StaticBufferSize_SHORT_STRING_LEN
#define REACH_SERVICES_COUNT                    cr_StaticBufferSize_SERVICES_COUNT
#define REACH_PARAM_INFO_NAME_LEN               cr_StaticBufferSize_MEDIUM_STRING_LEN 
#define REACH_PARAM_INFO_DESCRIPTION_LEN        cr_StaticBufferSize_LONG_STRING_LEN 
#define REACH_PARAM_INFO_UNITS_LEN              cr_StaticBufferSize_SHORT_STRING_LEN 
#define REACH_COUNT_PARAMS_IN_REQUEST           REACH_PARAM_BUFFER_COUNT
#define REACH_COUNT_PARAM_DESC_IN_RESPONSE      cr_StaticBufferSize_COUNT_PARAM_DESC_IN_RESPONSE
#define REACH_COUNT_PARAM_IDS                   REACH_PARAM_BUFFER_COUNT
#define REACH_COUNT_PARAM_READ_VALUES           cr_StaticBufferSize_NUM_MEDIUM_STRUCTS_IN_MESSAGE
#define REACH_COUNT_PARAM_WRITE_IN_REQUEST      cr_StaticBufferSize_NUM_MEDIUM_STRUCTS_IN_MESSAGE
#define REACH_PVAL_STRING_LEN                   cr_StaticBufferSize_LONG_STRING_LEN  
#define REACH_PVAL_BYTES_LEN                    cr_StaticBufferSize_LONG_STRING_LEN  
#define REACH_COUNT_PARAMS_IN_REQUEST           REACH_PARAM_BUFFER_COUNT
#define REACH_COUNT_FAILED_PARAM_IDS            REACH_PARAM_BUFFER_COUNT
#define REACH_COUNT_PARAM_NOTIF_VALUES          cr_StaticBufferSize_NUM_MEDIUM_STRUCTS_IN_MESSAGE
#define REACH_PI_ENUM_NAME_LEN                 cr_StaticBufferSize_SHORT_STRING_LEN
#define REACH_PI_ENUM_COUNT                    cr_StaticBufferSize_SERVICES_COUNT
#define REACH_DISCOVER_FILES_COUNT              cr_StaticBufferSize_NUM_MEDIUM_STRUCTS_IN_MESSAGE
#define REACH_FILE_NAME_LEN                     cr_StaticBufferSize_MEDIUM_STRING_LEN 
#define REACH_BYTES_IN_A_FILE_PACKET            cr_StaticBufferSize_BIG_DATA_BUFFER_LEN
#define REACH_BYTES_IN_AN_ERROR_MSG             cr_StaticBufferSize_BIG_DATA_BUFFER_LEN
#define REACH_DISCOVER_STREAM_COUNT             cr_StaticBufferSize_NUM_MEDIUM_STRUCTS_IN_MESSAGE
#define REACH_STREAM_NAME_LEN                   cr_StaticBufferSize_MEDIUM_STRING_LEN 
#define REACH_STREAM_DATA_LEN                   cr_StaticBufferSize_BIG_DATA_BUFFER_LEN
#define REACH_COMMAND_NAME_LEN                  cr_StaticBufferSize_MEDIUM_STRING_LEN 
#define REACH_NUM_COMMANDS_IN_RESPONSE          cr_StaticBufferSize_NUM_COMMANDS_IN_RESPONSE   
#define REACH_COMMAND_RES_LEN                   cr_StaticBufferSize_BIG_DATA_BUFFER_LEN
#define REACH_CLI_MSG_LEN                       cr_StaticBufferSize_BIG_DATA_BUFFER_LEN
