#include <stdio.h>
#define LINE_COUNT 5
#define WIDTH_LENGTH 9
#define MIDDLE_POS  5


int main(void)
{
	int y, x;
	for( y = 0; y<LINE_COUNT; y++)
	{
		for (x = 1; x <= WIDTH_LENGTH; x++)
		{
			if (x == (MIDDLE_POS - y))
			putchar('A' + y);
			else putchar('.');
		}
		putchar('\n');
	}
	return 0;
}
