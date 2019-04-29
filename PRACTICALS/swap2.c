#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b);
void swap2(int x,int y);
void main()
{
    int *a,*b,x,y;
    printf("\n enter a=");
    scanf("%d",&a);
    printf("\n enter b=");
    scanf("%d",&b);
    printf("\n enter x=");
    scanf("%d",&x);
    printf("\n enter y=");
    scanf("%d",&y);
    swap(&a,&b);
    printf("\n %d %d",a,b);
    swap2(x,y);
    printf("\n %d %d",x,y);
    //printf("\n %d %d %d %d",a,b,x,y);
    getch();
}
void swap(int *a,int *b)
{
     int c;
      c=*a;
     *a=*b;
     *b=c;
     printf("\n a=%d",*a);
     printf("\n b=%d",*b);

}
void swap2(int x,int y)
{

    int z;
    z=x;
    x=y;
    y=z;
      printf("\n x=%d",x);
      printf("\n y=%d",y);

}
