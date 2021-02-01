#include <stdio.h>
int main()
{
	unsigned int left, right, total;
	char side;
	scanf("%d %d %d", &left, &right, &total);
	total %= (left+right);
	if (total == 0)
	{
		total += left+right;
	}
	scanf(" %c", &side);
	if (side == 'L')
	{
		if (left >= total)
		{
			printf("L");
		}
		else
		{
			printf("R");
		}
	}
	else
	{
		if (right >= total)
		{
			printf("R");
		}
		else
		{
			printf("L");
		}
	}
	return 0;
}
