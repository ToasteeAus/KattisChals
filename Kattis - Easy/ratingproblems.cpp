#include <iostream>
using namespace std;

int main(){
    int n, k;
    float t, r = 0.0;
    cin >> n >> k;
    while(cin >> t){
        r += t;
    } 
    
    cout << (r - (3 * (n - k))) / n << " " << (r + (3 * (n - k))) / n;
}