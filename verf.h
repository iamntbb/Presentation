double den(int a);

//defining a funtion for denominator
double den(int a)
{//func=sum of 1/((a+(1/n))^2)
  int i=1;
  double b, q, sum=0;
  long double n = 9999999,ans;
  while (i <= n)
    {
      b = pow (a + (1 / i), 2);
      q = 1 / b;
      sum = sum + q;
      i = i + 1;
    }
  ans = (1 / n)*sum;
  return ans;
}

