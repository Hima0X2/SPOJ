#include<stdio.h>
int main()
{
     char s1[100],s2[100],temp[100];
     printf("enter string1=");
     gets(s1);
     printf("enter string2=");
     gets(s2);
     printf("before swapping=\n");
     puts(s1);
     puts(s2);
     strcpy(temp,s1);
     strcpy(s1,s2);
     strcpy(s2,temp);
     printf("after swapping=\n");
     puts(s1);
     puts(s2);
     return 0;
}
