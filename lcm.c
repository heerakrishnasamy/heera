#include <stdio.h>

int main()
{
   int a,b,g,i,lcm;
   scanf("%d %d",&a,&b);
   for(i=1;i<=a && i<=b;++i)
   {
       if((a%i)==0 && (b%i)==0)
       g=i;
   }
   lcm=(a*b)/g;
   printf("%d",lcm);
   return 0;
}


