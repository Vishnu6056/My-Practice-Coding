#include<stdio.h>//pre processed things
#include<limits.h>
int main()//entry point
{
    int arr[]={6, 2, 7, 2, 5, 9, 2, 1, 3, 7};

    int no_ele;
    no_ele=sizeof(arr)/sizeof(arr[0]);
    int ind;
    int sub_arr_size=3;
    int sum=0 ;
    int st,end;
    int max_sub_sum=INT_MIN;
    for(st=0,end=sub_arr_size; end<=no_ele ; st++,end++ )
   {
    sum=0;
    for(ind= st; ind<end ; ind+=1)
         sum= sum+arr[ind];
     if(sum>max_sub_sum)
        max_sub_sum=sum;
   }
   printf("%d",max_sub_sum);

    return 0;
}

