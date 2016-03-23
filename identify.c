#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
	printf("Please enter something: ");
	char entry[999];
	int n;
	for(n = 0; n < 999; n++)
		entry[n] = 123;
	scanf("%c", &entry);

	int value = 0;
	printf("The string \"%s\" is...\n", atoi(entry));
	for(n = 0; n < 999; n++)
	{
		if(entry[n] == entry[n + 1] == entry[n + 2] == 123)
			break;

		for(n = 0; n < 999; n++)
		{
			//checks for alphanumeric characters, makes value = 1 if alphanumeric
			if(isalnum(entry[n]) != 0)
				value = 1;
		}
		if(value == 1)
			printf("Entry contains alphanumeric characters.\n");

		for(n = 0; n < 999; n++)
		{
			//checks for alphabetic characters, makes value = 2 if alphabetic
			if(isalpha(entry[n]) != 0)
				value = 2;
		}
		if(value == 2)
			printf("Entry contains alphabetic characters.\n");

		for(n = 0; n < 999; n++)
		{
			//checks for digit characters, makes value = 3 if numeric
			if(isdigit(entry[n]) != 0)
				value = 3;
		}
		if(value == 3)
			printf("Entry contains numeric characters.\n");

		for(n = 0; n < 999; n++)
		{
			if(isalnum(entry[n]) == 0)
				if((int) entry[n] != 13)
					value = 4;
		}
		if(value == 4)
			printf("Entry contains non-alphanumeric characters.\n");
	}
}