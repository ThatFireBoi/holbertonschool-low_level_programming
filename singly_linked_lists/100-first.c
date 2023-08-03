#include <stdio.h>

void __atribute__((constructor)) theHare(void);

/**
 * theHare - string printed before the main function is executed
 *
 */

void theHare(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
