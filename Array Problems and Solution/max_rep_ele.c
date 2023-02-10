#include<stdio.h>//pre processed things
#include<limits.h>
int main()//entry point
{
    int arr []={1, 3, 4, 2, 1, 3, 4, 5, 2, 8, 1, 3, 8, 4, 5, 3, 6, 7,3};//valid
    int no_ele=sizeof(arr)/sizeof(arr[0]);
      int ind;
      int res;
      int max=INT_MIN;
      int hash[1000]={0};
      for(ind=0; ind<no_ele;ind+=1)
      {
          hash[ arr[ind] ]++;
      }
      for(ind=0; ind<1000 ; ind+=1)
      {
          if(hash[ind]>max)
          {
              max=hash[ind];
              res=ind;
          }
      }
      printf("%d : %d times",res,max);

    return 0;
}

