#include <stdio.h>

typedef unsigned short int US;  // typedef 함수는 type + define 의 줄인말 , 기존의 자료형 중에 자료형 이름의 길이가 긴 경우 프로그래머 가 짧고 간결하게 자료형을 재정의하는 문법이다.  
// unsigned short int형을  US라는 새로운 이름으로 정의함 

int main(void)
{
	unsigned short int data = 5;
	US temp;   //unsign음ed short int temp; 와 같 
	
	temp = data;
	printf("temp = %d\n", temp);
	return 0;
}
