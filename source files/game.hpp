//
//  game.hpp
//  NinjaFingers
//
//  Created by George Peshkov on 4/22/23.
//

#ifndef game_hpp
#define game_hpp

#include <stdio.h>
#include <string>
#include <vector>

class Player{
public:
    void addPoints();
private:
    int points;
};

class Game{
public:
    Game(int wordReserve);
    void gameStart();
    void resetWordsVector();
    void addToWordsVector(int wordReserve);
    void printWordsVector();
private:
    std::vector<std::string> words;
};

#endif /* game_hpp */
