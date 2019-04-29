#include<stdio.h>
int main()
{
	int s,n,i,j,coef=1;
	clrscr();
	printf("Enter number : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-i;s++)
		{
			printf("*");
		}
		for(j=0;j<=i;j++)
		{
			if(j==0 || i==0)
				coef=1;
			else
				coef=coef*(i-j+1)/j;
			printf("%d*",coef);
		}
		for(s=0;s<n-j;s++)
			printf("*");
		printf("\n");
	}
	for(i=i-1;i>0;i--)
	{
		for(s=n-i;s>=0;s--)
			printf("*");
		for(j=0;j<i;j++)
		{
			if(j==0 || i==0)
				coef=1;
			else
				coef=coef*(i-j)/j;
			printf("%d*",coef);
		}
		for(s=n-i;s>0;s--)
			printf("*");
		printf("\n");
	}
	getch();
	return 0;
}