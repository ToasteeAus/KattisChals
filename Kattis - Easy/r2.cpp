#include <iostream>
using namespace std;

int main(){
    // R1 + R2 / 2 = S
    // With R1, and 2 find R2
    // R1 + R2 / 2 = S
    // R1 + R2 = 2 * S
    // R2 = (2 * S) - R1

    int r1, s; // Megabyte limit each month, amount of months, total sum
    cin >> r1 >> s;

    cout << (2 * s) - r1;
}