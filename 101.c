#include <stdio.h>

int main()
{
    int a,n,i,s=1;
    scanf("%d %d",&a,&n);
    for(i=0;i<n;i++)
    {
       s=s*10; 
    }
    printf("%d",a%s);
    return 0;
}


