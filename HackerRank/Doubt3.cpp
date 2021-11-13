#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int n=0;
    double x=0;
    string y;
    char ch;
    cin>>n>>x>>y;
    cout<<y;
    n=n+i;
    x=double(x+d);
    string z = s+y;
    cout<<n<<endl<<fixed<<setprecision(1)<<double(x)<<endl<<z;

    return 0;
}