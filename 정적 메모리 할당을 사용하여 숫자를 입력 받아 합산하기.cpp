#include <stdio.h>
#define MAX_COUNT 5   //최대 입력을 5회로 제한 함
 

int main(void)
{
	int num[MAX_COUNT], count = 0, sum = 0, i;
	while(count < MAX_COUNT)    //  최대 5회 까지 입력 받고 중간에 9999를 입력하면 종 료  
	{
		printf("숫자를 입력하세요(9999를 누르면 종료): ");
		scanf("%d", num+count);   // scanf("%d", &num[count]); 와 같은 표현이다. 
		if(num[count] == 9999)
		break;
		count++; // 입력된 횟수를 계산 함  
	}
	
	for(i = 0; i< count; i++)   //입력된 횟수만큼 숫자를 출력 함  
	{
		if(i > 0)printf("+");  
		printf("%d", num[i]);
		sum = sum + num[i];
	}
	printf(" = %d\n", sum);
	return 0;
}
