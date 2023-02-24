#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    int base, allow;
    char grade;
    cin>>base>>grade;
    float hra = round(0.20 * base), da = round(0.50*base), pf = round(0.11*base);
    switch(grade)
    {
        case 'A':
            allow = 1700;
            break;
        case 'B':
            allow = 1500;
            break;
        case 'C':
            allow = 1300;
            break;
        default:
            allow = 1300;
            break;
    }

    int salary =round(base) + round(hra) + round(da) + allow - round(pf);
    cout << salary;
    return 0;
}