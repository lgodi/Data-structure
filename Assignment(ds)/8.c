#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*top=NULL;

void push(int);
void pop();
void disp();
void read();
void write();
int main()
{
	read();
	int ch,value;
	do
	{
		printf("\n1.Push");
		printf("\n2.Pop");
		printf("\n3.Display");
		printf("\n4.Exit");
		printf("\n Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			    printf("\nEnter value:");
                scanf("%d",&value);
                push(value);
                write();
                break;
			case 2:
			    pop();
                write();
                break;
			case 3:
			    disp();
                break;
			case 4:
			    exit(1);
                break;
			default:
			    printf("\n Wrong Choice...!!!");
				break;
		}
	}while(ch!=4);

}
void push(int x)
{
	struct node *new_node;
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=x;
	if(top==NULL)
	{
		new_node->next=NULL;
	}
	else
	{
		new_node->next=top;
		//top=new_node;
	}
	top=new_node;
	printf("\nSuccessfully inserted");
}
void pop()
{
	if(top==NULL)
		printf("\nStacklist is not created");
	else
	{
		struct node *temp;
		temp=top;
		printf("\nDeleted emelemnt is %d",temp->data);
		top=temp->next;
		free(temp);
	}
}
void disp()
{
	if(top==NULL)
		printf("\nStack is empty");
	else
	{
		struct node *temp;
		temp=top;
		while(temp!=NULL)
		{
			printf("\nData is %d",temp->data);
			temp=temp->next;
		}
		//printf("\nData is %d",temp->data);
	}
}
void write()
{
	int data,i;
	FILE *ptr;
	ptr=fopen("stacklink.txt","w");
	struct node *temp;
	temp=top;
	while(temp!=NULL)
	{
		fprintf(ptr,"%d",temp->data);
		temp=temp->next;
	}
	fclose(ptr);
}
void read()
{
	int i;
	FILE *fptr;
	fptr=fopen("stacklink.txt","r");
	struct node *temp;
	temp=top;
	while(temp!=NULL)
	{
		fscanf(fptr,"%d",&temp->data);
		temp=temp->next;
	}

	fclose(fptr);

}

