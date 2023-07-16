#include<iostream>
#include<typeid>
int main(void)
{
   int a=10;
   cout<<typeid(a).name();


    return 0;
}
