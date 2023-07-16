//swaping of the number using the pointers
#include<stdio.h>
int swap(int*,int*);
int main(void)
{
    int i=20;
    int j=10;
    swap(&i,&j);

    printf("the value of the i after swap%d\n",i);
    printf("%d\n",j);

    return 0;
}
int swap(int*i,int *j)
{
   int t;
   t=*i;
   *i=*j;
   *j=t;
   





}