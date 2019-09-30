#include <stdio.h>
#include <math.h>
#include "verf.h"

int main()
{
//assigning the variables
  double sum = 0,q,k,ratio1,ratio2,ratio3,ratio4,num,n = 9999999;
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
ratio3=num/den(-6);
ratio4=num/den(7);

//Theoretical Numerator=0.75
//Theoretical Denominator=0.0138888888
printf("Numerator=%lf\n",num);
printf("Denominator1=%lf\n",den(8));
printf("Denominator2=%lf\n",den(-9));
printf("Answer1=%.6lf\n",ratio1);
printf("Answer2=%.6lf\n",ratio2);
printf("Wrong Answer3=%.6lf\n",ratio3);
printf("Wrong Answer4=%.6lf\n",ratio4);
return 0;
}
