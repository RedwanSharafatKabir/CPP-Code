#include<iostream>
using namespace std;
int main()
{
    int *p,x;
    cin>>x;
    p=new int(10);
    cout<<*p<<" "<<p<<" "<<x<<endl;
    cout<<*p<<endl;
    delete p;
    cout<<*p<<" "<<p<<endl;
    return 0;
}

