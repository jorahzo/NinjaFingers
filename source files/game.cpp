//
//  game.cpp
//  NinjaFingers
//
//  Created by George Peshkov on 4/22/23.
//

#include "game.hpp"
#include <iostream>
#include <time.h>

Game::Game(int wordReserve){
    words = std::vector<std::string>(wordReserve);
}

void Game::resetWordsVector(){
    std::cout << "How many words do you want to practice?\n";
    int wordReserve;
    std::cin >> wordReserve;
    words.resize(wordReserve);
    for(int i = 0; i < words.size(); i++){
        std::cout << "What word do you need to practice typing fast?\n" << i << ".";
        std::string word;
        std::cin >> word;
        words[i] = word;
    }
}

void Game::addToWordsVector(int wordReserve){
    for(int i = 0; i < wordReserve; i++){
        std::cout << "What word do you need to practice typing fast?\n" << i+1 << ".";
        std::string word;
        std::cin >> word;
        words[i] = word;
    }
}

void Game::printWordsVector(){
    std::vector<std::string>::iterator ptr;
    for(ptr = words.begin(); ptr < words.end(); ptr++){
        std::cout << *ptr << "\n";
    }
}

void Game::gameStart(){
    srand(time(NULL));
    int count = 1;
    while (count <= words.size()){
        int wordsIndex = rand()%words.size();
        std::string wordCapture = words[wordsIndex];
        while(true){
            std::cout << "Your word is: " << wordCapture << "\n";
            std::string userInput;
            std::cin >> userInput;
            if (userInput == wordCapture){
                break;
            }
            else {
                std::cout << "Incorrect! Try again\n";
            }
        }
        count++;
    }
}
