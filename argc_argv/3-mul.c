#include"main.h"
/**
 * main - multiply 2 numbers
 * @argv: argv
 * @argc: argc
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("%d\n", *argv[1] * *argv[2]);
		return (0);
	}
	else
	{
		printf("%s\n", "ERROR");
		return (1);
	}
}
