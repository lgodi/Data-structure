#include<stdio.h>
#include<conio.h>
void fun1();
int main()
{
    int i,d[20];
     for(i=0;i<4;i++)
    {
        printf("\n enter data");
        scanf("%d",&d[i]);
    }
    fun1();

}

void fun1()
{
    int fun2(int d[]);
}

int fun2(int d[20])
{
        int i;
        for(i=0;i<5;i++)
        {
            printf("\n %d",d[i]);
        }
}
