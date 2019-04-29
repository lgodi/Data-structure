#include<stdio.h>
#include<conio.h>
void sort(int n,int a[]);
void main()
{
      int n,i,a[10];
      printf("\n enter size of array=");
      scanf("%d",&n);
      for(i=0;i<=n;i++)
      {
          printf("\n enter a[%d]=",i);
          scanf("%d",&a[i]);
      }
      sort(n,a);

}
void sort(int n,int a[])
{
   int temp,i,j;
   temp=a[0];
   for(i=0;i<=n;i++)
   {
      for(j=i+1;j<=n;j++)
      {
           if(a[i]<a[j])
           {
              temp=a[i];
              a[i]=a[j];
              a[j]=a[i];
           }
      }
    }
      temp=a[0];
      for(i=0;i<=n;i++)
   {
      for(j=i+1;j<=n;j++)
      {
           printf("\%d",temp);
      }
    }


}
