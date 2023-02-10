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
      int arr []={1,2,3,4,5,6,7,8,9,10};//valid
      int no_ele=sizeof(arr)/sizeof(arr[0]);
      int ind;
      int tot_rot=3;
       arr_reverser(arr,0,no_ele-1);
       arr_reverser(arr,0,tot_rot-1);
       arr_reverser(arr,tot_rot,no_ele-1);

      for(ind=0;ind<no_ele;ind+=1)
        printf("%d ",arr[ind]);
    return 0;
}

