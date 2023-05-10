#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - ktchof wach string palindrome
 * @s: string mcha9lab
 * Return: maso9akch
 */
int is_palindrome(char *s)
{
    if (*s == 0)
        return (1);
    return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - rani ko lyoma
 * @s: string kichof tol
 *
 * Return: maso9akch kima 9a3ida
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return (0);
    return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - characters recursively  palindrome
 * @s: stringy
 * @i: int
 * @len: tol lm3lom
 *
 * Return: maso9akch
 */
int check_pal(char *s, int i, int len)
{
    if (*(s + i) != *(s + len - 1))
        return (0);
    if (i >= len)
        return (1);
    return (check_pal(s, i + 1, len - 1));
}
