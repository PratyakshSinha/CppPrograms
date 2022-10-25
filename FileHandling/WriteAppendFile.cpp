#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    fstream myFile;
    myFile.open("Sample.txt", ios::out);//write
    if(myFile.is_open())    
    {
        myFile<<"Hello\n";
        myFile<<"This is 2nd line\n";
        myFile.close();
    }
    myFile.open("Sample.txt", ios::app);//append
    if(myFile.is_open())
    {
        myFile<<"Hello2\n";
        myFile.close();
    }
    return 0;
}