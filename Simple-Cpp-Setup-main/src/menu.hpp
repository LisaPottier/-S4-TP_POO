#ifndef MENU_HPP

#define MENU_HPP
#include "./Player.hpp"

#include <iostream>
#include <algorithm>

char   DisplayChoices(std::string name);
Player DisplayChoicePlayer();

template <typename T> T AskPlayerAnswer(){
    T answer;
    //In case the user answer doesn't give a letter as en entry
    while (!(std::cin >> answer)) {
        std::cout << "cas erreur\n";
        std::cin.clear();                                                   //clear bad input flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard input
        std::cout << "Hmm... it's not what I asked...\n Try something else \n";
    }
    return answer;
}

#endif