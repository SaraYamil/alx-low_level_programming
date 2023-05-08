#include "main.h"
/**
 * print_chessboard - fonction w safe
 * @a: tableux
 * 
 * Return:wa maso9akch
 */
void print_chessboard(char (*a)[8])
{
  int sara;
  int ikram;

  for (sara = 0; sara < 8; sara++)
  {
    for (ikram = 0; ikram < 8; ikram++)
      _putchar(a[sara][ikram]);
    _putchar('\n');
  }
}
