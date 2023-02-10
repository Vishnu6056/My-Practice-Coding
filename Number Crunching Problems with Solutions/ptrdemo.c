#include<stdio.h>//pre processed things
int main()//entry point
{
    int num=20;
    int * ptr = &num;
    int * * ptrtotptr=&ptr;
    printf("Value inside num: %d\n",num);
    printf("address of num: %u\n",&num);//reference
    printf("Value inside ptr : %u\n",ptr);
    printf("address of ptr: %u\n",&ptr);
    printf("Value pointed *ptr : %u\n",*ptr);// value at or derefer ptr
    printf("Value inside ptrtoptr : %u\n",ptrtotptr);
    printf("Value pointed *ptrtoptr : %u\n",*ptrtotptr);
    printf("Value pointed **ptrtoptr : %u\n",**ptrtotptr);

    return 0;
}

