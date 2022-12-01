#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    string delimiter = "-";

    size_t pos = 0;
    string initial;
    while ((pos = s.find(delimiter)) != string::npos) { // npos, indicates end of string len
        initial = s.substr(0, 1);
        cout << initial; 
        // Above is purely code to get initial
        s.erase(0, pos + delimiter.length());
        // Clear the string part we've just found, so we don't re-cover ground
    }
    cout << s.substr(0, 1);
}