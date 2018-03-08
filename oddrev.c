#include <stdio.h>
int main()
{
    int d,s,r;
    scanf("%d",&d);
    while(d!=0)
    {
        s=d%10;
        r=(r*10)+s;
        d=d/10;
    }
    while(r!=0)
    {
    d=r%10;
    if(d%2!=0)
    {
     printf("%d ",d);
    }
    r=r/10;
    }
    return 0;
}
