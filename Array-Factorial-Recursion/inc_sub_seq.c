
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
 if(seq_ind==0 || arr[work_ind]> seq[seq_ind-1])
 {
     seq[seq_ind]=arr[work_ind] ; //include
    fun(arr,work_ind+1,no_ele,seq,seq_ind+1);
 }

}
int main()
{
  //int arr[]={10,3,16};
  int arr[]={1,3 ,12,5 ,9,4,13,11};
  int no_ele=8;
  no_ele=sizeof(arr)/sizeof(arr[0]);
  int seq[10];
  fun(arr,0,no_ele,seq,0);

  return 0;
}
