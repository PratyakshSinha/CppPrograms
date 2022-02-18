#include<iostream>
#include<string>
using namespace std;

class Printer{
    private:
        string _name;
        int _availablePaper;

    public:
        Printer(string name, int paper){
            _name = name;
            _availablePaper = paper;
        }
        
        void Print(string txtDoc){
            int requiredPaper = txtDoc.length()/10;

            if(requiredPaper>_availablePaper)
                throw 101;

            cout<<"Printing..."<<txtDoc<<endl;
            _availablePaper -= requiredPaper;
        }

};

int main()
{
    Printer myPrinter("HP DeskJet 1234", 10);
    try{
        myPrinter.Print("Hello My name is Pratyaksh Sinha. I am a software Engineer.");
        myPrinter.Print("Hello My name is Pratyaksh Sinha. I am a software Engineer.");
        myPrinter.Print("Hello My name is Pratyaksh Sinha. I am a software Engineer.");
    }catch(const char* txtException){
        cout<<"Exception: "<<txtException<<endl;
    }catch(int exCode){
        cout<<"Exception: "<<exCode<<endl;
    }catch(...){                           //Default Handler 
        cout<<"Exception Happened!"<<endl;
    }

    return 0;
}