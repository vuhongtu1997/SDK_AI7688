/*
 * Provision.h handle process provision
 * Link with GateInterface.h to get data define process provision
 */
#ifndef GATEWAYMANAGER_PROVISION_H_
#define GATEWAYMANAGER_PROVISION_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "RingBuffer.h"
#include "ShareMessage.h"
#include "OpCode.h"

/*message control provision*/
extern uint8_t OUTMESSAGE_ScanStop[3];
extern uint8_t OUTMESSAGE_ScanStart[3];
extern uint8_t OUTMESSAGE_MACSelect[9];
extern uint8_t OUTMESSAGE_GetPro[3];
extern uint8_t OUTMESSAGE_Provision[28];
extern uint8_t OUTMESSAGE_BindingALl[22];

extern bool flag_selectmac;
extern bool flag_getpro_info;
extern bool flag_getpro_element;
extern bool flag_provision;
extern bool flag_mac;
extern bool flag_check_select_mac;
extern bool flag_done;
extern bool flag_setpro;
extern bool flag_admitpro;
extern bool flag_checkadmitpro;

extern bool flag_set_type;
extern bool flag_checkHB;
extern bool flag_checkSaveGW;
extern bool flag_checkTypeDEV;


extern unsigned int Timeout_CheckDataBuffer;
extern unsigned char scanNotFoundDev;
extern unsigned int adr_heartbeat;

extern pthread_t tmp ;

/*
 * Transmit uart to control process provision
 *
 * @param lengthmessage length of message uart
 * @param message uart data
 * @return null
 */
void ControlMessage(uint16_t lengthmessage,uint8_t *message);

/*
 * Thead manage process provision
 * This thread send command control process provision
 * GateInterface.h get rsp data and define for this thread
 */
void *ProvisionThread (void *argv );

/*
 * Scan() control provision new device into ble mesh
 */
void Scan();

/*
 *Stop() control stop process provision device
 */
void Stop(); 

#ifdef __cplusplus
}
#endif

#endif
