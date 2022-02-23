#ifndef PLAYER_HPP

#define PLAYER_HPP
#include <string>
#include <vector>

class Player {
    //attribut
private:
    int               _nbLife;
    std::vector<char> _lettersTried;

public:
    //methodes
    int               getNbLife() const { return _nbLife; };
    void              LoseALife() { _nbLife--; };
    void              tryAletter(char new_letter) { _lettersTried.push_back(new_letter); };
    std::vector<char> getLettersTried() { return _lettersTried; };

    //check if the player is alive
    bool isAlive() const { return _nbLife > 0; };

    ~Player();
    Player() = default;
};

#endif