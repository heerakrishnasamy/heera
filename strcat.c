#include <stdio.h>
int main()
{
char str1[30],str2[30];
int i,j;
printf("Enter string1");
scanf("%s",str1);
printf("Enter string2");
scanf("%s",str2);
for(i=0; str1[i]!='\0'; ++i); 
for(j=0; str2[j]!='\0'; ++j, ++i)
   {
      str1[i]=str2[j];
   }
 str1[i]='\0';
 printf("\nOutput: %s",str1);
 return 0;
}
