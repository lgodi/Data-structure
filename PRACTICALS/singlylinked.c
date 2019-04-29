#include<stdio.h>
#include<conio.h>
struct node
{
    int i;
    struct linkedlist *next;
   // struct linkedlist *head;
}*stnode;
int main()
{

}
void createnode()
{

    int num, i;
    stnode = (struct node *)malloc(sizeof(struct node));

    if(stnode == NULL) //check whether the fnnode is NULL and if so no memory allocation
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
        printf("\n link list create");
    }

}

void insertnode()
{
    int num,*fnNode, *tmp;
    printf("\n enter data=");
    scanf("%d",&num);
    fnNode->num = num;
    fnNode->nextptr = NULL;

    tmp->nextptr = fnNode;
    tmp = tmp->nextptr;
}

