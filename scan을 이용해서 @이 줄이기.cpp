#include <stdio.h>

int main(void)
{
	int x, y, count;
	printf("몇개를 입렬하시겠습니까? :");
	scanf_s("%d",&count);
	
	for(y = count; y > 0; y--);
	{
		for(x = y; x < count; x++)
		printf(" ");
		for(x = 0; x< y; x++)
		printf("@");
		printf("\n");
	}
	return 0;
	
}
