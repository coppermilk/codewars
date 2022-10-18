// [Kata] https://www.codewars.com/kata/59c633e7dcc4053512000073/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Consonant value.

#include <string>

int solve(const std::string &s) {
    /* Return max constant value.
     * Consonants are any letters of the alphabet except "aeiou".
     * a = 1, b = 2 ... z = 26. */
    int max_sum = 0;
    int cur_sum = 0;
    for (auto &ch: s) {
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cur_sum = 0;
                break;
            default:
                cur_sum += ch - 'a' + 1;
        }
        max_sum = std::max(max_sum, cur_sum);
    }
    return max_sum;
}

int main(){
    solve("zodiacs");
}