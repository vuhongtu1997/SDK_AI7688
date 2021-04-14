/*
 * Light.h build frames data to control device
 * - main function is void FunctionPer()
 * - just add the appropriate parameters into void FunctionPer()
 * -
 */
#ifndef GATEWAYMANAGER_LIGHT_H_
#define GATEWAYMANAGER_LIGHT_H_

#ifdef __cplusplus
extern "C" {
#endif
#include "OpCode.h"


extern bool flag_saveGW;
extern bool flag_typeDEV;
extern bool flag_heartbeat;

/*frame data to control device*/
typedef struct{
	uint8_t HCI_CMD_GATEWAY[2];// CMD
	uint8_t opCode00[4];   // 00 00 00 00
	uint8_t retry_cnt;     // num of send
	uint8_t rsp_max;       // num of rsp
	uint8_t adr_dst[2];    // adr
	uint8_t opCode[2];
	uint8_t para[32];
} cmdcontrol_t;
extern cmdcontrol_t vrts_CMD_STRUCTURE;

/*frame data use opcode vendor*/
typedef struct{
	uint8_t HCI_CMD_GATEWAY[2];// CMD
	uint8_t opCode00[4];   // 00 00 00 00
	uint8_t retry_cnt;     // num of send
	uint8_t rsp_max;       // num of rsp
	uint8_t adr_dst[2];    // adr
	uint8_t opCode[3];     // opcode vendor
	uint8_t status_cmd[2]; // status cmd
	uint8_t para[32];
} cmdcontrol_vendor;
extern cmdcontrol_vendor vrts_CMD_STRUCTURE_VENDOR;

#define HEADER_TYPE_SET  	(0x0001)
#define HEADER_TYPE_SAVEGW  (0x0002)
#define HEADER_TYPE_ASK  	(0x0003)

#define HEADER_SCENE_SET 		(0x0001)
#define HEADER_SCENE_DEL       	(0x0002)
#define HEADER_SCENE_CALL_MODE 	(0x0003)
#define HEADER_SCENE_CALL_SCENE_RGB  (0x0000)

#define HEADER_SCENE_REMOTE_SET (0x0101)
#define HEADER_SCENE_REMOTE_DEL (0x0102)
#define HEADER_SCENE_SENSOR_SET (0x0201)

#define NULL8    0x00
#define NULL16   0x0000

#define LIGHTOPCODE_UPDATE      0x0182
#define LIGHTOPCODE_SELECT      0x6d82
#define LIGHTOPCODE_ONOFF       0x0282
#define LIGHTOPCODE_DIM         0x4d82
#define LIGHTOPCODE_SENCE_SET   0x4382
#define LIGHTOPCODE_SENCE_GET   0x4382
#define LIGHTOPCODE_SENCE_DEL   0x9e82

//status
#define LIGHTOPCODE_STATUS_ON   0x01
#define LIGHTOPCODE_STATUS_OFF  0x00
//
#define LIGHTNESS_GET		        	0x4B82
#define LIGHTNESS_SET		        	0x4C82
#define LIGHTNESS_SET_NOACK				0x4D82
#define LIGHTNESS_STATUS		    	0x4E82
#define LIGHTNESS_LINEAR_GET		    0x4F82
#define LIGHTNESS_LINEAR_SET		    0x5082
#define LIGHTNESS_LINEAR_SET_NOACK		0x5182
#define LIGHTNESS_LINEAR_STATUS		    0x5282
#define LIGHTNESS_LAST_GET		    	0x5382
#define LIGHTNESS_LAST_STATUS		    0x5482
#define LIGHTNESS_DEFULT_GET		    0x5582
#define LIGHTNESS_DEFULT_STATUS		    0x5682
#define LIGHTNESS_RANGE_GET		    	0x5782
#define LIGHTNESS_RANGE_STATUS		    0x5882
#define LIGHTNESS_DEFULT_SET		    0x5982
#define LIGHTNESS_DEFULT_SET_NOACK		0x5A82
#define LIGHTNESS_RANGE_SET		    	0x5B82
#define LIGHTNESS_RANGE_SET_NOACK		0x5C82
#define LIGHT_CTL_GET		        	0x5D82
#define LIGHT_CTL_SET		        	0x5E82
#define LIGHT_CTL_SET_NOACK				0x5F82
#define LIGHT_CTL_STATUS		    	0x6082
#define LIGHT_CTL_TEMP_GET		        0x6182
#define LIGHT_CTL_TEMP_RANGE_GET		0x6282
#define LIGHT_CTL_TEMP_RANGE_STATUS		0x6382
#define LIGHT_CTL_TEMP_SET				0x6482
#define LIGHT_CTL_TEMP_SET_NOACK		0x6582
#define LIGHT_CTL_TEMP_STATUS			0x6682
#define LIGHT_CTL_DEFULT_GET			0x6782
#define LIGHT_CTL_DEFULT_STATUS		    0x6882
#define LIGHT_CTL_DEFULT_SET			0x6982
#define LIGHT_CTL_DEFULT_SET_NOACK		0x6A82
#define LIGHT_CTL_TEMP_RANGE_SET		0x6B82
#define LIGHT_CTL_TEMP_RANGE_SET_NOACK	0x6C82
#define LIGHT_HSL_STATUS                0x7882

#define ACTION_TIME  60
#define SENSOR_CONDITION_PUSH_BIGGER        6
#define SENSOR_CONDITION_PUSH_LESS			4
#define SENSOR_CONDITION_PUSH_EQUAL         1
#define SENSOR_CONDITION_PUSH_BOTH			7

#define SENSOR_CONDITION_SET_

/* enums to is parameter for void FunctionPer()  */
typedef enum{
	null 						= 0x00,
	ResetNode_typedef 			= 0x01,
	Lightness_Get_typedef 		= 0x02,
	AddGroup_typedef 			= 0x03,
	DelGroup_typedef 			= 0x04,
	ControlOnOff_typedef 		= 0x05,
	SetTimePoll_typedef 		= 0x06,
	UpdateLight_typedef 		= 0x07,
	CCT_Get_typedef 			= 0x08,
	CCT_Set_typedef 			= 0x09,
	Lightness_Set_typedef 		= 0x0a,
	AddSence_typedef 			= 0x0b,
	DelSence_typedef 			= 0x0c,
	CallSence_typedef 			= 0x0d,
	HSL_Get_typedef 			= 0x0e,
	HSL_Set_typedef 			= 0x0f,

	SceneForRemote_vendor_typedef 		= 0x10,
	DelSceneForRemote_vendor_typedef 	= 0x11,
	SceneForSensor_vendor_typedef 		= 0x12,
	SceneForRGB_vendor_typedef 	  		= 0x13,
	CallSceneRgb_vendor_typedef   		= 0x14,
	CallModeRgb_vendor_typedef    		= 0x15,
	DelSceneRgb_vendor_typedef    		= 0x16,

	SaveGateway_vendor_typedef    = 0x17,
	AskTypeDevice_vendor_typedef  = 0x18,
	SetTypeDevice_vendor_typedef  = 0x19,
} functionTypeDef;

/*
 * This functions to build important parameter of frame data control node in ble mesh
 * - ResetNode(): delete node from ble mesh
 * - Lightness_Get(): get value lightness of node
 * - Lightness_Set(): set lightness for node
 * - CCT_Set(): set cct for node
 * - AddGroup(): add node into group
 * - DelGroup(): delete node from group
 * - AddSence(),CallSence(),DelSence(): add, call and delete scene
 * - ControlOnOff(): on/off node
 * - SetTimePoll(): set timepoll for sensor
 */
/*void ResetNode(uint16_t uniAdrReset);

void Lightness_Get(uint16_t adrLightnessGet);

void Lightness_Set(uint16_t uniAdrSetDim, uint16_t valueLightness);

void CCT_Get(uint16_t adrCCTGet);

void CCT_Set(uint16_t uniAdrSetCCT, uint16_t valueCCT);

void AddGroup(uint16_t uniAdrAddGroup,uint16_t adrGroup);

void DelGroup(uint16_t uniAdrAddGroup,uint8_t adrGroup);

void AddSence(uint16_t uniAdrSence, uint16_t senceID);

void CallSence(uint16_t senceId);

void DelSence(uint16_t uniAdrDelSence, uint16_t senceId);

void ControlOnOff(uint16_t uniAdrControlOnOff,uint8_t statuOnOff);

void HSL_Get(uint16_t adrHSLGet);

void HSL_Set(uint16_t uniAdrHSL, uint16_t h, uint16_t s, uint16_t l);

void UpdateLight();

void SetTimePoll(uint16_t uniAdrSensor, uint16_t timePoll);*/

/*
 * Main function: build frame data control node, and transmit uart
 * Enter the appropriate parameters to specify the control command
 * When built frame data control, function transmit uart
 *
 *@param cmd two byte first to define control commands
 *@param Func typedefenum to call above functions
 *@param unicastAdr address node in ble mesh
 *@param adrGroup address group
 *@param parStatusOnOff status on/off
 *@param parLightness value lightness
 *@param parCCT value cct
 *@param parSenceId id scene
 *@param parTimePoll timepoll to sensor
 *@param parH value Hue
 *@param parS value Saturation
 *@param parL value Lightness
 *@param cmdLenght the length of the commands
 *@return null
 */
void FunctionPer(uint16_t cmd,\
				functionTypeDef Func,\
				uint16_t unicastAdr,\
				uint16_t adrGroup,\
				uint8_t parStatusOnOff,\
				uint16_t parLightness,\
				uint16_t parCCT,\
				uint16_t parSenceId,\
				uint16_t parTimePoll,\
				uint16_t parL,
				uint16_t parH,
				uint16_t parS,
				uint8_t cmdLength);
void HeartBeat(uint16_t cmd, uint16_t drsHeartbeat, uint16_t srcHeartbeat, uint8_t countLog,\
		uint8_t periodLog, uint8_t tll, uint16_t feature, uint16_t cmdLength);
/*void SetSceneForRemote(uint16_t addressremote, uint8_t buttonId, \
		uint8_t modeId, uint16_t sceneId, uint16_t appID, uint8_t SrgbID);
void DelSceneForRemote(uint16_t addressremote, uint8_t buttonId, uint8_t modeId);

void SetSceneForSensor(uint16_t addressSensor, uint8_t stt, uint16_t condition, uint16_t low_lux, uint16_t hight_lux,\
		uint16_t action, uint16_t sceneID, uint16_t appID, uint8_t srgbID);
void SetSceneForRGB(uint16_t pAdrRgb, uint16_t pAppID, uint8_t pSrgbID);

void CallSceneRgb(uint16_t appID);

void CallModeRgb(uint16_t adrCallModeRgb, uint8_t SrgbID);

void DelSceneRgb(uint16_t adrDelSceneRgb, uint16_t appID);

void AskTypeDevice(uint16_t adr);

void SetTypeDevice(uint16_t adrSetTypeDevice,uint8_t type, uint8_t attrubute, uint8_t application);

void SaveGateway(uint16_t adrSaveGateway);*/

void Function_Vendor(uint16_t cmd,\
		functionTypeDef Func_vendor,\
		uint16_t adr,\
		uint16_t header,\
		uint8_t buttonID,\
		uint8_t modeID,\
		uint8_t stt,\
		uint16_t condition,\
		uint16_t low_lux,\
		uint16_t hight_lux,\
		uint16_t action,\
		uint16_t sceneID,\
		uint16_t appID,\
		uint8_t srgbID,\
		uint8_t mainType,\
		uint8_t feature,\
		uint8_t application,\
		uint16_t cmdLength
		);
uint16_t Percent2ParamCCT(uint8_t percent);

uint8_t Param2PrecentCCT(uint16_t param);

uint16_t Percent2ParamDIM(uint8_t percent);

uint8_t Param2PrecentDIM(uint16_t param);


#ifdef __cplusplus
}
#endif

#endif 
