#include "main.h"

/**
 * read_textfile - Reads text files 
 * @filename: Pointer to file 
 * @letters: letters read
 *
 * Return: Texts reat
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t red, wrote;

	if (filename == NULL)
	{
		return 0;
	}
	FILE *file = fopen(filename, "r");
	if (filename == NULL)
	{
		return (0);
	}
	char *textfiles = malloc(sizeof(char) * (letters + 1));
	if (textfiles == NULL)
	{
		fclose(file);
		return (0);
	}
	red = fread(textfiles, sizeof(char), letters, file);
	if (red == -1 )
	{
		free(textfiles);
		fclose(file);
		return (0);

	}
	wrote = fwrite(STDOUT_FILENO, textfiles, red);
	if (wrote == -1 || wrote != red)
	{
		free(textfiles);
		fclose(file);
		return(0);
	}
	free(textfiles);
	fclose(file);
	return (wrote);
}
