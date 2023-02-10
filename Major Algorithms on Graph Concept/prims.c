#include<stdio.h>
#include<limits.h>

#define NOV 9
#define NOE 14
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
void print_mat()
{
  int row,col;
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

}
void gra_mat_rep()
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
}

#define VISITED 1
#define NOTVISITED 0
typedef struct primsnode
{
 char vertex;
 int visit;
 int cost;
 char prev;
}PRIMSNODE;

PRIMSNODE prims[NOV];

void initialize_prims()
{
    int ind;
    for(ind= 0; ind<NOV ; ind+=1)
    {
        prims[ind].vertex=ind+65;
        prims[ind].visit=NOTVISITED;
        prims[ind].cost=INT_MAX;
        prims[ind].prev=NULL;
    }
}
int find_min_cost_path()
{
    int ind;
    int min_cost;
    int min_cost_ind;
    min_cost=INT_MAX;
    min_cost_ind=-1;
    for(ind= 0; ind<NOV ; ind+=1)
    {
        if(prims[ind].cost < min_cost && prims[ind].visit==NOTVISITED)
        {
            min_cost=prims[ind].cost;
            min_cost_ind=ind;
        }
    }
    return min_cost_ind;
}
void prims_algo(char st_vert)
{
   int min_cost_path_ind;
   int row_ind;
   int col_ind;
   prims[st_vert -65].cost=0;
   while(1)
   {
       min_cost_path_ind=find_min_cost_path();
       if(min_cost_path_ind== -1)
            break;
       prims[min_cost_path_ind].visit=VISITED;
       row_ind=min_cost_path_ind;
       for(col_ind=0; col_ind<NOV; col_ind+=1)
       {
           if(mat[row_ind][col_ind]!=0)
           {
               int conn_vert=col_ind;
               if(prims[conn_vert].visit==NOTVISITED)
               {
                   int existing_cost;//dj table
                   int explore_cost;//matrix
                   explore_cost=mat[row_ind][conn_vert];
                   existing_cost=prims[conn_vert].cost;
                   if(explore_cost < existing_cost)
                   {
                       prims[conn_vert].cost = explore_cost;
                       prims[conn_vert].prev = min_cost_path_ind+65;//row_ind
                   }
               }
           }
       }
   }
}

void display_prims()
{
    int ind;
    printf("\n\nVERTEX\tVISIT\tCOST\t\tPREV\n");
    for(ind= 0 ; ind< NOV ; ind+=1,printf("\n"))
    {
        printf("%c\t%d\t%d\t",prims[ind].vertex,prims[ind].visit,prims[ind].cost,prims[ind].prev);
        if(prims[ind].prev==NULL)
            printf("\tNULL");
        else
            printf("\t%c",prims[ind].prev);
    }
}
int main()
{
    int ind;
 gra_mat_rep();
 //print_mat();
  initialize_prims();
  //display_prims();
  prims_algo('A');
  display_prims();
  printf("\n\nEdges of the calculated minimum sapnning tree of the given graph: \n");
  for(ind=0 ; ind < NOV ; ind+=1)
  {
      if(prims[ind].prev!=NULL)
      printf("%c-%d-%c\n",prims[ind].vertex,prims[ind].cost,prims[ind].prev);
  }
 return 0 ;
}
