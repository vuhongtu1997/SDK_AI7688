/*
 * Battery.h process power of device
 * - Get data respond
 * - Calculate % power
 */
#ifndef GATEWAYMANAGER_BATTERY_H_
#define GATEWAYMANAGER_BATTERY_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include <unistd.h>

/* Format data respond power*/
typedef struct batteryRsp
{
	uint8_t  typeDev[2];
	uint8_t  batValue[2];
	uint8_t  future[4];
}batteryRsp;
extern batteryRsp * vrts_Battery_Rsp;

/*
 * Calculate % power
 * @param batRsp data respond
 * @return valueBattery % power
 */
uint16_t ProcessBat(batteryRsp * batRsp);

#ifdef __cplusplus
}
#endif

#endif
