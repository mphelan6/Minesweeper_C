#include <stdio.h>

int main()
{
	// resets the system color
	printf("\x1B[32m" "" "\x1B[0m");
	return 1;
}
