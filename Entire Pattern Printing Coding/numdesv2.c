#include<stdio.h>//pre processed things
int main()//entry point
{
    int input=6749;
    int digit;
    int place=1;
    while(input>place)
    {
        digit= (input/place)%10;//querying the digit at respective place
        place=place*10;
        printf("%d ",digit);
    }

    return 0;
}

