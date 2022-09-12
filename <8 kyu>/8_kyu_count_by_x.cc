// [Kata] https://www.codewars.com/kata/5513795bd3fafb56c200049e/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Count by X.

#include <vector>
std::vector<int> countBy(int x,int n){
    /*Return an array of the first n multiples of x.*/

    std::vector<int> ans;
    int i;
    int j;
    for(i = x, j = 0; j < n; i += x, ++j){
        ans.push_back(i);
    }
    return ans;
}

int main(){
    /*Tests.*/

    countBy(2, 5);
}