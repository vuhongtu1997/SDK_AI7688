/*
 * ShareMessage.h save general data
 */
#ifndef GATEWAYMANAGER_SHAREMESSAGE_H_
#define GATEWAYMANAGER_SHAREMESSAGE_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>  //Header file for sleep(). man 3 sleep for details.
#include <pthread.h>

#define OUTMESSAGE_MAXLENGTH	(64)

extern int8_t 	vrsc_SHAREMESS_Send2GatewayMessage[OUTMESSAGE_MAXLENGTH];
extern uint16_t	vrui_SHAREMESS_Send2GatewayLength;
extern bool		vrb_SHAREMESS_Send2GatewayAvailabe;
extern pthread_mutex_t	vrpth_SHAREMESS_Send2GatewayLock;

#ifdef __cplusplus
}
#endif
#endif /* GATEWAYMANAGER_SHAREMESSAGE_H_ */
