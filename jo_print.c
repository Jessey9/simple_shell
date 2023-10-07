#include "shell.h"

/*
 * jo_print - Prints a command to the standard output
 * pcommand: inputed string to print
 */

void jo_print(const char *pcommand)
{
	write(STDOU_ FILENO, pcommand, strlen(pcommand));
}

