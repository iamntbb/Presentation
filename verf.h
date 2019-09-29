//Part 2
double den(int a)
{
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

