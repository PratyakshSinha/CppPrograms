#include <iostream>
#include <memory>

using namespace std;

class IndianSocket {
public:
    virtual void indianCharge(int) = 0;
};

class UsaSocket {
public:
    void USACharge(){
        cout << "Charging from USA socket!!!!!\n";
    }
};

class GSocket {
public:
    void GCharge(){
        cout << "Charging from German Socket!!!!!!\n";
    }
};

class SocketAdapter : public IndianSocket, public UsaSocket, public GSocket{
public:
    void indianCharge(int type){
        switch (type){
            case 1:
                USACharge();
                break;
            case 2:
                GCharge();
                break;
            default:
                break;
        }
    }
};


int main() {
    unique_ptr<IndianSocket> socket = make_unique<SocketAdapter>();
    socket->indianCharge(1);
    socket->indianCharge(2);
    return 0;
}