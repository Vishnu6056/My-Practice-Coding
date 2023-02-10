#include <stdio.h>
#include <math.h>
fun(int arr[],int ind,int no_ele)
{
   if(ind==no_ele)
    return;
   printf("%d ",arr[ind]);
   fun(arr,ind+1,no_ele);

}

int main()
{
 int arr[]={10,20,30,40,50};
 int no_ele=5;

   fun(arr,0,no_ele);

  return 0;
}
