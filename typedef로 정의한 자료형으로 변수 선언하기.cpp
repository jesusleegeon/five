#include <stdio.h>

typedef unsigned short int US;  // typedef �Լ��� type + define �� ���θ� , ������ �ڷ��� �߿� �ڷ��� �̸��� ���̰� �� ��� ���α׷��� �� ª�� �����ϰ� �ڷ����� �������ϴ� �����̴�.  
// unsigned short int����  US��� ���ο� �̸����� ������ 

int main(void)
{
	unsigned short int data = 5;
	US temp;   //unsign��ed short int temp; �� �� 
	
	temp = data;
	printf("temp = %d\n", temp);
	return 0;
}
