#include <stdio.h>
int main()
{
	int n, max=-2147483647, get, pos;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &get);
		if (get > max)
		{
			max = get;
			pos = i;
		}
	}
	printf("%d %d", pos+1, max);
	return 0;
}
