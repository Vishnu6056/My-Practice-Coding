#include <stdio.h>
#include <math.h>
fun(int arr[],int ind)
{
   if(ind==-1)
    return;
   printf("%d ",arr[ind]);
   fun(arr,ind-1);

}

int main()
{
 int arr[]={10,20,30,40,50};
 int no_ele=5;

   fun(arr,no_ele-1);

  return 0;
}
