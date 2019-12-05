#include <stdio.h>

int main()
{
	double degree[] = {-5.34,3.67,19.76,28.76,35.63};
	int i;
	int size;
	size = sizeof(degree) / sizeof(degree[0]);

	for (i = 0; i < size; i++)
	{
		printf("%.2lf ", degree[i]);
	}
	printf("\n");

	return 0;
}