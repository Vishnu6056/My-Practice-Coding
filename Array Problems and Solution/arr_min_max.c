#include<stdio.h>//pre processed things
#include<limits.h>
int main()//entry point
{
      int arr []={10,7,8,3,12,6};//valid
      int no_ele=sizeof(arr)/sizeof(arr[0]);

      int ind;
      int first_max;
       int second_max;
      first_max=second_max=INT_MIN;
      for(ind=0; ind<no_ele;ind+=1)
        {
            if(arr[ind]>first_max)
            {
                second_max=first_max;
                first_max=arr[ind];
            }
            else if(arr[ind]>second_max)
            {
                second_max=arr[ind];
            }
        }
        printf("%d ",second_max);

    return 0;
}

