#include<iostream>
using namespace std;
void primenumber(int );
int main()
{
    int a;
    cout<<"enter a number : ";
    cin>>a;
    primenumber(a);
    return 0;

}
void primenumber(int b)
{
    int i;
    for(i=2;i<=b-1;i++)
    {
        if(b%i==0)
        break;
    }
    if(i==b)
    cout<<"it is a prime number ";
    else
    cout<<"it is not a prime number ";
    
}
