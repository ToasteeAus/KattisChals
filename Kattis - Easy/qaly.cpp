#include <iostream>
using namespace std;

int main(){
    float p, q, qaly = 0.0, n;
    cin >> n;
    while(cin >> p >> q){ // That requires EOF to stop running
        qaly += p * q;
    }

    cout << qaly;
    return 0;
}