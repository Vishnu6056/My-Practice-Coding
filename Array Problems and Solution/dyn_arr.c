#include<stdio.h>//pre processed things
int main()//entry point
{
    int no_ele;
    int ind;
    scanf("%d",&no_ele);
    int *ptr;
    //ptr=(int*)malloc(no_ele*sizeof(int));
    ptr=(int*)calloc(no_ele,sizeof(int));
    for(ind=0; ind<no_ele ; ind+=1)
         printf("%d ",ptr[ind]);
    free(ptr);
    return 0;
}

