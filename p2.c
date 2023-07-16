#include<stdio.h>
int main(void)
{
   int i=20;
   int *j =&i;
   int **k =&j;  // when doble pointer is requieder to store addres of the variable is alraeady poinrt
  
    // Assess the address of the i
    printf("The addrres of the i%u\n",&i);
    printf("The address of i is %u\n",j);
    printf("The address of i %u\n",*k);
   // The value of the i

   printf("The value df the i is %d\n",i);
   printf("The value of the i is %d\n",*(&i));
   printf("The value of the i is %d\n",*j);
   printf("The value of the i %d\n",**k);
   // value of the j
   printf("%d\n",&i);
   printf("%d\n",j);
   printf("%d\n",*k);
   




    return 0;
}