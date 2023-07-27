#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);
	write(1, &c, 1);
	return (1);
}

int print_string(va_list args)
{
	const char *str = va_arg(args, const char *);
	int lenght = 0;
	while (str[lenght])
		lenght++;
	return write(1, str, lenght);
}

int print_integer(va_list args)
{
	int num = va_arg(args, int);
	char buffer[20];
	int len = sprintf(buffer, "%d", num);
	return write(1, buffer, len);
}
