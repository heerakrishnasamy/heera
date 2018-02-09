#include<stdio.h>
void main()
{
int n,t,count=0,s;
scanf("%d",&n);
s=n;
while(n!=0)
{
t=n%10;
count=0;
if(t==0||t==1)
{
count=1;
}
else
{
}
n=n/10;
}
if(count==1)
{
printf("yes");
}
else
{
printf("no");
}
}
