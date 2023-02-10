#include <stdio.h>
#include <math.h>
int main()
{
  int mat[4][4]=
  {
      {10,12,33,4},
      {15,6,3,44},
      {1,42,63,77},
      {18,2,93,21},
  };
  int tot_rows=4;
  int tot_cols=4;

  printf("%d ",mat[0][0]);
  printf("%d ",mat[0][1]);
  printf("%d ",mat[0][2]);
  printf("%d ",mat[0][3]);

  return 0;
}
