#include <stdio.h>
#include <math.h>
#include "verf.h"

int main()
{
//assigning the variables
  double sum = 0,q,k,ratio1,ratio2,num,n = 9999999;
  int i = 1;
//numerator:summation
  while (i <= n)
    {
      q = cbrt (i);
      sum = sum + q;
      i = i + 1;
    }
//denominator
  k = pow (n, 1.3333);
//final answer
  num = sum / k;
 
ratio1=num/den(8);
ratio2=num/den(-9);

printf("First Answer=%.6lf\n",ratio1);
printf("Second Answer=%.6lf",ratio2);
return 0;
}
