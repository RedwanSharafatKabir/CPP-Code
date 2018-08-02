#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    if(a>=b){
        if(a==b){
            cout<<a;
            cout<<" & ";
            cout<<b;
            cout<<" are same."<<endl;
        }
        else{
            cout<<b<<endl;
        }
    }
    else{
        cout<<a<<endl;
    }
    return 0;
}
