/* This is an automatically generated file */
/* DO NOT EDIT THIS FILE */
/* File generated for project "conf" */
/* Last edited 'unknown' */
/* File generated 'Tue Mar 30 09:37:31 2021' */
/* Target variant 'MinGW' */


#define OS_OSEKDEFS (1)
#ifdef OS_LIBRARY_SETTINGS
 #error "This file should not be compiled for inclusion into a library"
#endif /* OS_LIBRARY_SETTINGS */

#include "osek.h"
static ZERO_INITIALIZED(struct osek_resource_dyn osek_RAM_RES_SCHEDULER);
static OS_CONST_VAR struct osek_resource _RES_SCHEDULER = {
	osek_resource_RES_SCHEDULER, osek_task_etasL1Task, &osek_RAM_RES_SCHEDULER
};
OS_CONST_VAR ResourceType RES_SCHEDULER = &_RES_SCHEDULER;
#ifdef OS_EXTENDED_BUILD
OS_CONST_VAR ResourceType osek_resources[] = {
	&_RES_SCHEDULER,
	0};
#endif /* OS_EXTENDED_BUILD */
#ifdef OS_EXTENDED_BUILD
 static ZERO_INITIALIZED(struct osek_task_dynL osek_RAM_osek_idle_task);
#endif /* OS_EXTENDED_BUILD */
static ZERO_INITIALIZED(TaskType _osek_fifo1[3]);
static ZERO_INITIALIZED(struct os_task_fifo_dyn osek_fifo1D);
static OS_CONST_VAR struct os_task_fifo_const osek_fifo1C = {
	_osek_fifo1, osek_task_etasL1Task, 3
};
static ZERO_INITIALIZED(TaskType _osek_fifo0[5]);
static ZERO_INITIALIZED(struct os_task_fifo_dyn osek_fifo0D);
static OS_CONST_VAR struct os_task_fifo_const osek_fifo0C = {
	_osek_fifo0, osek_task_etasConfigTask, 5
};
static ZERO_INITIALIZED(struct osek_task_dynH_count osek_RAM_etasConfigTask);
static ZERO_INITIALIZED(struct osek_task_dynH_count osek_RAM_etasL1Task);
static ZERO_INITIALIZED(struct osek_task_dynH_count osek_RAM_Task0);
static ZERO_INITIALIZED(struct osek_task_dynH_count osek_RAM_Task1);
#ifdef OS_EXTENDED_BUILD
 static ZERO_INITIALIZED(struct osek_task_dynL osek_RAM_etasTimerIsr);
#endif /* OS_EXTENDED_BUILD */
#ifdef OS_EXTENDED_BUILD
 static ZERO_INITIALIZED(struct osek_task_dynL osek_RAM_etasL1Isr);
#endif /* OS_EXTENDED_BUILD */
#ifdef OS_EXTENDED_BUILD
 static ZERO_INITIALIZED(struct osek_task_dynL osek_RAM_etasStopOsIsr);
