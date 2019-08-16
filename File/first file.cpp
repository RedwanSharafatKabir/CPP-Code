#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream munna;
    munna.open("object_creat.txt");
    munna<<"This is Munna.\nThis is my first c++ file."<<endl;
    munna.close();
    return 0;
}

