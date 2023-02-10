#include <stdio.h>
#include <math.h>
int main()
{
   int arr[1000];
   int ind;
   char delimit;
   ind=0;
   while(1)
   {
     scanf("%d%c",&arr[ind],&delimit);
     if(delimit!=' ')
         break;
     ind+=1;
   }


  return 0;
}
