#include<stdio.h>
#include<conio.h>
void main()
{
    char c='a';
    char *ptr=(char *) malloc (5);
     *(ptr+0)='t',*(ptr+1)='h',*(ptr+2)='i',*(ptr+3)='s',*(ptr+4)='\0';
   *(ptr+2)=c;
    printf("%s",ptr);
    getch();
}
