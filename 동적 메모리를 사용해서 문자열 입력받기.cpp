#include <stdio.h>
#include <malloc.h>
// 동적으로 메모리를 할당하고 해제하는 함수는 'malloc'와 'free'를 사용한다.
// 이 함수를 사용하기 위해서는 'malloc.h'를 소스에 포함시켜야 한다. 


int main(void)
{
	//최대 31개까지 문자를 저장( '\0'를 저장할 공간이 필요함)
	//32바이트 메모리를 Heap 영역에서 동적으로 할당 받는다. 
	char * p = (char*)malloc(32);
	gets(p);   // 사용자에게 문자열을 입력 받는다. 
	printf("당신이 입력하신 문자열은 : %s입니다.\n",p);
	free(p);   // 동적 할당 했던 메모리를 해제한다. 
	return 0;
}
