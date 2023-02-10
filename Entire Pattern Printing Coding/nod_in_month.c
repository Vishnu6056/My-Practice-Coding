#include<stdio.h>//pre processed things
int main()//entry point
{
    int month=3;
     int nod;
     switch(month)
     {
         case 1:    nod=31;
                    break;
         case 2:    nod=28;
                    break;
         case 3:    nod=31;
                    break;
         case 4:    nod=30;
                    break;
         case 5:    nod=31;
                    break;
         case 6:    nod=30;
                    break;
         case 7:    nod=31;
                    break;
         case 8:    nod=31;
                    break;
         case 9:    nod=30;
                    break;
         case 10:    nod=31;
                    break;
         case 11:    nod=30;
                    break;
         case 12:    nod=31;
                    break;
     }
   printf("%d",nod);
    return 0;
}

