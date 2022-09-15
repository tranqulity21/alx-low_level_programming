#include "main.h"
/**
 * _abs - gives the absolute value of an integer
 * @n: number being teste,used in argument of a function
 * Return:always 0
 */
int _abs(int n)
{
	if (n > 0 || n == 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
	return (0);
}
