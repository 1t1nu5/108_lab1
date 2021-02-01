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
	
	return 0;
}
