#include <stdio.h>
#include <math.h>

int main()
{
  int a, n;
  scanf("%d", &n);
  
  int sqroot = (int)sqrt(n);
  
  while (n % 2 == 0)
  {
    n = n / 2;
    printf("%d\t", 2);
  }
  
  for (a=3; a<=sqroot; a+=2)
  {
    while(n%a==0)
    {
      printf("%d\t", a);
      n = n/a;
    }
  }
}
