#include <iostream>
using namespace std;

int main(){
    int p, q;
    cin >> p >> q;
    if(p < q){
        cout << p << " " << q;
    } else{
        cout << q << " " << p;
    }
}
