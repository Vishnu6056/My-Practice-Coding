#include <stdio.h>
#include<limits.h>
#define NOD  6
int main()
{

 int src[NOD+1];
 int des[NOD+1];
 int aux[NOD+1];
 int ind;
 int src_top;
 int des_top;
 int aux_top;

 src[NOD]=des[NOD]=aux[NOD]=INT_MAX;
 for(ind=0 ; ind<NOD ; ind+=1)
    src[ind]=ind+1;
 for(ind=0 ; ind<NOD ; ind+=1)
    des[ind]=aux[ind]=-1;
 for(ind=0 ; ind< NOD; ind+=1)
    printf("%d %d %d\n",src[ind],des[ind],aux[ind]);

    src_top=0;
    des_top=aux_top=NOD;
while(1)
{
    //src-des
    if(src[src_top] < des[des_top])
    {
        des_top--;
        des[des_top]=src[src_top];
        src[src_top]=-1;
        src_top++;

    }
    else
    {
        src_top--;
        src[src_top]=des[des_top];
        des[des_top]=-1;
        des_top++;
    }
    if(des_top==0)
        break;
    //src-aux
    if(src[src_top] < aux[aux_top])
    {
        aux_top--;
        aux[aux_top]=src[src_top];
        src[src_top]=-1;
        src_top++;
    }
    else
    {
        src_top--;
        src[src_top]=aux[aux_top];
        aux[aux_top]=-1;
        aux_top++;
    }
    if(aux_top==0)
        break;

    //des-aux
    if(des[des_top] < aux[aux_top])
    {
        aux_top--;
        aux[aux_top]=des[des_top];
        des[des_top]=-1;
        des_top++;

    }
    else
    {
        des_top--;
        des[des_top]=aux[aux_top];
        aux[aux_top]=-1;
        aux_top++;
    }
        if(des_top==0)
        break;
        if(aux_top==0)
        break;

}
 printf("\n\n\n");
 for(ind=0 ; ind< NOD; ind+=1)
    printf("%d %d %d\n",src[ind],des[ind],aux[ind]);

  return 0;
}
/*
compare src and des=>  des is larger
alter the recievers top
copy from sender to receiver
reset sender's top's value to -1
alter the senders top

on compa src with des
alter the des top (--)
copy from src to des
reset src's top's value to -1
alter the src top ++

*/
