#include<stdio.h>//pre processed things
int main()//entry point
{
     int input;
     int check_factor;
   //input=1111111111111;
   input=1000000007;
     int range;
    if(input%2==0&&input!=2)
        printf("Composite");
    else//odd
    {
        range=sqrt(input);
        for(check_factor=3;check_factor<=range;check_factor+=2)
            if(input%check_factor==0)
                break;
       if(check_factor>range)
        printf("Prime");
       else
        printf("Composite");
    }
    return 0;
}

