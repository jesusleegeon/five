#include <stdio.h>
#define MAX_COUNT 5   //�ִ� �Է��� 5ȸ�� ���� ��
 

int main(void)
{
	int num[MAX_COUNT], count = 0, sum = 0, i;
	while(count < MAX_COUNT)    //  �ִ� 5ȸ ���� �Է� �ް� �߰��� 9999�� �Է��ϸ� �� ��  
	{
		printf("���ڸ� �Է��ϼ���(9999�� ������ ����): ");
		scanf("%d", num+count);   // scanf("%d", &num[count]); �� ���� ǥ���̴�. 
		if(num[count] == 9999)
		break;
		count++; // �Էµ� Ƚ���� ��� ��  
	}
	
	for(i = 0; i< count; i++)   //�Էµ� Ƚ����ŭ ���ڸ� ��� ��  
	{
		if(i > 0)printf("+");  
		printf("%d", num[i]);
		sum = sum + num[i];
	}
	printf(" = %d\n", sum);
	return 0;
}
