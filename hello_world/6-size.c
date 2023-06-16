#include<stdio.h>
/**
 * main - Entry main
 *
 * Return: always 0
 */
int main(void)
{
	printf("The size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("The size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("The size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("The size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int));
	printf("The size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
