#include<stdio.h>
int main()
{
     char s1[100],ch,vow[10],conso[10];
      int i,vowel=0,consonant=0,digit=0,word=1,other=0,capital=0,small=0;
     printf("enter string=");
     gets(s1);
     for(i=0;s1[i]!='\0';i++)
     {
          ch=s1[i];
          {
               if(ch=='a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U')
               {
                    vowel++;
                    puts(vow);
               }
               else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
               {
                    consonant++;
                    puts(conso);
               }
               else if(ch>='0'&&ch<='9')
               {
                    digit++;
               }
               else if(ch=" ");
               {
                    word++;
               }
               if(ch>='a'&&ch<='z')
               {
                    small++;
               }
               else if(ch>='A'&&ch<='Z')
               {
                    capital++;
               }
               else
               {
               other++;
               }
          }
          printf("the number of vowel is %d\n",vowel);
          printf("the number of consonant is %d\n",consonant);
          printf("the number of digit is %d\n",digit);
          printf("the number of word is %d\n",word);
           printf("the number of small letter is %d\n",small);
            printf("the number of capital letter is %d\n",capital);
          printf("the number of other is %d\n",other);
          return 0;

     }

