#include<stdio.h>

int main(void)
{
	int x, y;
	
	for (y = 5; y>0; y--)
	{
		for( x = y; x<5; x++)
		printf(" ");
		for(x = 0; x< y; x++)
		printf("ª");
		//@를 출력하면 역삼각형 모양이 나온다. 
		printf("\n");
	}
	return 0;
} 
