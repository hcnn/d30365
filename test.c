#include <stdio.h>  //printf
#include <assert.h> //assert
#include <math.h> //fabs
#include "d30365.h"

int main()
{
    double yf;
    yf = d30365(2018,12,15, 2019,3,1);
    assert( fabs(yf - 0.20821918) < 1e-8 );
    printf("%.8f\n", yf);
	return 0;
}
