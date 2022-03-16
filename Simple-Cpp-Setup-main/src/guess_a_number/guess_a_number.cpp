#include "./guess_a_number.hpp"
#include <iostream>
#include <random>

int PickARandomNumber(int min, int max)
{
    static std::default_random_engine  generator{std::random_device{}()};
    std::uniform_int_distribution<int> distribution{min, max};
    return distribution(generator);
}

void playGuessANumber()
{
    //ETAPE 1: pick a random number between 0 and 100
    int randomNumber = PickARandomNumber(0, 100);

    //Start the game
    std::cout << "Let's play a game !\n I picked a number between 0 and 100, Find it !\n";
    int answerUser = 0;

    while (answerUser != randomNumber) {
        //In case the user answer doesn't give a number
        while (!(std::cin >> answerUser)) {
            std::cin.clear();                                                   //clear bad input flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard input
            std::cout << "Hmm... A number I said ...\n Try something else \n";
        }

        //comparaisons with the answer
        if (answerUser < randomNumber) {
            std::cout << "\nGreater !!\n Try Again ! \n";
        }
        else if (answerUser > randomNumber) {
            std::cout << "\nLower !!\n Try Again ! \n";
        }

        else {
            std::cout << "\nCongratulatiooooon !!\n";
            return;
        }
    }
}
