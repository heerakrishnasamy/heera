#include <stdio.h>
int main()
{
   int n,t=1,d;
   scanf("%d",&n);
   while(n!=0)
   {
       d=n%10;
       t=t*d;
       n=n/10;
   }
   printf("%d",t);
    return 0;
}
