#include <iostream>
#include "ToyFactory.cpp"

using namespace std;

int main() {
    int type;
    while(1){
        cout << endl<< "Enter type of toy or zero for exit" << endl;
        cin >> type;
        if(!type){
            break;
        }
        Toy *toy = ToyFactory::createToy(type);
        if(toy){
            toy->showProduct();
            delete toy;
        }
    }
    cout << "Exit..." << endl;
    return 0;
}
