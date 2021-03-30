/* This is an automatically generated file */
/* DO NOT EDIT THIS FILE */
/* File generated for project "conf" */
/* Last edited 'unknown' */
/* File generated 'Tue Mar 30 12:02:20 2021' */
/* Target variant 'MinGW' */

/* The file must only be included for the implementation of code for TASK(Task1) */

#ifndef OS_TASK_Task1
#define OS_TASK_Task1

#define OS_HEAVYWEIGHT
#include "osekcomn.h"

#ifdef OS_FILE_INCLUDED
 #error Multiple File Inclusion
#else /* OS_FILE_INCLUDED */
 #define OS_FILE_INCLUDED
#endif /* OS_FILE_INCLUDED */

#define Task1_default_profile (0)	/* Profile */
#define OSALARM_alarm_Task0 (0)	/* Alarm */
#define OSALARM_alarm_Task1 (0)	/* Alarm */
#define alarm_Task1_response1 (0)	/* Critical execution */

DeclareResource(RES_SCHEDULER);
#define GetResource_RES_SCHEDULER() GetResource(RES_SCHEDULER)
#define ReleaseResource_RES_SCHEDULER() ReleaseResource(RES_SCHEDULER)
#define ActivateTask_etasConfigTask() ActivateTask(etasConfigTask)
#define ChainTask_etasConfigTask() ChainTask(etasConfigTask)
#define ActivateTask_etasL1Task() ActivateTask(etasL1Task)
#define ChainTask_etasL1Task() ChainTask(etasL1Task)
#define ActivateTask_Task0() ActivateTask(Task0)
#define ChainTask_Task0() ChainTask(Task0)
#define ActivateTask_Task1() ActivateTask(Task1)
#define ChainTask_Task1() ChainTask(Task1)

#endif /* OS_TASK_Task1 */
