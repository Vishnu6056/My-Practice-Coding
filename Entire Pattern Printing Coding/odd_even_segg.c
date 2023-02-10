#include<stdio.h>//pre processed things
int main()//entry point
{
    int input=7163524;
    int digit;
    int odd_group=0;
    int even_group=0;
    int odd_place=1;
    int even_place=1;
    int res;

     while(input)
    {
        digit=input%10;
        if(digit%2==0)
        {
            even_group=even_group+digit*even_place;
            even_place=even_place*10;
        }
        else
        {
            odd_group=odd_group+digit*odd_place;
            odd_place=odd_place*10;
        }
         input=input/10;
    }
     res=odd_group*even_place+even_group;
     printf("%d",res);
    return 0;
}

