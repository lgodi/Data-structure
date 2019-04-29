#include<stdio.h>
#include<conio.h>

void  swap(int *a,int *b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
int reverse(int n)
{
	int rem,rnum=0;
	while(n > 0)
	{
		rem= n % 10;
		rnum=rnum * 10 + rem;
		n= n / 10;
	}
	return rnum;
}
int main()
{
	FILE *fp;
	fp=fopen("p1.txt","r");
	int x,y;
	printf("\nEnter value of x:");
	scanf("%d",&x);
	fscanf(fp,"%d",&x);
	printf("\nEnter value of y:");
	scanf("%d",&y);
	fscanf(fp,"%d",&y);
	printf("Value before swap \nx= %d \ny= %d",x,y);


	void (*pfun) (int *,int *)=swap;
	pfun(&x,&y);
	printf("\nValue after swap \nx= %d \ny= %d",x,y);

	int (*rp) (int )=reverse;
	if(x == rp(x))
		printf("\n%d number is palindrome",x);
	else
		printf("\n%d number is not palindrome",x);

	if(y == rp(y))
		printf("\n%d number is palindrome",y);
	else
		printf("\n%d number is not palindrome",y);
	fclose(fp);

}
