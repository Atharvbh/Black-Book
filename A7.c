// passing the array element to the function by using the pointer
#include<stdio.h>
void Display(int m);
int main(void)
{
   int arr[]={1,2,3,4,5};
   for(int i=0;i<5;i++)
   {
    Display(arr[i]);
    
   }

    return 0;
}
void Display(int m)
{
    printf("%d\t",m);
}