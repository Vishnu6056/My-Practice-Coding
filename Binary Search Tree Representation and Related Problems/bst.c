#include <stdio.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node BSTNODE;
BSTNODE * create_node(int input)
{
    BSTNODE* newnode=NULL;
    newnode=(BSTNODE*)malloc(sizeof(BSTNODE));
    newnode->data=input;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
void insert_node_v1(int input, BSTNODE* *root_ptr)
{
 BSTNODE * newnode;
 BSTNODE * tptr,*prev;
 newnode=create_node(input);
  if((*root_ptr)==NULL)//no tree found
  {
      (*root_ptr)=newnode;
  }
  else
  {
      		tptr	=	(*root_ptr);
      		prev=NULL;
            while(tptr!=NULL)
            {
                    prev=tptr;
                    if(tptr->data > newnode->data)
                        tptr=tptr->left;
                    else
                        tptr=tptr->right;
            }
        if(prev->data > newnode->data)
			prev->left=newnode;
        else
			prev->right=newnode;
  }
}
void insert_node_v2(int input, BSTNODE* *root_ptr)
{
 BSTNODE * newnode;
 BSTNODE * tptr;
 newnode=create_node(input);
  if((*root_ptr)==NULL)//no tree found
  {
      (*root_ptr)=newnode;
  }
  else
  {
      		tptr	=	*root_ptr;
            while(1)
            {
                    if(tptr->data > newnode->data)
                    {
                        if(tptr->left==NULL)
                        {
                          tptr->left=newnode;
                          break;
                        }
                        else
                            tptr=tptr->left;
                    }
                    else
                    {
                        if(tptr->right==NULL)
                        {
                            tptr->right=newnode;
                            break;
                        }
                        else
                            tptr=tptr->right;
                    }
            }
  }
}
void inorder_LPR(BSTNODE * tptr )
{
    if(tptr==NULL)
        return;
    inorder_LPR(tptr->left);
    printf("%d ",tptr->data);
    inorder_LPR(tptr->right);
}
void inorder_RPL(BSTNODE * tptr )
{
    if(tptr==NULL)
        return;
    inorder_RPL(tptr->right);
    printf("%d ",tptr->data);
    inorder_RPL(tptr->left);
}
void preorder_PLR(BSTNODE * tptr )
{
    if(tptr==NULL)
        return;
    printf("%d ",tptr->data);
    preorder_PLR(tptr->left);
    preorder_PLR(tptr->right);
}
void preorder_PRL(BSTNODE * tptr )
{
    if(tptr==NULL)
        return;
    printf("%d ",tptr->data);
    preorder_PRL(tptr->right);
    preorder_PRL(tptr->left);
}
void postorder_RLP(BSTNODE * tptr )
{
    if(tptr==NULL)
        return;
    postorder_RLP(tptr->right);
    postorder_RLP(tptr->left);
    printf("%d ",tptr->data);
}
void postorder_LRP(BSTNODE * tptr )
{
    if(tptr==NULL)
        return;
    postorder_LRP(tptr->left);
    postorder_LRP(tptr->right);
    printf("%d ",tptr->data);
}
void enQue(BSTNODE * queue[], int * front_ptr , int * rear_ptr,BSTNODE * enq_val)
{
    if((*front_ptr) == -1|| (*rear_ptr) == -1||(*front_ptr)>(*rear_ptr))//empty queue
    {
           (*front_ptr)=(*rear_ptr)=0;
           queue[(*rear_ptr)]=enq_val;
    }
    else//non empty enque
    {
        (*rear_ptr)++;
        queue[(*rear_ptr)]=enq_val;
    }
}
BSTNODE * deQue(BSTNODE * queue[], int * front_ptr , int * rear_ptr)
{
    BSTNODE * toReturn;
    if((*front_ptr)==-1||(*rear_ptr)==-1||(*front_ptr)>(*rear_ptr))//empty queue
         return NULL;
    toReturn = queue[(*front_ptr)];
    (*front_ptr)++;
    return toReturn;
}
 void level_order_display(BSTNODE * root)
 {
    BSTNODE * queue[1000];
    BSTNODE * deq_bst_node;
    int rear_ind,front_ind;
    rear_ind=front_ind=-1;
    enQue(queue,&front_ind,&rear_ind,root);
    while(1)
    {
        deq_bst_node = deQue(queue,&front_ind,&rear_ind);
        if(deq_bst_node == NULL)
            break;
        printf("%d ",deq_bst_node->data);
        if(deq_bst_node->left)
            enQue(queue,&front_ind,&rear_ind,deq_bst_node->left);
        if(deq_bst_node->right)
            enQue(queue,&front_ind,&rear_ind,deq_bst_node->right);
    }

 }
int main()
{
 int input;
 BSTNODE *root=NULL;
 while(1)
 {
     scanf("%d",&input);
     if(input==-1)
        break;
    insert_node_v2(input,&root);
 }

 printf("Inorder LPR : ");
 inorder_LPR(root);
 printf("\nInorder RPL :");
 inorder_RPL(root);
 printf("\npreorder PLR : ");
 preorder_PLR(root);
 printf("\npreorder PRL :");
 preorder_PRL(root);
 printf("\npostorder LRP : ");
 postorder_LRP(root);
 printf("\npostorder RLP :");
 postorder_RLP(root);
 printf("\nlevelorder display  :");
 level_order_display(root);

  return 0;
}
