#include<stdio.h>//pre processed things
int main()//entry point
{
    int input=6749;
    int digit;
    int no_of_digits=0;
    int sum_of_digits=0;
    while(input)
    {
        digit= input%10;//querying the right most digit
        printf("%d ",digit);
        no_of_digits+=1;
        sum_of_digits=sum_of_digits+digit;
        input=input/10;//destructing the right most digit
    }
    printf("\n NOD : %d SOD : %d",no_of_digits,sum_of_digits);
    return 0;
}

