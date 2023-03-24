#include <stdio.h>

int main(void)
{
	long x = get_long ("x: ");
	
	long y = get_long ("y: ");
	
	//Comparação entre X e Y
	if(x < y)
	{
		printf("X é menos do que o Y\n");
	}
	
	else if (x > y)
	{
		printf("X é maior do que Y\n");
	}
	else
	{
		printf("X é igual a Y\n");
	}
}

	/* Dividi x e y
	float z = x / y;
	print("%f\n", z) */
