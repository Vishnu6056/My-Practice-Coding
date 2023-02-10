#include<stdio.h>//pre processed things
int main()//entry point
{
      int arr []={10,7,8,3,12,6};//valid
      int no_ele=sizeof(arr)/sizeof(arr[0]);

      int ind;
      int sum=0;
      for(ind=0; ind<no_ele;ind+=1)
         sum= sum+arr[ind];
      printf("%d ",sum);

    return 0;
}

