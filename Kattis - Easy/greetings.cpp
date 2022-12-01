#include <iostream>
using namespace std;

int main(){
    string input, copied;
    cin >> input;
    for(int i = 1; i < input.length() - 1; i++){
        copied += input[i];
    }
    cout << input[0] + copied + copied + input[input.length() - 1];
}