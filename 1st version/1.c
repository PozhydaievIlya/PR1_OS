#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int scaned;
 double finalf, finalg;
int main()
{
	printf("Enter a number to calculate: ");
	scanf("%d",&scaned); 
	finalf=expf(-abs(scaned))*sin(scaned);
	printf("\nScaned: %d\n", scaned);
	finalg=expf(-abs(scaned))*cos(scaned);
	printf("f(x): %f\n", finalf);
	printf("g(x): %f\n", finalg);
	return 0;
}
