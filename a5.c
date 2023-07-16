// addtion on the pointers
#include<stdio.h>
int main(void)
{
   int i=20;
   printf("The value of the i is %d\n",i);
   int *p =&i;
   printf("Address of the p before increament%u\n",p);
   printf("The value i by using the *p %d\n",*p);
   p=p+2;
   printf("value of the i %d\n",i);
   printf("After increamt the vlue in the p %zu\n",p);
    





}