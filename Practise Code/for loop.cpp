#include<iostream>
using namespace std;
int main()
{
    int a,i;
    cin>>a;
    if(a>=10)
    for(i=a;i>=1;i--){
        cout<<a<<endl;
        a--;
    }
    else
        cout<<"Not good."<<endl;
    return 0;
}
