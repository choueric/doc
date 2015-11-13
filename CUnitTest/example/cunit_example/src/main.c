#include <stdio.h>

#include "main.h"
#include "maxi.h"
#include "mini.h"

int main()
{
	int i, j;
	int n;

	i = 20;
	j = 25;
	printf("-------- main --------\n");
	printf("i = %d, j = %d\n", i, j);
	n = maxi(i, j);
	printf("maxi = %d\n", n);

	printf("i = %d, j = %d\n", i, j);
	n = mini(i, j);
	printf("mini = %d\n", n);

	return 0;
}
