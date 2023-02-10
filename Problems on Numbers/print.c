#include<stdio.h>//pre processed things
int main()//entry point
{
   int age=20;
   int num=35;
   float cgpa=7.4567;
   int width;
   int precision;
   width=10;
   precision=3;
   //printf("My age is %d\n",age);
   //printf("Am %d years young",age);
   /*printf("%d %d\n",num,num);
   printf("%5d %5d\n",num,num);
   printf("%-5d %-5d\n",num,num);
   printf("%05d %05d\n",num,num);
   printf("%.2f",cgpa);
    */
    printf("%*.*f",width,precision,cgpa);

    return 0;
}

