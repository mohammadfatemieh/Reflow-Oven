#ifndef _ANGLEFIRING_H
#define _ANGLEFIRING_H
#include "stdint.h"
extern uint16_t DMA_Buffer1[16] ;
void calculationForPulseWidth(float pulse,int *negativeHalf, int *positiveHalf);
void replicateData(int *negativeHalf, int *positiveHalf);
#endif // _ANGLEFIRING_H