#include<stdio.h>
int main()
{
    int a[10],n,k,i,flag=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    if((a[i]%2)!=0)
    {
        flag++;
    
    }
    if(flag==k)
    {
        printf("%d",a[i]);
        break;
    }
    }
    return 0;
}
