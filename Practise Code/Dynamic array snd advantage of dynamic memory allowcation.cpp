#include<iostream>
using namespace std;
int main()
{
    int goal,a[1000],i,sum=0;
    cout<<"Enter Played Matches : ";
    cin>>goal;
    cout<<endl;
    ///a=new int(goal);  /// for this statement we have to write *a in data type.
    for(i=0;i<goal;i++){
        if(i==1)
            cout<<(i+1)<<"st"<<" Match"<<" Goal scored : ";
        else if(i==2)
            cout<<(i+1)<<"nd"<<" Match"<<" Goal scored : ";
        else if(i==3)
            cout<<(i+1)<<"rd"<<" Match"<<" Goal scored : ";
        else
            cout<<(i+1)<<"th"<<" Match"<<" Goal scored : ";
        cin>>a[i];
        sum+=a[i];
    }
    cout<<endl<<"Total goals in "<<goal<<" matches : "<<sum<<endl;
    delete []a;
    return 0;
}
