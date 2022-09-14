// [Kata] https://www.codewars.com/kata/55a2d7ebe362935a210000b2/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Find the smallest integer in the array

#include <vector>
#include <algorithm>

using namespace std;

int findSmallest(vector<int> list) {
    int min = list.front();
    for (int &i: list) {
        min = std::min(min, i);
    }
    return min;
}

int findSmallest2(vector<int> list){
    return *min_element(list.begin(), list.end());
}

int main(){
    findSmallest({1, 2, -3});
    findSmallest2({1, 2, -3});
    return 0;
}