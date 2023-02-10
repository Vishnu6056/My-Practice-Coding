#include <stdio.h>
void str_reverser(char str[] , int st,int end)
{
    char temp;
    while(st<end)
    {
            temp=str[st];
            str[st]=str[end];
            str[end]=temp;
            st++;
            end--;
    }
}
int main()
{
  char str[]="this is a test sentence";
  int ind;
  int word_st=0;
  int word_end;
  int len;
  for(len=0;str[len];len++);
  str_reverser(str,0,len-1);
  for(ind=0 ; str[ind]; ind+=1)
  {
      if(str[ind]==' ')
      {
          word_end=ind-1;
          str_reverser(str,word_st,word_end);
          word_st=ind+1;

      }
  }
  word_end=ind-1;
  str_reverser(str,word_st,word_end);

  printf("%s\n",str);

  return 0;
}
