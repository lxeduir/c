#include <stdio.h>

int fun(int m)
{  int i, k ;
   for (i = m + 1 ; ; i++) {
      for (k = 2 ; k < i ; k++)
/**************found**************/
         if (i % k == 0)
            break ;
/**************found**************/
         if (k >= i)
           return(i);
   }
}

void main()
{
  int n ;
  n = fun(20) ;
  printf("n=%d\n", n) ;
  getchar();
}
