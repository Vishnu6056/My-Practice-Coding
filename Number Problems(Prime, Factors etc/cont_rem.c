#include<stdio.h>//pre processed things
int main()//entry point
{
   int input=420;
    int cont_val=2;

    while(input%cont_val==0)
    {
        input= input/cont_val;
    }
    printf("%d",input);
     return 0;
}

