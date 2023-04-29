#include<stdio.h>
int main()
{
     char s1[10];
     int i,sum=0;
     printf("enter name=");
     scanf("%d",&s1);
     for(i=0;s1[i]!='\0';i++)
     {
          sum=sum+1;
     }
     printf("%d",sum);
     return 0;
}
