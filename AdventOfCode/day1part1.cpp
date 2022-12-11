#include <iostream>
#include <sstream>
#include <string>

int main(){
    int max = 0, current = 0;
    std::string input;

    // when input.length() == 0, we've found break

    while(std::getline(std::cin, input)){
        if(input.length() == 0){
            // split to new current;
            if(current > max){
                max = current;
            }

            current = 0;

        } else{
            current += std::stoi(input);
        }

    }

    std::cout << max;
    return 0;
}