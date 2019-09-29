#include <stdio.h>
#include <math.h>

int main ()
{//defining the constants and roots
  double a,b,c,d,root1,root2;
  a=1;
  b=1;
  c=-72;
  //discriminant
  d = b*b - 4*a*c;
  //solution for d>=0
  if (d >= 0){
  root1 = (-b+sqrt (d))/(2*a);
  root2 = (-b-sqrt (d))/(2*a);
  //printing roots
  printf("First root = %.1lf\n", root1);
  printf("Second root = %.1lf\n", root2);
}
  else{//complex roots
      printf("The equation has no real roots");
  }
  return 0;
}
