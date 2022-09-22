#include <stdio.h>
#include <math.h>

double ffunc(int x)
{
double finalf;
	finalf=expf(-abs(x))*sin(x);
return finalf;
}
