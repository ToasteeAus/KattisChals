#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int N, W, H, T, C;
    cin >> N >> W >> H;
    C = sqrt(W * W + H * H);
    while(cin >> T){
        if(T <= C){
            cout << "DA" << endl;
        } else{
            cout << "NE" << endl;
        }
    }
}