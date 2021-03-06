// NodeUtil.h: interface for the CNodeUtil class.

#pragma once

#include "Fibex_Defs.h"
#include <string>
#import <msxml6.dll>

#define PDU_DUMMY_2_0                   _("BM_DUMMY_2_0_PDU")

/* INVALID VALUES */
#define INVALID_STRING                    _("<Empty>")

/* Required node in an element*/
#define REQ_COMP_DATA                     1
#define REQ_COMPS_DATA                    1
#define REQ_DOC_REVS                      1
#define REQ_ELE_REVS                      1
#define REQ_FX_COMP_DATA                  1
#define REQ_FX_COMPS_DATA                 1
#define REQ_NM_CFGS                       1
#define REQ_PROD                          1
#define REQ_PRODS                         1
#define REQ_PROJECT_COUNT                 1
#define REQ_PROJECT_COUNT                 1
#define REQ_ROLES                         1
#define REQ_TEAM_MEM                      1
#define REQ_TEAM_MEMS                     1
#define REQ_TP_ADDRESSES                  1
#define REQ_TP_CFG                        2
#define REQ_TP_CFGS                       1
#define REQ_ELE_REVS                      1
#define REQ_NM_CFGS                       1
#define NM_CONFIGS_NODE                   "NM-CONFIGS"
#define NM_CONFIG_NODE                    "NM-CONFIG"
#define TP_CONFIGS_NODE                   "TP-CONFIGS"
#define TP_CONFIG_NODE                    "TP-CONFIG"
#define PRODUCT_REFS_NODE                 "PRODUCT-REFS"
#define TP_ADDRESSES_NODE                 "TP-ADDRESSES"
#define TP_ADDRESS_TYPE_NODE              "TP-ADDRESS"

#define CLUSTER_NODE                      "CLUSTER"
#define EXTENT_NODE                       "EXTENT"
#define SHORT_NAME_NODE                   "SHORT-NAME"
#define LONG_NAME_NODE                    "LONG-NAME"
#define DESCRIPTION_NODE                  "DESCRIPTION"
#define ELEMENT_REVISIONS_NODE            "ELEMENT-REVISIONS"
#define ELEMENT_REVISION_NODE             "ELEMENT-REVISION"
#define PRODUCT_REF_NODE                  "PRODUCT-REF"
#define ECU_REF_NODE                      "ECU-REF"
#define DIAGNOSTIC_ADDRESSES_NODE         "DIAGNOSTIC-ADDRESSES"
#define DIAGNOSTIC_ADDRESS_NODE           "DIAGNOSTIC-ADDRESS"
#define RESPONSE_ADDRESS_NODE             "RESPONSE-ADDRESS"
#define TP_ADDRESS_REF_NODE               "TP-ADDRESS-REF"
#define TP_ADDRESS_REFS_NODE              "TP-ADDRESS-REFS"
#define KEY_SLOT_USAGE_NODE               "KEY-SLOT-USAGE"
#define STARTUP_SYNC_NODE                 "STARTUP-SYNC"
#define SYNC_NODE                         "SYNC"
#define NONE_NODE                         "NONE"
#define MAX_DYNAMIC_PAYLOAD_LENGTH_NODE   "MAX-DYNAMIC-PAYLOAD-LENGTH"
#define CLUSTER_DRIFT_DAMPING_NODE        "CLUSTER-DRIFT-DAMPING"
#define DECODING_CORRECTION_NODE          "DECODING-CORRECTION"
#define MAX_DRIFT_NODE                    "MAX-DRIFT"
#define EXTERN_OFFSET_CORRECTION_NODE     "EXTERN-OFFSET-CORRECTION"
#define EXTERN_RATE_CORRECTION_NODE       "EXTERN-RATE-CORRECTION"
#define LATEST_TX_NODE                    "LATEST-TX"
#define LISTENT_TIMEOUT_NODE              "LISTEN-TIMEOUT"
#define SAMPLES_PER_MICROTICK_NODE        "SAMPLES-PER-MICROTICK"
#define OFFSET_CORRECTION_OUT_NODE        "OFFSET-CORRECTION-OUT"
#define RATE_CORRECTION_OUT_NODE          "RATE-CORRECTION-OUT"
#define DELAY_COMPENSATION_A_NODE         "DELAY-COMPENSATION-A"
#define DELAY_COMPENSATION_B_NODE         "DELAY-COMPENSATION-B"
#define WAKE_UP_PATTERN_NODE              "WAKE-UP-PATTERN"
#define ALLOW_HALT_DUE_TO_CLOCK_NODE      "ALLOW-HALT-DUE-TO-CLOCK"
#define ALLOW_PASSIVE_TO_ACTIVE_NODE      "ALLOW-PASSIVE-TO-ACTIVE"
#define ACCEPTED_STARTUP_RANGE_NODE       "ACCEPTED-STARTUP-RANGE"
#define MACRO_INITIAL_OFFSET_A_NODE       "MACRO-INITIAL-OFFSET-A"
#define MACRO_INITIAL_OFFSET_B_NODE       "MACRO-INITIAL-OFFSET-B"
#define MICRO_INITIAL_OFFSET_A_NODE       "MICRO-INITIAL-OFFSET-A"
#define MICRO_INITIAL_OFFSET_B_NODE       "MICRO-INITIAL-OFFSET-B"
#define MICRO_PER_MACRO_NOM_NODE          "MICRO-PER-MACRO-NOM"
#define SINGLE_SLOT_ENABLED_NODE          "SINGLE-SLOT-ENABLED"
#define MICROTICK_NODE                    "MICROTICK"
#define SUB_FRAME_REF_NODE                "SUB-FRAME-REF"
#define IS_RESPONSE_ERROR_NODE            "IS-RESPONSE-ERROR"
#define MEDIUM_NODE                       "MEDIUM"
#define NUMBER_OF_CYCLES_NODE             "NUMBER-OF-CYCLES"
#define MAX_FRAME_LENGTH_NODE             "MAX-FRAME-LENGTH"
#define MANUFACTURER_EXTN_NODE            "MANUFACTURER-EXTENSION"
#define COMPANY_REVISION_INFOS_NODE       "COMPANY-REVISION-INFOS"
#define COMPANY_REVISION_INFO_NODE        "COMPANY-REVISION-INFO"
#define COMPANY_DATA_REF_NODE             "COMPANY-DATA-REF"
#define MODIFICATIONS_NODE                "MODIFICATIONS"
#define MODIFICATION_NODE                 "MODIFICATION"
#define DESC_NODE                         "DESC"
#define COMPANIES_DATA_NODE               "COMPANIES-DATA"
#define COMPANY_DATA                      "COMPANY-DATA"
#define FIBEX_COMPANIES_DATA              "FIBEX-COMPANIES-DATA"
#define MANUFACTURER_EXTENSION_NODE       "MANUFACTURER-EXTENSION"
#define FIBEX_COMPANY_DATA_NODE           "FIBEX-COMPANY-DATA"
#define LIN_COMPANY_ID_NODE               "LIN-COMPANY-ID"
#define PRODUCTS_NODE                     "PRODUCTS"
#define PRODUCT_NODE                      "PRODUCT"
#define ID_NODE                           "ID"
#define VARIANT_NODE                      "VARIANT"

