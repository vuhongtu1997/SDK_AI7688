/*
 * ButtonManager.h library process tasks of remote
 *
 */
#ifndef GATEWAYMANAGER_BUTTONMANAGER_H_
#define GATEWAYMANAGER_BUTTONMANAGER_H_


#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>

/* format of data respond remote*/
typedef struct remotersp
{
	uint8_t   typeDev[2];
	uint8_t   buttonID;
	uint8_t   modeID;
	uint8_t   senceID[2];
	uint8_t   futureID[2];
}remotersp;
extern remotersp * vrts_Remote_Rsp;

#define BUTTON_1           1
#define BUTTON_2           2
#define BUTTON_3           3
#define BUTTON_4           4
#define BUTTON_5           5

#define MODEIDCLICK         1
#define MODEIDDOUBLE        2


#define OPCODEREMOTE_CMD     0xA082
#define OPCODEREMOTE_RSP     0xA182

/*
 * Check press on remote (button, mode press)
 *
 * @param rsp data respond remote
 * @param parButtonId buttonid
 * @param parModeId modeid
 * @return true- check correct buttonid and modeid,
 * @return false- check wrong buttonid or modeid
 */
bool IsRemoteSetup(remotersp * rsp,unsigned char parButtonId,unsigned char parModeId);

#ifdef __cplusplus
}
#endif



#endif
