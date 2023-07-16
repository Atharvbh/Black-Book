// avg of the each row the 2 d array

#include<iostream>
using namespace std;
int main(void)
{
   int R=2,C=3;
   int arr[R][C];
   //1int sum=0;
   printf("Enter the eleemts of the array\n");
   for(int i=0;i<R;i++)
   {
    for(int j=0;j<C;j++)
    {
        scanf("%d",&arr[i][j]);
    }
   }
  cout<<"The entered elemtns of the array are\n";
  for(int i=0;i<R;i++)
  {
    for(int j=0;j<C;j++)
    {
        printf("%d\t",arr[i][j]);
    }
    printf("\n");
  }
 cout<<"The avg of the each row as follows\n";
  for(int i=0;i<R;i++)
  {
    int sum=0;
    for(int j=0;j<C;j++)
    {
        sum=sum+arr[i][j];
        cout<<"The avg of the "<<i+1 <<"is "<<sum<<endl;
    }
  }

    return 0;
}