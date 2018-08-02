#include<iostream>
using namespace std;
int main()
{
    int a[100],i,m;
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    m=a[0];
    for(i=1;i<5;i++){
        if(a[i]<m)
            m=a[i];
    }
    cout<<m<<endl;
    return 0;
}