#define PROJECT_NODE                      "PROJECT"
#define PROJECTS_NODE                     "PROJECTS"
#define PROTOCOLS_NODE                    "PROTOCOLS"
#define TEAM_MEMBERS_NODE                 "TEAM-MEMBERS"
#define TEAM_MEMBER_NODE                  "TEAM-MEMBER"
#define ROLES                             "ROLES"
#define ROLE                              "ROLE"
#define DEPARTMENT                        "DEPARTMENT"
#define ADDRESS                           "ADDRESS"
#define ZIP                               "ZIP"
#define CITY                              "CITY"
#define PHONE                             "PHONE"
#define FAX                               "FAX"
#define EMAIL                             "EMAIL"
#define HOMEPAGE                          "HOMEPAGE"
#define ADMIN_DATA_NODE                   "ADMIN-DATA"
#define DOC_REVISIONS_NODE                "DOC-REVISIONS"
#define DOC_REVISION_NODE                 "DOC-REVISION"
#define TEAM_MEMBER_REF_NODE              "TEAM-MEMBER-REF"
#define REVISION_LABEL_NODE               "REVISION-LABEL"
#define STATE_NODE                        "STATE"
#define DATE_NODE                         "DATE"
#define COMPANY_REVISION_INFOS_NODE       "COMPANY-REVISION-INFOS"
#define COMPANY_REVISION_INFO_NODE        "COMPANY-REVISION-INFO"
#define COMPANY_DATA_REF_NODE             "COMPANY-DATA-REF"
#define REVISION_LABEL_NODE               "REVISION-LABEL"
#define MODIFICATIONS_NODE                "MODIFICATIONS"
#define MODIFICATION_NODE                 "MODIFICATION"
#define CHANGE_NODE                       "CHANGE"
#define REASON_NODE                       "REASON"

