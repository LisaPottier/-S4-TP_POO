#ifndef PLAYER_HPP

#define PLAYER_HPP
#include <string>
#include <vector>

class Player {
    //attribut
private:
    int               _nbLife = 10;
    std::vector<char> _lettersTried;
    std::string       _name;

public:
    //methodes
    int               getNbLife() const { return _nbLife; };
    std::vector<char> getLettersTried() { return _lettersTried; };
    std::string       getName() const { return _name; };

    void LoseALife() { _nbLife--; };
    void tryAletter(char new_letter) { _lettersTried.push_back(new_letter); };

    //check if the player is alive
    bool isAlive() const { return _nbLife > 0; };

    ~Player() = default;
    Player(std::string name)
        : _name(name){};
};

#endif