/*
 * OpCode.h contain operation code of system
 */
#ifndef GATEWAYMANAGER_OPCODE_H_
#define GATEWAYMANAGER_OPCODE_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "ShareMessage.h"

/*rsp cmd part*/
#define HCI_GATEWAY_RSP_UNICAST	   		0x80
#define HCI_GATEWAY_RSP_OP_CODE	 	 	0X81
#define HCI_GATEWAY_KEY_BIND_RSP 		0x82
#define HCI_GATEWAY_CMD_STATIC_OOB_RSP 	0x87  // HCI send back the static oob information 
#define HCI_GATEWAY_CMD_UPDATE_MAC	 	0x88
#define HCI_GATEWAY_CMD_PROVISION_EVT 	0x89
#define HCI_GATEWAY_CMD_KEY_BIND_EVT 	0x8a
#define HCI_GATEWAY_CMD_PRO_STS_RSP 	0x8b
#define HCI_GATEWAY_CMD_SEND_ELE_CNT 	0x8c
#define HCI_GATEWAY_CMD_SEND_NODE_INFO 	0x8d

/*send cmd part*/
#define HCI_GATEWAY_CMD_START				0x00
#define HCI_GATEWAY_CMD_STOP				0x01
#define HCI_GATEWAY_CMD_RESET       		0x02
#define HCI_GATEWAY_CMD_CLEAR_NODE_INFO		0x06
#define HCI_GATEWAY_CMD_SET_ADV_FILTER 		0x08
#define HCI_GATEWAY_CMD_SET_PRO_PARA 		0x09
#define HCI_GATEWAY_CMD_SET_NODE_PARA		0x0a
#define HCI_GATEWAY_CMD_START_KEYBIND 		0x0b
#define HCI_GATEWAY_CMD_GET_PRO_SELF_STS 	0x0c
#define HCI_GATEWAY_CMD_SET_DEV_KEY     	0x0d
#define HCI_GATEWAY_CMD_GET_SNO         	0x0e
#define HCI_GATEWAY_CMD_SET_SNO         	0x0f
#define HCI_GATEWAY_CMD_GET_UUID_MAC        0x10
#define HCI_GATEWAY_CMD_DEL_VC_NODE_INFO    0x11
#define HCI_GATEWAY_CMD_SEND_VC_NODE_INFO	0x12

/*TSCRIPT*/
#define TSCRIPT_MESH_RX 			0x80
#define TSCRIPT_MESH_RX_NW 			0x90
#define TSCRIPT_GATEWAY_DIR_RSP 	0x91
#define HCI_GATEWAY_CMD_SAR_MSG		0x92
#define TSCRIPT_CMD_VC_DEBUG 		0xfa

/*flag provision*/
#define HCI_GATEWAY_CMD_PROVISION_SUSCESS 0x01
#define HCI_GATEWAY_CMD_BIND_SUSCESS      0x01
#define HCI_GATEWAY_CMD_BIND_DONE         0x00
#define HCI_GATEWAY_CMD_SETPRO_SUSCESS    0x9a

/*user*/
#define HCI_CMD_USER_START			0xFF00
#define HCI_CMD_USER				HCI_CMD_USER_START
#define	HCI_CMD_USER_END			0xFF7F
#define	HCI_CMD_TSCRIPT				0xFFA0
#define	HCI_CMD_BULK_CMD2MODEL		0xFFA1
#define	HCI_CMD_BULK_SET_PAR		0xFFA2			// to VC node
#define	HCI_CMD_BULK_CMD2DEBUG		0xFFA3
#define	HCI_CMD_ADV_PKT				0xFFA4			// to bear and GATT
#define	HCI_CMD_ADV_DEBUG_MESH_DONGLE2BEAR	0xFFA5	// only to bear
#define	HCI_CMD_ADV_DEBUG_MESH_DONGLE2GATT	0xFFA6	// only to gatt
#define	HCI_CMD_ADV_DEBUG_MESH_LED	0xFFA7		// control LED
#define	HCI_CMD_BULK_SET_PAR2USB	0xFFA8
#define	HCI_CMD_SET_VC_PAR			0xFFAA
#define	HCI_CMD_KMA_DONGLE_SET_MAC  			0xFFE0
#define	HCI_CMD_KMA_DONGLE_SPP_TEST_DATA		0xFFE1
#define	HCI_CMD_KMA_DONGLE_SPP_TEST_STATUS  	0xFFE2
#define	HCI_CMD_KMA_DONGLE_SET_ADV_REPORT_EN	0xFFE3
#define	HCI_CMD_USER_DEFINE			0xFFE4
#define	HCI_CMD_GATEWAY_CMD			0xFFE8
#define	HCI_CMD_GATEWAY_CTL			0xFFE9
#define	HCI_CMD_GATEWAY_OTA			0xFFEA
#define	HCI_CMD_MESH_OTA			0xFFEB
#define	HCI_CMD_PROVISION			0xFEA0

