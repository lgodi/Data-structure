#include<stdio.h>
#include<conio.h>
void main()
{
         char str[20],search[20],cnt=0;
         printf("\n enter a string=");
         scanf("%s",&str);
         printf("\n enter a string you want to search=");
         scanf("%s",&search);
         while(str!='\0')
        {
         if(str==search)
         {
                cnt++;
         }
        }
        printf("\n total=%d",cnt);
        getch();
}
