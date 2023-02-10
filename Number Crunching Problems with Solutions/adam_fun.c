#include<stdio.h>//pre processed things
int find_sqr(int);
int number_reverser(int);
int main()//entry point
{
    int num=13;
    int sqr_num;
    int rev_num=0;
    int rev_sqr_num=0;
    int sqr_rev_num;
    sqr_num=find_sqr(num);
    rev_num=number_reverser(num);
    sqr_rev_num=find_sqr(rev_num);
    rev_sqr_num=number_reverser(sqr_num);
    if(rev_sqr_num==sqr_rev_num)
        printf("Adam number");
    else
        printf("Not an Adam number");
    return 0;
}

int find_sqr(int inp)
{
    return inp*inp;
}
int number_reverser(int input)
{
    int digit;
     int rev=0;
    while(input)
    {
        digit=input%10;
         rev=rev*10+digit;
         input/=10;
    }
    return rev;
}

