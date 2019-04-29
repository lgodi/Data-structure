#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],i,n,temp,t;
    printf("\n enter number of elements=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n enter a[%d]=",i);
        scanf("%d",&a[i]);
    }


    printf("\n");





    printf("\n temp=%d",temp);
    i=2;
     while(a[i-1]>a[i])
    {

      t=a[i];
      a[i]=a[i-1];
       a[i-1]=t;

        i--;
    }

      for(i=1;i<=n-1;i++)
    {

        printf("\t %d",a[i]);
    }
    }

