// [Kata] https://www.codewars.com/kata/54a91a4883a7de5d7800009c/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <string>
#include <cmath>
#include <iostream>

int count_digits_in_num(int num) {
    /* Function return count digits in number.*/

    int count = 0;
    while (num) {
        num /= 10;
        ++count;
    }
    return count;
}

std::string incrementString(const std::string &str) {
    /* Function which increments a string, to create a new string.
    1. If the string already ends with a number, the number should be incremented by 1.
    2. If the string does not end with a number. the number 1 should be appended to the new string.*/

    int num_extracted = 0;
    std::string str_extracted;
    int count_num_of_in_sourse = 0;
    char num_current;

    // Extract number.
    for (int i = str.size() - 1; i >= 0; i--) {
        if (std::isdigit(str[i])) {
            num_current = str[i] - '0';
            if (num_current) {
                num_extracted += num_current * pow(10, count_num_of_in_sourse);
                //++count_significant_num_in_source;
            }
            ++count_num_of_in_sourse;
        } else {
            break;
        }
    }

    // Extract string.
    for (unsigned long i = 0; i < str.size() - count_num_of_in_sourse; ++i) {
        str_extracted.push_back(str[i]);
    }

    // Construct answer.
    std::string ans = str_extracted;
    int num_of_decade_in_num_extracted = count_digits_in_num(num_extracted);
    int count_zeros = count_num_of_in_sourse - num_of_decade_in_num_extracted;
    if ((count_digits_in_num(num_extracted + 1) > num_of_decade_in_num_extracted) && num_extracted) {
        // If stack number overflow.
        --count_zeros;
    }
    if (num_extracted == 0 && count_num_of_in_sourse) {
        // If case if all num is zeros.
        --count_zeros;
    }
    for (int i = count_zeros; i > 0; i--) {
        ans.push_back('0');
    }
    ans += std::to_string(++num_extracted);

    return ans;
}

int main() {
    std::cout << incrementString("fo99obar99") << std::endl;
    std::cout << incrementString("foobar000") << std::endl;
    std::cout << incrementString("test") << std::endl;
    std::cout << incrementString("foobar099") << std::endl;
    std::cout << incrementString("tn00102") << std::endl;
    std::cout << incrementString("") << std::endl;
}