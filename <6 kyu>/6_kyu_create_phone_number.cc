// [Kata] https://www.codewars.com/kata/525f50e3b73515a6db000b83/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Create Phone Number

#include <string>
#include <iostream>

std::string createPhoneNumber(const int arr[10]) {
    /*Returns a string of those numbers in the form of a phone number.*/

    std::string number_code;
    std::string number_middle;
    std::string number_end;

    for (int i = 0; i < 3; ++i) {
        number_code += std::to_string(arr[i]);
    }
    for (int i = 3; i < 6; ++i) {
        number_middle += std::to_string(arr[i]);
    }
    for (int i = 6; i < 10; ++i) {
        number_end += std::to_string(arr[i]);
    }
    return {"(" + number_code + ")" + " " + number_middle + "-" + number_end};
}

int main() {
    /*Tests.*/
    const int arr[] = {1, 2, 4, 4, 5, 6, 7, 8, 9, 0};
    std::cout << createPhoneNumber(arr);
    return 0;
}