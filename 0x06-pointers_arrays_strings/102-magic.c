#include <stdio.h>

int main(void)
{
  int sara;
  int haz9a[5];
  int *kharya;

  haz9a[2] = 1024;
  kharya = &sara;
  /*
   * nkatbo chi haja hna
   * Remember:
   * - inaa homa sakin ntoma
   * - l3ar ya l3ar
   * - wrini bab
   * - darkom njikom
   */
  *(kharya + 5) = 98;
  /* ...so that this prints 98\n */
  printf("haz9a[2] = %d\n", haz9a[2]);
  return (0);
}
