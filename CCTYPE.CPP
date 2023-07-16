#include<iostream>
#include<cctype>
using namespace std;
int main(void)
{
    char ch ;
    cout<<"Please Enter the character...\n";
    cin>>ch;
    if(isalpha(ch))
    {
        cout<<"it is alphanumeric\n";

    }
    else if(isspace(ch))
    {
        cout<<"space";
    }
    else if(isdigit(ch))
    {
        cout<<"digit";
    }
    else if(ispunct)
    {
        cout<<"punctination"<<endl;
    }

    return 0;
}