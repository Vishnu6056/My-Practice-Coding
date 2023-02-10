#include <stdio.h>
#include <math.h>
int main()
{
  char str1[]="hello";
  char str2[10]="hello";
  char str3[10];
  scanf("%[^\n]s",str3);
  printf("%s",str3);
  return 0;
}
