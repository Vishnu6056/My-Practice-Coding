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
char * my_str_cat(char *des ,char * src)
{
        int ind;
        int des_str_len;
        des_str_len=my_str_len(des);
    for(ind=0 ; src[ind]!=NULL; ind+=1)
     des[ind+des_str_len]=src[ind];
   des[ind+des_str_len]='\0';
   return des;
}
char * my_str_cat_v2(char *des ,char * src)
{
    return my_str_copy(des+my_str_len(des),src);
}

int main()
{
   char str1[100]="hello";
   char str2[100]="world";
   int len;
   my_str_cat_v2(str1,str2);
   printf("%s",str1);
   return 0;
}
