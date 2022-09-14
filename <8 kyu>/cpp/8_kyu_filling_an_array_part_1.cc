// [Kata] https://www.codewars.com/kata/571d42206414b103dc0006a1/train/cpp
// [User] https://www.codewars.com/users/coppermilk

#include <vector>
#include <numeric>

// First solution.
std::vector<int> arr(int n = 0) {
    /*Produces an array with the numbers 0 to n-1.*/

    std::vector<int> v;
    v.resize(n);
    for (int i = 0; i < n; ++i) {
        v[i] = i;
    }
    return v;
}

//Second solution.
std::vector<int> arr2(int n = 0) {
    /*Produces an array with the numbers 0 to n-1.*/

    std::vector<int> v(n);
    std::iota(v.begin(), v.end(), 0);
    return v;
}

int main() {
    arr2(42);
    return 0;
}