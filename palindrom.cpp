#include<iostream>
using namespace std;
int main()
{
    int num,reverse=0,rem,original;

    cout<<"enter numbers :";
    cin>>num;

    original= num;

    while (num!=0){
        rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;
    }
    if (original=reverse)
    cout<<"It is a palindrom";
else
    cout<<"not a palindrom";

    return 0;
}