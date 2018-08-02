#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a<=100)
    {
        cout<<a<<endl;
        a++;
      //  if(a>5){
      //      break ;
      //  }
        if(a>15){
            continue ;
        }
    }
    return 0;
}
