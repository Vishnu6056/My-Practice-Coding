#include <stdio.h>
#define VALID 1
#define INVALID 0
int isVowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
     return VALID;
    return INVALID;
}
int main()
{
 int holder;
 int searcher;
 char str[]="factorial";
 holder=searcher=0;
 for(searcher=0;str[searcher];searcher+=1)
 {
     if(isVowel(str[searcher])==INVALID)
     {
        str[holder]=str[searcher];
        holder++;
     }
 }
 str[holder]=NULL;
 printf("%s",str);

  return 0;
}
