#include<iostream>
using namespace std;
int *a;
int top=-1;
int x = 0;
void push(int value,int x)
{
    if(top<x-1){
        top++;
        a[top]=value;
    }
    else {
        cout<<"\n Can not push, stack is full."<<endl;
    }
}
void pop()
{
    if(top>=0){
        top--;
    }
    else {
        cout<<"\n Can not pop, stack is empty."<<endl;
    }
}
void output()
{
    int i;
    cout<<" Current Stack : ";
    for(i=0;i<=top;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int j,n,m;
    cout<<" How many times do you want to push ? ";
    cin>>n;
    cout<<"\n Give the stack size : ";
    cin>>x;
    a=new int[x];
    for(j=1;j<=n;j++){
        cin>>m;
        push(m,x);
        output();
    }
    cout<<endl<<"\n Pop procedure -"<<endl;
    cout<<" ============="<<endl<<endl;
    for(j=1;j<n;j++){
        pop();
        output();
    }
    cout<<endl;
    return 0;
}
