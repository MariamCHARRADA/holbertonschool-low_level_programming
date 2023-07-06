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

	while ((i < argc) && (atoi(argv[i]) >= 0) && (atoi(argv[i]) <= 9))
	{
		if (atoi(argv[i]) >= 0)
		{
			printf("%d\n", atoi(argv[i]) + atoi(argv[i + 1]));
			return (0);
		}
		else
		{
			printf("%d\n", 0);
		}
		i++;
	}
	printf("Error\n");
	return (1);
}
