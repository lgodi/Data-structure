#include<stdio.h>
#include<conio.h>
struct node
{
    int value;
    struct node *next;
}*head;

int data;
int main()
{


 printf("Singly Linked List Example - All Operations\n");
int option;


    printf("\nOptions\n");
    printf("1 : Insert into Linked List \n");
    printf("2 : Delete from Linked List \n");
    printf("3 : Display Linked List\n");
    printf("4 : Count Linked List\n");
    printf("Others : Exit()\n");
    do
    {


    printf("Enter your option:");
    scanf("%d", &option);
    switch (option) {
      case 1:
        insert();
        break;
      case 2:
        display();
        break;
      case 3:
        delete();
        break;
      /*case 4:
        count();
        break;*/
      default:
        break;
    }
    }while(option!=4);
  }

  void insert()
{

   struct node *new_node,*new1_node;
    printf("\n enter value=");
    scanf("%d",&data);
    new_node=(struct head*)malloc( sizeof(head));
    new_node->value=data;
     if(head==NULL)
    {
        new_node->next=NULL;
        head=new_node;
    }
    else
    {
        printf("\n enter elememt=");
        scanf("%d",&data);
        *new1_node=(struct head*)malloc(sizeof(head));
        new1_node->value=data;
        new_node->next=new1_node;
        new1_node->NULL;

    }
}


void display()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("\n list is empty");
    }
    else
    {
        temp=head;
        //while(temp!=NULL)

            printf("\n %d",temp->value);
            temp->next=NULL;

    }
}
