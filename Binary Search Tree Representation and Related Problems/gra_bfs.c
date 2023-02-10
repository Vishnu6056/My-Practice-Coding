#include <stdio.h>
#define NOV 9   //no of vertexes
#define NOE 14 //number of edges
#define VISITED 1
#define NOT_VISITED 0

 typedef struct edge
 {
   char v1;
   char v2;
   int wt;
 }EDGE;

 EDGE  data[NOE] ={
 {'A','C',3},{'A','D',5},{'A','B',9},{'B','G',1},{'B','E',3},
 {'C','D',2},{'H','I',6},{'F','H',12},{'F','G',4},
 {'G','I',10},{'G','E',15},
 {'E','I',5},{'C','F',9},{'D','G',6} };
 int mat[NOV][NOV]={0};

 void enQue(char queue[], int * front_ptr , int * rear_ptr,char enq_val)
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
char deQue(char queue[], int * front_ptr , int * rear_ptr)
{
    char toReturn;
    if((*front_ptr)==-1||(*rear_ptr)==-1||(*front_ptr)>(*rear_ptr))//empty queue
         return NULL;
    toReturn = queue[(*front_ptr)];
    (*front_ptr)++;
    return toReturn;
}


void bfs(char st_vert)
{
    //Enter your code here
    char queue[NOV+1];
    char deq_vert;
    int front_ind,rear_ind;
    int col;
    front_ind=rear_ind=-1;
    int visit[NOV]={0};
    enQue(queue,&front_ind,&rear_ind,st_vert); //enque the given st_vert to the queue
    visit[st_vert-65]=VISITED;
    while(1)
   {
    deq_vert=deQue(queue,&front_ind,&rear_ind); //deque a vertex from  queue
    printf("%c ",deq_vert);   //print the dequed character
    if(deq_vert==NULL)
         break;
    for( col= 0 ;col< NOV ;col+=1) //enque the connected vertexes of deq_char to queue
    {
        if(mat[deq_vert-65 ][col]!=0 && visit[col]==NOT_VISITED)// deq_vertex(Char) - row in matrix, vary the col and check for connected  characters
        {
            visit[col]=VISITED;
            enQue(queue,&front_ind,&rear_ind,col+65);
        }
    }
   }
    //check visited
}


void push(char stack[], int * top_ptr ,char push_val)
{
     (*top_ptr)++;
     stack[(*top_ptr)]=push_val;
}
char pop(char stack[], int * top_ptr)
{
    char toReturn;
    if((*top_ptr)==-1)//empty stack
    {
        return NULL;
    }
    toReturn = stack[(*top_ptr)];//non empty stack
    (*top_ptr)--;
    return toReturn;
}
void dfs(char st_vert)
{
    //Enter your code here
    char stack[NOV+1];
    char pop_vert;
    int top_ind;
    int col;
    top_ind=-1;
    int visit[NOV]={0};
    push(stack,&top_ind,st_vert);
    visit[st_vert-65]=VISITED;
    while(1)
   {
    pop_vert=pop(stack,&top_ind);
    printf("%c ",pop_vert);
    if(pop_vert==NULL)
         break;
    for( col= 0 ;col< NOV ;col+=1)
    {
        if(mat[pop_vert-65 ][col]!=0 && visit[col]==NOT_VISITED)
        {
            visit[col]=VISITED;
            push(stack,&top_ind,col+65);
        }
    }
   }
    //check visited
}









int main()
{

  int row;
  int col;
  char vert1;
  char vert2;
  int weight;
  int ind;
  for(ind= 0 ;ind <NOE ; ind+=1)
  {
      vert1 =data[ind].v1;//A
      vert2 =data[ind].v2;//C
      weight =data[ind].wt;//3
      row= vert1-65;
      col=vert2-65;
      mat[row][col]=weight;
      mat[col][row]=weight;
  }
  for(row=0,printf("   ");row<NOV;row+=1)
    printf("%2c ",row+65);
  for(printf("\n"),row=0;row<NOV;row+=1,printf("\n"))
  {
      printf("%2c ",row+65);
      for(col=0;col<NOV ; col+=1)
      {
          printf("%2d ",mat[row][col]);
      }
  }
  printf("\nBFS : ");
  bfs('A');
  printf("\nDFS : ");
  dfs('A');





  return 0;
}




