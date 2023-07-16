#include<iostream>
using namespace std;
int main(void)
{
   int M=3,N=2;
   int arr[M][N];
   int sum=0;
   // Enter the elements of the array 
   printf("Enter the eelmts of the array\n");
   for(int i=0;i<M;i++)
   {
    for(int j=0;j<N;j++)
    {
        scanf("%d",&arr[i][j]);
    }
   }
   printf("The elemts of the array\n");
   for(int i=0;i<M;i++)
   {
    for(int j=0;j<N;j++)
    {
        printf("%d\t",arr[i][j]);
    }
    printf("\n");
   }

  printf("The addition of the arary elemts\n");
  for(int i=0;i<M;i++)
  {
    for(int j=0;j<N;j++)
    {
        sum=sum+arr[i][j];
    }
  }
  printf("The summation of the array element is %d\n",sum);

    return 0;
}