#include "../include/hangman.hpp"
#include <array>
#include <iostream>
#include <random>
#include <vector>
std::string PickARandomWorld()
{
    //List of world
    std::vector<std::string> list_of_worlds;
    list_of_worlds = {"pizza", "pain", "venteux", "papillon"};

    //pick a random world
    int                                nb_of_worlds = list_of_worlds.size();
    static std::default_random_engine  generator{std::random_device{}()};
    std::uniform_int_distribution<int> distribution{0, nb_of_worlds};

    int random_range = distribution(generator);

    return list_of_worlds[random_range];
}

void PlayHangman(Player player)
{
    std::string answer = PickARandomWorld();

    std::cout << "Let's play a Game ! I think about a world ... could you found it ? \n You have 10 life good luck !\n";
    std::string user_try;
    std::cin >> user_try;
    while (user_try != answer && player.isAlive()) {
        //In case the user answer doesn't give a number
        while (!(std::cin >> user_try)) {
            std::cin.clear();                                                   //clear bad input flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard input
            std::cout << "Hmm... it's not a letter ...\n Try something else \n";
        }
    }
}