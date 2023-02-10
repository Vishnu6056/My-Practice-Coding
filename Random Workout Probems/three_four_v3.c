#include <stdio.h>
#include <math.h>
int main()
{
    int input=103;
     int res=0;
     int place=1;
     while(input)
   {
     if(input%2==0)
        res=res+4*place;
     else
        res=res+3*place;
    place=place*10;
    input=(input-1)/2;//to cal the previous resuse val
  }
  printf("%d",res);
    return 0;
}
