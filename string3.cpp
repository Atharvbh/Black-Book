#include<iostream>
#include<string>
using namespace std;
int main(void)
{
   string s1;
   cout<<"Enter the string\n";
   getline(cin,s1);
   cout<<"The entered string is "<<s1;
   
   cout<<endl<<"Enter the string"<<endl;
   s1=cin.get();
   cout<<s1;
    return 0;
}