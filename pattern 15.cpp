#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j;
    cout<<"Pattern row: ";
    cin>>a;
    for(i=1;i<=a;i++){
        for(j=i;j<=a;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
