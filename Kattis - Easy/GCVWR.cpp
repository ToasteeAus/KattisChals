#include <iostream>
using namespace std;

int main(){
    int G, T, N, w, W = 0;
    cin >> G >> T >> N;
    while(cin >> w){
        W += w;
    }
    cout << ((G - T) * 0.9) - W;
}