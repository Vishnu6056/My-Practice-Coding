#include<stdio.h>//pre processed things
#include<limits.h>
int main()//entry point
{
    int arr[]={6, 2, 7, 2, 5, 9, 2, 1, 3, 7};

    int no_ele;
    no_ele=sizeof(arr)/sizeof(arr[0]);
    int ind;
    int sub_arr_size=3;
    int win_sum=0 ;
    int st,end;
    int max_sub_sum=INT_MIN;
    int win_st;
    int win_end;
    win_st=0;
    win_end=sub_arr_size-1;//2
     for(ind=win_st; ind<=win_end;ind+=1)//fixing the window
       win_sum = win_sum+arr[ind];

        //printf("%d %d %d\n",win_st,win_end,win_sum);

        if(win_sum>max_sub_sum)
            max_sub_sum=win_sum;
       while(1)
     {
        win_sum = win_sum - arr[win_st]; //remove the contribution of st
        win_st+=1;//alter the st
        win_end+=1;//alter the end
        if(win_end==no_ele)
            break;
        win_sum=win_sum+arr[win_end];//add the contribution of end
        //printf("%d %d %d\n",win_st,win_end,win_sum);
        if(win_sum>max_sub_sum)
            max_sub_sum=win_sum;
     }

   printf("%d",max_sub_sum);

    return 0;
}

