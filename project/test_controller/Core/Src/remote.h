#ifndef __REMOTE_H
#define __REMOTE_H
#include "sys.h"

#define RDATA   PAin(1)
#define REMOTE_ID 0
void Remote_Init(void);
u8 Remote_Scan(void);
#endif
