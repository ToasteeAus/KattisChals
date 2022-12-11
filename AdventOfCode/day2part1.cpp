#include <iostream>
#include <string>
#include <sstream>

int main(){
    /*
    X = 88, Rock, Score +1
    Y = 89, Paper, Score +2
    Z = 90, Scissors, Score +3

    A = 65, Rock, 
    B = 66, Paper, 
    C = 67, Scissors, 
    
    Rock beats Scissors
    Scissors beats Paper
    Paper beats Rock

    if diff(yourMove - Opponent) == 23 then
        draw the round, Score +3
    else if diff(yourMove - Opponent) == 24 || diff(yourMove - Opponent) + 3 == 24 then
        Player wins the round, Score +6
    else
        Player loses, Score +0
    */

    std::string input;
    int score = 0, diff = 0, playerMove = 0, elfMove = 0;
    char x, y;

    while(std::getline(std::cin, input)){
        x = input[0], y = input[input.length() - 1];
        diff = int(y) - int(x);
        score += y - 87; // Calculate the base

        if (diff == 23){
            // draw
            score += 3;
        } else if(diff == 24 || diff + 3 == 24){
            // player wins
            score += 6;
        } // else loss, no score add
    }
    
    std::cout << score;
}