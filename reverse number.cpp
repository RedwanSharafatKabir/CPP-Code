#include <iostream>
using namespace std;

int reverse(int num)
{
    int result = 0,temp;
    while(num>0){
        temp = num%10;
        result = result*10 + temp;
        num /= 10;
    }
    return result;
}
int main()
{
    int num, rev;
    cout<<"\nEnter any number: ";
    cin>>num;
    rev = reverse(num);

    cout<<"\nReverse of "<<num<<" is : "<<rev<<endl;
    return 0;
}
