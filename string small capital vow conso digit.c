#include<stdio.h>
#include<string.h>
int main()
{
     char c[100];
     int small=0,capital=0,vow=0,conso=0,digit=0,others=0,word=1;
     gets(c);
     if((c>='a')&&(c<='z'))
     {
          small++;
     }
     else if((c>='A')&&(c<='Z'))
     {
          capital++;
     }
     if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
     {
          vow++;
     }
     else if((c>='a')&&(c<='z')||(c>='A')&&(c<='Z'))
     {
          conso++;
     }
     else if((c>='0')&&(c<='9'))
     {
          digit++;
     }
     else if(c==' ')
     {
          word++;
     }
     else
     {
          others++;
     }
     printf("%d vowel\n",vow);
      printf("%d consonent\n",conso);
       printf("%d capital\n",capital);
        printf("%d small\n",small);
         printf("%d digit\n",digit);
          printf("%d word\n",word);
         printf("%d others\n",others);
     return 0;
}
