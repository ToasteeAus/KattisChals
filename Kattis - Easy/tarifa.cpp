#include <iostream>
using namespace std;

int main(){
    int x, n, sum = 0, p; // Megabyte limit each month, amount of months, total sum
    cin >> x >> n;
    // add all usage, minus from (n + 1) * p

    while(cin >> p){ // That requires EOF to stop running
        sum += (x - p);
    }

    cout << (sum + x);

    return 0;
}