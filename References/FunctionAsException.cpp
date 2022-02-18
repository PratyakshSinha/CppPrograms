#include<iostream>
#include<stdexcept>

using namespace std;

void test() throw(){

    throw "test";

}

int main()
{
    try{
        test();
    }catch(int e){
        cout<<"Integer Type"<< e <<endl;
    }catch(char e){
        cout<<"Character Type"<< e <<endl;
    }catch(char e){
        cout<<"runtime error"<< e <<endl;
    }

    return 0;
}