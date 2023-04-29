#include<stdio.h>
int main()
{
     char s1[10],s2[10];
     printf("enter string=");
     gets(s1);
     strcpy(s2,s1);
     strrev(s1);
     if(strcmp(s1,s2)==0)
     {
          printf("palindrome");
     }
     else
     {
          printf("not palindrome");
     }
     return 0;
}
