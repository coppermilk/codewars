// [Kata] https://www.codewars.com/kata/5a431c0de1ce0ec33a00000c/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Even numbers in an array.

#include <vector>

std::vector<int> evenNumbers(std::vector<int> arr, int n) {
    /*Find last N even numbers in array.*/

    std::vector<int> ans;
    int k = 0;
    for(int i = (int)arr.size() -1; 0 <= i; --i){
        if(!(arr[i] % 2)){
            ans.insert(ans.begin(), arr[i]);
            ++k;
        }
        if(k == n){
            break;
        }
    }
    return ans;
}

int main(){
    /*Tests.*/

    evenNumbers({1, 2, 3, 4, 5, 6, 7, 8, 9}, 3);
    return 0;
}