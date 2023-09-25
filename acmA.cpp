#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int Function(int n, int a, int b)
{
	if (n <= 2)
		return 1;
	else
		return a * Function(n - 1,a,b) + b * Function(n - 2,a,b);
}*/
//         10      2       1
/*int Fun(int n, int a, int b)
{
	if (n <= 2)
		return 1;
	else
	{
		int count1 = 1, count2 = 1, count3;
		while (n > 2)
		{
			
			count3 = a * count2 + b * count1;
			count1 = count2;
			count2 = count3;
			n--;

		}
		return count3;
	}

}*/

int Fun(int n, int a, int b)
{
	if (n <= 2)
		return 1;
	else
	{
		long long int count1 = 1, count2 = 1, count3, outcome;
		while (n > 2)
		{

			count3 = a * count2 + b * count1;
			count3= count3 % 998244353;
			count1 = count2;
			count2 = count3;
			
			n--;

		}
		return count3;
	}
}

int main(void)
{
	int T, m, c, d;
	scanf("%d\n", &T);
	while (T > 0)
	{
		scanf("%d %d %d", &m, &c, &d);
		T--;
		long long int ret, outcome;
		ret = Fun(m, c, d);
		printf("%d\n", ret);
	}
	return 0;
}

/*int main(void)
	{
	int T, m, c, d;
	scanf("%d\n", &T);
	while (T > 0)
	{
		scanf("%d %d %d", &m, &c, &d);
		T--;
		int ret, outcome;
		ret = Fun(m, c, d);
		outcome = ret % 998244353;
		printf("%d\n", outcome);
	}
	return 0;
}*/