#include <stdio.h>

int main(void)
{
	printf("Enter a number to be converted to roman numerals: ");
	int n;
	scanf("%i", &n);

	while(n <= 0 || n > 4999)
	{
		printf("Please enter a number between 1 and 4999: ");
		scanf("%i", &n);
	}
	while(n >= 1000)
	{
		printf("M");
		n = n - 1000;
	}
	while(n >= 500)
	{
		printf("D");
		n = n - 500;
	}
	while(n >= 100)
	{
		printf("C");
		n = n - 100;
	}
	while(n >= 50)
	{
		printf("L");
		n = n - 50;
	}
	while(n >= 10)
	{
		printf("X");
		n = n - 10;
	}
	while(n >= 5)
	{
		printf("V");
		n = n - 5;
	}
	while(n >= 1)
	{
		printf("I");
		n = n - 1;
	}
	return 0;
}
