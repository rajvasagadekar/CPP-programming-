#include<iostream>
using namespace std;
int main()
{
    int num,reverse=0,rem;

    cout<<"enter numbers :";
    cin>>num;

    while (num!=0){
        rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;
    }

    cout<<"Reverse number ="<<reverse;

    return 0;
}