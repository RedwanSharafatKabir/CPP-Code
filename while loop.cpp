#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a>23){
        if(a==23){
            break ;
        }
        cout<<a<<endl;
        cout<<"How was that ?"<<endl;
        a--;
    }
    return 0;
}
