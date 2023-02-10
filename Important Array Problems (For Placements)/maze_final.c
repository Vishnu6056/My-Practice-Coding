#include <stdio.h>
#include <math.h>
#include<limits.h>
#define TOT_ROWS 9
#define TOT_COLS 9
#define VISITED 1
#define NOT_VISITED 0
int check_bound(int row,int col, int tot_rows,int tot_cols)
{
    if(row>=0&row<tot_rows&&col>=0&&col<tot_cols)
        return 1;
    return 0;
}
int fun(int maze[TOT_ROWS][TOT_COLS],int work_row,int work_col,int tot_rows,int tot_cols,int visit[TOT_ROWS][TOT_COLS],int path_len)
{
  static int short_path=INT_MAX;
  int dir[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
  visit[work_row][work_col]=VISITED;
  if(maze[work_row][work_col]==9)
  {
      visit[work_row][work_col]=NOT_VISITED;
      if(path_len<short_path)
        short_path=path_len;
      return short_path;
  }
  int cal_row;
  int cal_col;
   int dir_ind;
   for(dir_ind=0 ; dir_ind<4; dir_ind++)
 {
  cal_row=work_row+dir[dir_ind][0];
  cal_col=work_col+dir[dir_ind][1];

  if(check_bound(cal_row,cal_col,tot_rows,tot_cols)==1&&
      maze[cal_row][cal_col]!=0&&visit[cal_row][cal_col]==NOT_VISITED)
   {
       fun(maze,cal_row,cal_col,tot_rows,tot_cols,visit,path_len+1);
   }
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
