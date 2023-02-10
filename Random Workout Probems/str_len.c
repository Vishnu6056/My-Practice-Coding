#include <stdio.h>
#include <math.h>
int my_str_len(char * inp )
{
    int len;
    for(len=0 ; inp[len]!='\0'; len+=1);
    return len;
}
int main()
{
   char str[]="hello";
   int len;
   len = my_str_len(str);
   printf("%d",len);
   return 0;
}
