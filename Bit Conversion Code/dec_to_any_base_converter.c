#include <stdio.h>
#include <math.h>
int dec_to_any_base(int input , int toBase)
{
   int res=0;
   int place=1;
   int digit;
   while(input)
   {
       digit=input%toBase;
       res=res+digit*place;
       place=place*10;
       input = input/toBase;
   }
    return res;
}
int main()
{
   int input=131;
   int ans;
   ans=dec_to_any_base(input,8);
   printf("%d\n",ans);
   ans=dec_to_any_base(input,2);
   printf("%d",ans);
  return 0;
}

