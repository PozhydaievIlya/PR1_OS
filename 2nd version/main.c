#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "func.h"

int scaned;
int main()
{
	printf("Enter a number to calculate: ");
	scanf("%d",&scaned); 
	printf("\nScaned: %d\n", scaned);
	printf("f(x): %f\n", ffunc(scaned));
	printf("g(x): %f\n", gfunc(scaned));
	
        return 0;
}
