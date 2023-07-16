// Addition of the number in the pointer
//Subration of the number from the pointer
// Subtraction of the one pointer from the another pointer
// Comprassion of the two pointer variable
#include<stdio.h>
int main(void)
{
    int arr[]={10.20,30,40,50};
    int i=4,*j,*k,*x,*y;
    j=&i;
    printf("value in the before addition is %u\n",j);
    j=j+2;
    printf("The value in the j after the addition %u\n",j);
    k=&i;
    printf("valu in the k before subtraction is %u\n",k);
    k--;
    printf("After the subtaction value in the k is %u\n",k);
    x=&arr[0];
    y=&arr[4];
    printf("Difference in the pointer variable is %d\n"(x-y));
    j=&arr[4];
    i=(arr+4);
     
    
     



    return 0;
}