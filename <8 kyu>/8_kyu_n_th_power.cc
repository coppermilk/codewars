// [Kata] https://www.codewars.com/kata/57d814e4950d8489720008db/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 8 kyu N-th Power.

#include <vector>

int pow (const int &n, const int &e) {
    /* Finds 'n' raised to the power of 'e'.*/

    int i = 1;
    for(int j = 1; j <= e; j++){
        i *= n;
    }
    return i;
}

int index(const std::vector<int> &vector, const int &n) {
    /*Find the N-th power of the element in the array with the index N.
    If N is outside the array, then return -1.*/

    return (unsigned long)n>= vector.size() ? -1 : pow(vector[n], n);
}

int main(){
    /*Tests.*/

    index({ 1,2,3,4 }, 2);
}