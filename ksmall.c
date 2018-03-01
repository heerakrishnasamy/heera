#include<stdio.h>
int main()
{
    int a[10],n,k,i,flag=0,j,temp;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }   
    }
    for(i=0;i<n;i++)
    {
    printf("%d",a[k-1]);
    break;
    }
    return 0;
}
