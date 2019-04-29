#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
         char s[20],r[20],re[20],i,j,len;
         printf("\n enter a string=");
         scanf("%s",&s);
         len=strlen(s);
         printf("length=%d",len);
         printf("\n enter a chracter you want to replace=");
         scanf("%s",&r);
         printf("\n enter a character with you want to replaced=");
         scanf("%s",&re);
         for(i=0;i!='\0';i++)
         {
             if(s[i]=r)
            {
                 for (j=0; j<len; j++)
                {
                s[i+j] = re;
                 }
            }
        }

    printf("%s\n", s);
}
