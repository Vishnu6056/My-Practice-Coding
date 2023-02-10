#include <stdio.h>
int swap(int arr[],int ind1,int ind2)
{
    int temp;
    temp=arr[ind1];
    arr[ind1]=arr[ind2];
    arr[ind2]=temp;
}
void quick_sort_algo(int arr[], int left_ind ,int pivot_ind)
{
    int right_ind;
    int lower_bound,higher_bound;
    int ind;
    if(left_ind>=pivot_ind)//base condition
        return;
    lower_bound=left_ind;
    higher_bound=pivot_ind;
    right_ind=pivot_ind-1;
    while(left_ind<=right_ind)
    {
     while(left_ind<higher_bound&&arr[left_ind] < arr[pivot_ind])
     {
         left_ind+=1;
     }
     while(right_ind>=lower_bound&&arr[right_ind] > arr[pivot_ind])
     {
         right_ind-=1;
     }
     if(left_ind<right_ind)
        swap(arr,left_ind,right_ind);
    }
    if(left_ind>right_ind)
     swap(arr,pivot_ind,left_ind);
     //printf("\n\n%d %d",lower_bound,pivot_ind);
    //for(ind=0,printf("\n") ; ind< 9 ; ind+=1)
     //printf("%2d ",arr[ind]);

    quick_sort_algo(arr,lower_bound,right_ind);
    quick_sort_algo(arr,left_ind+1,pivot_ind);
}
void quick_sorter(int arr[],int no_ele)
{
    quick_sort_algo(arr,0,no_ele-1);
}
int main()
{
 int arr[]={35,12,67,18,65,9,16,34,13,56,22,40};
 //int arr[]={18,65,9,16,34,13,56,22,40};
 //int arr[]={10, 8, 7, 12,6 ,3};
 int no_ele;
 no_ele=sizeof(arr)/sizeof(arr[0]);
 int ind;
 for(ind=0 ; ind< no_ele ; ind+=1)
     printf("%2d ",arr[ind]);

 quick_sorter(arr,no_ele);

for(ind=0,printf("\n") ; ind< no_ele ; ind+=1)
     printf("%2d ",arr[ind]);

  return 0;
}
