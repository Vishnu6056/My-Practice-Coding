#include <stdio.h>
#include <math.h>
int main()
{
    int arr[1000]={0};
    int fill_ind;
    int input=103;
    int re_use_ind;
    fill_ind=1;
    re_use_ind=0;
    while(1)
    {
        arr	[fill_ind]=arr[re_use_ind	]*10+3;
		fill_ind++;
		if(fill_ind>input)
            break;
        arr	[fill_ind]=arr[re_use_ind	]*10+4;
		fill_ind++;
		if(fill_ind>input)
            break;
		re_use_ind++;
    }
    printf("%d",arr[input]);
  return 0;
}
