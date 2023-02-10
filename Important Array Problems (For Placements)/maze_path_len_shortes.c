#include <stdio.h>
#include <math.h>
#include<limits.h>
#define TOT_ROWS 9
#define TOT_COLS 9
#define VISITED 1
#define NOT_VISITED 0
int fun(int maze[TOT_ROWS][TOT_COLS],int work_row,int work_col,int tot_rows,int tot_cols,int visit[TOT_ROWS][TOT_COLS],int path_len)
{
  static int short_path=INT_MAX;
  visit[work_row][work_col]=VISITED;
  if(maze[work_row][work_col]==9)
  {
      //printf("Food Found at %d steps\n",path_len);

      visit[work_row][work_col]=NOT_VISITED;
      if(path_len<short_path)
        short_path=path_len;
      return short_path;
  }
  if(work_col+1<tot_cols&&maze[work_row][work_col+1]!=0&&visit[work_row][work_col+1]==NOT_VISITED)//right
  {
      fun(maze,work_row,work_col+1,tot_rows,tot_cols,visit,path_len+1);
  }
  if(work_row+1<tot_rows&&maze[work_row+1][work_col]!=0&&visit[work_row+1][work_col]==NOT_VISITED)//bottom
  {
      fun(maze,work_row+1,work_col,tot_rows,tot_cols,visit,path_len+1);
  }
  if(work_col-1>=0&&maze[work_row][work_col-1]!=0&&visit[work_row][work_col-1]==NOT_VISITED)//left
  {
      fun(maze,work_row,work_col-1,tot_rows,tot_cols,visit,path_len+1);
  }
  if(work_row-1>=0&&maze[work_row-1][work_col]!=0&&visit[work_row-1][work_col]==NOT_VISITED)//top
  {
      fun(maze,work_row-1,work_col,tot_rows,tot_cols,visit,path_len+1);
  }
  visit[work_row][work_col]=NOT_VISITED;
      return short_path;

}
int main()
{
    int maze[TOT_ROWS][TOT_COLS]={
    {1,	1,	0,  0,	1,	1,	1,	1,	1},
    {1,	1,	0,	0,	1,	0,	0,	0,	1},
    {1,	1,	1,	0,	1,	0,	0,	0,	1},
    {0,	0,	1,	1,	0,	1,	1,	0,	1},
    {1,	0,	0,	1,	0,	0,	0,	0,	1},
    {1,	0,	0,	9,	1,	1,	1,	0,	1},
    {1,	0,	1,	0,	0,	0,	1,	1,	1},
    {1,	0,	1,	0,	1,	0,	1,	0,	1},
    {1,	1,	1,	1,	1,	1,	1,	1,	1}
    };
    int visit[TOT_ROWS][TOT_COLS]={0};
    int path_len=0;
    int min_path=fun(maze,0,0,TOT_ROWS,TOT_COLS,visit,path_len);
    printf("%d ",min_path);

  return 0;
}
