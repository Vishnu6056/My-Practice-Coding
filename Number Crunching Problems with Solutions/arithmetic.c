#include<stdio.h>//pre processed things
int cal_sum(int inp1,int inp2);
int cal_diff(int inp1,int inp2);
int cal_pro(int inp1,int inp2);
int cal_quo(int inp1,int inp2);
int cal_rem(int inp1,int inp2);
int main()//entry point
{
    int num1=25;
    int num2=7;
    int sum;
    int diff;
    int pro;
    int quo;
    int rem;
    sum=cal_sum(num1,num2);
    printf("%d ",sum);
    diff=cal_diff(num1,num2);
    printf("%d ",diff);
    pro=cal_pro(num1,num2);
    printf("%d ",pro);
    quo=cal_quo(num1,num2);
    printf("%d ",quo);
    rem=cal_rem(num1,num2);
    printf("%d ",rem);
    return 0;

}
int cal_sum(int inp1,int inp2)
{
    int res;
    res=inp1+inp2;
    return res;
}
int cal_diff(int inp1,int inp2)
{
    return inp1-inp2;
}
int cal_pro(int inp1,int inp2)
{
    return inp1*inp2;
}
int cal_quo(int inp1,int inp2)
{
    return inp1/inp2;
}
int cal_rem(int inp1,int inp2)
{
    return inp1%inp2;
}

