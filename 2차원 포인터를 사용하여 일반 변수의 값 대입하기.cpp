#include <stdio.h>

int main(void)
{
	short data = 3;
	short*p = &data; //*data ������ �ּ� ���� 1���� ������ p�� ����
	short**pp = &p; //*1���� ������ p������ �ּ� ���� 2���� ������ pp�� ������
	
	printf("[Before ] data : %d\n", data);
	*p = 4;
	printf("[Use *p ] data : %d\n", data);
	**pp = 5;
	printf("[Use **pp] data : %d\n", data); 
	return 0;
}
