#include <stdio.h>

int main(void)
{
	long x = get_long ("x: ");
	
	long y = get_long ("y: ");
	
	//Compara��o entre X e Y
	if(x < y)
	{
		printf("X � menos do que o Y\n");
	}
	
	else if (x > y)
	{
		printf("X � maior do que Y\n");
	}
	else
	{
		printf("X � igual a Y\n");
	}
}

	/* Dividi x e y
	float z = x / y;
	print("%f\n", z) */
