#include<iostream>
using namespace std;
int main()
{
    int a=12,b=20,c=40;
    if(a>b && a>c){
        cout<<"a is greater";
    }
    else if (b>a && b>c){
        cout<<"b is greater";
    }
    else {
         cout<<"c is greater";
          }
          return 0;
}