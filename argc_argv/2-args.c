#include"main.h"
/**
 * main - prints all arguments it receives
 * @argv: argv
 * @argc: argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc - 1)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
