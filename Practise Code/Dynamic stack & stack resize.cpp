#include<iostream>
using namespace std;
int *a=new int[1];
int top=-1;
int size=1;
void resize()
{
    int x;
    cout<<" Previous stack : "<<size<<endl;
    if (size>=8){
        x=size+2;
    }
    else {
        x=size*2;
    }
    int*newa=new int[x];
    for(int i=0;i<=top;i++){
        newa[i]=a[i];
    }
    size=x;
    cout<<" Resized stack : "<<size<<endl<<endl;
    delete []a;
    a = newa;
}
void push(int value)
{
    if(top<size-1){
        top++;
        a[top]=value;
    }
    else {
        cout<<"\n Can not push, stack is full."<<endl<<" Stack is resizing.........\n"<<endl;
        resize();
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
    for(j=1;j<=n;j++){
        cin>>m;
        push(m);
        output();
    }
    return 0;
}
