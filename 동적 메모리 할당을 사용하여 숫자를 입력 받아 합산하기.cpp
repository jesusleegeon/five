#include <stdio.h>
#include <malloc.h>

int main(void)
{
	int *p_num_list, count = 0, sum = 0, limit = 0, i;
	
	printf("����� �ִ� ������ �Է��Ͻÿ� : ");
	scanf("%d", &limit);
	p_num_list = (int*)malloc(sizeof(int)*limit);
	while(count < limit)
	{
		printf("���ڸ��Է��ϼ���(9999�� �Է��ϸ� ����) : ");
		scanf("%d", p_num_list + count);   // &p_num_list[count] �� ���� ǥ�� 
		if(*(p_num_list + count) == 9999) break; 
		count++;
	} 
	
	for(i = 0; i < count; i++)
	{
		if( i >0 )
		printf("+");
		printf("%d", *(p_num_list + i));
		sum = sum + *(p_num_list + i);
		 
	}
	printf(" =%d\n", sum);
	free(p_num_list);
	return 0;
}
