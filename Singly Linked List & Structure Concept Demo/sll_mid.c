#include <stdio.h>
struct node
{
    int data;
    struct node * next;
};
typedef struct node SLLNODE;

SLLNODE * create_node(int input)
{
    SLLNODE* newnode=NULL;
    newnode=(SLLNODE*)malloc(sizeof(SLLNODE));
    newnode->data=input;
    newnode->next=NULL;
    return newnode;
}

void sll_display( SLLNODE *start)
{
  SLLNODE * tptr;
  for( tptr=start ; tptr!=NULL  ;tptr=tptr->next)
  {
      printf("%d ",tptr->data);
  }
 printf("\n");
}
void sorted_insert(int input , SLLNODE * * start_ptr)
{
      SLLNODE * newnode;
      SLLNODE*prev;
      SLLNODE*tptr;
      newnode= create_node(input);
      if((*start_ptr)==NULL)//no linked list
      {
          (*start_ptr)=newnode;
      }
    for(prev=NULL,tptr = (*start_ptr)  ;  tptr!=NULL; prev=tptr,tptr = tptr->next)
    {
        if(tptr->data > newnode->data )
        {
            break;
        }
    }
   // for(prev=NULL,tptr = start  ;  tptr!=NULL&&tptr->data<newnode->data ; prev=tptr,tptr = tptr->next);
    if(tptr==(*start_ptr))
    {
          newnode->next=(*start_ptr);
          (*start_ptr)=newnode;
    }
    else
    {
     prev	->	next	=	newnode;
    newnode	->	next	=	tptr;

    }
}
void find_mid_point(SLLNODE * start)
{
    SLLNODE * slow;
     SLLNODE  *fast;
     if(start==NULL)
        return ;
    slow=fast=start;

      while(1)
     {
      fast=fast->next;
      if(fast==NULL)
            break;
      fast=fast->next;
      if(fast==NULL)
            break;
      slow=slow->next;
     }
     printf("%d ",slow->data);
}
int main()
{
  int input;
  int search_val;
  SLLNODE * start=NULL;
  while(1)
  {
      scanf("%d",&input);//goods
      if(input==-1)
        break;
      sorted_insert(input,&start);
  }
  sll_display(start);
  find_mid_point(start);
  return 0;
}
