#include "main.h"
/**
 * _abs-prints - the absolute value of an integer.
 * @a: the integer to compute its absolute value.
 * Return: returns the abs value.
 */
int _abs(int a)
{
	int j = a;
	int absvalue;

	if (j < 0)
	{
		j = j * (-1);
	}
	absvalue = j;
	return (absvalue);
}
