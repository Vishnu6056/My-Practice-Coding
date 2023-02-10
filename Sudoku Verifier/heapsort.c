#include <stdio.h>
#include <math.h>
void max_heapify(int arr[], int parent_ind,int scope);

int main()
{
 int arr[]={5,15,10,25,55,35,75,45,95,50,70,40,60,90,3};
 int no_ele;
 int ind;
 no_ele=sizeof(arr)/sizeof(arr[0]);
 int scope;//scope or last_ind or work_ind
 scope= no_ele-1;
 int parent_ind;
  for(ind=0 ; ind< no_ele; ind+=1)
     printf("%2d ",arr[ind]);

 for(parent_ind=(scope-1)/2;parent_ind>=0 ; parent_ind-=1)
    max_heapify(arr,parent_ind,scope);
  swap(arr,0,scope);
  for(scope--; scope>0; scope-=1)
   {
       max_heapify(arr,0,scope);
       swap(arr,0,scope);
   }
  for(ind=0,printf("\n") ; ind< no_ele; ind+=1)
     printf("%2d ",arr[ind]);
   return 0;
}
void swap( int arr[], int ind1 ,int ind2)
{
    int temp;
     temp=arr[ind1];
     arr[ind1]=arr[ind2];
     arr[ind2]=temp;
}
void max_heapify(int arr[], int parent_ind,int scope)
{
  int left_ind;
  int right_ind;
  left_ind=parent_ind*2+1;
  right_ind=left_ind+1; //parent_ind*2+2
  if(right_ind<=scope)//two children
  {
      if(arr[left_ind]>arr[parent_ind]&&arr[left_ind]>arr[right_ind])
      {
        swap(arr,left_ind,parent_ind);
        max_heapify(arr,left_ind,scope);
      }
      else if(arr[right_ind]>arr[parent_ind])
      {
          swap(arr,right_ind,parent_ind);
          max_heapify(arr,right_ind,scope);
      }
  }
  else if(left_ind==scope)//single child
  {
      if(arr[left_ind]>arr[parent_ind])
      {
          swap(arr,left_ind,parent_ind);
      }
  }
  //else -no child



}

