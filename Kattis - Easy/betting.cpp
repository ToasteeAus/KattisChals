#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double n;
    cin >> n;
    cout << fixed << setprecision(10);
    cout << 100/n << "\n" << 100/(100 - n);
}