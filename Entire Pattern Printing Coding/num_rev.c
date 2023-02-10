#include<stdio.h>//pre processed things
int main()//entry point
{
    int input=6749;
    int digit;
    int rev_num=0;
     while(input)
    {
        digit=input%10;
        rev_num= rev_num*10+digit;
        input=input/10;
    }
    printf("%d",rev_num);
    return 0;
}

