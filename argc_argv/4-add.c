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

	if (argc < 1)
		printf("%d\n", 0);
	while (i < argc)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			printf("%d\n", atoi(argv[i]) + atoi(argv[i + 1]));
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
