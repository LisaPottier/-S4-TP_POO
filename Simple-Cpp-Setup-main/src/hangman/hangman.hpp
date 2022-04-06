#ifndef HANGMAN_HPP

#define HANGMAN_HPP

#include <vector>
#include "../Player.hpp"
#include "../menu.hpp"

//return a random world within several chosen worlds
std::string PickARandomWorld(std::vector<std::string> list_of_worlds);

//return false if the letter is not in the word, true if it is (and shows the letter in the current anwer in this case)
bool isLetterInTheWord(std::string& answer, std::string& current_user_answer, char& letter);
void PlayHangman(Player& player, std::vector<std::string> list_of_worlds);

#endif