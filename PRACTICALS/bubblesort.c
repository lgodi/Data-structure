#include<stdio.h>
#include<conio.h>
int main()
{
        int a[20],i,j,n,temp;
        printf("\n enter number of elements=");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            printf("\n enter a[%d]=",i);
            scanf("%d",&a[i]);
        }
        printf("\n before sorting");
        for(i=0;i<n;i++)
        {
            printf("\n %d",a[i]);
        }

        printf("\n after sorting");

        for(i=0;i<n;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(a[i]<a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            printf("\n %d",a[i]);
        }
}
