#include "main.h"
#include <stdio.h>

/**
  * _islower - checks for lowercase
  * @c: the number to be checked
  *
  * Return: 1 if the character is lowercase and 0 if not
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