/*opcode to function of lights*/
#define SIG_MD_LIGHTNESS_S              0x1300
#define SIG_MD_LIGHTNESS_SETUP_S        0x1301
#define SIG_MD_LIGHTNESS_C              0x1302
#define SIG_MD_LIGHT_CTL_S              0x1303
#define SIG_MD_LIGHT_CTL_SETUP_S        0x1304
#define SIG_MD_LIGHT_CTL_C              0x1305
#define SIG_MD_LIGHT_CTL_TEMP_S         0x1306
#define SIG_MD_LIGHT_HSL_S              0x1307
#define SIG_MD_LIGHT_HSL_SETUP_S        0x1308
#define SIG_MD_LIGHT_HSL_C              0x1309
#define SIG_MD_LIGHT_HSL_HUE_S          0x130A
#define SIG_MD_LIGHT_HSL_SAT_S          0x130B
#define SIG_MD_LIGHT_XYL_S              0x130C
#define SIG_MD_LIGHT_XYL_SETUP_S        0x130D
#define SIG_MD_LIGHT_XYL_C              0x130E
#define SIG_MD_LIGHT_LC_S              	0x130F
#define SIG_MD_LIGHT_LC_SETUP_S        	0x1310

/*opcode of sensor*/
#define SENSOR_TYPE						0x52

/*define type sensor*/
#define POWER_TYPE  					0x0001
#define REMOTE_MODULE_DC_TYPE			0x0002
#define REMOTE_MODULE_AC_TYPE			0x0003
#define LIGHT_SENSOR_MODULE_TYPE		0x0004
#define PIR_SENSOR_MODULE_TYPE 			0x0005

/*define header, typevalue for PM sensor*/
#define PM_SENSOR_HEADER                0x0104
#define PM10_SENSOR_TYPEVALUE			1
#define PM2_5_SENSOR_TYPEVALUE			2
#define PM1_0_SENSOR_TYPEVALUE			3
#define TEMP_SENSOR_TYPEVALUE			4
#define HUMIDITY_SENSOR_TYPEVALUE		5
#define HCHO_SENSOR_TYPEVALUE			6
#define CO2_SENSOR_TYPEVALUE			7

/* appkey*/
#define APPKEY_DEL		                0x0080
#define APPKEY_GET		                0x0180
#define APPKEY_LIST		                0x0280
#define APPKEY_STATUS		            0x0380

/*attention timer*/
#define HEALTH_ATTENTION_GET			0x0480
#define HEALTH_ATTENTION_SET			0x0580
#define HEALTH_ATTENTION_SET_NOACK		0x0680
#define HEALTH_ATTENTION_STATUS			0x0780

