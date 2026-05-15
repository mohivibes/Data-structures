#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *left;
	struct node *right;
};
struct node* createnode(int data)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
struct node* insert(struct node *root,int value)
{
	if(root==NULL)
	{
		return createnode(value);
	}
	else if(value < root->data)
	{
		root->left=insert(root->left,value);
	}
	else if(value > root->data)
	{
		root->right=insert(root->right,value);
	}
	return root;
}
struct node* findmin(struct node *root)
{
	while(root->left!=NULL)
	{
		root=root->left;
	}
	return root;
}
struct node* delete(struct node *root,int key)
{
	if(root==NULL)
	{
		return NULL;
	}
	else if(key < root->data)
	{
		root->left=delete(root->left,key);
	}
	else if( key > root->data)
	{
		root->right=delete(root->right,key);
	}
	else
	{
		//1.leaf node
		if(root->left==NULL && root->right==NULL)
		{
			free(root);
			return NULL;
		}
		//2. only right child
		else if(root->left==NULL)
		{
			struct node *temp=root->right;
			free(root);
			return temp;
		}
		//3.only left child
		else if(root->right==NULL)
		{
			struct node *temp=root->left;
			free(root);
			return temp;
		}
		//4.node have both lef child and right child
		struct node* temp = findmin(root->right);
        root->data = temp->data;
        root->right = delete(root->right, temp->data);
		
	}
	return root;
}
void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	}
	printf("\n");
}
int main()
{
	struct node *root=NULL;
	int ch,value;
	while(1)
	{
		printf("1.insert 2.delete 3.display\n");
		printf("enter your choice:\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("enter node value to insert:\n");
			scanf("%d",&value);
			root=insert(root,value);
		}
		else if(ch==2)
		{
			int nodevalue;
			scanf("%d",&nodevalue);
			root=delete(root,nodevalue);
		}
		else if(ch==3)
		{
			//traversing or visiting or display
			inorder(root);
		}
		else
		{
			break;
		}
	}
}