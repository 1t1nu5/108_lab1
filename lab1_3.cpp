#include <stdio.h>
int main()
{
	unsigned long long get;
	scanf("%ld", &get);
	while (get >= 1291467969000000)
	{
		get -= 3913539300000;
	}
	while (get >= 3913539300000)
	{
		get -= 11859210000;
	}
	while (get >= 11859210000)
	{
		get -= 35937000;
	}
	while (get >= 35937000)
	{
		get -= 1086900;
	}
	while (get >= 1086900)
	{
		get -= 330;
	}
	while (get >= 330)
	{
		get -= 33;
	}
	printf("%d %d", get%3, get%11);
	return 0;
}
