#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

int main(){
    int priority = 0;
    std::string input;
    while(std::getline(std::cin, input)){
        std::vector<char> v1, v2;

        for (int i = 0; i < input.length() / 2; i++)
        {
            v1.push_back(input[i]);
        }
        for (int i = input.length() / 2; i < input.length(); i++)
        {
            v2.push_back(input[i]);
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        std::vector<int> v3(v1.size() + v2.size());
        std::vector<int>::iterator it, end;

        end = std::set_intersection(
            v1.begin(), v1.end(),
            v2.begin(), v2.end(),
            v3.begin());

        // a, 97, needs to be 1, so minus 96 if value > 97
        // A, 65, needs to be 27, so minus 38 if value < 97

        if (v3[0] >= 97)
        {
            priority += v3[0] - 96;
        }
        else
        {
            priority += v3[0] - 38;
        }

    }

    std::cout << priority;
}