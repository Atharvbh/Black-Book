// pointer Aithematic
#include<stdio.h>
int main(void)
{
    int i=3,*x;
    float j=1.5,*y;
    char ch ='A',*cha;
     printf("The value of the i %d\n",i);
     printf("The value of the j %f\n",j);
     printf("value of the ch is %c\n",ch);

    x=&i;
    y=&j;
    cha=&ch;
    printf("Value in x before %u\n",x);
    x++;
    printf("After %u\n",x);




    return 0;
}