#include<stdio.h>//pre processed things
#include<limits.h>
int main()//entry point
{
      int arr []={10,7,8,3,12,6};//valid
      int no_ele=sizeof(arr)/sizeof(arr[0]);

      int ind;
      int search=18;

      for(ind=0; ind<no_ele;ind+=1)
        {
         if(arr[ind]==search)
         {
             printf("Found");
            break;
         }
        }
        if(ind==no_ele)
            printf("Not found");
    return 0;
}

