#include "./Player.hpp"
#include <algorithm>
#include <iostream>

void Player::AddNewTriedLetter(char const new_letter)
{
    if (std::find(_lettersTried.begin(), _lettersTried.end(), new_letter) != _lettersTried.end()) {
        std::cout << "You already try this letter ...\n";
    }
    else {
        _lettersTried.push_back(new_letter);
    }
}

void Player::ShowLettersTried() const
{
    std::cout << "(You already tried the letters : ";
    for (auto letter : _lettersTried) {
        std::cout << letter << " ";
    }
    std::cout << ")" << std::endl;
}