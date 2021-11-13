#include<iostream>
using namespace std;

int main()
    {   
        int size;
        cout<<"Enter Size of array: ";
        cin>>size;
        //int myArray[5];
        int* myArray = new int[size];

        for (int i = 0; i < size; i++)
        {
            cout<<"Array["<<i<<"]:";
            cin>>myArray[i];
        }
        cout<<"\n";
        for (int i = 0; i < size; i++)
        {
            cout<<"Array["<<i<<"]:";
            //cout<<myArray[i]<<"\n";
            cout<<*(myArray+i)<<"\n";
        }

        delete[]myArray;
        myArray = NULL;
        
        system("pause>0");
    }