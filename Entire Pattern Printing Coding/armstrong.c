#include<stdio.h>//pre processed things
int main()//entry point
{
    int input=153;
    int digit;
    int no_of_digits=0;
    int safe;
    int val=1;
    int sum=0;
    int ctr;
    safe=input;
    while(input)
    {
      input=input/10;//destructing the right most digit
      no_of_digits++;
    }
    input=safe;
    //printf("%d",no_of_digits);
   while(input>0)
   {
    digit=input%10;
    for(ctr=1,val=1;ctr<=no_of_digits ; ctr+=1)
    {
        val=val*digit;
    }
    sum=sum+val;
    input=input/10;//destructing the right most digit
   }
   input=safe;//restoring the data
   if(input==sum)
     printf("armstrong ");
   else
     printf("not an armstrong ");

    return 0;
}

