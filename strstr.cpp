#include<iostream>
#include<string.h>
using namespace std;
int main(void)
{
  char s1[]="You are writing the c++ code";
  char s2[]= "the c++";
  char *s3;
  s3=strstr(s1,s2);
  cout<<s3;


}