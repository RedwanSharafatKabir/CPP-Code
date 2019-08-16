#include<iostream>
using namespace std;
int a[100];
int top=-1;
void push(int value)
{
    top++;
    a[top]=value;
}
void pop()
{
    top--;
}
void output()
{
    int i;
    //cout<<"Current Stack : ";
    for(i=0;i<=top;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int j,n,m;
    cout<<"How many times do you want to push ? ";
    cin>>n;
    for(j=1;j<=n;j++){
        cin>>m;
        push(m);
        output();
    }
    //cout<<endl<<"Pop procedure -"<<endl<<endl;
    for(j=1;j<n;j++){
        pop();
        output();
    }
    cout<<endl;
    return 0;
}
