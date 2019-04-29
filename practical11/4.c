#include<stdio.h>
#include<conio.h>

int main()
{
	int flag,n,a[20],i,s;
	printf("\n Enter the size of array:");
	scanf("%d",&n);
	printf("\n Enter array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n Enter value to search:");
	scanf("%d",&s);
	//i=1;
	flag=1;
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
            flag=0;
		//printf("\nValue found...");

	}
	if(flag==0)
		printf("\n Value found...!!");
	else
		printf("\n Value not found...!!");
}
