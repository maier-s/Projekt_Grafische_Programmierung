/* This is an automatically generated file */
/* DO NOT EDIT THIS FILE */
/* File generated for project "conf" */
/* Last edited 'unknown' */
/* File generated 'Tue Mar 30 12:02:20 2021' */
/* Target variant 'MinGW' */

/* The file must only be included for the implementation of code for ISR(etasStopOsIsr) */

#ifndef OS_ISR_etasStopOsIsr
#define OS_ISR_etasStopOsIsr

#define OS_ISR
#define OS_KL_CALLER

#include "osekcomn.h"

#ifdef OS_FILE_INCLUDED
 #error Multiple File Inclusion
#else /* OS_FILE_INCLUDED */
 #define OS_FILE_INCLUDED
#endif /* OS_FILE_INCLUDED */

#define etasStopOsIsr_default_profile (0)	/* Profile */
#define OSALARM_alarm_Task0 (0)	/* Alarm */
#define OSALARM_alarm_Task1 (0)	/* Alarm */

#define ActivateTask_etasConfigTask() ActivateTask(etasConfigTask)
#define ActivateTask_etasL1Task() ActivateTask(etasL1Task)
#define ActivateTask_Task0() ActivateTask(Task0)
#define ActivateTask_Task1() ActivateTask(Task1)

#endif /* OS_ISR_etasStopOsIsr */
