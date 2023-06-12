#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
** create_buffer - ffffffffffffffffffffffffffftes for a buffer.
 * @file: The namefffffffffffffffffffffffffffffffffng chars for.
 * Return: Affffffcccccccccccccccccccccccccccccated buffer.
*/

char *create_buffer(char *file)
{
char *buff;

buff = malloc(sizeof(char) * 1024);

if (buff == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}

return (buff);
}

/**
** close_file - fonction ta3 close file
 * @fd: inpute ta3 had void foncction.
*/

void close_file(int fd)
{
int cc;

cc = close(fd);

if (cc == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
** main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: maso9kach
 * Description: If the argument count is incorrect - exit code 97.
*/

int main(int argc, char *argv[])
{
int from, to, rr, w;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
rr = read(from, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (from == -1 || rr == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

w = write(to, buffer, rr);
if (to == -1 || w == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}

rr = read(from, buffer, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);

} while (rr > 0);

free(buffer);
close_file(from);
close_file(to);

return (0);
}
