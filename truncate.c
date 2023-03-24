#include <windows.h>

int main(void)
{
	int x = get_int("x : ");
	
	int y = get_int("y : ");
	
	float z = x / y;
	
	printf("%\n", z);
}
