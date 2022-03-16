#include <iostream>
#include <random>
#include <string>
#include "./guess_a_number/guess_a_number.hpp"
#include "./hangman/hangman.hpp"

int main()
{
    //MENU:
    std::cout << "Enter you name PLZ\n";
    std::string name;
    std::cin >> name;
    Player player(name);
    std::cout << "hello " << name << "!\nWhich game do you want to play ? : \nPRESS G -> Guess A Number\nPRESS H -> Hangman\n";
    char choice = '_';
    std::cin >> choice;

    while (!(choice == 'H' || choice == 'h' || choice == 'G' || choice == 'g')) {
        std::cout << "It's not a valid command ! Try something else please\n";
        std::cin >> choice;
    }

    if (choice == 'G' || choice == 'g') {
        playGuessANumber();
    }

    else if (choice == 'H' || choice == 'h') {
        //Guet the list of world
        std::vector<std::string> list_of_worlds = {"pizza", "pain", "venteux", "papillon"};
        //    playGuessANumber();$
        PlayHangman(player, list_of_worlds);
    }
}