#include <unistd.h>

/**
<<<<<<< HEAD
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

=======
 * _putchar - writes character c to stdout
 * @c: char to be printed
 * Return: on success 1
 */
>>>>>>> cc67b7076b7acd633f4e1968dc83f5a5afe61094
int _putchar(char c)
{
	return (write(1, &c, 1));
}