/* hash defines for PROCESSING-INFORMATION */
#define PROCESSING_INFORMATION_NODE          "PROCESSING-INFORMATION"
#define REQUIREMENTS_NODE                    "REQUIREMENTS"
#define UNITS_NODE                           "UNITS"
#define UNITGROUPS_NODE                      "UNITGROUPS"
#define UNITGROUP_NODE                       "UNITGROUP"
#define UNIT_SPEC_NODE                       "UNIT-SPEC"
#define UNIT_REFS_NODE                       "UNIT-REFS"
#define UNIT_REF_NODE                        "UNIT-REF"
#define UNIT_NODE                            "UNIT"
#define TIME_EXP_NODE                        "TIME-EXP"
#define TEMPERATURE_EXP_NODE                 "TEMPERATURE-EXP"
#define PHYSICAL_DIMENSIONS_NODE             "PHYSICAL-DIMENSIONS"
#define PHYSICAL_DIMENSION_REF_NODE          "PHYSICAL-DIMENSION-REF"
#define PHYSICAL_DIMENSION_NODE              "PHYSICAL-DIMENSION"
#define OFFSET_SI_TO_UNIT_NODE               "OFFSET-SI_TO-UNIT"
#define MOLAR_EXP_NODE                       "MOLAR-AMOUNT-EXP"
#define MASS_EXP_NODE                        "MASS-EXP"
#define LUMINOUS_INTENSITY_EXP_NODE          "LUMINOUS-INTENSITY-EXP"
#define LENGTH_EXP_NODE                      "LENGTH-EXP"
#define FACTOR_SI_TO_UNIT_NODE               "FACTOR-SI_TO-UNIT"
#define DISPLAY_NAME_NODE                    "DISPLAY-NAME"
#define CURRENT_EXP_NODE                     "CURRENT-EXP"
#define CODINGS_NODE                         "CODINGS"
#define CODING_NODE                          "CODING"
#define CATEGORY_NODE                        "CATEGORY"
#define BIT_LENGTH_NODE                      "BIT-LENGTH"
#define CODED_TYPE_NODE                      "CODED-TYPE"
#define COMPU_METHODS_NODE                   "COMPU-METHODS"
#define MANUFACTURE_CODING_EXTENSION_NODE    "MANUFACTURE-CODING-EXTENSION"
#define MAX_LENGTH_NODE                      "MAX-LENGTH"
#define MIN_LENGTH_NODE                      "MIN-LENGTH"
#define PHYSICAL_TYPE_NODE                   "PHYSICAL-TYPE"
#define COMPU_CONST_NODE              "COMPU-CONST"
#define COMPU_DEFAULT_VALUE_NODE      "COMPU-DEFAULT-VALUE"
#define COMPU_DENOMINATOR_NODE        "COMPU-DENOMINATOR"
#define COMPU_GENERIC_MATH_NODE       "COMPU-GENERIC-MATH"
#define COMPU_INTERNAL_TO_PHYS_NODE   "COMPU-INTERNAL-TO-PHYS"
#define COMPU_NUMERATOR_NODE          "COMPU-NUMERATOR"
#define COMPU_RATIONAL_COEFFS_NODE    "COMPU-RATIONAL-COEFFS"
#define COMPU_SCALE_NODE              "COMPU-SCALE"
#define COMPU_SCALES_NODE             "COMPU-SCALES"
#define INTERNAL_CONSTRS_NODE         "INTERNAL-CONSTRS"
#define LOWER_LIMIT_NODE              "LOWER-LIMIT"
#define PHYS_CONSTRS_NODE             "PHYS-CONSTRS"
#define UPPER_LIMIT_NODE              "UPPER-LIMIT"
#define V_NODE                        "V"
#define VT_NODE                       "VT"
#define LOWER_LIMIT_NODE              "LOWER-LIMIT"
#define UPPER_LIMIT_NODE              "UPPER-LIMIT"
#define V_NODE                        "V"
#define COMPU_METHOD_NODE             "COMPU-METHOD"

#define MUX_SWITCH            "SWITCH"
#define MUX_STATIC            "STATIC"


#define MIN_MAX_LEN                          1
#define BIT_LEN                              0

