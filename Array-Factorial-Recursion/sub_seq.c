
#include <stdio.h>
#include <math.h>

void fun(int arr[] , int work_ind,int no_ele,int seq[],int seq_ind)
{
    if(work_ind==no_ele)
    {
        int ind;
        for(ind=0; ind<seq_ind;ind+=1)
             printf("%d ",seq[ind]);
        printf("\n");
        return;
    }
 //exclude
 fun(arr,work_ind+1,no_ele,seq,seq_ind);
  seq[seq_ind]=arr[work_ind] ; //include
 fun(arr,work_ind+1,no_ele,seq,seq_ind+1);

}
int main()
{
  int arr[]={10,3,16};
  int no_ele=3;
  int seq[10];
  fun(arr,0,no_ele,seq,0);

  return 0;
}
