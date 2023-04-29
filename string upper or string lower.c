#include<stdio.h>
int main()
{
     char s1[100],s2[100];
     printf("enter lower string=");
     gets(s1);
     strupr(s1);
     puts(s1);
     printf("enter upper string=");
     gets(s2);
     strlwr(s2);
     puts(s2);
     return 0;
}
