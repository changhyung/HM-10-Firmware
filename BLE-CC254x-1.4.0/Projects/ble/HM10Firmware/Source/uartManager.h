/**************************************************************************************************
  Filename:       uartManager.h
**************************************************************************************************/

#ifndef UARTMANAGER_H
#define UARTMANAGER_H

#ifdef __cplusplus
extern "C"
{
#endif

/*********************************************************************
 * Types
 */
/*********************************************************************
 * CONSTANTS
 */
/*********************************************************************
 * VARIABLES
 */
extern uint8 uartManagerTaskID;

/*********************************************************************
 * FUNCTIONS
 */

extern void uartManager_Init( uint8 task_id );
extern uint16 uartManager_ProcessEvent( uint8 task_id, uint16 events );

/*********************************************************************
*********************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* SIMPLEBLEBROADCASTER_H */
