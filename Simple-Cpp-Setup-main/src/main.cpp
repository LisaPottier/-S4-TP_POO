#include <iostream>
#include <random>
#include <string>
#include "./guess_a_number/guess_a_number.hpp"
#include "./hangman/hangman.hpp"

int main()
{
    //List of world
    std::vector<std::string> list_of_worlds = {"pizza", "pain", "venteux", "papillon"};
    //    playGuessANumber();
    Player Paul("Paul");
    PlayHangman(Paul, list_of_worlds);
}