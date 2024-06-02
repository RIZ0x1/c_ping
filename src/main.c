#include <stdio.h>

#include "c_ping_errors.h"
#include "c_ping.h"

int main(int argc, char** argv)
{
	if (argc != 2)
		c_ping_error("Destination not specified", ERR_NO_DST);
	else
		c_ping(argv[1]);

	return 0;
}
