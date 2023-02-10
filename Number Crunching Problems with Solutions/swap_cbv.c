#include<stdio.h>//pre processed things
void swap(int inp1 ,int inp2)
{
 int temp;
 temp = inp1;
 inp1=inp2;
 inp2=temp;
}
int main()//entry point
{
    int num1=10;
    int num2=20;
    printf("Values before swapping num1: %d num2 : %d\n",num1,num2);
    swap(num1,num2);
    printf("Values after swapping num1: %d num2 : %d\n",num1,num2);

    return 0;
}

