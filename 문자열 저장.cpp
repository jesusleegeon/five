#include <stdio.h>

int main(void)
{
	char input[32]; // 최대 31개까지 문자를 저장 ('\0'를 저장할 공간이 필요함) 
	gets(input);  //사용자에게 문자열을 입력 받는다. 
	printf("당신이 입력한 문자열은  : %s 입니다. \n", input);
	// 사용자가 입력한 문자열을 출력한다. 
	return 0;
}
