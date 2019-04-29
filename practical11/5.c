#include<stdio.h>
#include<conio.h>

int main()
{
	int flag,i,n,s,low,high,mid,a[20];
	printf("\nEnter the size of the array:");
	scanf("%d",&n);
	printf("\n Enter the Elements of array:");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	printf("\n Enter the value to search:");
	scanf("%d",&s);
	low=1;
	high=n;
	flag=1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(s<a[mid])
			high=mid-1;
		else if(s>a[mid])
			low=mid+1;
		else if(s==a[mid])
		{
			flag=0;
			//printf("\nValue found...");
			break;
		}
	}
	if(flag==0)
		printf("\n Value found...!!");
	else
		printf("\n Value not found...!!");
}
