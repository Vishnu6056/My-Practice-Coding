#include<stdio.h>
#define DIM 9
#define VALID 1
#define INVALID 0
int sub_mat_access(int mat[DIM][DIM],int sub_mat_st_row,int sub_mat_st_col)
{
    int row,col;
    for(row=sub_mat_st_row;row<sub_mat_st_row+3;row+=1)
    {
        int hash[10]={0};
        for(col=sub_mat_st_col;col<sub_mat_st_col+3 ;col+=1)
        {
            hash[mat[row][col]]++;
            if(hash[mat[row][col]]>1)
                return INVALID;
        }
    }
    return VALID;
}
int sub_mat_verifier(int mat[DIM][DIM])
{
    int st_row,st_col,ret_val;
    for(st_row=0;st_row<DIM;st_row+=3)
     {
         for(st_col=0 ;st_col<DIM ; st_col+=3)
            {
                ret_val=sub_mat_access(mat,st_row,st_col);
                if(ret_val==INVALID)
                    return INVALID;
            }
     }
     return VALID;
}
int col_verifier(int mat[DIM][DIM])
{
    int row;
    int col;
    for(col=0;col<DIM;col+=1)
    {
        int hash[10]={0};
        for(row=0;row<DIM;row+=1)
        {
           hash[mat[row][col]]++;
            if(hash[mat[row][col]]>1)
                return INVALID;
        }
    }
    return VALID;
}

int row_verifier(int mat[DIM][DIM])
{
    int row;
    int col;
    for(row=0;row<DIM;row+=1)
    {
        int hash[10]={0};
        for(col=0;col<DIM;col+=1)
        {
            hash[mat[row][col]]++;
            if(hash[mat[row][col]]>1)
                return INVALID;
        }
    }
    return VALID;
}
int sudoku_verifier(int mat[DIM][DIM])
{
    if(row_verifier(mat)==VALID)
    {
        if(col_verifier(mat)==VALID)
        {
            if(sub_mat_verifier(mat)==VALID)
                return VALID;
        }
    }
    return INVALID;
}
int main()
{
   int sudoku[DIM][DIM]=
   {
{1,	7,	2,	5,	4	,9	,6	,8	,3},
{6,	4,	5	,8	,7,	3	,2	,1,	9},
{3,	8,  9,	2	,6	,1	,7	,4,	5},
{4,	9,	6,	3,	2	,7	,8,  5,	1},
{8,	1	,3,	4	,5	,6	,9	,7,	2},
{2,	5	,7	,1	,9	,8	,4	,3,	6},
{9,	6	,4,	7	,1	,5	,3	,2,	8},
{7,	3	,1	,6	,8	,2	,5	,9,	4},
{5,	2	,8,	9,	3,	4	,1	,6,	7}
   };

   if(sudoku_verifier(sudoku)==VALID)
     printf("Yes");
   else
     printf("NO");

    return 0;
}