#endif /* OS_EXTENDED_BUILD */
static OS_CONST_VAR struct osek_taskL1 _osek_idle_task = {
	{os_idle_task, 0, 0
#if defined(OS_EXTENDED_BUILD)
	,OSEK_TASK_BCC1,1
#endif /* OS_EXTENDED_BUILD */
}
#if defined(OS_EXTENDED_BUILD)
	,&osek_RAM_osek_idle_task
#endif /* OS_EXTENDED_BUILD */
};
static OS_CONST_VAR struct osek_task2F _Task1 = {
	{osek_task_Task1, os_idispH2F, osek_task_e_Task1
#if defined(OS_EXTENDED_BUILD)
	,OSEK_TASK_BCC2F, 0
#endif /* OS_EXTENDED_BUILD */
	}
	,&osek_RAM_Task1,  &osek_fifo0D, &osek_fifo0C, 1U, OS_STACK_INIT(500U)
};
static OS_CONST_VAR struct osek_task2F _Task0 = {
	{osek_task_Task0, os_fdispH2F, osek_task_e_Task0
#if defined(OS_EXTENDED_BUILD)
	,OSEK_TASK_BCC2F, 0
#endif /* OS_EXTENDED_BUILD */
	}
	,&osek_RAM_Task0,  &osek_fifo0D, &osek_fifo0C, 1U, OS_STACK_INIT(500U)
};
static OS_CONST_VAR struct osek_task2F _etasConfigTask = {
	{osek_task_etasConfigTask, os_fdispH2F, osek_task_e_etasConfigTask
#if defined(OS_EXTENDED_BUILD)
	,OSEK_TASK_BCC2F, 0
#endif /* OS_EXTENDED_BUILD */
	}
	,&osek_RAM_etasConfigTask,  &osek_fifo0D, &osek_fifo0C, 2U, OS_STACK_INIT(500U)
};
static OS_CONST_VAR struct osek_task2F _etasL1Task = {
	{osek_task_etasL1Task, os_fdispH2F, osek_task_e_etasL1Task
#if defined(OS_EXTENDED_BUILD)
	,OSEK_TASK_BCC2F, 0
#endif /* OS_EXTENDED_BUILD */
	}
	,&osek_RAM_etasL1Task,  &osek_fifo1D, &osek_fifo1C, 2U, OS_STACK_INIT(1456U)
};
static OS_CONST_VAR struct osek_taskL1 _etasTimerIsr = {
	{osek_interrupt_etasTimerIsr, 0, osek_isr_e_etasTimerIsr
	#if defined(OS_EXTENDED_BUILD)
		,OSEK_ISR_2,1
	#endif /* OS_EXTENDED_BUILD */
	}
	#if defined(OS_EXTENDED_BUILD)
		,&osek_RAM_etasTimerIsr
	#endif /* OS_EXTENDED_BUILD */
};
static OS_CONST_VAR struct osek_taskL1 _etasL1Isr = {
	{osek_interrupt_etasL1Isr, 0, osek_isr_e_etasL1Isr
	#if defined(OS_EXTENDED_BUILD)
		,OSEK_ISR_2,1
	#endif /* OS_EXTENDED_BUILD */
	}
	#if defined(OS_EXTENDED_BUILD)
		,&osek_RAM_etasL1Isr
	#endif /* OS_EXTENDED_BUILD */
};
static OS_CONST_VAR struct osek_taskL1 _etasStopOsIsr = {
	{osek_interrupt_etasStopOsIsr, 0, osek_isr_e_etasStopOsIsr
	#if defined(OS_EXTENDED_BUILD)
		,OSEK_ISR_2,1
	#endif /* OS_EXTENDED_BUILD */
	}
	#if defined(OS_EXTENDED_BUILD)
		,&osek_RAM_etasStopOsIsr
	#endif /* OS_EXTENDED_BUILD */
};
OS_CONST_VAR TaskType os_tasks [] = {
	(TaskType)&_Task1
	,(TaskType)&_Task0
	,(TaskType)&_etasConfigTask
	,(TaskType)&_etasL1Task
	,(TaskType)&_etasTimerIsr
	,(TaskType)&_etasL1Isr
	,(TaskType)&_etasStopOsIsr
#if defined(OS_EXTENDED_BUILD)
	,(TaskType)0
#endif /* OS_EXTENDED_BUILD */
};
OS_CONST_VAR TaskType etasL1Task = (TaskType)(&_etasL1Task);
OS_CONST_VAR TaskType etasConfigTask = (TaskType)(&_etasConfigTask);
OS_CONST_VAR TaskType Task0 = (TaskType)(&_Task0);
OS_CONST_VAR TaskType Task1 = (TaskType)(&_Task1);
OS_CONST_VAR TaskType osek_idle_task = (TaskType)(&_osek_idle_task);
OS_CONST_VAR TaskType etasTimerIsr = (TaskType)(&_etasTimerIsr);
OS_CONST_VAR TaskType etasL1Isr = (TaskType)(&_etasL1Isr);
OS_CONST_VAR TaskType etasStopOsIsr = (TaskType)(&_etasStopOsIsr);
OS_NONREENTRANT(void) osE_etasTimerIsr(void);
OS_NONREENTRANT(void) osE_etasTimerIsr(void) {
#ifndef OSEK_NO_CURTASK
	osek_cur_task = (TaskType)(&_etasTimerIsr);
#endif /* OSEK_NO_CURTASK */
#ifdef OS_ISR_PRELUDE
	OS_ISR_PRELUDE(etasTimerIsr,10U)
#endif /* OS_ISR_PRELUDE */
	osek_isr_e_etasTimerIsr();
}
OS_NONREENTRANT(void) osE_etasL1Isr(void);
OS_NONREENTRANT(void) osE_etasL1Isr(void) {
	os_fp_save();
#ifndef OSEK_NO_CURTASK
	osek_cur_task = (TaskType)(&_etasL1Isr);
#endif /* OSEK_NO_CURTASK */
#ifdef OS_ISR_PRELUDE
	OS_ISR_PRELUDE(etasL1Isr,1U)
#endif /* OS_ISR_PRELUDE */
	osek_isr_e_etasL1Isr();
	os_fp_restore();
}
OS_NONREENTRANT(void) osE_etasStopOsIsr(void);
OS_NONREENTRANT(void) osE_etasStopOsIsr(void) {
#ifndef OSEK_NO_CURTASK
	osek_cur_task = (TaskType)(&_etasStopOsIsr);
#endif /* OSEK_NO_CURTASK */
#ifdef OS_ISR_PRELUDE
	OS_ISR_PRELUDE(etasStopOsIsr,11U)
#endif /* OS_ISR_PRELUDE */
	osek_isr_e_etasStopOsIsr();
}
OS_DISPATCH(void) osek_dispatch(void) {osek_dispatchN2F();}
ZERO_INITIALIZED(osBooleanType os_etasCounter_running);
TickType os_etasCounter_last;
static void osStartCounter_etasCounter(TickType);
static void osStopCounter_etasCounter(void);
static ZERO_INITIALIZED(struct osek_counter_dyn osek_RAM_etasCounter);
static OS_CONST_VAR struct osek_counter _etasCounter = {
	&osek_RAM_etasCounter,
	{4294967295U,1U,1U}
#ifdef OS_RTA5_COMPATIBLE
	,&osek_EtasCounter,&os_etasCounter_running,&os_etasCounter_last,osStartCounter_etasCounter
#endif /* OS_RTA5_COMPATIBLE */
};
OS_CONST_VAR osCounterType etasCounter = &_etasCounter;
#ifdef OS_EXTENDED_BUILD
OS_CONST_VAR osCounterType osek_counters[] = {
	(osCounterType)&_etasCounter,
	0};
