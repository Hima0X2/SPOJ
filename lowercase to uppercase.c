#include<stdio.h>
#include<string.h>
int main()
{
     char a[100],b[100];
     int y,i;
     scanf("%s",a);
     y=strlen(a);
     for(i=0;i<y;i++)
     {
          if((a[i]>=97)&&(a[i]<=122))
          {
               b[i]='A'+(a[i]-'a');
          }
     }
     for(i=0;i<y;i++)
     {
           printf("%s",b[i]);
     }

     return 0;
}
