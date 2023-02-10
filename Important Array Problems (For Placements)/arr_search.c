#include <stdio.h>
#include <math.h>
int main()
{
 int arr[]={10,20,30,40,50,60,20,30,40,50};
 int no_ele;
 no_ele=sizeof(arr)/sizeof(arr[0]);
 int ind;
 int search =40;
 for(ind= 0 ;ind<no_ele ; ind+=1)
 {
     if(arr[ind]==search)
      {
          printf("Found ");
          break;
      }
 }
 if(ind==no_ele)
    printf("Not found");


  return 0;
}
