//****************************************************************
// Copyright 2022 Tianjin University TIM Lab. All Rights Reserved.
//
// File:
// setting.h
// 
// Description:
// State machine class define
// 
// Revision history:
// Version  Date        Author      Changes      
// 1.0      2022.03.17  Fanfei      Initial version
//****************************************************************

#ifndef __STATE_MACHINE
#define __STATE_MACHINE

#include "../arduino/datatype.h"

class state_machine
{
private:
    uint8_t m_state;

public:
    state_machine(/* args */);
    ~state_machine();
    uint8_t at() const { return m_state; }
};
#endif