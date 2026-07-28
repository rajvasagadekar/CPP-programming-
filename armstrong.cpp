#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,rem,original;

    cout<<"enter numbers :";
    cin>>num;

    original= num;

    while (num!=0){
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }
    if (sum==original)
    cout<<"armstrong number";
else
    cout<<"not a armstrong";

    return 0;
}