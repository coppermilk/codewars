// [Kata] https://www.codewars.com/kata/56cd44e1aa4ac7879200010b/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Find numbers which are divisible by given number.
#include <vector>

std::vector<int> divisible_by(const std::vector<int> &numbers, const int &divisor){
    /*Returns all numbers which are divisible by the given divisor.*/

    std::vector<int> ans;
    for(auto &number : numbers){
        if(!(number % divisor)){
            ans.push_back(number);
        }
    }
    return ans;
}

int main(){
    /*Tests.*/

    std::vector<int> test =  {1, 2, 3, 4, 5, 6};
    int test_num = 2;
    divisible_by(test, test_num);
}