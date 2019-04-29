#include<stdio.h>
#include<conio.h>
int power(int n,int p);
int main()
{
    int n,p,ans;
    printf("\n enter number=");
    scanf("%d",&n);
    printf("\n enter power=");
    scanf("%d",&p);
    ans=power(n,p);
    printf("\n answer=%d",ans);

}
int power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    if(p==1)
    {
        return n;
    }
    else
    {
            n=n*power(n,p-1);
            return n;
    }
}
