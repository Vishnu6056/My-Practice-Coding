#include <stdio.h>
#include <math.h>

void fun(int arr[], int work_ind , int no_ele ,int search,int *count_ptr)
{

    if(work_ind==no_ele)
    {
        return;
    }
    if(arr[work_ind]==search)
    {
       (*count_ptr)=(*count_ptr)+1;
    }
    fun(arr,work_ind+1,no_ele,search,count_ptr);
}
int main()
{
 int arr[]={10,20,30,40,50,60,20,30,40,50};
 int no_ele;
 no_ele=sizeof(arr)/sizeof(arr[0]);
 int ind;
 int search =40;
 int count=0;
 fun(arr,0,no_ele,search,&count);
 printf("%d ",count);


  return 0;
}
