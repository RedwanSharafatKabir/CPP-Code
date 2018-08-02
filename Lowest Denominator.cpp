#include<iostream>
using namespace std;
int main()
{
    int a,b,c,m;
    cin>>a>>b;
    m=a>b?b:a;
    for(c=2;c<m;c++)
        if(((a%c)==0)&&((b%c)==0))
            break ;
    if(c==m){
        cout<<"No common denominators."<<endl;
        return 0;
    }
    cout<<"The lowest common denominator is : "<<c<<endl;
    return 0;
}
