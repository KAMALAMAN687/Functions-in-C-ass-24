#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
 int temp=x;
    x=y;
    y=temp;

}
int main()
{
    cout<<"enter twoo numbers" <<endl;
    int a ,b;
    cin>>a>>b; 
    cout<<a <<" " << b<<endl;
    swap(a,b);
    cout<<a <<" " << b;
    return 0;  
}

