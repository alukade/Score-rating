#include<stdio.h>
int main()
{
	int score;
	printf("��������ĳɼ���");
	scanf_s("%d", &score);

	if (score >= 90)
	{
		printf("��ĵȼ���A");
	}
	else if (score >= 80)
	{
		printf("��ĵȼ���B");
	}
	else if (score >= 70)
	{
		printf("��ĵȼ���C");
	}
	else if (score >= 60)
	{
		printf("��ĵȼ���D");
	}
	else
	{
		printf("��ĵȼ���FFF");
	}
	return 0;
}