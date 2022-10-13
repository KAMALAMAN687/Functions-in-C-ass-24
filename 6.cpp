#include<iostream>
using namespace std;
int main()
{
    int a ,b;
    cout<<"enter a and b"<<endl;

    cin>>a>>b;
    swap(a,b);
    cout<<" swap values are "<<a<<"and "<<b;
}
void swap(int &p,int &q)
{
    int c;
    c=p;
    p=q;
    q=c;

}

