#include <stdio.h>
#include <math.h>
int main()
{
  //char str[10]="142122";
  char str[10]="112122";
  int ind;
  int len;
  for(len=0;str[len];len+=1);
  int ans;
  int ptop;
  int prev;
  ptop=1;
  prev=1;
  for(ind=len-2;ind>=0;ind-=1)
 {
     int data=(str[ind]-48)*10+(str[ind+1]-48);
     if(data<=26)
     ans	=	prev	+	ptop;
     else
        ans=prev;
    ptop	=	prev		;
    prev	=	ans		;
 }
 printf("%d",ans);

  return 0;
}
