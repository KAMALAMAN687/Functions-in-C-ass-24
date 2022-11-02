#include<iostream>
using namespace std;
void fibonacci(int);
int main()
{
   int a;
   cout<<"enter a number";
   cin>>a;
   fibonacci(a);
   return 0;

}
void fibonacci(int n)
{
   int a= -1,b=1,c=0;
   while(c<n)
   {
    c=a+b;
    a=b;
    b=c;
   }  
    if(n%c==0)
    {
        cout<<"yes it is a number in fibnocci series";
    }
    else
    cout<<"it is not in a fibonacci series";

   
   




}