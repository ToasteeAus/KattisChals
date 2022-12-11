#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

int main(){
    int current = 0;
    std::string input;
    std::vector<int> inputArray;

    // when input.length() == 0, we've found break
    // Bug, final int is important in list BUT cannot be counted as we are checking for linebreaks
    // Must find some way of addressing this, could simply add a line break but eh\

    while(std::getline(std::cin, input)){
        if(input.length() == 0){
            // add to array
            inputArray.push_back(current);
            current = 0;
        } else{
            current += std::stoi(input);
        }
    }

    sort(inputArray.begin(), inputArray.end(), std::greater<int>());

    std::cout << inputArray[0] << std::endl << inputArray[1] << std::endl << inputArray[2];

    std::cout << std::endl << inputArray[0] + inputArray[1] + inputArray[2];
    return 0;
}