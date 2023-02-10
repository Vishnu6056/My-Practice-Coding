#include <stdio.h>
#define NOV 9   //no of vertexes
#define NOE 14 //number of edges
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

int main()
{

  int mat[NOV][NOV]={0};
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






  return 0;
}




