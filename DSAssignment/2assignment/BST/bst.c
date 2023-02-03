
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *lchild;
	struct node *rchild;
};
struct node*bst;
struct node*curr;
struct node*temp;
int height(struct node*curr);
int max(int n1,int n2);
void insert(int ele)
{
	struct node *temp,*curr;
	temp=(struct node*)malloc(sizeof(struct node*));
	temp->data=ele;
	temp->lchild=temp->rchild=NULL;
        if(bst==NULL)
	 	bst=temp;
	else
	{
 		curr=bst;
		while(1)
		{
	 		if(ele<curr->data)
			{
	 			if(curr->lchild!=NULL)
 	 			 curr=curr->lchild;
				else
				 {
 				  curr->lchild=temp;
				   break;
			         }
                         }
			 else if(ele>curr->data);
			 {
				if(curr->rchild!=NULL)
  				       curr=curr->rchild;
				else
				{ 
 					curr->rchild=temp;
	 				break;
                                }
		          }	
		 }	
	}
}
void inorder(struct node *curr)
{
	if(curr!=NULL)
	{
		inorder(curr->lchild);
		printf("\t%d",curr->data);
                inorder(curr->rchild);
	}
}
	 	

void preorder(struct node*curr)
{
	if(curr!=NULL)
  	{
  	 	printf("%d ",curr->data);
  	 	preorder(curr->lchild);
   	 	preorder(curr->rchild);
  	}
}

void postorder(struct node*curr)
{
	if(curr!=NULL)
    	{
     		postorder(curr->rchild);
    		postorder(curr->lchild);
		printf("%d ",curr->data);
   	}	
}


//total no of leaf node
int LN(struct node*curr)
{
	 if(curr==NULL)
  	 	return 0;
 	 if(curr->lchild==NULL && curr->rchild==NULL)
         	return 1;
 	 return(LN(curr->lchild)+LN(curr->rchild));
}

int NL(struct node*curr)
{
	 if(curr==NULL)
	{
 	 	return 0;
	}
	 if(curr->lchild==NULL && curr->rchild==NULL)
	{
		return 0;
	}
	 return(NL(curr->lchild)+NL(curr->rchild)+1);
}


int height(struct node*curr)
{
	 if(curr==NULL)
	 	return -1;
	 if(curr->lchild==NULL && curr->rchild==NULL)
	 	return 0;
	 return (max(height(curr->lchild),height(curr->rchild))+1);
}
int max(int n1,int n2)
{
	if(n1>n2)
		return n1;
	else
		return n2;
}

int findmax(struct node*curr)
{
 	int x=-1;
	if(curr!=NULL)
  	{
   	while(curr->rchild!=NULL)
    		curr=curr->rchild;
     		x=curr->data;
        }
	return x;
}

int findmin(struct node*curr)
{
 	int x=-1;
 	if(curr!=NULL)
 	{
 		while(curr->lchild!=NULL)
		{
  		curr=curr->lchild;
		}
  		x=curr->data;
 	}	
	return x;
}
 


struct node *delete(struct node*curr ,int ele)
{
 	if(curr!=NULL)
  	{
 		if(ele<curr->data)
 			curr->lchild=delete(curr->lchild,ele);
 	        else if(ele>curr->data)
 			curr->rchild=delete(curr->rchild,ele);
 	else
        {
 		if(curr->lchild!=NULL && curr->rchild!=NULL)
 		{	
  			curr->data=findmax(curr->lchild);
			curr->lchild=delete(curr->lchild,curr->data);
		}	

       		else
       		{
          		temp=curr;
          		if(curr->rchild==NULL)
          			curr=curr->lchild;
          		else
          			curr=curr->rchild;
          		free(temp);
       		}
         } 
	return curr;
         }
}


void main()
{
int n,ele;

while(1)
{
	printf("\nenter your choice:");
 	printf("\n1.insert element\\\n\n2.leafnode\n3.nonleafnode\n4.height\n5.find max\n6 find min\n7 delete\n");
	printf("\n8.preorder \n9.postorder \n10.inorder");
 	scanf("%d",&n);
switch(n)
{
	case 1:printf("\nenter the element");
	       scanf("%d",&ele);
	       insert(ele);
	       break;
	case 2:printf("number of leafnode are %d",LN(bst));
	       break;
	case 3:printf("number of nonleafnode are %d",NL(bst));
	       break;
	       
	 case 4:printf("height of tree is %d",height(bst));
	        break;
	        
	 case 5:printf("max is %d",findmax(bst));
	        break;
	        
	 case 6:printf("min is %d",findmin(bst));
	        break;
            


        case 7:printf("enter element is element:");
               scanf("%d",&ele);
               delete(bst,ele);
               break;
        case 8:
		preorder(bst);
	break;
	case 9:
		postorder(bst);
	break;
	case 10:
		inorder(bst);
	break;
               	}
              }  
              
            } 

             
