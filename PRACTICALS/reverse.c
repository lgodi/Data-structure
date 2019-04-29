#include<stdio.h>
#include<conio.h>
void main()
{
    char str[20],rev[20];
    printf("\n enter a tring from the user=");
    scanf("%s",&str);
    rev=strrev(str);
    printf("\n reverse string=%s",rev);
    getch();

}
