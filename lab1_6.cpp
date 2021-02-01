#include <stdio.h>
int main()
{
	unsigned int left, right, total;
	char side;
	/*
		1 Cycle = left+right
		total = total % Cycle
		starting foot step less than remaining total = end with starting foot
		and vice versa.
	*/
	scanf("%d %d %d", &left, &right, &total);
	total = total%(left+right);
	scanf("%c", &side);
	if (side == 'L')
	{
		if (left <= total)
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
		if (right <= total)
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
