// [Kata] https://www.codewars.com/kata/5a092d9e46d843b9db000064/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Array element parity.

#include <string>
#include <vector>

std::vector<int> solve(const std::string& s){
    /* Return a list of ints detailing the count of
       uppercase letters, lowercase, numbers and special characters.*/
    int uppercase =0;
    int lowercase = 0;
    int numbers = 0;
    int special_characters = 0;

    for(auto &ch : s){
        if(isupper(ch)){
            ++uppercase;
        }else if(islower(ch)){
            ++lowercase;
        }else if(isdigit(ch)){
            ++numbers;
        }else{
            ++special_characters;
        }
    }
    return {uppercase,lowercase, numbers, special_characters };
}

int main() {
    /*Tests.*/

    solve("RYT'>s&gO-.CM9AKeH?,5317tWGpS<*x2ukXZD");
}