#include<stdio.h>
#include<conio.h>
int main()
{
        int a[20],i,j,n,temp,search;
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
        printf("\n enter elements to search=");
        scanf("%d",&search);
        for(i=0;i<n;i++)
        {
            if(a[i]==search)
            {
                printf("\n succesfully search");
                printf("\n %d is at %d",search,i);
            }
        }
}

