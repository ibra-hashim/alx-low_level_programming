#include "main.h"
#include <unistd.h>
/**
 * _putcher - writes the character c to stdout
 * @c: the character to print
 *
 * Return: on success 1.
 * on error, -1 is returend, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
