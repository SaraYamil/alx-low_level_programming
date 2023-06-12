#include "main.h"
#include <stdlib.h>

/**
** read_textfile - fonction of read text file hhhhhhhhh
 * @filename: text fil inpute fonction
 * @letters: numero ta3 letters bch  read
 * Return: hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
char *bf;
ssize_t f;
ssize_t z;
ssize_t rt;

f = open(filename, O_RDONLY);
if (f == -1)
return (0);
bf = malloc(sizeof(char) * letters);
rt = read(f, bf, letters);
z = write(STDOUT_FILENO, bf, rt);

free(bf);
close(f);
return (z);
}
