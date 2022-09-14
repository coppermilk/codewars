// [Kata] https://www.codewars.com/kata/57a0e5c372292dd76d000d7e/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu String repeat

#include <string>
#include <iostream>

std::string repeat_str(size_t repeat, const std::string& str) {
    std::string ans;
    for(size_t i = 0; i < repeat; ++i){
        ans += str;
    }
    return ans;
}

int main(){
    std::cout << repeat_str(4, "1");
}