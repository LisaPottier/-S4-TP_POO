#include <algorithm>
#include <iostream>
#include <string>

#include "./guess_a_number/guess_a_number.hpp"
#include "./hangman/hangman.hpp"
#include "./Player.hpp"
#include "./menu.hpp"

char DisplayChoices(std::string name)
{
    std::cout << "hello " << name << "!\nWhich game do you want to play ? :\n"
                                <<"     PRESS 1 -> Guess A Number\n"
                                <<"     PRESS 2 -> Hangman\n"
                                <<"     PRESS q -> Quit\n";
    char choice = '0' ;
    std::cin >> choice;
    
    while (choice != '1' && choice != '2' && choice != 'q' && choice != 'Q') {
        std::cout << "It's not a valid command ! Try something else please\n";
        std::cin >> choice;
    }
    return choice;
}

Player DisplayChoicePlayer()
{
    std::cout << "Enter you name please\n";
    std::string name;
    std::cin >> name;
    Player player(name);
    return player;
}

void DisplayMenu(){  
    Player player = DisplayChoicePlayer();
    char   choice = DisplayChoices(player.getName());//choice has tobe valid (because of displayChoice)
    
    switch (tolower(choice))
    {
        case static_cast<int>(ChoiceGame::Guess_The_Number ):
        {
            PlayGuessANumber();
            break;
        }

        case static_cast<int>(ChoiceGame::Hangman ):
        {
            //Get the list of world
            std::vector<std::string> list_of_worlds = {"pizza", "pain", "venteux", "papillon"};
            //    playGuessANumber();
            PlayHangman(player, list_of_worlds);
            break;
        }
        case static_cast<int>(ChoiceGame::Quit ):
        {
            std::cout << "Do you really want to quit ?(Y/N)\n";
            char answer='n';
            std::cin >> answer;
            if(tolower(answer)=='y'){
                std::cout <<"Sad to see you go ... bye "<< player.getName()<<std::endl;
            }
            break;
        }

        default: break;
    }
}