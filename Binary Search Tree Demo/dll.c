#include <stdio.h>
struct node
{
    int data;
    struct node * next;
    struct node * prev;
};
typedef struct node DLLNODE;

DLLNODE * create_node(int input)
{
    DLLNODE* newnode=NULL;
    newnode=(DLLNODE*)malloc(sizeof(DLLNODE));
    newnode->data=input;
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
}
void dll_for_display( DLLNODE *start)
{
  DLLNODE * tptr;
  for(tptr=start ; tptr!=NULL; tptr=tptr->next)
    printf("%d ",tptr->data);
  printf("\n");
}
void dll_rev_display( DLLNODE *end)
{
  DLLNODE * tptr;
  for(tptr=end ; tptr!=NULL; tptr=tptr->prev)
    printf("%d ",tptr->data);
  printf("\n");
}
void insert_at_begin(int input , DLLNODE * *start_ptr,DLLNODE * *end_ptr)
{
  DLLNODE * newnode;
  newnode=create_node(input);
  if((*start_ptr)==NULL||(*end_ptr)==NULL)//no list found
  {
      (*start_ptr)=(*end_ptr)=newnode;
  }
  else
  {
        newnode	->	next	=	(*start_ptr);
        (*start_ptr)->	prev	=	newnode;
		(*start_ptr)	=	newnode;
  }
}
void insert_at_end(int input ,  DLLNODE * *start_ptr,DLLNODE * *end_ptr)
{
  DLLNODE * newnode;
  newnode=create_node(input);
  if((*start_ptr)==NULL||(*end_ptr)==NULL)//no list found
  {
      (*start_ptr)=(*end_ptr)=newnode;
  }
  else
  {
        newnode->prev	=	(*end_ptr);
        (*end_ptr)->	next	=	newnode;
		(*end_ptr)	=	newnode;
  }
}
int Dll_search(DLLNODE * start,int search_val)
{
  DLLNODE *tptr;
  for(tptr=start; tptr ; tptr=tptr->next)
  {
      if(tptr->data == search_val)
         return 1;
  }
  return 0;
}
void delete_at_begin(DLLNODE * *start_ptr,DLLNODE * *end_ptr)
{
    DLLNODE * toFree;
    if((*start_ptr)==NULL||(*end_ptr)==NULL)//no list found
    {
        return;
    }
    else if((*start_ptr)==(*end_ptr))
    {
        toFree=(*start_ptr);
        (*start_ptr)=(*end_ptr)=NULL;
        free(toFree);
    }
    else
    {
        toFree=(*start_ptr);
      (*start_ptr)	->	next	->	prev	=	NULL;
      (*start_ptr)	=	(*start_ptr)	->	next;
      free(toFree);
    }
}
void delete_at_end(DLLNODE * *start_ptr,DLLNODE * *end_ptr)
{
    DLLNODE * toFree;
    if((*start_ptr)==NULL||(*end_ptr)==NULL)//no list found
    {
        return;
    }
    else if((*start_ptr)==(*end_ptr))
    {
        toFree=(*start_ptr);
        (*start_ptr)=(*end_ptr)=NULL;
        free(toFree);
    }
    else
    {
        toFree=(*end_ptr);
      (*end_ptr)	->	prev	->next	=	NULL;
      (*end_ptr)	=	(*end_ptr)	->	prev;
        free(toFree);
    }
}
void search_delete(DLLNODE * *start_ptr,DLLNODE * *end_ptr,int search_val)
{
  DLLNODE  *tptr;
  DLLNODE  * tofree;
  for(tptr=(*start_ptr) ;tptr!=NULL ;tptr=tptr->next)
  {
      if(tptr->data==search_val)
        break;
  }
  if(tptr==NULL)
    printf("Value not found\n");
  else if(tptr==(*start_ptr)&&tptr==(*end_ptr))//one node
  {
      tofree=(*start_ptr);
      (*start_ptr)=(*end_ptr)=NULL;
      free(tofree);
  }
  else if(tptr==(*start_ptr))//del at begin
  {
        tofree=(*start_ptr);
      (*start_ptr)	->	next	->	prev	=	NULL;
      (*start_ptr)	=	(*start_ptr)	->	next;
      free(tofree);

  }
  else if(tptr==(*end_ptr)) //del at end
  {
        tofree=(*end_ptr);
      (*end_ptr)	->	prev	->next	=	NULL;
      (*end_ptr)	=	(*end_ptr)	->	prev;
        free(tofree);

  }
  else
  {
      	tptr->prev	->	next	=	tptr->next	;
	   tptr->next	->	prev	=	tptr->prev	;
     free(tptr);
  }
}
void sorted_insert(int input ,  DLLNODE * *start_ptr,DLLNODE * *end_ptr)
{
  DLLNODE * newnode;
  DLLNODE  *tptr;
  newnode=create_node(input);
  if((*start_ptr)==NULL||(*end_ptr)==NULL)//no list found
  {
      (*start_ptr)=(*end_ptr)=newnode;
  }
  else
  {
    for(tptr=(*start_ptr) ; tptr!=NULL ;tptr=tptr->next)
    {
        if(tptr->data > newnode->data)
            break;
    }
    if(tptr==(*start_ptr))//ins at begin)
    {
               newnode	->	next	=	(*start_ptr);
        (*start_ptr)->	prev	=	newnode;
		(*start_ptr)	=	newnode;

    }
    else if(tptr==NULL)//ins at end
    {
               newnode->prev	=	(*end_ptr);
           (*end_ptr)->	next	=	newnode;
		   (*end_ptr)	=	newnode;

    }
    else
    {
        newnode	->	prev	=	tptr->prev;
        newnode	->	next	=	tptr	;
        tptr->prev	->	next	=	newnode;
        tptr	->	prev	=	newnode	;
    }
  }
}

int main()
{
  DLLNODE * start =NULL;
  DLLNODE * end =NULL;
  int ch;
  int input;
  int search_val;
  while(1)
  {
      printf("1.insert at begin \n");
      printf("2.insert at end \n");
      printf("3.sorted insert \n");
      printf("4.delete at begin \n");
      printf("5.delete at end \n");
      printf("6.search and delete \n");
      printf("7.search\n");
      printf("8.Forward display\n");
      printf("9.Reverse display \n");
      printf("10.Exit\n");
      printf("Enter your choice : \n");
      scanf("%d",&ch);
      if(ch==10)
        break;
      switch(ch)
      {
            case 1: scanf("%d",&input);
                    insert_at_begin(input,&start,&end);
                    break;
            case 2: scanf("%d",&input);
                    insert_at_end(input,&start,&end);
                    break;
            case 3: scanf("%d",&input);
                    sorted_insert(input,&start,&end);
                    break;
            case 4:
                    delete_at_begin(&start,&end);
                    break;
            case 5:
                    delete_at_end(&start,&end);
                    break;
            case 6: scanf("%d",&search_val);
                    search_delete(&start,&end,search_val);
                    break;
            case 7: scanf("%d",&search_val);
                    int ret_val =Dll_search(start,search_val);
                    if(ret_val==1)
                       printf("Found\n");
                    else
                       printf("Not Found\n");
                    break;
            case 8:  dll_for_display(start);
                     break;
            case 9:  dll_rev_display(end);
                     break;

      }
  }
  return 0;
}
