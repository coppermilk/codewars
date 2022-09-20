#include <string>
#include <iostream>

int largest_five_digits(const std::string &digits) {
    /*Returns the greatest sequence of five consecutive digits found within the number given. */
    const int SHIFT = 5;
    int max_num = 0;
    int current_num;
    for (unsigned long i = 0; i <= digits.size() - SHIFT; ++i) {
        current_num = (int)strtol(digits.substr(i, SHIFT).c_str(), nullptr, 10);
        std::cout << current_num << std::endl;
        if(current_num > max_num){
            max_num = current_num;
        }
    }
    return max_num;
}


int main() {
    /*Tests.*/
    std::cout << largest_five_digits("1234567890");
    //std::cout << isAnagram("foefet", "toffee");
}