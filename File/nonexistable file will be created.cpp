#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream munna;
    munna.open("my_file.txt");
    munna<<"This is anither file."<<endl;
    munna.close();
    return 0;
}
