#include<stdio.h>
#include<conio.h>
void main()
{
    int a[17],*ptr,i;

    for(i=0;i<=4;i++)
    {
        printf("\n enter a[%d]",i);
        scanf("%d",&a[i]);

    }
    ptr=a;
    for(i=0;i<=4;i++)
    {
        printf("\n a[%d]=%d",i,*ptr);
        ptr++;
    }
     printf("\n size of pinter=%u",sizeof(ptr));
}
