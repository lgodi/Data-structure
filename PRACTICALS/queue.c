#include<stdio.h>
#include<conio.h>
#define size 50
int queue[size];
int front=-1;
int rear=-1;
int main()
{
        int ch;
        printf("\n 1) insert element in queue");
        printf("\n 2) delete element from queue");
        printf("\n 3) display all elemets of queue");
        printf("\n 4) exit");
        do
        {


        printf("\n enter your choice=");
        scanf("%d",&ch);


        switch(ch)
        {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("\n exit point:");
                return;

        }

         }while(ch!=4);
         return 0;
        }

void insert()
{
    int item;
    if(rear>=size)
    {
        printf("\n queue is overflow");
    }
    else
    {
        if(front==-1)
            front=0;
        printf("\n enter any item=");
        scanf("%d",&item);
        rear=rear+1;
        queue[rear]=item;
    }
}


void delete()
{
    if(rear == -1 && front ==-1)
    {
        printf("\n queue is underflow");
    }
    else if(front==rear)
    {
        printf("\n element that ypu want to remove=%d",queue[front]);
        front=-1;
        rear=-1;
    }//rear=rear-1
    else
        {
              printf("\n element that ypu want to remove=%d",queue[front]);
            front=front+1;

    }
}

void display()
{
    int i;
    if(rear==-1 && front==-1)
    {
        printf("\n queue is underflow");
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("\n %d",queue[i]);
           //  front=front+1;
        }

    }
}
