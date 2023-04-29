#include<stdio.h>
#include<string.h>
int main()
{
     char s1[10],s2[10];
     printf("enter string 1=");
     gets(s1);
     printf("enter string 2=");
     gets(s2);
     strcat(s1,s2);//2 numbers add together//
     printf("%s\n",s1);
}