#define COMPOSITION_DATA_GET		    0x0880
#define CFG_BEACON_GET		            0x0980
#define CFG_BEACON_SET		            0x0A80
#define CFG_BEACON_STATUS		        0x0B80
#define CFG_DEFAULT_TTL_GET		        0x0C80
#define CFG_DEFAULT_TTL_SET		        0x0D80
#define CFG_DEFAULT_TTL_STATUS		    0x0E80
#define CFG_FRIEND_GET		            0x0F80
#define CFG_FRIEND_SET		            0x1080
#define CFG_FRIEND_STATUS		        0x1180
#define CFG_GATT_PROXY_GET		        0x1280
#define CFG_GATT_PROXY_SET		        0x1380
#define CFG_GATT_PROXY_STATUS		    0x1480
#define CFG_KEY_REFRESH_PHASE_GET	    0x1580
#define CFG_KEY_REFRESH_PHASE_SET		0x1680
#define CFG_KEY_REFRESH_PHASE_STATUS    0x1780
#define CFG_MODEL_PUB_GET               0x1880
#define CFG_MODEL_PUB_STATUS		    0x1980
#define CFG_MODEL_PUB_VIRTUAL_ADR_SET   0x1A80
#define CFG_MODEL_SUB_ADD               0x1B80
#define CFG_MODEL_SUB_DEL		        0x1C80
#define CFG_MODEL_SUB_DEL_ALL		    0x1D80
#define CFG_MODEL_SUB_OVER_WRITE        0x1E80
#define CFG_MODEL_SUB_STATUS		    0x1F80
#define CFG_MODEL_SUB_VIRTUAL_ADR_ADD   0x2080
#define CFG_MODEL_SUB_VIRTUAL_ADR_DEL   0x2180
#define CFG_MODEL_SUB_VIRTUAL_ADR_OVER_WRITE    0x2280
#define CFG_NW_TRANSMIT_GET		        0x2380
#define CFG_NW_TRANSMIT_SET		        0x2480
#define CFG_NW_TRANSMIT_STATUS		    0x2580
#define CFG_RELAY_GET		            0x2680
#define CFG_RELAY_SET		            0x2780
#define CFG_RELAY_STATUS		        0x2880
#define CFG_SIG_MODEL_SUB_GET		    0x2980
#define CFG_SIG_MODEL_SUB_LIST		    0x2A80
#define CFG_VENDOR_MODEL_SUB_GET        0x2B80
#define CFG_VENDOR_MODEL_SUB_LIST       0x2C80
#define CFG_LPN_POLL_TIMEOUT_GET		0x2D80
#define CFG_LPN_POLL_TIMEOUT_STATUS		0x2E80

#define HEALTH_FAULT_CLEAR		        0x2F80
#define HEALTH_FAULT_CLEAR_NOACK        0x3080
#define HEALTH_FAULT_GET		        0x3180
#define HEALTH_FAULT_TEST		        0x3280
#define HEALTH_FAULT_TEST_NOACK         0x3380

#define HEALTH_PERIOD_GET		        0x3480
#define HEALTH_PERIOD_SET		        0x3580
#define HEALTH_PERIOD_SET_NOACK         0x3680
#define HEALTH_PERIOD_STATUS		    0x3780

#define HEARTBEAT_PUB_GET		        0x3880
#define HEARTBEAT_PUB_SET		        0x3980
#define HEARTBEAT_SUB_GET				0x3A80
#define HEARTBEAT_SUB_SET				0x3B80
#define HEARTBEAT_SUB_STATUS			0x3C80

#define MODE_APP_BIND		            0x3D80
#define MODE_APP_STATUS		            0x3E80
#define MODE_APP_UNBIND		            0x3F80
#define NETKEY_ADD		                0x4080
#define NETKEY_DEL		                0x4180
#define NETKEY_GET		                0x4280
#define NETKEY_LIST		                0x4380
#define NETKEY_STATUS		            0x4480
#define NETKEY_UPDATE		            0x4580
#define NODE_ID_GET		                0x4680
#define NODE_ID_SET		                0x4780
#define NODE_ID_STATUS		            0x4880
#define NODE_RESET		                0x4980
#define NODE_RESET_STATUS		        0x4A80
#define SIG_MODEL_APP_GET		        0x4B80
#define SIG_MODEL_APP_LIST		        0x4C80
#define VENDOR_MODEL_APP_GET		    0x4D80
#define VENDOR_MODEL_APP_LIST		    0x4E80

/*generic*/
#define G_ONOFF_GET		                0x0182
#define G_ONOFF_SET		                0x0282
#define G_ONOFF_SET_NOACK		        0x0382
#define G_ONOFF_STATUS		            0x0482

