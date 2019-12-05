#include <stdio.h>

int main()
{
	int data[] = { 3,21,35,57,24,82,8 };
	int* pdata = data;
	int i;
	for (i = 0; i < 7; i++)
	{
		*(data + i) += 10;
		printf("%d ", data[i]);
	}
	printf("\n");

	return 0;
}