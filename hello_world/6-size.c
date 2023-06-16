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

	printf("The size of a char: %u byte(s)\n", sizeof(a))\0;
	printf("The size of an int: %u byte(s)\n", sizeof(b))\0;
	printf("The size of a long int: %u byte(s)\n", sizeof(c));
	printf("The size of a long long int: %u byte(s)\n", sizeof(d));
	printf("The size of a float: %u byte(s)\n", sizeof(e));
	return (0);
}
