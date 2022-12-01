#include <iostream>
using namespace std;

int main(){
    // (5551212 / 10000) % 555
    int n;
    cin >> n;
    if((n/10000) % 555 == 0){
        cout << 1;
    } else{
        cout << 0;
    }
}