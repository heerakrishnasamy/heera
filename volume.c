#include <stdio.h>
int main()
{
    int l,b,h,vol,sa;
    scanf("%d%d%d",&l,&b,&h);
    vol=l*b*h;
    sa=(2*l*b)+(2*l*h)+(2*h*b);
    printf("volume of cuboid is %d\n",vol);
    printf("surface area of cuboid is %d",sa);
    return 0;
}
