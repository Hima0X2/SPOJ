#include<stdio.h>
#include<string.h>
int main()
{
     char S1[100],i;
     printf("enter the name=");
     gets(S1);
     for(i=0;S1[i]!='\0';i++)
     {
          printf("%c\n",S1[i]);
     }
     return 0;
}