#endif /* OS_EXTENDED_BUILD */
static ZERO_INITIALIZED(struct osek_alarm_dyn osek_RAM_alarm_Task0);
static OS_CONST_VAR struct osek_alarm _alarm_Task0 = {
	&osek_RAM_alarm_Task0, (osCounterType)&_etasCounter
};
OS_CONST_VAR AlarmType alarm_Task0 = &_alarm_Task0;
static ZERO_INITIALIZED(struct osek_alarm_dyn osek_RAM_alarm_Task1);
static OS_CONST_VAR struct osek_alarm _alarm_Task1 = {
	&osek_RAM_alarm_Task1, (osCounterType)&_etasCounter
};
OS_CONST_VAR AlarmType alarm_Task1 = &_alarm_Task1;
#ifdef OS_EXTENDED_BUILD
OS_CONST_VAR AlarmType osek_alarms[] = {
	&_alarm_Task0,
	&_alarm_Task1,
	0};
#endif /* OS_EXTENDED_BUILD */
static void osStartCounter_etasCounter(TickType osWhen) {
	if(!os_etasCounter_running) {
		osek_RAM_etasCounter.count = osWhen;
		StartSchedule(EtasCounter, osWhen);
		os_etasCounter_running = (osBooleanType)1;
	}
}
static void osStopCounter_etasCounter(void) {
	if(os_etasCounter_running) {
		SuspendOSInterrupts();
		StopSchedule(EtasCounter);
		os_etasCounter_running = (osBooleanType)0;
		ResumeOSInterrupts();
	}
}
OS_API_NONREENTRANT(StatusType) osAdvanceCounter_etasCounter(osScheduleStatusRefType osStat) {
#ifdef OS_EXTENDED_BUILD
	StatusType osek_ret = E_OK;
#endif	/* OS_EXTENDED_BUILD */
	TickType osGap;
	osSmallType osCurStat = 0;
	TickType os_t = osek_RAM_etasCounter.count;
	TickType osExp = os_t - os_etasCounter_last;
	os_etasCounter_last = os_t;
#ifdef OS_EXTENDED_BUILD
	osek_orti_call = (OSEK_ORTI_AdvanceCounter << 1u) | (osSmallType)1u;
	if(!os_etasCounter_running) {
		osek_ret = E_OS_STATE;
		osStat->status = (osSmallType)0;
		goto osek_finish;
	}
#endif	/* OS_EXTENDED_BUILD */
	if (osek_tick_alarm(&osek_RAM_alarm_Task0, os_t)) {
		(void)ActivateTask(Task0);
	}
	if (osek_tick_alarm(&osek_RAM_alarm_Task1, os_t)) {
		(void)ActivateTask(Task1);
	}
	osExp = OSMAXALLOWEDVALUE_etasCounter;
	if (osek_RAM_alarm_Task0.running) {
		osCurStat = OS_STATUS_RUNNING;
		osGap = osek_RAM_alarm_Task0.match - os_t - 1;
		if (osGap < osExp) {
			osExp = osGap;
		}
	}
	if (osek_RAM_alarm_Task1.running) {
		osCurStat = OS_STATUS_RUNNING;
		osGap = osek_RAM_alarm_Task1.match - os_t - 1;
		if (osGap < osExp) {
			osExp = osGap;
		}
	}
	if (!(osCurStat & OS_STATUS_RUNNING)){
		osStopCounter_etasCounter();
	}
	osStat->status = osCurStat;
	osStat->expiry = ++osExp;
	osek_RAM_etasCounter.count += osExp;
#ifdef OS_EXTENDED_BUILD
osek_finish:
	osek_orti_call = (OSEK_ORTI_AdvanceCounter << 1u);
	if (E_OK != osek_ret) {
		os_pre_errorhook((OSBiggestType)(etasCounter),(OSBiggestType)0, (OSBiggestType)0, OSServiceId_AdvanceCounter, osek_ret);
	}
	return osek_ret;
#else /* OS_EXTENDED_BUILD */
	return E_OK;
#endif /* OS_EXTENDED_BUILD */
}
osSmallType os_serviceId;
struct os_serviceAllArgs os_serviceArgs;
static OS_FP_CONTEXT os_fp_stack[3];
PTR(OS_FP_CONTEXT) os_fp_sp = &os_fp_stack[0];
OS_CONST_VAR osByteType osek_e_3_1_0 = 0;
#ifndef OSEK_NO_CURTASK
TaskType osek_cur_task = (TaskType)&_osek_idle_task;
#endif /* OSEK_NO_CURTASK */
#ifdef OS_EXTENDED_BUILD
 StatusType osek_last_error = E_OK;
 OS_CONST_VAR osBooleanType osek_allow_upward_activation = (osBooleanType)1;
 OS_CONST_VAR osSmallType osek_num_tasks = (osSmallType)OSEK_NUM_TASKS;
 OS_CONST_VAR osSmallType osek_num_resources = (osSmallType)OSEK_NUM_RESOURCES;
 OS_CONST_VAR osSmallType osek_num_alarms = (osSmallType)OSEK_NUM_ALARMS;
 #ifdef LOCALMESSAGESONLY
  OS_CONST_VAR osSmallType osek_num_messages = (osSmallType)OSEK_NUM_MESSAGES;
  osSmallType osek_comm_running;
 #endif /* LOCALMESSAGESONLY */
