#ifndef PLAYER_HPP

#define PLAYER_HPP
#include <string>
#include <vector>

class Player { //Have to resolve the class to be able to use it ...
    //attribut
private:
    int               _nbLife = 10;
    std::vector<char> _lettersTried;
    std::string       _name;

    //méthodes
    std::vector<char> getLettersTried() const { return _lettersTried; };

public:
    int         getNbLife() const { return _nbLife; };
    std::string getName() const { return _name; };

    void LoseALife() { _nbLife--; };
    void AddNewTriedLetter(char new_letter);
    void ShowLettersTried() const;

    //check if the player is alive
    bool isAlive() const { return _nbLife > 0; };

    ~Player() = default;
    Player(std::string name)
        : _name(name){};
    Player(Player& copie)
        : _name(copie._name){};
};

#endif