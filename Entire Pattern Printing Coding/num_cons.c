#include<stdio.h>//pre processed things
int main()//entry point
{
    int input=6749;
    int digit;
    int left=0;
    int right=0;
    int place=1;
    while(input)
    {
        digit=input%10;
        right= right*10+digit;
        left= left + digit*place;
        place=place*10;
        input=input/10;
    }
    printf("LEFT : %d RIGHT : %d",left ,right);
    return 0;
}

