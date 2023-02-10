#include <stdio.h>
#include <math.h>
int count=0;
int fun(int arr[], int work_ind , int no_ele ,int search)
{

    if(work_ind==no_ele)
    {
        return;
    }
    if(arr[work_ind]==search)
    {
       count+=1;
    }
    fun(arr,work_ind+1,no_ele,search);
    return count;
}
int main()
{
 int arr[]={10,20,30,40,50,60,20,30,40,50};
 int no_ele;
 no_ele=sizeof(arr)/sizeof(arr[0]);
 int ind;
 int search =40;
 int count=0;
 printf("%d\n",fun(arr,0,no_ele,search));



  return 0;
}
