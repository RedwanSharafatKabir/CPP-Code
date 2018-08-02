#include <iostream>
using namespace std;

int main()
{
    int max1,max2,n, i, a[100];
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    max1 = a[0];
    for(i=1; i<n; i++){
        if(a[i]>max1)
            max1 = a[i];
    }
    max2 = a[0];
    for(i=1; i<n; i++){
        if(a[i]>max2 && a[i]<max1)
            max2 = a[i];
    }
    cout<<max2<<endl;

    return 0;
}
