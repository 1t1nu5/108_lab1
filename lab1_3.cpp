#include <stdio.h>
int main()
{
	unsigned long long get;
	scanf("%ld", &get);
	printf("%d %d", get%3, get%11);
	return 0;
}