#endif /* OS_EXTENDED_BUILD */
OS_API(void) os_pre_errorhook(OSBiggestType os_p1, OSBiggestType os_p2, OSBiggestType os_p3, OSServiceIdType os_id, StatusType os_s) {
	os_pre_errorhook2(os_p1, os_p2, os_p3, os_id, os_s);
}
#if defined(OSEK_ECC1) || defined(OSEK_ECC2C) || defined(OSEK_ECC2F) || (defined(OS_MULTI_ISR_LEVEL_CPU) && defined(OS_EXTENDED_BUILD))
 OS_REENTRANT(void) os_pre_ShutdownOS(StatusType os_Error) {
	ShutdownOS(os_Error);
}
#endif /* defined(OSEK_ECC1) || defined(OSEK_ECC2C) || defined(OSEK_ECC2F) || (defined(OS_MULTI_ISR_LEVEL_CPU) && defined(OS_EXTENDED_BUILD)) */
OS_API_NONREENTRANT(void) os_StartOS(AppModeType os_mode) {
	osOptions = 0;
	if (os_mode == UserAppMode) {
		(void)SetAbsAlarm(alarm_Task0, (TickType)1, (TickType)1);
		(void)SetAbsAlarm(alarm_Task1, (TickType)1, (TickType)2000);
		osStartCounter_etasCounter(1);
	}
	StartupHook();
}
#ifdef LOCALMESSAGESONLY
OS_API_NONREENTRANT(void) os_StartCOM(void) {
#ifdef OS_EXTENDED_BUILD
	osek_comm_running = (osSmallType)1;
#endif /* OS_EXTENDED_BUILD */
}
#endif /* LOCALMESSAGESONLY */
#ifndef OS_INDIRECT_EXPORT
extern osSmallType osek_suspend_nesting;
extern osSmallType osek_suspend_all_nesting;
extern TaskType osek_running_task;
#endif /* OS_INDIRECT_EXPORT */
OS_API_NONREENTRANT(void) osResetOS(void) {
	if (osek_running_task != osek_idle_task) {
		ShutdownOS(E_OS_STATE);
	}
#ifdef OS_EXTENDED_BUILD
	osek_orti_call = (OSEK_ORTI_ShutdownOS << 1u) | (osSmallType)1u;
#endif /* OS_EXTENDED_BUILD */
	SuspendOSInterrupts();
#ifdef OSEK_SHUTDOWNHOOK
	ShutdownHook(E_OK);
#endif /* OSEK_SHUTDOWNHOOK */
#ifdef OS_EXTENDED_BUILD
	osek_orti_call = (OSEK_ORTI_ShutdownOS << 1u);
#endif /* OS_EXTENDED_BUILD */
	osek_suspend_nesting = 0;
	osek_suspend_all_nesting = 0;
	osek_fifo1D.begin = 0;
	osek_fifo1D.end = 0;
	osek_fifo0D.begin = 0;
	osek_fifo0D.end = 0;
	osek_RAM_etasConfigTask.activations = 0;
	osek_RAM_etasL1Task.activations = 0;
	osek_RAM_Task0.activations = 0;
	osek_RAM_Task1.activations = 0;
	os_etasCounter_running = 0;
	osek_RAM_etasCounter.count = 0;
	osek_RAM_alarm_Task0.running = 0;
	osek_RAM_alarm_Task1.running = 0;
	os_fp_sp = &os_fp_stack[0];
#ifndef OSEK_NO_CURTASK
	osek_cur_task = (TaskType)&_osek_idle_task;
#endif /* OSEK_NO_CURTASK */
#ifdef OS_EXTENDED_BUILD
	osek_last_error = E_OK;
#endif /* OS_EXTENDED_BUILD */
}

/* End of osekdefs.c */

