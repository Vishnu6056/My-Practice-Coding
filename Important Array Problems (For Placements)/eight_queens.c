#include <stdio.h>
#include <math.h>
#define SAFE 1
#define UNSAFE 0
int isSafe(int queen_position[] , int cur_row, int cur_col)
{
    int row;
    int col;
    int queen_col_loc;
    //left top
    for(row=cur_row-1 , col=cur_col-1 ; row>=0&&col>=0 ;row--,col--  )
    {
        queen_col_loc= queen_position[row];
        if(col==queen_col_loc)
            return UNSAFE;
    }
    //top
    for(row=cur_row-1 , col=cur_col ; row>=0 ;row--  )
    {
        queen_col_loc= queen_position[row];
        if(col==queen_col_loc)
            return UNSAFE;
    }
    //right top
   for(row=cur_row-1 , col=cur_col+1 ; row>=0&&col<8 ;row--,col++  )
    {
        queen_col_loc= queen_position[row];
        if(col==queen_col_loc)
            return UNSAFE;
    }
    return SAFE;

}
void print_queen(int queen_pos[])
{
    int row;
    int col;
    for(row=0;row<8;row+=1,printf("\n"))
    {
        for(col=0;col<8;col+=1)
        {
            if(queen_pos[row]==col)//if queen
                printf("Q");
            else
                printf("-");
        }
    }
    printf("\n");
}
int main()
{
  int queen_position[8]={-1,-1,-1,-1,-1,-1,-1,-1};
  int row;
  int col;
  int prev_col;
  prev_col=-1;
  row=0;
  while(row<8)
 {
  for(col=prev_col+1;col<8;col+=1)
  {
      if(isSafe(queen_position,row,col)==SAFE)
      {
          queen_position[row]=col;
          prev_col=-1;
          row+=1;
          break;
      }
  }
  if(col==8)//backtracking
  {
      row-=1;
      prev_col=queen_position[row];
      queen_position[row]=-1;
  }
}
  print_queen(queen_position);

  return 0;
}
