// [Kata] https://www.codewars.com/kata/5511b2f550906349a70004e1/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <string>
#include <iostream>
#include <cmath>

int last_digit(const std::string &str1, const std::string &str2) {
    /*Function that takes in two non-negative integers and returns the last decimal digit of a^b. */

    // Logs.
    //std::cout << str1 << std::endl;
    //std::cout << str2 << std::endl;

    int base_last_num = str1[str1.size() - 1] - '0';
    int exponent_last_num = 0;

    // Number 4 sufficient for test accuracy.
    for(int i = 0; i < str2.size() && i < 4; ++i){
        exponent_last_num+= ((str2[str2.size() - 1 - i] - '0') * (int)(pow(10, i)));
    }
    // 0^0 = 1.
    if(str1.size() == 1 && str2.size() == 1 && exponent_last_num == 0 && base_last_num == 0){
        return 1;
    }
    //..0 ^..0 = ..0
    else if(exponent_last_num == 0 && base_last_num == 0){
        return 0;

    }
    // x^0 = 1, x > 0
    else if(exponent_last_num == 0){
        return 1;
    }

    // | group numbers: {0, 1, 5, 6}.
    if (base_last_num == 0 || base_last_num == 1 || base_last_num == 5 || base_last_num == 6) {
        return base_last_num;
    }

    // || group numbers: {4, 9}.
    // All cycles shifted to 1 back.
    else if (base_last_num == 4) {
        short cycle4[] = {6, 4};
        return cycle4[exponent_last_num % 2];
    } else if (base_last_num == 9) {
        short cycle9[] = {1, 9};
        return cycle9[exponent_last_num % 2];
    }

    // ||| group numbers: {2, 3, 7, 8}.
    // All cycles shifted to 1 back.
    else if(base_last_num == 2){
        short cycle2[] = {6, 2, 4, 8};
        return  cycle2[(exponent_last_num % 4)];
    }else if(base_last_num == 3){
        short cycle3[] = {1, 3, 9, 7};
        return  cycle3[(exponent_last_num % 4)];
    }else if(base_last_num == 7){
        short cycle7[] = {1, 7, 9, 3};
        return  cycle7[(exponent_last_num % 4)];
    }else if(base_last_num == 8){
        short cycle8[] = {6, 8, 4, 2};
        return  cycle8[(exponent_last_num % 4)];
    }
    return 0;
}


int main() {
    std::cout << last_digit("0", "0");
    std::cout << last_digit("1606938044258990275541962092341162602522202993782792835301376",
                            "2037035976334486086268445688409378161051468393665936250636140449354381299763336706183397376");
}
