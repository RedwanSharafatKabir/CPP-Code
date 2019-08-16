#include<iostream>
using namespace std;
int main()
{
    int *p,**q,v;
    cin>>v;
    p=&v;
    q=&p;
    cout<<"1st Value : "<<v<<endl;
    cout<<"Address of 1st value : "<<&v<<endl;
    cout<<"Value of P : "<<p<<endl;
    cout<<"Address of P : "<<&p<<endl;
    cout<<"Value of q : "<<&p<<endl;
    return 0;
}
