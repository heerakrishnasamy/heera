#include<stdio.h>
#include<string.h>
void main()
{
char s[20],a[20];
int b;
scanf("%s",&s);
strcpy(a,s);
strrev(a);
b=strcmp(a,s);
if(b==0)
{
printf("palindrome");
}
else
{
printf("not a palindrome")]
}
}


