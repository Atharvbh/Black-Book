#include<iostream>
#include<string.h>
using namespace std;
int main(void)
{
  char s1[] = "Helo";
  char s2[] ="Helo";

  cout<<"The result of the comparing the two string\n";

  int result = strcmp(s1,s2);
  if(s1==s2)
  {
    cout<<"both string are same\n";
  }

    return 0;
}