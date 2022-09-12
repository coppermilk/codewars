// [Kata] https://www.codewars.com/kata/55ecd718f46fba02e5000029/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu What is between?

#include <vector>

std::vector<int> between(int start, int end) {
    /*Return an array of all integers between the input parameters, including them.*/

    std::vector<int> ans;
    for(int i = start; i <= end; ++i){
        ans.push_back(i);
    }
    return ans;
}

int main(){
    /*Tests.*/

    between(-6, 6);
}