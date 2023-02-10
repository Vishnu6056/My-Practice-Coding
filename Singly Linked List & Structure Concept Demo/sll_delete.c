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
void delete_at_begin(SLLNODE * * start_ptr)
{
    SLLNODE * to_free;
    if((*start_ptr)==NULL)//check for sLL
        return;
    to_free=(*start_ptr);
    (*start_ptr)=(*start_ptr)->next;
    free(to_free);//free the dyn bought memory
}
void delete_at_end(SLLNODE * * start_ptr)
{
    SLLNODE *tptr,*prev ;
    if((*start_ptr)==NULL)
            return;
    for(tptr=(*start_ptr),prev=NULL;tptr->next!=NULL; prev=tptr,tptr=tptr->next);
    prev->next=NULL;
    free(tptr);
}
void search_delete(SLLNODE * * start_ptr,int search_val)
{
    SLLNODE *tptr,*prev ;
    for(tptr=(*start_ptr),prev=NULL; tptr!=NULL ; prev=tptr,tptr=tptr->next)
    {
        if(tptr->data==search_val)
            break;
    }
    if(tptr==NULL)
        printf("Value not found");
    else if(tptr==(*start_ptr))
    {
           (*start_ptr)=(*start_ptr)->next;
            free(tptr);//free the dyn bought memory
    }
    else
    {
        prev->next=tptr->next;
        free(tptr);
    }
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
  delete_at_begin(&start);
  sll_display(start);
 delete_at_end(&start);
 sll_display(start);
 search_delete(&start,30);
 sll_display(start);
 search_delete(&start,90);

  return 0;
}
