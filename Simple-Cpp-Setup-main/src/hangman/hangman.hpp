#ifndef HANGMAN_HPP

#define HANGMAN_HPP

#include <vector>
#include "../Player.hpp"

//return a random world within several chosen worlds
std::string PickARandomWorld();
//return false if the letter is not in the word, true if it is (and shows the letter in the current anwer in this case)
bool isLetterInTheWord(std::string& answer, std::string& current_user_answer, char& letter);
void PlayHangman(Player& player);

#endif