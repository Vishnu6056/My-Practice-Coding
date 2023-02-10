#include <stdio.h>
#include <math.h>
#define TOT_ROWS 9
#define TOT_COLS 9
#define VISITED 1
#define NOT_VISITED 0
#include<limits.h>

int fun(int maze[TOT_ROWS][TOT_COLS],int work_row,int work_col,int tot_rows,int tot_cols,int visit[TOT_ROWS][TOT_COLS],int path_len)
{
    static int short_path=INT_MAX;
  if(maze[work_row][work_col]==9)
  {
      //printf("Food Found\n");
      if(path_len<short_path)
        short_path=path_len;
      return short_path;
  }
  if(work_col+1<tot_cols&&maze[work_row][work_col+1]!=0&&visit[work_row][work_col+1]==NOT_VISITED)//right
  {
      visit[work_row][work_col+1]=VISITED;
      fun(maze,work_row,work_col+1,tot_rows,tot_cols,visit,path_len+1);
      visit[work_row][work_col+1]=NOT_VISITED;
  }
  if(work_row+1<tot_rows&&maze[work_row+1][work_col]!=0&&visit[work_row+1][work_col]==NOT_VISITED)//bottom
  {
      visit[work_row+1][work_col]=VISITED;
      fun(maze,work_row+1,work_col,tot_rows,tot_cols,visit,path_len+1);
      visit[work_row+1][work_col]=NOT_VISITED;
  }
  if(work_col-1>=0&&maze[work_row][work_col-1]!=0&&visit[work_row][work_col-1]==NOT_VISITED)//left
  {
      visit[work_row][work_col-1]=VISITED;
      fun(maze,work_row,work_col-1,tot_rows,tot_cols,visit,path_len+1);
      visit[work_row][work_col-1]=NOT_VISITED;
  }
  if(work_row-1>=0&&maze[work_row-1][work_col]!=0&&visit[work_row-1][work_col]==NOT_VISITED)//top
  {
      visit[work_row-1][work_col]=VISITED;
      fun(maze,work_row-1,work_col,tot_rows,tot_cols,visit,path_len+1);
      visit[work_row-1][work_col]=NOT_VISITED;
  }
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
    int min_path;
    visit[0][0]=VISITED;
    min_path=fun(maze,0,0,TOT_ROWS,TOT_COLS,visit,path_len);
    visit[0][0]=NOT_VISITED;
    printf("%d",min_path);

  return 0;
}
