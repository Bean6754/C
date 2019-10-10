#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//double var[] = {0, 6, 7, 9, 3, 2, 8, 4};
	double var[] = {0, 6, 7};
	size_t var_length = sizeof(var)/sizeof(var[0]);

	if (var_length > 4)
	{
		// string.split()
		printf("Size is bigger than 4.\n");
	}
	else if (var_length <= 4)
	{
		// Do nothing.
	}

	return 0;
}
