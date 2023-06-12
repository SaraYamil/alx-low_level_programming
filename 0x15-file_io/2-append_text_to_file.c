#include "main.h"

/**
** append_text_to_file - Addddddddddddddddddddddddddddddd
 * @filename: A poddddddddddddddddddddddddddddddddddddd.
 * @text_content: The string sssssssssssssssssssssssssssile.
 * Return: wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww.
*/

int append_text_to_file(const char *filename, char *text_content)
{
int o, wr, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}

o = open(filename, O_WRONLY | O_APPEND);
wr = write(o, text_content, len);

if (o == -1 || wr == -1)
return (-1);

close(o);

return (1);
}
