#include<iostream>
using namespace std;
void max(int a, int b)
{
    if(a>=b)
    {
        cout<<a<<"is greater than "<<b;
    }
    else
    {
        cout<<b<<"is greater than "<<a;
    }
}
void max(float a, float b)
{
    if(a>=b)
    {
        cout<<a<< "is greater than "<<b;

    }
    else
    {
        cout<<b<<"is greater than "<<a;
    }
} 
int main()
{
    int a,b;
    float c,d;
    cout<<"enter two numbers ";
    cin>>a>>b;
    max(a,b);
    cout<<endl;
    cout<<"enter two numbers ";
    cin>>c>>d;
    max(c,d);
    
    }
