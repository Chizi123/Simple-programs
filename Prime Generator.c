/**
 * Prime numeber generator
 * 
 * Made by Joel Grunbaum
 */

#include <stdio.h>

int main(void)
{
	int n, result;
	FILE *lst;
	lst=fopen("primes.txt", "w");
	for (n = 2; 1; n++)
	{
		if (n != 4)
		{
			result = checkp(n);
			if (result == 1)
			{
				printf("%i\n", n);
				fprintf(lst, "%i\n", n);
			}
		}
	}
	fclose(lst);
	return 0;
}

// checks for primes
int checkp(int a)
{
	int c;
	for (c = 2; c < a/2; c++)
	{
		if (a % c == 0)
			return 0;
	}
	return 1;
}
