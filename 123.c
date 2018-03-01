#include<stdio.h>
int main()
{
    int a[10],n,k,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    if(i+1==k)
    {
        printf("%d",a[i]);
        break;
    }   
    }
    return 0;
}
