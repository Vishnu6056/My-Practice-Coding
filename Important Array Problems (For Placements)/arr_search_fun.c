#include <stdio.h>

void fun(int arr[], int work_ind , int no_ele ,int search)
{
    if(work_ind==no_ele)
    {
        printf("Not Found");
        return;
    }
    if(arr[work_ind]==search)
    {
        printf("Found");
        return;
    }
    fun(arr,work_ind+1,no_ele,search);
}
int main()
{
 int arr[]={10,20,30,40,50,60,20,30,40,50};
 int no_ele;
 no_ele=sizeof(arr)/sizeof(arr[0]);
 int ind;
 int search =70;
  fun(arr,0,no_ele,search);

  return 0;
}
