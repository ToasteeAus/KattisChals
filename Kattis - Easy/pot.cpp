#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, sum = 0, curr;
    cin >> n;
    while(cin >> curr){
        sum += pow(curr / 10, curr % 10);
    }
    
    cout << sum;
    return 0;
}