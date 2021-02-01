#include <stdio.h>
int main()
{
	int n, max=-2147483647, get, pos;
	scanf("%d", &n);
	while (n > 0)
	{
		scanf("%d", &get);
		if (get > max)
		n--;
	}
	return 0;
}
