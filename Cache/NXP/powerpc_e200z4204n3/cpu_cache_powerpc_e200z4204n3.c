/*
*********************************************************************************************************
*                                               uC/CPU
*                                    CPU CONFIGURATION & PORT LAYER
*
*                    Copyright 2004-2020 Silicon Laboratories Inc. www.silabs.com
*
*                                 SPDX-License-Identifier: APACHE-2.0
*
*               This software is subject to an open source license and is distributed by
*                Silicon Laboratories Inc. pursuant to the terms of the Apache License,
*                    Version 2.0 available at www.apache.org/licenses/LICENSE-2.0.
*
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*
*                                      CPU CACHE IMPLEMENTATION
*                                         PowerPC e200z4204n3
*                                              L1 Cache
*
* Filename : cpu_cache_powerpc_e200z4204n3.c
* Version  : v1.32.00
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                            INCLUDE FILES
*********************************************************************************************************
*/
#include <cpu.h>
#include "../../../cpu_cache.h"
#include <lib_def.h>


#ifdef __cplusplus
extern  "C" {
#endif

/*
*********************************************************************************************************
*                                        EXTERNAL DECLARATIONS
*********************************************************************************************************
*/

CPU_INT32U  CPU_DCache_LineSizeGet(void);


/*
*********************************************************************************************************
*                                       LOCAL GLOBAL VARIABLES
*********************************************************************************************************
*/

CPU_INT32U  CPU_Cache_Linesize;                                 /* Cache line size.                                     */


/*
*********************************************************************************************************
*                                         CPU_CacheMGMTInit()
*
* Description : Initialize cpu cache module.
*
* Argument(s) : none.
*
* Return(s)   : none.
*
* Note(s)     : none.
*********************************************************************************************************
*/

void  CPU_Cache_Init(void)
{
    CPU_Cache_Linesize = CPU_DCache_LineSizeGet();
}

#ifdef __cplusplus
}
#endif
