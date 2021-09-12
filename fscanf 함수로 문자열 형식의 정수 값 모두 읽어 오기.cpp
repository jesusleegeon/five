#include <stdio.h>

int main(void)
{
	int num;
	FILE *p_file = fopen("tipssoft.txt", "rt");
	if(NULL! = p_file)
	{
		while(EOF != fscanf(p_file, "%d", &num))
		{
			printf("%d\n", num);
		}
	}
	return 0;
}
