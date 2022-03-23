#include "./menu.hpp"
#include <algorithm>
#include <iostream>
#include <string>
#include "./guess_a_number/guess_a_number.hpp"
#include "./hangman/hangman.hpp"
#include "./Player.hpp"

char DisplayChoices(std::string name)
{
    std::cout << "hello " << name << "!\nWhich game do you want to play ? : \nPRESS 1 -> Guess A Number\nPRESS 2 -> Hangman\n";
    char choice = '0' ;
    std::cin >> choice;
    
    while (choice != '1' && choice != '2') {
        std::cout << "It's not a valid command ! Try something else please\n";
        std::cin >> choice;
    }

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

void DisplayMenu(char &stop){
    Player player = DisplayChoicePlayer();
    char   choice = DisplayChoices(player.getName());
    
    switch (tolower(choice))
    {
        case ChoiceGame::Guess_The_Number :
            playGuessANumber();
            break;

        case ChoiceGame::Hangman :
        {
            //Get the list of world
            std::vector<std::string> list_of_worlds = {"pizza", "pain", "venteux", "papillon"};
            //    playGuessANumber();
            PlayHangman(player, list_of_worlds);
            break;
        }
        case ChoiceGame::Quit :
        {
            std::cout << "Do you really want to quit ?(Y/N)\n";
            char answer='n';
            std::cin >> answer;
            if(tolower(answer)=='y'){
                std::cout <<"Sad to see you go ... bye "<< player.getName()<<std::endl;
            }
            stop=true;
        }

        default:
            break;
    }
}