/* hash defines for ELEMENTS */
#define SPEED_NODE                        "SPEED"
#define IS_HL_BIT_ODR_NODE                "IS-HIGH-LOW-BIT-ORDER"
#define BIT_CNTING_POLICY_NODE            "BIT-COUNTING-POLICY"
#define PROTOCOL_NODE                     "PROTOCOL"
#define PROTOCOL_VER_TYPE_NODE            "PROTOCOL-VERSION-TYPE"
#define PHYSICAL_TYPE_NODE                "PHYSICAL-TYPE"
#define PHYSICAL_VER_NODE                 "PROTOCOL-VERSION"
#define CHANNEL_REFS_NODE                 "CHANNEL-REFS"
#define CONTROLLER_REFS_NODE              "CONTROLLER-REFS"
#define CONTROLLER_REF_NODE               "CONTROLLER-REF"
#define CHANNEL_REF_NODE                  "CHANNEL-REF"
#define COLD_START_ATTEMPTS_NODE          "COLD-START-ATTEMPTS"
#define ACTION_POINT_OFFSET_NODE          "ACTION-POINT-OFFSET"
#define DYNAMIC_SLOT_IDLE_PHASE_NODE      "DYNAMIC-SLOT-IDLE-PHASE"
#define MINISLOT_NODE                     "MINISLOT"
#define MINISLOT_ACTION_PT_OFFSET_NODE    "MINISLOT-ACTION-POINT-OFFSET"
#define N_I_T_NODE                        "N-I-T"
#define SAMPLE_CLOCK_PERIOD_NODE          "SAMPLE-CLOCK-PERIOD"
#define STATIC_SLOT_NODE                  "STATIC-SLOT"
#define SYMBOL_WINDOW_NODE                "SYMBOL-WINDOW"
#define T_S_S_TRANSMITTER_NODE            "T-S-S-TRANSMITTER"
#define WAKE_UP_NODE                      "WAKE-UP"
#define WAS_RX_IDLE_NODE                  "WAKE-UP-SYMBOL-RX-IDLE"
#define WAS_RX_LOW_NODE                   "WAKE-UP-SYMBOL-RX-LOW"
#define WAS_RX_WINDOW_NODE                "WAKE-UP-SYMBOL-RX-WINDOW"
#define WAS_TX_IDLE_NODE                  "WAKE-UP-SYMBOL-TX-IDLE"
#define WAS_TX_LOW_NODE                   "WAKE-UP-SYMBOL-TX-LOW"
#define LISTEN_NOISE_NODE                 "LISTEN-NOISE"
#define MACRO_PER_CYCLE_NODE              "MACRO-PER-CYCLE"
#define MACROTICK_NODE                    "MACROTICK"
#define MAX_INITZN_ERROR_NODE             "MAX-INITIALIZATION-ERROR"
#define MAX_WITOUT_CLK_CORR_FATAL_NODE    "MAX-WITHOUT-CLOCK-CORRECTION-FATAL"
#define MAX_WITOUT_CLK_CORR_PASSIVE_NODE  "MAX-WITHOUT-CLOCK-CORRECTION-PASSIVE"
#define NET_MGNT_VECT_LEGTH_NODE          "NETWORK-MANAGEMENT-VECTOR-LENGTH"
#define NUMBER_OF_MINISLOTS_NODE          "NUMBER-OF-MINISLOTS"
#define NUMBER_OF_STATIC_SLOTS_NODE       "NUMBER-OF-STATIC-SLOTS"
#define OFFSET_CORRECTION_START_NODE      "OFFSET-CORRECTION-START"
#define PAYLOAD_LENGTH_STATIC_NODE        "PAYLOAD-LENGTH-STATIC"
#define SYNC_NODE_MAX_NODE                "SYNC-NODE-MAX"
#define CAS_RX_LOW_MAX_NODE               "CAS-RX-LOW-MAX"
#define BIT_NODE                          "BIT"
#define CYCLE_NODE                        "CYCLE"
#define CLUSTER_DRIFT_DAMPING_NODE        "CLUSTER-DRIFT-DAMPING"

