#include <stdio.h>
int main()
{
	float time;
	unsigned int hour, minute;
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
	
	return 0;
}
