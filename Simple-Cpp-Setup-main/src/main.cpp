#include <iostream>
#include <random>

//pick a random number
int PickARandomNumber(int min, int max)
{
    static std::default_random_engine  generator{std::random_device{}()};
    std::uniform_int_distribution<int> distribution{min, max};
    return distribution(generator);
}

int main()
{
    //pick a random number
    int randomNumber = PickARandomNumber(0, 100);

    //start the game
    std::cout << "Let's play a game !\n I picked a number between 0 and 100, Find it !\n";
    int answerUser = -1;
    std::cin >> answerUser;

    while (answerUser != randomNumber) {
        if (answerUser > randomNumber) {
            std::cout << answerUser << "\nGreater !!\n Try Again ! \n";
            std::cin >> answerUser;
        }
        else if (answerUser < randomNumber) {
            std::cout << answerUser << "\n Lower !!\n Try Again ! \n";
            std::cin >> answerUser;
        }

        else {
            std::cout << answerUser << "\nCongratulatiooooon !!\n";
            return 0;
        }
    }
    return 0;
}