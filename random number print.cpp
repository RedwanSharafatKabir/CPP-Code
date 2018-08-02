#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    for(int a=0;a<=10;a++){
        cout<<1+(rand()%4)<<endl;
    }
    return 0;
}
