#include <stdio.h>

int main
{
	int a,b,i,sum=0,d;
	scanf("%d%d%d",&a,&d,&b);
	for(i=a;i<=b;i=i+d)
	{
		sum+=i;
	}
	printf("%d",sum);
	return 0;
}

