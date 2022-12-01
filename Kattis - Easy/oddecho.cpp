#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s;
    vector<string> strings;

    while(cin >> s){
        strings.push_back(s);
    }

    int count = 0;
    while(count < strings.size()){
        if(count % 2 != 0){
            cout << strings[count] << endl;
        }
        count++;
    }
}