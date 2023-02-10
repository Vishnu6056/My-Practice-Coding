#include<stdio.h>//pre processed things
#include<limits.h>
void arr_reverser(int arr [] , int st_ind , int end_ind )
{
    int temp;
    while(st_ind<end_ind)
    {
        temp=arr[st_ind];
        arr[st_ind]=arr[end_ind];
        arr[end_ind]=temp;
        st_ind+=1;
        end_ind-=1;
    }
}
int main()//entry point
{
      int arr []={10,7,8,3,12,6,20,30,40,50,60,12,14,17,29};//valid
      int no_ele=sizeof(arr)/sizeof(arr[0]);
      int ind;
      int group_size=4;
      for(ind=0;ind<no_ele;ind+=1)
        printf("%d ",arr[ind]);
      int group_st;
      int group_end;
      for( group_st=0,  group_end=group_size-1;group_end<no_ele ; group_st+=group_size,group_end+=group_size)
      {
          arr_reverser(arr,group_st,group_end);
      }
      for(printf("\n"),ind=0;ind<no_ele;ind+=1)
        printf("%d ",arr[ind]);
    return 0;
}

