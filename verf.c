#include <stdio.h>
#include <math.h>
#include "verf.h"

int main()
{//assigning the variables
  double sum = 0,q,k,ratio1,ratio2,num,n = 9999999;
  int i = 1;
//Part1=numerator/summation
  while (i <= n)
    {
      q = cbrt (i);
      sum = sum + q;
      i = i + 1;
    }
//Part1=denominator
  k = pow (n, 1.3333);
//Part1
  num = sum / k;

//Final Answer
//Theoretical Ratio=54
ratio1=num/den(8);
ratio2=num/den(-9);
//Theoretical Numerator=0.75
//Theoretical Denominator=0.0138888888(1/72)
printf("Numerator=%lf\n",num);
printf("Denominator1=%lf\n",den(8));
printf("Denominator2=%lf\n",den(-9));
printf("Answer1=%.6lf\n",ratio1);
printf("Answer2=%.6lf",ratio2);
return 0;
}
