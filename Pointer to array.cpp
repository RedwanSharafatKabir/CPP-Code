#include<iostream>
using namespace std;
int main()
{
    int i,*p,a[100];
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    p=a;         /// p=&a[0] is the standard form to write.
    cout<<"Values : ";
    for(i=0;i<5;i++){
        cout<<*(p+i)<<" ";
    }
    cout<<endl;
    cout<<"Address : ";
    for(i=0;i<5;i++){
        cout<<(p+i)<<" ";
    }
    cout<<endl;
    return 0;
}
