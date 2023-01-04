// [Kata] https://www.codewars.com/kata/59dd2c38f703c4ae5e000014/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Numbers in strings

int solve(std::string s) {
    /* Compare the number groupings and return the largest number.*/
    int last_digit = 0; 
    int max_digit = 0;
    for (auto ch : s) {
        if (isdigit(ch)) {
            last_digit += ch - '0';
            last_digit *= 10;
        }else {
            last_digit = 0;
        }
        max_digit = std::max(last_digit / 10, max_digit);
    }
    return max_digit;
}