#define CLUSTERS_NODE                     "CLUSTERS"
#define CHANNELS_NODE                     "CHANNELS"
#define CHANNEL_NODE                      "CHANNEL"
#define GATEWAYS_NODE                     "GATEWAYS"
#define GATEWAY_NODE                      "GATEWAY"
#define PDU_TRIGGERINGS_NODE              "PDU-TRIGGERINGS"
#define FRAME_TRIGGERINGS_NODE            "FRAME-TRIGGERINGS"
#define PDU_TRIGGERING_NODE               "PDU-TRIGGERING"
#define FRAME_TRIGGERING_NODE             "FRAME-TRIGGERING"
#define PDU_REF_NODE                      "PDU-REF"
#define TIMINGS_NODE                      "TIMINGS"
#define CYCLIC_TIMING_NODE                "CYCLIC-TIMING"
#define REPEATING_TIME_RANGE_NODE         "REPEATING-TIME-RANGE"
#define STARTING_TIME_RANGE_NODE          "STARTING-TIME-RANGE"
#define VALUE_NODE                        "VALUE"
#define DESC_NODE                         "DESC"
#define TOLERANCE_NODE                    "TOLERANCE"
#define MIN_VALUE_NODE                    "MIN-VALUE"
#define MAX_VALUE_NODE                    "MAX-VALUE"
#define START_CONDITION_NODE              "START-CONDITION"
#define ACTIVE_CONDITION_NODE             "ACTIVE-CONDITION"
#define SEND_CONDITION_NODE               "SEND-CONDITION"
#define STOP_CONDITION_NODE               "STOP-CONDITION"
#define FINAL_REPETITIONS_NODE            "FINAL-REPETITIONS"
#define MANUFACTURER_CLC_TMG_EXTN_NODE    "MANUFACTURER-CYCLIC-TIMING-EXTENSION"
#define MANU_EVENT_CTRLLED_TMG_EXTN_NODE  "MANUFACTURER-EVENT-CONTROLLED-TIMING-EXTENSION"
#define MANU_REQ_CTRLLED_TMG_EXTN_NODE    "MANUFACTURER-REQ-CONTROLLED-TIMING-EXTENSION"
#define MANU_PDU_TRIGGERING_EXTN_NODE     "MANUFACTURER-PDU-TRIGGERING-EXTENSION"
#define MANU_FRAME_TRIGGERING_EXTN_NODE   "MANUFACTURER-FRAME-TRIGGERING-EXTENSION"
#define MANU_REL_SCH_TMG_EXTN_NODE        "MANUFACTURER-RELATIVELY-SCHEDULED-TIMING-EXTENSION"
#define MANU_ABS_SCH_TMG_EXTN_NODE        "MANUFACTURER-ABSOLUTELY-SCHEDULED-TIMING-EXTENSION"
#define MANU_IDENTIFIER_EXTN_NODE         "MANUFACTURER-IDENTIFIER-EXTENSION"
#define MANU_GATEWAY_EXTN_NODE            "MANUFACTURER-GATEWAY-EXTENSION"
#define MANU_ECU_EXTN_NODE                "MANUFACTURER-ECU-EXTENSION"
#define MANU_PDU_EXTN_NODE                "MANUFACTURER-PDU-EXTENSION"
#define MANU_CONTROLLER_EXTN_NODE         "MANUFACTURER-CONTROLLER-EXTENSION"
#define MANU_PORT_EXTN_NODE               "MANUFACTURER-PORT-EXTENSION"
#define MANU_CHANNEL_EXTN_NODE            "MANUFACTURER-CHANNEL-EXTENSION"
#define MANU_CONNECTOR_EXTN_NODE          "MANUFACTURER-CONNECTOR-EXTENSION"
#define MANU_SIG_INST_EXTN_NODE           "MANUFACTURER-SIGNAL-INSTANCE-EXTENSION"
#define MANU_SWITCH_EXTN_NODE             "MANUFACTURER-SWITCH-EXTENSION"
#define MANU_DATA_EXTN_NODE               "MANUFACTURE-DATA-EXTENSION"
#define MANU_SUBFRAME_EXTN_NODE           "MANUFACTURE-SUB-FRAME-EXTENSION"
#define MANU_MUX_PART_EXTN_NODE           "MANUFACTURER-MUX-PART-EXTENSION"
#define MANU_PDU_INST_EXTN_NODE           "MANUFACTURER-PDU-INSTANCE-EXTENSION"
#define MANU_FRAME_EXTN_NODE              "MANUFACTURER-FRAME-EXTENSION"
#define SUB_FRAMES_NODE                   "SUB-FRAMES"
#define SUB_FRAME_NODE                    "SUB-FRAME"
#define MANU_FUNCTION_EXTN_NODE           "MANUFACTURER-FUNCTION-EXTENSION"
#define MANU_SIGNAL_EXTN_NODE             "MANUFACTURER-SIGNAL-EXTENSION"
#define MANU_PORT_REQ_EXTN_NODE           "MANUFACTURER-PORT-REQ-EXTENSION"
#define MANU_FUN_REQ_EXTN_NODE            "MANUFACTURER-FUNCTION-REQ-EXTENSION"
#define MANU_COMPOSITE_EXTN_NODE          "MANUFACTURER-COMPOSITE-EXTENSION"
#define MANU_IDENTIFIER_EXTN_NODE         "MANUFACTURER-IDENTIFIER-EXTENSION"
#define MANU_SIGNAL_GROUP_EXTN_NODE       "MANUFACTURER-SIGNAL-GROUP-EXTENSION"
#define MANU_CODING_EXTN_NODE             "MANUFACTURER-CODING-EXTENSION"
#define MANUFACTURER_EXTENSION_NODE       "MANUFACTURER-EXTENSION"
#define SYSTEM_TRIGGER_NODE               "SYSTEM-TRIGGER"
#define SIGNAL_TRIGGER_NODE               "SIGNAL-TRIGGER"
#define SYSTEM_STATE_NODE                 "SYSTEM-STATE"
#define SIGNAL_STATE_NODE                 "SIGNAL-STATE"
#define SIGNAL_INSTANCE_NODE              "SIGNAL-INSTANCE"
#define EVENT_CONTROLLED_TIMING_NODE      "EVENT-CONTROLLED-TIMING"
#define REQUEST_CONTROLLED_TIMING_NODE    "REQUEST-CONTROLLED-TIMING"
#define DEBOUNCE_TIME_RANGE_NODE          "DEBOUNCE-TIME-RANGE"
#define RESPONSE_TIME_RANGE_NODE          "RESPONSE-TIME-RANGE"
#define FRAME_REF_NODE                    "FRAME-REF"
#define IDENTIFIER_NODE                   "IDENTIFIER"
#define IDENTIFIER_VALUE_NODE             "IDENTIFIER-VALUE"
#define ABSOLUTELY_SCHLD_TIMING_NODE      "ABSOLUTELY-SCHEDULED-TIMING"
#define RELATIVELY_SCHLD_TIMING_NODE      "RELATIVELY-SCHEDULED-TIMING"
#define SLOT_ID_NODE                      "SLOT-ID"
#define DELAY_NODE                        "DELAY"
#define SCHEDULED_TABLE_NAME_NODE         "SCHEDULED-TABLE-NAME"
#define POSITIVE_IN_TABLE_NODE            "POSITIVE-IN-TABLE"
#define BASE_CYCLE_NODE                   "BASE-CYCLE"
#define CYCLE_NUM_NODE                    "CYCLE-NUMBER"
#define CYCLE_REPETITION_NODE             "CYCLE-REPETITION"
#define FLEXRAY_CHANNEL_NAME_NODE         "FLEXRAY-CHANNEL-NAME"

