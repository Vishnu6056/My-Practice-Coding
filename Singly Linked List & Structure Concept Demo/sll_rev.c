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
void insert_at_end(int input , SLLNODE * *start_ptr)
{
      SLLNODE * newnode;
      SLLNODE * tptr;
      newnode= create_node(input);
      if((*start_ptr)==NULL)//no linked list
      {
          (*start_ptr)=newnode;
      }
      else//ins at end
      {
        for(tptr=(*start_ptr) ; tptr->next!=NULL ; tptr=tptr->next);//last node found
         tptr->next=newnode;
      }
}
void sll_display( SLLNODE *start)
{
  SLLNODE * tptr;
  for( tptr=start ; tptr!=NULL  ;tptr=tptr->next)
  {
      printf("%d ",tptr->data);
  }
}
void sll_for_print(SLLNODE * tptr)
{
    if(tptr==NULL)
        return;
    printf("%d ",tptr->data);
    sll_for_print(tptr->next);
}
void sll_rev_print(SLLNODE * tptr)
{
    if(tptr==NULL)
        return;
    sll_rev_print(tptr->next);
    printf("%d ",tptr->data);
}








SLLNODE *  sll_rec_rev(SLLNODE * tptr , SLLNODE * new_next)
{
    static SLLNODE * new_start;
    if(tptr->next==NULL)//last -> new start
    {
        tptr->next=new_next;
        new_start=tptr;//new start for my rev list
        return new_start;
    }
    sll_rec_rev(tptr->next,tptr);
    tptr->next=new_next;
    return new_start;
}
SLLNODE * sll_reverse(SLLNODE * start)
{
    SLLNODE * curr,*prev,*safe;
    curr=start;
    prev=NULL;
    while(curr!=NULL)
    {
        safe	=	curr	->	next;
        curr	->	next	=	prev;
        prev	=	curr;
        curr	=	safe;
    }
    return prev;//prev will hold the new start of linked list
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
      insert_at_end(input,&start);
  }
  //start=sll_rec_rev(start,NULL);
  start=sll_reverse(start);
  sll_for_print(start);
  //sll_for_print(start);
  //sll_rev_print(start);
  return 0;
}
