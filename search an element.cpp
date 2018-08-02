#include <iostream>
using namespace std;

int main()
{
    int j,p,m=0,count = 0,x,temp,n, i, a[100];
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    for(j=1;j<=2;j++){
        cin>>x;
        for(i=0; i<n; i++){
            if(x==a[i]){
                count = 1;
                m=i;
                p = a[i];
            }
        }
        if(count == 1)
            cout<<p<<" is found at Index "<<m<<endl;
        else if (count == 0)
            cout<<x<<" is not found in the Array"<<endl;
    }

    return 0;
}
