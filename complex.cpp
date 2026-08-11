#include<iostream>
using namespace std;
void add(int a,int b,int c,int d)
{
  cout<<"addition="<< a+c << "+"<< b+d << "i"<<endl; 
}
void sub(int a,int b,int c,int d)
{
  cout<<"substraction="<< a-c << "+"<< b-d << "i"<<endl; 
}
int main()
{
  int a,b,c,d;

  cout<<"enetr 1st complex no:";
  cin>>a>>b;

  cout<<"enetr 2nd complex no:";
  cin>>c>>d;

  add(a,b,c,d);
  sub(a,b,c,d);

  return 0;

}