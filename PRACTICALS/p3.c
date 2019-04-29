#include<stdio.h>
#include<conio.h>

struct student
{
    int id,c,java;
    char nm[20];


}s1[6];
void read(s1);
void write(s1);
void display(s1);
void main()
{
        write();
        read();


}
void write()
{
       int i;
       for(i=0;i<=4;i++)
       {
           printf("\n enter id=");
           scanf("%d",&s1[i].id);
           printf("\n enter name=");
           scanf("%s",s1[i].nm);
           printf("\n enter c marks=");
           scanf("%d",&s1[i].c);
           printf("\n enter java marks=");
           scanf("%d",&s1[i].java);
       }
}
void read()
{
    int i;
    for(i=0;i<=4;i++)
    {
        printf("\n id=%d",s1[i].id);
        printf("\n name=%s",s1[i].nm);
        printf("\n c marks=%d",s1[i].c);
        printf("\n java=%d",s1[i].java);

    }
}



