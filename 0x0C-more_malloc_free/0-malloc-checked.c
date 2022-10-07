#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory to allocate
 *
 * Return: pointer to allocated memory or process termination
 */
void *malloc_checked(unsigned int b);
{
	void *p;

	p = malloc(b);
	if (p == null)
		exit(98);
	return (p);
}
