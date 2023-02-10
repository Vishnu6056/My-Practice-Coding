#include <stdio.h>
struct date
{
  int dd,mm,yy;
};
struct id
{
    char name[100];
    char address[1000];
    int age;
    long long int mob_num;
    char roll_num[20];
    struct date dob;
};
int main()
{
  struct id selva;
  scanf("%[^\n]s",&selva.name);
  scanf(" %[^\n]s",&selva.address);
  scanf("%d",&selva.age);
  scanf("%lld",&selva.mob_num);
  scanf(" %[^\n]s",&selva.roll_num);
  scanf("%d-%d-%d",&selva.dob.dd,&selva.dob.mm,&selva.dob.yy);
  printf("%s\n%s\n%d\n%lld\n%s\n%d-%d-%d",selva.name,selva.address,selva.age,selva.mob_num,selva.roll_num,selva.dob.dd,selva.dob.mm,selva.dob.yy);
  return 0;
}
