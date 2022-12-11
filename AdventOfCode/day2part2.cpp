#include <iostream>
#include <string>
#include <sstream>

int main(){
    /*
    X = 88, Lose, Score +0
    Y = 89, Draw, Score +3
    Z = 90, Win, Score +6

    A = 65, Rock, 1
    B = 66, Paper, 2
    C = 67, Scissors, 3

    X means you need to lose, 
    Y means you need to draw, 
    Z means you need to win

    A     Y
    Rock, Draw
    Player must play Rock to draw
    score = 1 (Rock) + 3 (Draw)
    score = played + 3 * diff

    */

    std::string input;
    int score = 0, diff = 0;
    char x, y;

    while(std::getline(std::cin, input)){
        x = input[0], y = input[input.length() - 1];

        diff = int(y) - 'X';
        score += diff * 3;

        if(diff == 1){ // draw state
            score += int(x) - 64;
        } else if(diff == 2){ // win state
            if(int(x) - 64 == 3){
                score += 1;
            } else {
                score += int(x) - 63;
            }
        } else { // lose state
            if(int(x) - 64 == 1){
                score += 3;
            } else {
                score += int(x) - 65;
            }
        }

    }

    std::cout << score;
}