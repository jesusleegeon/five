#include<stdio.h>

int main(void)
{
	int x, y;
	
	for (y = 5; y>0; y--)
	{
		for( x = y; x<5; x++)
		printf(" ");
		for(x = 0; x< y; x++)
		printf("��");
		//@�� ����ϸ� ���ﰢ�� ����� ���´�. 
		printf("\n");
	}
	return 0;
} 
