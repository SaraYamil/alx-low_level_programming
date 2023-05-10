#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - fonction string palindrome
 * @s: stringy
 * Return: hal3ar
 */
int is_palindrome(char *s)
{
    if (*s == 0)
        return (1);
    return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - tol ta3 string
 * @s: vriable
 * Return: hal3ar
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return (0);
    return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - fonction characters recursively for palindrome
 * @s: stringy
 * @i: int
 * @len: tol ta3 string
 *
 * Return: hal3ar
 */
int check_pal(char *s, int i, int len)
{
    if (*(s + i) != *(s + len - 1))
        return (0);
    if (i >= len)
        return (1);
    return (check_pal(s, i + 1, len - 1));
}
