#include<stdio.h>
void main()
{
int s,i,count=0;
printf("enter a number");
scanf("%d",&s);
for(i=2;i<s;i++)
{
if((s%i)==0)
count++;
}
if(count==0)
{
printf("yes");
}
else
{
printf("no");
}
}
