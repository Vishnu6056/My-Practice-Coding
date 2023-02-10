#include <stdio.h>
#include <math.h>
int main()
{
 int arr[]={10,20,30,40,50,60,20,30,40,50};
 int no_ele;
 no_ele=sizeof(arr)/sizeof(arr[0]);
 int ind;
 int search =40;
 int count=0;
 for(ind= 0 ;ind<no_ele ; ind+=1)
 {
     if(arr[ind]==search)
      {
            count+=1;
      }
 }
 printf("%d ",count);

  return 0;
}
