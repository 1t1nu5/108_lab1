#include <stdio.h>
int main()
{
	float time;
	char meridiem;
	scanf("%f", &time);
	if (time > 12)
	{
		time -= 12;
		meridiem = 'p';
	}
	else
	{
		meridiem = 'a';
	}
	printf("%d:%d %c.m.", time%1, time-time%1, meridiem);
	return 0;
}
