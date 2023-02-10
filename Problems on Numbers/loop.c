#include<stdio.h>//pre processed things
int main()//entry point
{
    int num;
    int range=10;
    num=1;
    while(num<=range)
    {
       printf("%d ",num);
      num= num+1;
    }
    printf("\n");

    for(num=1;num<=range ; num=num+1)
    {
        printf("%d ",num);
    }
    printf("\n");
    for(num=1;num<=range ;  )
    {
        printf("%d ",num);
        num=num+1;
    }
    printf("\n");
    num=1;
    for( ;num<=range ;  )
    {
        printf("%d ",num);
        num=num+1;
    }
   printf("\n");
    for(num=1;num<=range ;printf("%d ",num),num=num+1  )
    {

    }
    printf("\n");
    for(num=1;num<=range ;printf("%d ",num),num=num+1  );

for(printf("\n"),num=1;num<=range ;printf("%d ",num),num=num+1);



    return 0;
}





