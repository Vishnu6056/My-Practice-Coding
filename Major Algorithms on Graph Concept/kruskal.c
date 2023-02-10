#include<stdio.h>
#include<limits.h>
#define NOV 9
#define NOE 14
struct edge
{
 char v1;
 char v2;
 int wt;
};
typedef struct edge EDGE;
EDGE data[NOE]={{'B','G',1},{'C','D',2},{'C','A',3},{'B','E',3},{'F','G',4},
{'A','D',5},{'E','I',5}, {'H','I',6},{'D','G',6}, {'C','F',9},
{'A','B',9},{'G','I',10},{'F','H',12},{'G','E',15}
};
void group_merger(int group[], int g1_ind, int g2_ind)
{
  int ind;
  for(ind= 0 ; ind<NOV ; ind+=1)
  {
       if(group[ind]==g1_ind)
       {
           group[ind]=g2_ind;
       }
  }
}
print_group(int group[])
{
    int ind;
    printf("\n");
 for(ind= 0 ; ind<NOV ; ind+=1)
    printf("%d ",group[ind]);
}
int main()
{

 int group[NOV];
 int ind;
 for(ind= 0 ; ind<NOV ; ind+=1)
 {
     group[ind]=ind;
 }
 //print_group(group);
 for(ind=  0 ; ind < NOE ; ind+=1)
 {
     int v1_ind=data[ind].v1 -65;
     int v2_ind=data[ind].v2 -65;
     if(group[v1_ind]!=group[v2_ind])
     {
         printf("%c %d %c\n",data[ind].v1,data[ind].wt,data[ind].v2);
         group_merger(group,group[v1_ind],group[v2_ind]);
     }
     //printf("\n%d %d",v1_ind,v2_ind);
     //print_group(group);

 }


 return 0 ;
}