#define FRAMES_NODE                       "FRAMES"
#define FRAME_NODE                        "FRAME"
#define FRAME_TYPE_NODE                   "FRAME-TYPE"
#define PDU_INSTANCES_NODE                "PDU-INSTANCES"
#define PDU_INSTANCE_NODE                 "PDU-INSTANCE"
#define PDU_REF_NODE                      "PDU-REF"
#define PDU_UPDATE_BIT_POS_NODE           "PDU-UPDATE-BIT-POSITION"
#define BIT_POSITION_NODE                 "BIT-POSITION"
#define IS_HIGH_LOW_BYTE_ODR_NODE         "IS-HIGH-LOW-BYTE-ORDER"
#define BYTE_LENGTH_NODE                  "BYTE-LENGTH"
#define SEQUENCE_NUMBER_NODE              "SEQUENCE-NUMBER"

#define FUNCTIONS_NODE                    "FUNCTIONS"
#define FUNCTION_NODE                     "FUNCTION"
#define INPUT_PORTS_NODE                  "INPUT-PORTS"
#define OUTPUT_PORTS_NODE                 "OUTPUT-PORTS"
#define INPUT_PORT_NODE                   "INPUT-PORT"
#define OUTPUT_PORT_NODE                  "OUTPUT-PORT"
#define WAKE_UP_CHANNEL_NODE              "WAKE-UP-CHANNEL"
#define SIGNALS_NODE                      "SIGNALS"
#define SIGNAL_NODE                       "SIGNAL"
#define CODING_REF_NODE                   "CODING-REF"
#define DEFAULT_VALUE_NODE                "DEFAULT-VALUE"
#define SIGNAL_TYPE_NODE                  "SIGNAL-TYPE"
#define TYPE_NODE                         "TYPE"
#define METHOD_NODE                       "METHOD"
#define ATTRIBUTES_NODE                   "ATTRIBUTES"
#define ATTRIBUTE_NODE                    "ATTRIBUTE"
#define PRIORITY_NODE                     "PRIORITY"
#define ECU_SENDING_BEHAVIORS_NODE        "ECU-SENDING-BEHAVIORS"
#define ECU_SENDING_BEHAVIOR_NODE         "ECU-SENDING-BEHAVIOR"
#define SIGNAL_REF_NODE                   "SIGNAL-REF"

#define COMPOSITES_NODE                   "COMPOSITES"
#define COMPOSITE_NODE                    "COMPOSITE"
#define COMPOSITION_LEVEL_NODE            "COMPOSITION-LEVEL"
#define COMPOSITE_REFS_NODE               "COMPOSITE-REFS"
#define COMPOSITE_REF_NODE                "COMPOSITE-REF"
#define PDU_REFS_NODE                     "PDU-REFS"
#define ECU_REFS_NODE                     "ECU-REFS"
#define SIGNAL_REFS_NODE                  "SIGNAL-REFS"
#define FUNCTION_REFS_NODE                "FUNCTION-REFS"
#define FUNCTION_REF_NODE                 "FUNCTION-REF"

#define ECUS_NODE                         "ECUS"
#define ECU_NODE                          "ECU"
#define FUNCTION_REFS_NODE                "FUNCTION-REFS"
#define CONTROLLERS_NODE                  "CONTROLLERS"
#define CONNECTORS_NODE                   "CONNECTORS"
#define CONTROLLER_NODE                   "CONTROLLER"
#define CONNECTOR_NODE                    "CONNECTOR"
#define FUNCTION_REF_NODE                 "FUNCTION-REF"
#define VENDOR_NAME_NODE                  "VENDOR-NAME"
#define CHIP_NAME_NODE                    "CHIP-NAME"
#define TRANSCEIVER_NODE                  "TRANSCEIVER"
#define TRANSMISSION_IMPEDANCE_NODE       "TRANSMISSION-IMPEDANCE"
#define KEY_SLOT_USAGE_NODE               "KEY-SLOT-USAGE"
#define STARTUP_SYNC_NODE                 "STARTUP-SYNC"
#define SYNC_NODE                         "SYNC"
#define MAX_DYNAMIC_PAYLOAD_LENGTH_NODE   "MAX-DYNAMIC-PAYLOAD-LENGTH"
#define CLUSTER_DRIFT_DAMPING_NODE        "CLUSTER-DRIFT-DAMPING"
#define DECODING_CORRECTION_NODE          "DECODING-CORRECTION"
#define MAX_DRIFT_NODE                    "MAX-DRIFT"
#define EXTERN_OFFSET_CORRECTION_NODE     "EXTERN-OFFSET-CORRECTION"
#define EXTERN_RATE_CORRECTION_NODE       "EXTERN-RATE-CORRECTION"
#define LATEST_TX_NODE                    "LATEST-TX"
#define LISTENT_TIMEOUT_NODE              "LISTEN-TIMEOUT"
#define SAMPLES_PER_MICROTICK_NODE        "SAMPLES-PER-MICROTICK"
#define OFFSET_CORRECTION_OUT_NODE        "OFFSET-CORRECTION-OUT"
#define RATE_CORRECTION_OUT_NODE          "RATE-CORRECTION-OUT"
#define DELAY_COMPENSATION_A_NODE         "DELAY-COMPENSATION-A"
#define DELAY_COMPENSATION_B_NODE         "DELAY-COMPENSATION-B"
#define WAKE_UP_PATTERN_NODE              "WAKE-UP-PATTERN"
#define ALLOW_HALT_DUE_TO_CLOCK_NODE      "ALLOW-HALT-DUE-TO-CLOCK"
#define ALLOW_PASSIVE_TO_ACTIVE_NODE      "ALLOW-PASSIVE-TO-ACTIVE"
#define ACCEPTED_STARTUP_RANGE_NODE       "ACCEPTED-STARTUP-RANGE"
#define MACRO_INITIAL_OFFSET_A_NODE       "MACRO-INITIAL-OFFSET-A"
#define MACRO_INITIAL_OFFSET_B_NODE       "MACRO-INITIAL-OFFSET-B"
#define MICRO_INITIAL_OFFSET_A_NODE       "MICRO-INITIAL-OFFSET-A"
#define MICRO_INITIAL_OFFSET_B_NODE       "MICRO-INITIAL-OFFSET-B"
#define MICRO_PER_MACRO_NOM_NODE          "MICRO-PER-MACRO-NOM"
#define SINGLE_SLOT_ENABLED_NODE          "SINGLE-SLOT-ENABLED"
#define MICROTICK_NODE                    "MICROTICK"

