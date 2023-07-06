#include"main.h"
#include<stdlib.h>
/**
 * main - multiply 2 numbers
 * @argv: argv
 * @argc: argc
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("%s\n", "ERROR");
		return (1);
	}
}
