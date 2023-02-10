#include<stdio.h>//pre processed things
int main()//entry point
{
    int month=10;
     int nod=0;
     switch(month)
     {
         case 1:    nod+=31;
         case 2:    nod+=28;
         case 3:    nod+=31;
         case 4:    nod+=30;
         case 5:    nod+=31;
         case 6:    nod+=30;
         case 7:    nod+=31;
         case 8:    nod+=31;
         case 9:    nod+=30;
         case 10:    nod+=31;
         case 11:    nod+=30;
         case 12:    nod+=31;
     }
   printf("%d",nod);
    return 0;
}

