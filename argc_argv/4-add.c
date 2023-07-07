#include "main.h"
#include<stdlib.h>
/**
 * main - adds numbers
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (*argv[i + 1] != '\0')
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			sum += atoi(argv[i]);
			printf("%d\n", sum);
			return (0);
		}
		else if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
return (0);
}
