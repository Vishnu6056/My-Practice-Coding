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
void insert_at_begin(int input , SLLNODE * *start_ptr)
{
      SLLNODE * newnode;
      newnode= create_node(input);
      if((*start_ptr)==NULL)//no linked list
      {
          (*start_ptr)=newnode;
      }
      else//ins at begin
      {
          newnode->next=(*start_ptr);
          (*start_ptr)=newnode;
      }
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
void sll_search(SLLNODE * start,int search_val)
{
    SLLNODE * tptr=NULL;
    /* for(ind=0 ; ind<no_ele; ind+=1)
     {
         if(arr[ind]==search_val)
           {
               printf("Found");
               break;
           }
     }
     if(ind==no_ele)
        printf("Not found");
     */
    for(tptr = start  ;  tptr!=NULL; tptr = tptr->next)
    {
        if(tptr->data == search_val )
        {
            printf("Found");
            break;
        }
    }
    if(tptr==NULL)
        printf("Not found");

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
  //scanf("%d",&search_val);
  //sll_search(start,search_val);
  sll_display(start);

  return 0;
}
