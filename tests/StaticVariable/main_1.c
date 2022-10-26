#include <stdio.h>

void function(void);

int main (void)
{
	int i;
	
	i = 0;
	while(i <= 10)
	{
		function();
		i++;
	}

	return (0);
}

void function(void)
{
	static int x;

	//the default value of static variable is 0
	printf("x = %d\n", x);
	x = x + 1; //1
}
