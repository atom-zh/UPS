#ifndef _ADC_H_
#define _ADC_H_

#include <stdint.h>

void adc_init(void);
uint16_t adc_read(uint8_t chan);

#endif