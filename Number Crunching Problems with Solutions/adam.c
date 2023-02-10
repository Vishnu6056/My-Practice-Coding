#include<stdio.h>//pre processed things
int main()//entry point
{
    int num=13;
    int sqr_num;
    int rev_num=0;
    int rev_sqr_num=0;
    int sqr_rev_num;
    int digit;
    sqr_num=num*num;
    while(num)
    {
        digit=num%10;
         rev_num=rev_num*10+digit;
        num=num/10;
    }
    sqr_rev_num=rev_num*rev_num;
    while(sqr_num)
    {
        digit=sqr_num%10;
         rev_sqr_num=rev_sqr_num*10+digit;
        sqr_num=sqr_num/10;
    }
    if(rev_sqr_num==sqr_rev_num)
        printf("Adam number");
    else
        printf("Not an Adam number");
    return 0;
}