#define MICRO_PER_CYCLE_NODE              "MICRO-PER-CYCLE"
#define OFFSET_CORRECTION_OUT_NODE        "OFFSET-CORRECTION-OUT"
#define RATE_CORRECTION_OUT_NODE          "RATE-CORRECTION-OUT"
#define DELAY_COMPENSATION_A_NODE         "DELAY-COMPENSATION-A"
#define DELAY_COMPENSATION_B_NODE         "DELAY-COMPENSATION-B"
#define WAKE_UP_PATTERN_NODE              "WAKE-UP-PATTERN"
#define ALLOW_HALT_DUE_TO_CLOCK_NODE      "ALLOW-HALT-DUE-TO-CLOCK"
#define CHANNEL_REF_NODE                  "CHANNEL-REF"
#define CONTROLLER_REF_NODE               "CONTROLLER-REF"
#define INPUTS_NODE                       "INPUTS"
#define INPUT_NODE                        "INPUT"
#define INPUT_PORT_NODE                   "INPUT-PORT"
#define OUTPUTS_NODE                      "OUTPUTS"
#define OUTPUT_NODE                       "OUTPUT"
#define WAKE_UP_CHANNEL_NODE              "WAKE-UP-CHANNEL"
#define OUTPUT_PORT_NODE                  "OUTPUT-PORT"
#define FRAME_TRIGGERING_REF_NODE         "FRAME-TRIGGERING-REF"
#define INCLUDED_PDUS_NODE                "INCLUDED-PDUS"
#define COMPLETE_FRAME_NODE               "COMPLETE-FRAME"
#define COMPLETE_PDU_NODE                 "COMPLETE-PDU"
#define INCLUDED_PDU_NODE                 "INCLUDED-PDU"
#define INCLUDED_SIGNALS_NODE             "INCLUDED-SIGNALS"
#define INCLUDED_SIGNAL_NODE              "INCLUDED-SIGNAL"
#define SIGNAL_INSTANCE_REF_NODE          "SIGNAL-INSTANCE-REF"
#define PDU_TRIGGERING_REF_NODE           "PDU-TRIGGERING-REF"

#define PDUS_NODE                         "PDUS"
#define PDU_NODE                          "PDU"
#define BYTE_LENGTH_NODE                  "BYTE-LENGTH"
#define PDU_TYPE_NODE                     "PDU-TYPE"
#define SIGNAL_INSTANCES_NODE             "SIGNAL-INSTANCES"
#define SIGNAL_INSTANCE_NODE              "SIGNAL-INSTANCE"
#define BIT_POSITION_NODE                 "BIT-POSITION"
#define IS_HIGH_LOW_BYTE_ODR_NODE         "IS-HIGH-LOW-BYTE-ORDER"
#define SIGNAL_REF_NODE                   "SIGNAL-REF"
#define SIGNAL_UPDATE_BIT_POS_NODE        "SIGNAL-UPDATE-BIT-POSITION"
#define SEQUENCE_NUMBER_NODE              "SEQUENCE-NUMBER"
#define MULTIPLEXER_NODE                  "MULTIPLEXER"
#define MULTIPLEXERS_NODE                 "MULTIPLEXERS"
#define SWITCH_NODE                       "SWITCH"
#define DATA_NODE                         "DATA"
#define DYNAMIC_PART_NODE                 "DYNAMIC-PART"
#define STATIC_PART_NODE                  "STATIC-PART"
#define BIT_LENGTH_NODE                   "BIT-LENGTH"
#define SEGMENT_POSITIONS_NODE            "SEGMENT-POSITIONS"
#define SEGMENT_POSITION_NODE             "SEGMENT-POSITION"
#define SWITCHED_PDU_INSTANCES_NODE       "SWITCHED-PDU-INSTANCES"
#define SWITCHED_PDU_INSTANCE_NODE        "SWITCHED-PDU-INSTANCE"
#define PDU_REF_NODE                      "PDU-REF"
#define SWITCH_CODE_NODE                  "SWITCH-CODE"
#define STATIC_PDU_INSTANCE_NODE          "STATIC-PDU-INSTANCE"
#define BIT_LENGTH_NODE                   "BIT-LENGTH"
#define CYCLE_COUNTER_NODE                "CYCLE-COUNTER"

