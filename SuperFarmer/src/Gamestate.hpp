#ifndef SUPERFARMER_GAMESTATE_HPP
#define SUPERFARMER_GAMESTATE_HPP

#include "Player.hpp"
#include "Dice.hpp"
#include <map>

using animalMap = std::map<Animal, int>;

struct Gamestate
{
    Gamestate(int noPlayers);
    
    void start();
    bool isGameOver();
    bool requestForEnd();
    bool hasSomebodyWon();
    void handlePlayerTurn(Player& currPlayer);
    void trade() {}
    void askTrade();

    std::vector<Player> _vecPlayers;
    int _turn;
    Dice _dice;
};

#endif // SUPERFARMER_GAMESTATE_HPP