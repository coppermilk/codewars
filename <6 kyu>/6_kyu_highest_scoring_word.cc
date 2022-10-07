// [Kata] https://www.codewars.com/kata/57eb8fcdf670e99d9b000272/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Highest Scoring Word.

#include <string>
#include <sstream>
#include <iostream>

int count_scores_in(const std::string &word) {
    /*Count scores in word.*/
    int scores = 0;
    for (auto ch: word) {
        scores += tolower(ch) - 'a' + 1;
    }
    return scores;
}

std::string highestScoringWord(const std::string &str) {
    /*Return highest scoring word.*/
    std::stringstream words(str);
    std::string current_word;
    std::string word_with_highest_score;

    int scoring_in_highest_word = 0;
    int scoring_in_current_word;

    while (words >> current_word) {
        scoring_in_current_word = count_scores_in(current_word);
        if (scoring_in_current_word > scoring_in_highest_word) {
            word_with_highest_score = current_word;
            scoring_in_highest_word = scoring_in_current_word;
        }
    }
    return word_with_highest_score;
}

int main() {
    std::cout << highestScoringWord("man i need a taxi up to ubud");
    return 0;
}