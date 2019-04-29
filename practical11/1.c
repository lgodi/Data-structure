#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,a[20],n,temp;
	printf("\n Enter the size of array:");
	scanf("%d",&n);
	printf("\n Enter Elements:");
	for(i=0;i<n;i++)
		scanf(" %d",&a[i]);
	printf("\n Sorted Array...!!");
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("\nSorted array is %d",a[i]);
}
5
