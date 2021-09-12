#include <stdio.h>

int main(void)
{
	int score;
	char grade;
	
	printf("점수를 입력하세요: ");
	scanf("%d", &score);
	if(score >= 90)
	{
		grade = 'A';
		printf("점수는 %d이고 등급은 %c입니다. \n", score, grade);
	} 
	else if(score >=80 && score < 90)
	{
		grade = 'B';
		printf("점수는 %d이고 등급은 %c입니다. \n", score, grade);
	}
	else if(score >=70 && score < 80)
	{
		grade = 'C';
		printf("점수는 %d이고 등급은 %c입니다. \n", score, grade);
	}
	else
	{
		grade = 'F';
		printf("점수는 %d이고 등급은 %c입니다. \n", score, grade);
	}
	printf("작업 종료 \n");
	return 0;
}
