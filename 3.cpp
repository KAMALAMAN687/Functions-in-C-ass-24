#include<iostream>
using namespace std;
void power(int  ,int );
int main()
{
    int a,b;
    cout<<"enter a number and its power to calculate : ";
    cin>>a>>b;
    power(a,b);
    return 0;
}
void power(int a ,int b)
{
    int c=1;
    for(int i=1;i<=b;i++)
    {
        c=c*a;
    }
    cout<<a<< " to the power "<<b<<" is "<<c;
}