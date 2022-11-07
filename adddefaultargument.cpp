#include<iostream>
using namespace std;
int add(int x,int y, int z=0);
int add(int x,int y, int z)
{
  return x+y+z;
}
int main()
{
  int x, y,z;
  cout<<"enter three numbers";
  cin>>x>>y>>z;
  cout<<"sum is "<<add(x,y,z)<<endl;
  cout<<"enter two numbers ";
  cin>>x>>y;
  cout<<"sum is "<<add(x,y);
  return 0;
}  
