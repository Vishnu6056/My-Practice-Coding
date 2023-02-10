#include<stdio.h>//pre processed things
int main()//entry point
{
      //int arr [5]={10,7,12,8,6};//valid
      int arr []={10,7,12,8,6};//valid
      //int arr [5];//valid
      //int arr []; // invalid

      int ind;
      printf("arr: %u\n",arr);
      for(ind=0 ; ind< 5 ; ind+=1)
       printf("%d ",arr[ind]);
     printf("\n");
      for(ind=4 ; ind>=0 ; ind-=1)
       printf("%d ",arr[ind]);
     printf("\n");
    for(ind=0 ; ind< 5 ; ind+=1)
       printf("%u ",&arr[ind]);

    return 0;
}

