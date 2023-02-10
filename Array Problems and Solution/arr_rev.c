#include<stdio.h>//pre processed things
#include<limits.h>
void arr_reverser(int arr [] ,int no_ele )
{
    //enter your code here
    int st_ind;
    int end_ind;
    int temp;
    st_ind=0;
    end_ind=no_ele-1;
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
      int arr []={10,7,8,3,12,6};//valid
      int no_ele=sizeof(arr)/sizeof(arr[0]);
      int ind;
      arr_reverser(arr,no_ele);
      for(ind=0;ind<no_ele;ind+=1)
        printf("%d ",arr[ind]);
    return 0;
}

