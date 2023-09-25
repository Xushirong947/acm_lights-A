#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
int s[10000][10000];


int main(void)
{
	int n, m, q, den2,den1;
	scanf("%d %d %d", &n, &m, &q);
	den2 = m + 1;
	den1 = n + 1;
	int i = 1, j = 0;
	for (; i < den1; i++)  //初始化灯的排和列并打印
	{	
		j = 1;
		s[i][j] = 0;
		for (; j < den2; j++)
		{
			s[i][j] = 0;
			//printf("%d", s[i][j]);//打印调整页面
		}
		//printf("\n");
	}
	for (; q > 0; q--)
	{
		int count;
		char pl[20];
		char turn[10];
		scanf("%s %d %s",&pl,&count,&turn);
		if (!strcmp(pl,"row"))//调节排
		{
			j = den2-1;
			if (!strcmp(turn,"on"))
			{
				for (;  j> 0; j--)
				{
					s[count][j] = 1;
				}
			}
			else if (!strcmp(turn,"off"))
			{
				for (; j > 0; j--)
				{
					s[count][j] = 0;
				}
			}
		}
		else if (!strcmp(pl,"column"))//调节列
		{
			i =den1 -1;
			if (!strcmp(turn,"on"))
			{
				for (; i > 0; i--)
				{
					s[i][count] = 1;
				}
			}
			else if (!strcmp(turn,"off"))
			{
				for (; i > 0; i--)
				{
					s[i][count] = 0;
				}
			}
		}
		i = 1;
		int light = 0;
		for (; i < den1; i++)  
		{
			for (j=1; j < den2; j++)
			{
				if (s[i][j] == 1)
					light++;
				//printf("%d", s[i][j]);//打印调整
			}
			//printf("\n");
		}
		printf("%d", light);
	}
	return 0;
}