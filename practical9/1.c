#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct tree
{
	int data;
	struct tree *left;
	struct tree *right;
};
struct tree *root=NULL;

struct tree *create_tree(struct tree *info,int no)
{
	if(info==NULL)
	{
		info=(struct tree *)malloc(sizeof(struct tree));
		info->data=no;
		info->left=NULL;
		info->right=NULL;
	}
	else
	{
		if(no<=info->data)
		{
			info->left=create_tree(info->left,no);
		}
		else
		{
			info->right=create_tree(info->right,no);
		}
	}
}
void pre_order(struct tree *info)
{
	if(info!=NULL)
	{
		printf(" %d ",info->data);
		pre_order(info->left);
		pre_order(info->right);
	}
}
void post_order(struct tree *info)
{
	if(info!=NULL)
	{
		post_order(info->left);
		post_order(info->right);
		printf(" %d ",info->data);
	}
}
void in_order(struct tree *info)
{
	if(info!=NULL)
	{
		in_order(info->left);
		printf(" %d ",info->data);
		in_order(info->right);
	}
}
int main()
{
	int ch,n;
	do
	{
		printf("\n 1.Create_tree");
		printf("\n 2.Inorder");
		printf("\n 3.Preorder");
		printf("\n 4.Postorder");
		//printf("\n5.Levelorder");
		printf("\n 5.Exit");
		printf("\n Enter Your Choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 :
			    printf("\n Enter Value :");
				scanf("%d",&n);
				root=create_tree(root,n);
				break;
			case 2 :
			    in_order(root);
				break;
			case 3 :
			    pre_order(root);
				break;
			case 4 :
			    post_order(root);
				break;
			case 5 :
			    exit(0);
				break;
			default:
			    printf("\n Invalid Choice..!!");
				break;
		}
	}while(ch!=5);
	return 0;
}
