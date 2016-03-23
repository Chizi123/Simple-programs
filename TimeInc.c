/**
 * Incrementation program using time
 * By Joel Grunbaum
**/

#include <stdio.h>
#include <string.h>

int main(void)
{
	// Welcome user to program
	printf("Welcome to time incrementation.\nPress the enter key to incrment the time by one minute.\n");
	//create time numbers
	int h = 12, m = 00;
	char* noon = "AM";
	//print first time
	printf("%i:0%i %s\n", h, m, noon);
	char* n;
	while(1)
	{
		//wait for user to progress program
		getch();
		m = m + 1;
		// progress hours
		if(m >= 60)
		{
			h = h + 1;
			m = 00;
		}
		// reset hours
		if(h >= 13)
		{
			h = 1;
		}
		//change AM/PM
		if (h >= 12 && m <= 00)
		{
			if(strcmp(noon, "AM") == 0)
				noon = "PM";
			else if(strcmp(noon, "PM") == 0)
				noon = "AM";
			else
				return 1;
		}
		// print time
		if(m < 10)
		{
			if(h >= 10)
				printf("%i:0%i %s", h, m, noon);
			if(h < 10)
				printf(" %i:0%i %s", h, m, noon);
		}
		else if(h < 10)
			printf(" %i:%i %s", h, m, noon);
		else
			printf("%i:%i %s", h, m, noon);
		printf("\n");
	}
}