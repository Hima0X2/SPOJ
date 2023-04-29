#include<stdio.h>
int main()
{
     char s1[10],s2[10];
     int d;
     printf("enter 1st string=");
     gets(s1);
     printf("enter 2nd string=");
     gets(s2);
      if(strcmp(s1,s2)==0)
      {
           printf("equal\n");
      }
      else
      {
           printf("not equal");
      }
      return 0;
}
