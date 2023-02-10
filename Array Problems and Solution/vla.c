#include<stdio.h>//pre processed things
int main()//entry point
{
     int age;
     char ch;
     float cgpa;
     int marks[5];
     int no_ele;
     int ind;
     scanf("%d",&no_ele);
     int arr[no_ele];
     for(ind=0; ind<no_ele;ind+=1)
        scanf("%d",&arr[ind]);
     for(ind=0; ind<no_ele;ind+=1)
        printf("%d ",arr[ind]);

    return 0;
}

