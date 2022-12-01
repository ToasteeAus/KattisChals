#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string s, code;
    getline(cin, s); // Read in the entire line UNTIL END OF LINE whereas cin will split on first whitespace found
    getline(cin, code);
    for(int i = 1; i < code.size(); i++){
        int c;
        // starting index, length of chunk
        c = stoi(code.substr(i, 2));

        cout << s[c - 1];
        code.erase(i, 2);
    }
}