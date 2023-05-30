/*
 eflash_port.h

 Copyright (c) 2021-2023 sola

 This part of the code belongs to the corresponding platform that 
 I adapt to, has nothing to do with GRBL, and is only related to 
 the platform. Therefore, if you use this part of the code, 
 please indicate the source
*/

#ifndef __w25qxx_port_h
#define __w25qxx_port_h

#include "main.h"


void flashSpiGpioInit(void);
void w25qxx_spi_cs_enabel(void);
void w25qxx_spi_cs_disable(void);
void w25qxxSpiRegiest(void);

#endif
