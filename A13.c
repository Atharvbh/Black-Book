#include<stdio.h>
void Dispaly1(int *,int);
void Display(int[],int );
// assessig the array elemt by using the function by pointer
int main(void)
{
  int arr[]={1,2,3,4,5};
  Dispaly1(arr,5);
  Display(&arr[0],5);
,n

  return 0;
}
void Dispaly1(int *k,int n)
{
for(int i=0;i<n;i++)
{
    printf("Address %zu Element %d\n",k,*k);
    k++;
}
}
void Display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}