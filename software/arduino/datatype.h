//****************************************************************
// Copyright 2021 Tianjin University TIM Lab. All Rights Reserved.
//
// File:
// datatype.h
// 
// Description:
// Basic datatypes of arduino's variables.
// 
// Revision history:
// Version  Date        Author      Changes      
// 1.0      2021.10.19  Fanfei      Initial version
//****************************************************************

#ifndef __DATATYPE
#define __DATATYPE

#include "setting.h"

#ifdef UNO
//Basic datatypes.
typedef char            int8_t;
typedef unsigned char   uint8_t;
typedef int             int16_t;
typedef unsigned int    uint16_t;
typedef long            int32_t;
typedef unsigned long   uint32_t;
#elif ZERO

#endif

#endif