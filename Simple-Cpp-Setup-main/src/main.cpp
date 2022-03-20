#include <iostream>
#include <random>
#include <string>
#include "./guess_a_number/guess_a_number.hpp"
#include "./hangman/hangman.hpp"
#include "./menu.hpp"

int main()
{
    //MENU:

    char   choice = DisplayChoices();
    Player player = DisplayChoicePlayer();

    while (!(choice == 'H' || choice == 'h' || choice == 'G' || choice == 'g')) {
        std::cout << "It's not a valid command ! Try something else please\n";
        std::cin >> choice;
    }

    if (choice == 'G' || choice == 'g') {
        playGuessANumber();
    }

    else if (choice == 'H' || choice == 'h') {
        //Get the list of world
        std::vector<std::string> list_of_worlds = {"pizza", "pain", "venteux", "papillon"};
        //    playGuessANumber();$
        PlayHangman(player, list_of_worlds);
    }
}