/* hash defines for REQUIREMENTS */
#define COMMON_LAYOUT_DETAILS_NODE                     "COMMON-LAYOUT-DETAILS"
#define CYCLE_OFFSET_NODE                              "CYCLE-OFFSET"
#define CYCLE_PERIOD_NODE                              "CYCLE-PERIOD"
#define DEADLINE_NODE                                  "DEADLINE"
#define ECU_INPUT_PORT_REF_NODE                        "ECU-INPUT-PORT-REF"
#define FUNC_INPUT_PORT_REF_NODE                       "FUNC-INPUT-PORT-REF"
#define FUNC_OUTPUT_PORT_REF_NODE                      "FUNC-OUTPUT-PORT-REF"
#define FUNCTION_REQ_NODE                              "FUNCTION-REQ"
#define FUNCTION_REQS_NODE                             "FUNCTION-REQS"
#define GENERATION_TYPE_NODE                           "GENERATION-TYPE"
#define IS_HIGH_LOW_BYTE_ORDER_NODE                    "IS-HIGH-LOW-BYTE-ORDER"
#define MANUFACTURER_FUNCTION_REQ_EXTENSION_NODE       "MANUFACTURER-FUNCTION-REQ-EXTENSION"
#define MANUFACTURER_PORT_REQ_EXTENSION_NODE           "MANUFACTURER-PORT-REQ-EXTENSION"
#define MANUFACTURER_SIGNAL_GROUP_EXTENSION_NODE       "MANUFACTURER-SIGNAL-GROUP-EXTENSION"
#define MAX_AGE_NODE                                   "MAX-AGE"
#define ORDERED_SIGNAL_NODE                            "ORDERED-SIGNAL"
#define ORDERED_SIGNALS_NODE                           "ORDERED-SIGNALS"
#define PDU_REQ_NODE                                   "PDU-REQ"
#define PDU_REQS_NODE                                  "PDU-REQS"
#define PORT_REFS_NODE                                 "PORT-REFS"
#define PORT_REQ_NODE                                  "PORT-REQ"
#define PORT_REQS_NODE                                 "PORT-REQS"
#define REDUNDANCY_LVL_NODE                            "REDUNDANCY-LVL"
#define SIGNAL_GROUP_NODE                              "SIGNAL-GROUP"
#define SIGNAL_GROUPS_NODE                             "SIGNAL-GROUPS"
#define W_C_E_T_NODE                                   "W-C-E-T"
#define CYCLE_OFFSET_NODE                              "CYCLE-OFFSET"
#define CYCLE_PERIOD_NODE                              "CYCLE-PERIOD"
#define PDU_REQ_DIRECTION_TYPE_NODE                    "PDU-REQ-DIRECTION-TYPE"
#define PDU_TRIGGERING_REFS_NODE                       "PDU-TRIGGERING-REFS"
#define PDU_TRIGGERING_REF_NODE                        "PDU-TRIGGERING-REF"

class CNodeUtil
{
public:
    CNodeUtil();
    virtual ~CNodeUtil();

    static bool bReadAttribute(MSXML2::IXMLDOMNode* iNode, std::string& omAttribute, _bstr_t temp);
    static bool bRemoveTag(const std::string omSrcString, std::string& omDestString);


    static BOOL bCreateNode(MSXML2::IXMLDOMElementPtr& pChildNode, std::string omNodeName,
                            std::string omNameSpace, std::string omNodeval);
    static BOOL bAddAttribToNode(MSXML2::IXMLDOMElementPtr& pNode,
                                 std::string omAttribName, std::string omAttribVal);
    static bool bAddNodeWithOneAttrib(MSXML2::IXMLDOMElementPtr& pNodeElement, std::string omNodeName,
                                      std::string omNameSpace, std::string omNodeVal,
                                      std::string omAttribName, std::string omAttribVal);
    static bool bAddChildToNode(MSXML2::IXMLDOMElementPtr& pNodeElement, std::string omNodeName,
                                std::string omNameSpace, std::string omNodeval);
    static bool bAddID_OID_Attrib(std::string strID, std::string strOID,
                                  MSXML2::IXMLDOMElementPtr& pNodeElement);
    static bool bAddRefrences(MSXML2::IXMLDOMElementPtr& pMainParent, std::string omMainNodeName,
                              std::string omSubNodeName, CStringArray& omRefArray);
    static std::string omAddNameSpaceExt(std::string omNameSpace, std::string omNodeName);
};
