#include <stdio.h>
#include <unistd.h>

/**
 * stream is the target stream to which you want to write data.
 * This should be a valid stream object that has been opened for writing.
 *  1 specifies that you want to write one character from the string
 *  to the stream.The number 1 indicates the length of the data to be written
 */

void my_print(char *string, int descriptor)
{
	int i = 0;

	for (; string[i] != '\0'; i++)
	{
		write(descriptor, &string[i], 1);
	}
}
