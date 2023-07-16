// assessing the array eleemts using the pointer
#include<stdio.h>
int main(void)
{
   int arr[4]={1,2};
   int i,*j;
   j=&arr;
    for(i=0;i<2;i++)
    {
        printf("Address %zu element %zu\n",j,*j);
        j++;
    }

    return 0;
}