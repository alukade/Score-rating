#include<stdio.h>
int main()
{
	int score;
	printf("请输入你的成绩：");
	scanf_s("%d", &score);

	if (score >= 90)
	{
		printf("你的等级是A");
	}
	else if (score >= 80)
	{
		printf("你的等级是B");
	}
	else if (score >= 70)
	{
		printf("你的等级是C");
	}
	else if (score >= 60)
	{
		printf("你的等级是D");
	}
	else
	{
		printf("你的等级是FFF");
	}
	return 0;
}