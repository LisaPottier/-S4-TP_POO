#include "./hangman.hpp"
#include <array>
#include <iostream>
#include <random>
#include <vector>
std::string PickARandomWorld(std::vector<std::string> list_of_worlds)
{
    //pick a random world
    int                                nb_of_worlds = list_of_worlds.size();
    static std::default_random_engine  generator{std::random_device{}()};
    std::uniform_int_distribution<int> distribution{0, nb_of_worlds};

    int random_range = distribution(generator);

    return list_of_worlds[random_range];
}

bool isLetterInTheWord(std::string& answer, std::string& current_user_answer, char& letter)
{
    std::size_t found = answer.find(letter, 0);
    if (found == std::string::npos) //letter is not in the world
    {
        return false;
    }
    else {
        //change the world
        while (found != std::string::npos && found < answer.size()) //if their is atleast 1 occurrence found (and this is not the last character)
        {
            current_user_answer[found] = letter; //we show the letter at it position in the answer
            found                      = answer.find(letter, found + 1);
        }
        return true;
    }
}

void PlayHangman(Player& player, std::vector<std::string> list_of_worlds)
{
    std::string answer = PickARandomWorld(list_of_worlds);

    std::cout << "Let's play a Game " << player.getName() << "! I think about a word ... could you find it ? \n You have 10 lives good luck !\n";
    //initialize the answer to display
    std::string user_answer(answer.size(), '-');
    std::cout << user_answer << std::endl;

    //take the letter given by the player
    std::cout << "try a letter !" << std::endl;
    char letter = '-'; //initialize the letter the player enters

    while (player.isAlive()) {
        player.ShowLettersTried();
        //WIN
        if (user_answer == answer) {
            std::cout << "Congratulation " << player.getName() << "! You win ! It was " << answer << std::endl;
            return;
        }

        else {
            //In case the user answer doesn't give a letter as en entry
            while (!(std::cin >> letter)) {
                std::cout << "cas erreur\n";
                std::cin.clear();                                                   //clear bad input flag
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard input
                std::cout << "Hmm... it's not a letter ...\n Try something else \n";
            }
            player.AddNewTriedLetter(letter); //add the letter to the already tried letters list

            if (!isLetterInTheWord(answer, user_answer, letter)) { //add the letter to the answer_user if it's right
                player.LoseALife();
            }
            //test the player answer with the real answer
            std::cout << user_answer << std::endl;
            //if the letter given is in the world

            std::cout << "\nYou have " << player.getNbLife() << " lives\n";
            //continue the game
            std::cout << "try another letter !" << std::endl;
        }
    }
    std::cout << "You lose ... The answer was " << answer << "\n but you can try again another time\n";
}