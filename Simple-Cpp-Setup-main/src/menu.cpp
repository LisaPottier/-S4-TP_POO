#include "./menu.hpp"
#include <algorithm>
#include <iostream>
#include "./Player.hpp"

char DisplayChoices(std::string name)
{
    std::cout << "hello " << name << "!\nWhich game do you want to play ? : \nPRESS G -> Guess A Number\nPRESS H -> Hangman\n";
    char choice = '_';
    std::cin >> choice;
    return choice;
}
Player DisplayChoicePlayer()
{
    std::cout << "Enter you name PLZ\n";
    std::string name;
    std::cin >> name;
    Player player(name);
    return player;
}
