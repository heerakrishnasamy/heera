#include<stdio.h>
int main()
{
 char s[10];
 int i,count=0;
 scanf("%s",&s);
 for(i=0;i<100;i++)
 {
 if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
 {
     count++;
 }
 }
 if(count!=0)
 {
     printf("yes");
 }
 else
 {
     printf("no");
 }
 return 0;
 }
