#include <stdio.h>

int main(void)
{
	short data = 3;
	short*p = &data; //*data 변수의 주소 값을 1차원 포인터 p에 저장
	short**pp = &p; //*1차원 포인터 p변수의 주소 값을 2차원 포인터 pp에 저장함
	
	printf("[Before ] data : %d\n", data);
	*p = 4;
	printf("[Use *p ] data : %d\n", data);
	**pp = 5;
	printf("[Use **pp] data : %d\n", data); 
	return 0;
}
