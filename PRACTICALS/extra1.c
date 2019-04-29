#include<stdio.h>
#include<conio.h>
int main()
{
    int g[20][20],n,i,j,count=0,count1=0;
    printf("\n enter number of vertex=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("\n enter g[%d][%d]=",i,j);
            scanf("%d",&g[i][j]);
        }
    }
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=n;j++)
        {
            printf("%d \t",g[i][j]);
        }
        printf("\n");

    }

    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=n;j++)
        {

            if(g[i][j]==1)
            {

               printf("\n g[%d]->g[%d]",i,j);
            }

        }
    }

        for(int i=1;i<=n;i++)
        {
            count=0,count1=0;
            if(g[i]==1)
            {
                count1++;
            }

            for(int j=1;j<=n;j++)
            {
                if(g[j][i]==1)
                {
                    count++;

                }

            }

              printf("\n varetx %d=%d %d",i,count,count1);
        }

        }





