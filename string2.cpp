#include<iostream>
#include<string>
using namespace std;
int main(void)
{
    string s1 ="Jayshree Ram.";
    // Lengtg of the string
    cout<<"The length of the string is "<<s1.length()<<endl;
    // find the first charcter in the string
    cout<<"the position of the y "<<s1.find("Ram")<<endl;
    // find the last position of the character in the string
    cout<<"the last position of the a is"<<s1.find_last_of('a')<<endl;
    cout<<s1.replace(s1.length()-1,1,(" jay shree krishna"))<<endl;



    return 0;
}