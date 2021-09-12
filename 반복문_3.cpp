#include <stdio.h>


void ShowMultiplication(int step)
{
	int i;
	for(i = 1; i <= 9; i++)
	{
		printf("%d X %d = %d\n", step, i , step*i);
	}
}

int main(void)
{
	int m;
	for(m = 2; m <= 9; m++)
	{
		ShowMultiplication(m);
	}
	return 0;
}
