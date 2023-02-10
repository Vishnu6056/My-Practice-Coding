#include<stdio.h>//pre processed things
int main()//entry point
{
    int month=3;
     int nod;
     switch(month)
     {
         case 1: case 3: case 5: case 7:  case 8: case 10 : case 12:
                    nod=31;
                    break;
         case 2:    nod=28;
                    break;
         case 4:    case 6: case 9: case 11:
                    nod=30;
                    break;
     }
   printf("%d",nod);
    return 0;
}

