#include <stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,c,j,count=0;
	scanf("%s",&a);
	c=strlen(a);
	for(i=0;i<c;i++)
	{
		for(j=i+1;j<=c;j++)
		{
	if(a[i]==a[j])
	{
	count++;
	}
		}
	}
	if(count==0)
	{
	printf("no");
	}
	else
	{
	printf("yes");
	}
	return 0;
}
