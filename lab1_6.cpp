#include <stdio.h>
int main()
{
	unsigned int left, right, total;
	char side;
	/*
		1 Cycle = left+right
		total = total % Cycle
	*/
	scanf("%d %d %d", &left, &right, &total);
	total = total%(left+right);
	scanf("%c", &side);
	if (side == 'L')
	{
		side = 'L';
	}
	else
	{
		side = 'R';
	}
	return 0;
}
