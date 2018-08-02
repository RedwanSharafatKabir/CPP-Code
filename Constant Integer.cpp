#include<iostream>
using namespace std;
int main()
{
    const int size=5;   /// এক  লাইনেই  লিখতে  হবে  ।
    int i,*p,a[size];
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    p=a;         /// p=&a[0] is the standard form to write.
    cout<<"Values : ";
    for(i=0;i<size;i++){
        cout<<*(p+i)<<" ";
    }
    cout<<endl;
    cout<<"Address : ";
    for(i=0;i<size;i++){
        cout<<(p+i)<<" ";
    }
    cout<<endl;
    return 0;
}

