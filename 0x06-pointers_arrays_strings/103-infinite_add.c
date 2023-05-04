#include "main.h"

/**
 * rev_string - kat9ab lista
 * @n: int
 * Return: machoglakch
 */

void rev_string(char *n)
{
  int i = 0;
  int j = 0;
  char temp;

  while (*(n + i) != '\0')
  {
    i++;
  }
  i--;

  for (j = 0; j < i; j++, i--)
  {
    temp = *(n + j);
    *(n + j) = *(n + i);
    *(n + i) = temp;
  }
}
