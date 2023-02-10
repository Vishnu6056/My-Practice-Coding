#include <stdio.h>
#include <math.h>
int my_str_len(char * inp )
{
    int len;
    for(len=0 ; inp[len]!='\0'; len+=1);
    return len;
}
char*  my_str_copy(char * des, char * src)
{
    int ind;
    for(ind=0 ; src[ind]!=NULL; ind+=1)
     des[ind]=src[ind];
   des[ind]='\0';
   return des;
}
int main()
{
  char str[]="hello";
   char str1[]="hello";
   char str2[100];
   int len;
   len= my_str_len(my_str_copy(str2,str1));
   //my_str_copy(str2,str1);
   //len= my_str_len(str2);
   printf("%s %d",str2,len);
   return 0;
}
