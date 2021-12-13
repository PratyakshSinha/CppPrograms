// Reference from https://www.programiz.com/cpp-programming/default-argument

#include <iostream>
using namespace std;

// defining the default arguments
void display(char = '*', int = 3);

int main() {
    int count = 5;

    cout << "No argument passed: ";
    // *, 3 will be parameters
    display(); 
    
    cout << "First argument passed: ";
     // #, 3 will be parameters
    display('#'); 
    
    cout << "Both arguments passed: ";
    // $, 5 will be parameters
    display('$', count); 

    cout<<"Only 2nd AArgument passed";
    display(5);//There should be an error in this line

    return 0;
}

void display(char c, int count) {
    for(int i = 1; i <= count; ++i)
    {
        cout << c;
    }
    cout << endl;
}