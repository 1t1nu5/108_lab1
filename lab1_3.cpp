#include <stdio.h>
int main()
{
	unsigned long long get;
	while (get >= 330*330*330*330*330*330)
	{
		get -= (330*330*330*330*330);
	}
	while (get >= 330*330*330*330*330)
	{
		get -= (330*330*330*330);
	}
	while (get >= 330*330*330*330)
	{
		get -= (330*330*330);
	}
	while (get >= 330*330*330)
	{
		get -= (330*330);
	}
	while (get >= 330*330)
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
