#include "main.h"
#include <stdio.h>

/**
  * jack_bauer - prints every minute of the day of Jack Bauer.
  */

void jack_bauer(void)
{
	int x;
	int y;

	for (y = 0 ; y <= 23; y++)
	{
		for (x = 0 ; x < 60; x++)
		{
			_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
			_putchar(':');
			_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
			_putchar('\n');
		}
	}
}
