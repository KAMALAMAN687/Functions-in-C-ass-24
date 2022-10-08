#include<iostream>
using namespace std;
void greatest_digit(int );
int main()
{
    int a;
    cout<<"enter a number : ";
    cin>>a;
    greatest_digit(a);
    return 0;
}
void greatest_digit(int b)
{
    int i,c,d;
    while(b>9)
    {
         i=b%10;
         b=b/10;
         c=b%10;
         if(c>i)
         d=c;
         else
         d=i;

    }
     cout<<d<<" is a greatest digit in a entered number"; 


}