#define G_LEVEL_GET		                0x0582
#define G_LEVEL_SET		                0x0682
#define G_LEVEL_SET_NOACK		        0x0782
#define G_LEVEL_STATUS		            0x0882
#define G_DELTA_SET		                0x0982
#define G_DELTA_SET_NOACK		        0x0A82
#define G_MOVE_SET		                0x0B82
#define G_MOVE_SET_NOACK		        0x0C82

#define G_DEF_TRANS_TIME_GET		    0x0D82
#define G_DEF_TRANS_TIME_SET		    0x0E82
#define G_DEF_TRANS_TIME_SET_NOACK		0x0F82
#define G_DEF_TRANS_TIME_STATUS		    0x1082

#define G_ON_POWER_UP_GET		        0x1182
#define G_ON_POWER_UP_STATUS		    0x1282
#define G_ON_POWER_UP_SET		        0x1382
#define G_ON_POWER_UP_SET_NOACK	        0x1482

#define G_POWER_LEVEL_GET		        0x1582
#define G_POWER_LEVEL_SET		        0x1682
#define G_POWER_LEVEL_SET_NOACK		    0x1782
#define G_POWER_LEVEL_STATUS		    0x1882
#define G_POWER_LEVEL_LAST_GET		    0x1982
#define G_POWER_LEVEL_LAST_STATUS		0x1A82
#define G_POWER_DEF_GET		            0x1B82
#define G_POWER_DEF_STATUS		        0x1C82
#define G_POWER_LEVEL_RANGE_GET		    0x1D82
#define G_POWER_LEVEL_RANGE_STATUS		0x1E82
#define G_POWER_DEF_SET		            0x1F82
#define G_POWER_DEF_SET_NOACK		    0x2082
#define G_POWER_LEVEL_RANGE_SET		    0x2182
#define G_POWER_LEVEL_RANGE_SET_NOACK	0x2282

#define G_BATTERY_GET					0x2382
#define G_BATTERY_STATUS				0x2482

#define G_LOCATION_GLOBAL_GET			0x2582
#define G_LOCATION_GLOBAL_STATUS		0x40
#define G_LOCATION_LOCAL_GET			0x2682
#define G_LOCATION_LOCAL_STATUS			0x2782
#define G_LOCATION_GLOBAL_SET			0x41
#define G_LOCATION_GLOBAL_SET_NOACK		0x42
#define G_LOCATION_LOCAL_SET			0x2882
#define G_LOCATION_LOCAL_SET_NOACK		0x2982

/* opcode of scene*/
#define SCENE_GET		        		0x4182
#define SCENE_RECALL		        	0x4282
#define SCENE_RECALL_NOACK		        0x4382
#define SCENE_STATUS		    		0x5E
#define SCENE_REG_GET		        	0x4482
#define SCENE_REG_STATUS		        0x4582
#define SCENE_STORE		        		0x4682
#define SCENE_STORE_NOACK		    	0x4782
#define SCENE_DEL		        		0x9E82
#define SCENE_DEL_NOACK		    		0x9F82

/*Opcode vendor*/
#define RD_OPCODE_TYPE_SEND             (0xE0)
#define RD_OPCODE_TYPE_RSP              (0xE1)

#define RD_OPCODE_SCENE_SEND            (0xE2)
#define RD_OPCODE_SCENE_RSP             (0xE3)

#define VENDOR_ID                       0x0211
#define STATUS_CMD_SCENE                0x00E3
#define STATUS_CMD_TYPE   				0x00E1


/* opcode for light rgb*/
#define LIGHT_HSL_SET		        	0x7682

/*for type dev*/
#define OPCODE_TYPEDEV              	0xA182

/*for heartbeat*/
#define TSCRIPT_HEARBEAT                0x8f


extern bool check_add_or_del_group;
extern bool check_add_or_del_scene;
extern bool MODE_PROVISION;
extern bool flag_SendCmd_Done;

uint16_t TypeConvertID(uint8_t type, uint8_t attrubute, uint8_t application);
#ifdef __cplusplus
}
#endif

#endif
