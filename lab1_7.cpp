#include <stdio.h>
int main()
{
	float time;
	char meridiem;
	scanf("%f", &time);
	time *= 100;
	int TIME = time;
	if (time > 1200)
	{
		time -= 1200;
		meridiem = 'p';
	}
	else
	{
		meridiem = 'a';
	}
	printf("%d:%d %c.m.", time%1, time-time%1, meridiem);
	return 0;
}
