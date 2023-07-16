// passing array elemets by using the pointer
// passing array elemets to the function
#include<stdio.h>
void Display(int *);
int main(void)
{
    int arr[]={10,20,30,40};
    for(int i=0;i<4;i++)
    {
        Display(&arr[i]);// we are passing individual address of the array eleemts
    }




    return 0;
}
void Display(int *m)
{
   printf("%d\n",*m);


}