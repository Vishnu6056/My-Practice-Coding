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
   //int num=67;
   struct date abi={6,4,2003};
   DATE sundaresan={17,10,2002};
   DATE dhanush;
    //int * ptr=&num;
    DATE * selva =&abi;
   //scanf("%d",&num);
//   scanf("%d-%d-%d",&dhanush.dd,&dhanush.mm,&dhanush.yy);
   //printf("%d",num);
   //printf("%d-%d-%d",abi.dd,abi.mm,abi.yy);
  // printf("%d-%d-%d",dhanush.dd,dhanush.mm,dhanush.yy);
  //printf("%d",*ptr);
  printf("%d-%d-%d\n",selva->dd,selva->mm,selva->yy);
  printf("%d-%d-%d",(*selva).dd,(*selva).mm,(*selva).yy);

  return 0;
}
