// [Kata] https://www.codewars.com/kata/514a6336889283a3d2000001/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu JavaScript Array Filter.

#include <vector>

std::vector<int> get_even_numbers(const std::vector<int>& arr) {
    /*Remove all even number.*/

    std::vector<int> ans;
    for(int value : arr){
        if(!(value % 2)){
            ans.push_back(value);
        }
    }
    return ans;
}

int main() {
    /*Tests.*/

    get_even_numbers({1, 9, 1, 3, 7, 4, 6, 6, 7});
}