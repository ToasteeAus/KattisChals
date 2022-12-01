#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int W, N, wi, li, area = 0;
    cin >> W >> N;
    // add up parts to area of rectangle/square
    // remove w^2 from it
    // return it as L
    while(cin >> wi >> li){
        area += wi * li;
    }
    cout << area / W;
}