#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - selects the correct function
 * */
int (*get_op_func(char *s))(int, int)
}
	opt_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
}
