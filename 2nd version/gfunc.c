#include <stdio.h>
#include <math.h>

double gfunc(int x)
{
double finalg;
	finalg=expf(-abs(x))*cos(x);
return finalg;
}
