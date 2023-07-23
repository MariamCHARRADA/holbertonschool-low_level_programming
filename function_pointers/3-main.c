#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if(argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if(argv[2] == "/" && argv[3] == "0" || argv[2] == "%" && argv[3] == "0")
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = get_op_func(num1, num2);
	printf("%d\n", result);
	return(0);
}
