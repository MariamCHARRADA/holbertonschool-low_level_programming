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
	int j;
	int sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			 if (argv[i][j] < '0' || argv[i][j] > '9')
			{
			printf("Error\n");
			return (1);
			}
		j++;
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
return (0);
}
