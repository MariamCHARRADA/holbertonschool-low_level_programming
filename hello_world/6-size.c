#include<stdio.h>
/**
 * main - Entry main
 *
 * Return: always 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("The size of a char: %zu byte(s)\n", sizeof(a));
	printf("The size of an int: %zu byte(s)\n", sizeof(b));
	printf("The size of a long int: %zu byte(s)\n", sizeof(c));
	printf("The size of a long long int: %zu byte(s)\n", sizeof(d));
	printf("The size of a float: %zu byte(s)", sizeof(e));
	return (0);
}
