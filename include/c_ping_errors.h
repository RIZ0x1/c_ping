#ifndef C_PING_ERRORS_H
# define C_PING_ERRORS_H

#include <stdio.h>

#define ERR_NO_DST 1

void c_ping_error(const char* error_message, int return_code)
{
	if (error_message)
		printf("%s\n", error_message);
	exit(return_code);
}

#endif // C_PING_ERRORS_H
