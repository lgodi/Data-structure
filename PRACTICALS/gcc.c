#include<stdio.h>
#include<conio.h>

void fact1(int n,int m);
int main()
{
    int n,m;
    printf("\n enter n=");
    scanf("%d",&n);
    printf("\n enter m=");
    scanf("%d",m);

     fact1(n,m);
}
    void fact1(int n,int m)
{

        if(m!=0)
        {
            return fact1(m,(n%m);

        }
        else
        {
            return n;
        }

}
