// [Kata] https://www.codewars.com/kata/577a98a6ae28071780000989/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu Find Maximum and Minimum Values of a List.

#include <algorithm>
#include <vector>
using namespace std;

int min(vector<int> list){
    /*Find min element.*/

    return *min_element(list.begin(), list.end());
}

int max(vector<int> list){
    /*Find max element.*/

    return *max_element(list.begin(), list.end());
}

int main(){
    /*Tests.*/

    min({-52, 56, 30, 29, -54, 0, -110});
    max({-52, 56, 30, 29, -54, 0, -110});
    return 0;
}