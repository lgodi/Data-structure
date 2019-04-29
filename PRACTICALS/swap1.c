#include<stdio.h>
#include<conio.h>
int swap(int x,int y);
void main()
{
    int a,*b;
    printf("\n enter a=");
    scanf("%d",&a);
    printf("\n enter b=");
    scanf("%d",&b);
    swap(a,b);

}
int swap(int a,int b)
{
          int c;
          c=a;
          a=b;
          b=c;
            printf("\n a=%d",a);
            printf("\n b=%d",b);
}
