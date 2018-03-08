#include<stdio.h>
#include<string.h>
int main()
{
  char s[10];
  int i,a,m;
  scanf("%s",&s);
  a=strlen(s);
  if(a%2==0)
  {
    m=a/2;
    s[m]='*';
    s[m-1]='*';
    printf("%s",s);
  }
  else
  {
    m=a/2;
    s[m]='*';
    printf("%s",s);
  }
  
 return 0;
}
