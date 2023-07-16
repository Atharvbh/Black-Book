#include<stdio.h>
int main(void)
{
    int i =20;
    int *p =&i;
     printf("The addrees of the i is %u\n",&i);
     p++;
     printf("After %u\n",p);


    return 0;
}