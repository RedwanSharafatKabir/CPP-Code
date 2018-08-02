#include <iostream>
using namespace std;

int main()
{
    int j,p,m=0,count = 0,x,temp,n, i, a[100];
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    cin>>x;
    for(i=0; i<n; i++){
        if(x==i){
            count = 1;
            m=i;
            p = a[i];
        }
    }
    if(count == 1)
        cout<<"The Value in Index "<<m<<" is "<<p<<endl;
    return 0;
}
