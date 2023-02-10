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
      		tptr=*root_ptr;
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
struct qnode
{
  BSTNODE * bst_add;
  struct qnode * qnext;
};
typedef struct qnode QNODE;
QNODE * create_qnode(BSTNODE*  input)
{
    QNODE* newnode=NULL;
    newnode=(QNODE*)malloc(sizeof(QNODE));
    newnode->bst_add=input;
    newnode->qnext=NULL;
    return newnode;
}
//void insert_at_end(int input , SLLNODE * *start_ptr)
void enQue( BSTNODE * enq_val, QNODE * * front_ptr,QNODE **rear_ptr )//insert at end
{
   QNODE * newqnode;
   newqnode=create_qnode(enq_val);
   if((*front_ptr) == NULL || (*rear_ptr)==NULL)//empty
    (*front_ptr)=(*rear_ptr)=newqnode;
  else
  {
      (*rear_ptr)->qnext=newqnode;
      (*rear_ptr)=newqnode;
  }

}
//void delete_at_begin(SLLNODE * * start_ptr)
BSTNODE * deQue( QNODE * * front_ptr,QNODE **rear_ptr )
{
 BSTNODE * deq_val=NULL;
 QNODE * toFree;
 if((*front_ptr)==NULL||(*rear_ptr)==NULL)
    return NULL;

 deq_val=(*front_ptr)->bst_add;//safe to return
 toFree=(*front_ptr); //storing the first nodes address to free
 (*front_ptr)=(*front_ptr)->qnext;//altering the front
 if((*front_ptr)==NULL)//if list got only one node, then on deq both will be numm
    (*rear_ptr)=NULL;
 free(toFree);
 return deq_val;
}

void level_order_display(BSTNODE * root)
{
  QNODE * front ;//start
  QNODE * rear ;//end
  BSTNODE * deq_bst_node;
  front=rear=NULL;

  enQue(root,&front,&rear);
  while(1)
  {
      deq_bst_node= deQue(&front,&rear);
      if(deq_bst_node==NULL)
        break;
      printf("%d ",deq_bst_node->data);
      if(deq_bst_node->left)
        enQue(deq_bst_node->left,&front,&rear);
      if(deq_bst_node->right)
        enQue(deq_bst_node->right,&front,&rear);
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

 printf("\nlevelorder display  :");
 level_order_display(root);

  return 0;
}
