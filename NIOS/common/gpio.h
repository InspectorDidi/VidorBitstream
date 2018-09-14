/*
 * gpio.h
 *
 *  Created on: May 7, 2018
 *      Author: max
 */

#ifndef GPIO_H_
#define GPIO_H_

#include <alt_types.h>

void gpioCmd(void);

alt_u32 gpioPinMode(alt_u32 pin, alt_u32 mode);
alt_u32 gpioWrite(alt_u32 pin, alt_u32 val);
alt_u32 gpioRead(alt_u32 pin);

#endif /* GPIO_H_ */
