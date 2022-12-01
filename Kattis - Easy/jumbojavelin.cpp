#include <iostream>
using namespace std;

int main(){
    int n, l, total = 0;
    cin >> n;
    while(cin >> l){
        total += l;
    }

    cout << total - (n - 1);

    return 0;
}