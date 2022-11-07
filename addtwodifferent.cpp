#include<iostream>
using namespace std;
float  add(int a, float b)
{
    return a+b;
}
int main()
{
    int a; float b;
    cout<<"enter two numbers: "<<endl;
    cin>>a>>b;
    cout<<add(a,b);
    return 0; 

}
