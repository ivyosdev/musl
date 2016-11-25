#include <stdio.h>
#include <string.h>
#include <paths.h>

char *ctermid(char *s)
{
	return s ? strcpy(s, _PATH_TTY) : _PATH_TTY;
}
