#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.1425
void area(int a, int b)
{
    cout<<"area of rectangle is "<<a*b<<endl;

}
void area(float a)
{
    cout<<"area of circle is "<<PI*a*a<<endl;

}
void area(int x, int y,int z)
{
    int s;
    s=(x+y+z)/2;
    cout<<"area of triangle is "<<sqrt(s*(s-x)*(s-y)*(s-z))<<endl;
   
}
int main()
{
    int a,b,c;
    float r;
    cout<<"enter length and breadth";
    cin>>a>>b;
    area(a,b);
    cout<<"enter radius of circle ";
    cin>>r;
    area(r);
    cout<<"enter sides of triangle ";
    cin>>a>>b>>c;
    area(a,b,c);
    return 0;


}
