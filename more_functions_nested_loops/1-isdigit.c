#include "main.h"
/**
 * _isdigit - if parameter is digit
 * @c: paremeter of function and numbers to will verify
 *
 * Return: 1 if c digit and 0 otherwise
 */
int _isdigit(int c)
{
        if (c >= '0' && c <= '9')
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
