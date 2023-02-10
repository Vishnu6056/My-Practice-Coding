#include<stdio.h>//pre processed things
int main()//entry point
{
    int arr[]={1, 1, 0, 0, 1, 0, 1, 0 ,1, 1, 0, 1, 0, 0};
    int no_ele;
    no_ele=sizeof(arr)/sizeof(arr[0]);
    int ind;
    int zero_ctr=0;
    for(ind=0;ind<no_ele;ind+=1)
    {
        if(arr[ind]==0)
            zero_ctr+=1;
    }
    for(ind=0;ind<no_ele;ind+=1)
    {
        if(ind<zero_ctr)
            arr[ind]=0;
        else
            arr[ind]=1;
    }
    for(ind=0;ind<no_ele;ind+=1)
       printf("%d ",arr[ind]);
    return 0;
}

