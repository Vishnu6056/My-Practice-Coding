#include<stdio.h>//pre processed things
int main()//entry point
{
      int arr []={10,7,8,3,12,6};//valid
      int no_ele=sizeof(arr)/sizeof(arr[0]);

      int ind;
      int sum=0;
      int work_ind;
      for(work_ind=0;work_ind<no_ele;work_ind+=1)
      {
          sum=0;
        for(ind=work_ind+1; ind<no_ele;ind+=1)
            sum=sum+arr[ind];
        arr[work_ind]=sum;
      }

      for(ind=0; ind<no_ele;ind+=1)
         printf("%d ",arr[ind]);


    return 0;
}

