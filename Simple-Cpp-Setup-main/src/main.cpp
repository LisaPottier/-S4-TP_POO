#include <iostream>
#include <random>
#include <string>
#include "./guess_a_number/guess_a_number.hpp"
#include "./hangman/hangman.hpp"
#include "./menu.hpp"

int main()
{

    //MENU:

    Player player = DisplayChoicePlayer();
    char   choice = DisplayChoices(player.getName());

    if (choice == 'G' || choice == 'g') {
        playGuessANumber();
    }

    else if (choice == 'H' || choice == 'h') {
        //Get the list of world
        std::vector<std::string> list_of_worlds = {"pizza", "pain", "venteux", "papillon"};
        //    playGuessANumber();$
        PlayHangman(player, list_of_worlds);
    }
    std::cout <<"press Q to quit";
    std::cin >>quit;
}