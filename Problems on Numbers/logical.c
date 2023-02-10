#include<stdio.h>//pre processed things
int main()//entry point
{
    int num=0;
    if(num++ || ++num || num++)
    {
        printf("%d\n",num);
    }
    printf("%d\n",num);
    return 0;
}

