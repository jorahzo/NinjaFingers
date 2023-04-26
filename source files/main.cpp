//
//  main.cpp
//  NinjaFingers
//
//  Created by George Peshkov on 4/22/23.
//

#include <iostream>
#include "game.hpp"
#include <stdexcept>

int main() {
    std::cout << "Welcome to Ninja fingers!\nHow many words would you like to practice?\n";
    int practiceAmount;
    std::cin >> practiceAmount;
    Game newGame(practiceAmount);
    try {
        throw std::runtime_error("An error occurred");
    } catch (std::exception& e) {
        std::cout << "Invalid Input\n";
    }
    newGame.addToWordsVector(practiceAmount);
    bool gameRunning = true;
    while(gameRunning == true){
        std::cout << "\nWhat would you like to do?\n1.Play Game\n2.Reset Word List\n3.Print Word List\n4.Quit Game\n";
        int playerChoice;
        std::cin >> playerChoice;
        switch(playerChoice){
            default:
                std::cout << "Invalid choice\n";
            case 1:
                newGame.gameStart();
                break;
            case 2:
                newGame.resetWordsVector();
                break;
            case 3:
                newGame.printWordsVector();
                break;
            case 4:
                gameRunning = false;
                break;
        }
    }
    std::cout << "Thanks for playing Ninja Fingers!\n";
    return 0;
}
