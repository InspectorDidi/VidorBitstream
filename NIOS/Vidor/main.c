/**
 *
 */

#include "gpio.h"

void platformSetup(void);
void platformCmd(void);
void platformLoop(void);

void cmdRx(alt_u32 cmd);

/**
 *
 */
int main()
{
	platformSetup();
	//aesTest();
	//i2cTest();
	//gpioTest();
	//sfTest();
	//i2c1Test();
	irqPinSet(0, cmdRx);
	//intPinInit(1, 0);

	while (1) {
		platformLoop();
	};
	return 0;
}

/**
 *
 */
void cmdRx(alt_u32 arg)
{
	platformCmd();
}