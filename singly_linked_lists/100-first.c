#include <stdio.h>

/**
 * the_hare - string printed before the main function is executed
 *
 */

void __attribute__ ((constructor)) the_hare()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
