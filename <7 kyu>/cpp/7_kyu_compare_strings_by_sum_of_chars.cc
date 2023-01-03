// [Kata] https://www.codewars.com/kata/576bb3c4b1abc497ec000065/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Compare Strings by Sum of Chars

bool compare(std::string s1, std::string s2) {
    /* Compare two strings by comparing the sum of their values (ASCII character code).*/
    unsigned long s1_ascii_sum = 0;
    unsigned long s2_ascii_sum = 0;

    for (auto & ch: s1) {
        if (!isalpha(ch)) {
            s1_ascii_sum = 0;
            break;
        }
        s1_ascii_sum += toupper(ch);
    }
    for (auto & ch: s2) {
        if (!isalpha(ch)) {
            s1_ascii_sum = 0;
            break;
        }
        s2_ascii_sum += toupper(ch);
    }
    return s1_ascii_sum == s2_ascii_sum;
}