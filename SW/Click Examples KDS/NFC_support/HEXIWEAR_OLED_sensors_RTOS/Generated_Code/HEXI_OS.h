/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : HEXI_OS.h
**     Project     : HEXIWEAR_OLED_sensors_RTOS
**     Processor   : MK64FN1M0VDC12
**     Component   : fsl_os_abstraction
**     Version     : Component 1.2.0, Driver 01.00, CPU db: 3.00.000
**     Repository  : KSDK 1.2.0
**     Compiler    : GNU C Compiler
**     Date/Time   : 2016-03-04, 12:30, # CodeGen: 0
**     Abstract    :
**
**     Contents    :
**         OSA_SemaCreate        - osa_status_t OSA_SemaCreate(semaphore_t * pSem,uint8_t initValue);
**         OSA_SemaWait          - osa_status_t OSA_SemaWait(semaphore_t * pSem,uint32_t timeout);
**         OSA_SemaPost          - osa_status_t OSA_SemaPost(semaphore_t * pSem);
**         OSA_SemaDestroy       - osa_status_t OSA_SemaDestroy(semaphore_t * pSem);
**         OSA_MutexCreate       - osa_status_t OSA_MutexCreate(mutex_t * pMutex);
**         OSA_MutexLock         - osa_status_t OSA_MutexLock(mutex_t * pMutex,uint32_t timeout);
**         OSA_MutexUnlock       - osa_status_t OSA_MutexUnlock(mutex_t * pMutex);
**         OSA_MutexDestroy      - osa_status_t OSA_MutexDestroy(mutex_t * pMutex);
**         OSA_EventCreate       - osa_status_t OSA_EventCreate(event_t * pEvent,osa_event_clear_mode_t clearMode);
**         OSA_EventWait         - osa_status_t OSA_EventWait(event_t * pEvent,event_flags_t flagsToWait,bool...
**         OSA_EventSet          - osa_status_t OSA_EventSet(event_t * pEvent,event_flags_t flagsToSet);
**         OSA_EventClear        - osa_status_t OSA_EventClear(event_t * pEvent,event_flags_t flagsToClear);
**         OSA_EventGetFlags     - event_flags_t OSA_EventGetFlags(event_t * pEvent);
**         OSA_EventDestroy      - osa_status_t OSA_EventDestroy(event_t * pEvent);
**         OSA_TaskCreate        - osa_status_t OSA_TaskCreate(task_t task,uint8_t * name,uint16_t...
**         OSA_TaskDestroy       - osa_status_t OSA_TaskDestroy(task_handler_t handler);
**         OSA_TaskYield         - osa_status_t OSA_TaskYield(void);
**         OSA_TaskGetHandler    - task_handler_t OSA_TaskGetHandler(void);
**         OSA_TaskGetPriority   - uint16_t OSA_TaskGetPriority(task_handler_t handler);
**         OSA_TaskSetPriority   - osa_status_t OSA_TaskSetPriority(task_handler_t handler,uint16_t priority);
**         OSA_MsgQCreate        - msg_queue_handler_t OSA_MsgQCreate(msg_queue_t * queue,uint16_t...
**         OSA_MsgQPut           - osa_status_t OSA_MsgQPut(msg_queue_handler_t handler,void * pMessage);
**         OSA_MsgQGet           - osa_status_t OSA_MsgQGet(msg_queue_handler_t handler,void * pMessage,uint32_t...
**         OSA_MsgQDestroy       - osa_status_t OSA_MsgQDestroy(msg_queue_handler_t handler);
**         OSA_MemAlloc          - void* OSA_MemAlloc(size_t size);
**         OSA_MemAllocZero      - void* OSA_MemAllocZero(size_t size);
**         OSA_MemFree           - osa_status_t OSA_MemFree(void * ptr);
**         OSA_TimeDelay         - void OSA_TimeDelay(uint32_t delay);
**         OSA_TimeGetMsec       - uint32_t OSA_TimeGetMsec(void);
**         OSA_InstallIntHandler - osa_int_handler_t OSA_InstallIntHandler(int32_t IRQNumber,osa_int_handler_t...
**         OSA_EnterCritical     - void OSA_EnterCritical(osa_critical_section_mode_t mode);
**         OSA_ExitCritical      - void OSA_ExitCritical(osa_critical_section_mode_t mode);
**         OSA_Init              - osa_status_t OSA_Init(void);
**         OSA_Start             - osa_status_t OSA_Start(void);
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file HEXI_OS.h
** @version 01.00
** @brief
**
*/         
/*!
**  @addtogroup HEXI_OS_module HEXI_OS module documentation
**  @{
*/         
#ifndef __HEXI_OS_H
#define __HEXI_OS_H
/* MODULE HEXI_OS. */
/* Include inherited beans */
#include "free_rtos.h"
#include "Cpu.h"

#define PEX_RTOS_INIT OSA_Init


#endif
/* ifndef __HEXI_OS_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
