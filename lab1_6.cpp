#include <stdio.h>
int main()
{
	unsigned int left, right, total, side;
	/*
		1 Cycle = left+right
		total = total % Cycle
	*/
	scanf("%d %d %d", &left, &right, &total);
	total = total%(left+right);
	return 0;
}
