#include<stdio.h>//pre processed things
#include<limits.h>
void arr_rotater(int arr [] ,int no_ele )
{
    //enter your code here
    int temp;
    int shift_ind;
    temp=arr[no_ele-1];
    for(shift_ind=no_ele-1; shift_ind>0 ; shift_ind-=1)
        arr[shift_ind]=arr[shift_ind-1];
    arr[0]=temp;

}
int main()//entry point
{
      int arr []={1,2,3,4,5,6,7,8,9,10};//valid
      int no_ele=sizeof(arr)/sizeof(arr[0]);
      int ind;
      int tot_rot=3;
      int times;
      for(times=1;times<=tot_rot;times+=1)
            arr_rotater(arr,no_ele);

      for(ind=0;ind<no_ele;ind+=1)
        printf("%d ",arr[ind]);
    return 0;
}

