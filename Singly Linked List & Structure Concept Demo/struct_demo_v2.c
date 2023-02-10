#include <stdio.h>
struct date
{
  int dd;
  int mm;
  int yy;
};
typedef struct date DATE;
int main()
{
  int  marks[10];
  struct date dob[300]={{17,10,2002},{18,10,2002},{6,4,2003}};
  printf("%d-%d-%d",dob[0].dd,dob[0].mm,dob[0].yy);

  return 0;
}
