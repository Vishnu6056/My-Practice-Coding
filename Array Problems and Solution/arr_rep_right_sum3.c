#include<stdio.h>//pre processed things
int main()//entry point
{
      int arr []={10,7,8,3,12,6};//valid
      int no_ele=sizeof(arr)/sizeof(arr[0]);

      int ind;
      int sum=0;
       int temp;

      for(ind=no_ele-1; ind>=0;ind-=1)
         {
             temp=arr[ind];
           arr[ind]=sum;
           sum=sum+temp;
         }

      for(ind=0; ind<no_ele;ind+=1)
         printf("%d ",arr[ind]);


    return 0;
}

