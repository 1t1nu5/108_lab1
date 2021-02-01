#include <stdio.h>
int main()
{
	float time;
	char meridiem;
	scanf("%f", &time);
	time *= 100;
	int TIME = time;
	if (TIME > 1200)
	{
		TIME -= 1200;
		meridiem = 'p';
	}
	else
	{
		meridiem = 'a';
	}
	printf("%d:%d %c.m.", TIME/100, TIME-100*(TIME/100), meridiem);
	return 0;
}
