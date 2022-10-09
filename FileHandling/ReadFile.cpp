#include<bits/stdc++.h>
#include<fstream>

using namespace std;

int main()
{
    fstream myFile;
    myFile.open("Sample.txt", ios::in);//read
    if(myFile.is_open())
    {
        string line;
        while(getline(myFile, line))
        {
            cout<< line <<endl;
        }
        myFile.close();
    }
}