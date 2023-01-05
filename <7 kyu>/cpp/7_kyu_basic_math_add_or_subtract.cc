// [Kata] https://www.codewars.com/kata/5809b62808ad92e31b000031/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// Basic Math (Add or Subtract)

std::string calculate(std::string str)
{
    std::vector<char> command;
    std::vector<int> digits;

    // Extract raw data from string.
    bool is_new_digit = false;
    int last_digit = 0;
    for (unsigned long i = 0; i < str.size(); ++i) {
        while (isdigit(str[i])) {
            last_digit += str[i] - '0';
            last_digit *= 10;
            i++;
            is_new_digit = true;
        }
        if (is_new_digit) {
            digits.push_back(last_digit / 10);
            last_digit = 0;
            is_new_digit = false;
        }
        if (str[i] == 'm') {
            command.push_back('m');
        }
        else if (str[i] == 'p') {
            command.push_back('p');
        }
    }

    // Calculate data.
    int ans = digits.front();
    for (unsigned long i = 0; i < digits.size() - 1; ++i) {
        if (command[i] == 'p') {
            ans += digits[i + 1];
        }
        else {
            ans -= digits[i + 1];
        }
    }
    return std::to_string(ans);
}