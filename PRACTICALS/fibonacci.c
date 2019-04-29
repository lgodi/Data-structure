#include<stdio.h>
#include<conio.h>
int fibonacci(int n);
int main()
{
    int n,ans;
    printf("\n enter number=");
    scanf("%d",&n);
    ans=fibonacci(n);
    printf("\n series=%d",ans);
}

int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return(fibonacci(n-1)+fibonacci(n-2));

    }
    //return n;
}
