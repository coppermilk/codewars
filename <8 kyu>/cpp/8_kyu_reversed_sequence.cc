// [Kata] https://www.codewars.com/kata/5a00e05cc374cb34d100000d/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Reversed sequence.

#include <vector>

std::vector<int> reverseSeq(const int &n) {
    /*Build a function that returns an array of integers from n to 1 where n>0.*/

    std::vector<int> ans;
    for(int i = n; i > 0; --i){
        ans.push_back(i);
    }
    return ans;
}

int main(){
    /*Tests.*/

    reverseSeq(10);
    return 0;
}