#include "./Player.hpp"
#include <algorithm>
#include <iostream>

void AddNewTriedLetter(char const new_letter)
{
    if (std::find(_lettersTried.begin(), _lettersTried.end(), new_letter) != _lettersTried.end()) {
        std::cout << "You already try this letter ...\n";
    }
    else {
        _lettersTried.push_back(new_letter);
    }
}

void ShowLettersTried()
{
    std::cout << "you already tried the letters : \n";
    for (auto letter = _lettersTried.begin(); letter != _lettersTried.end(); ++letter) {
        std::cout << letter << " ";
    }
    std::cout << std::endl;
}