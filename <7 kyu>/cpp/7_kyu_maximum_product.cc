// [Kata] https://www.codewars.com/kata/5a4138acf28b82aa43000117/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Maximum Product

#include <vector>
#include <climits>

using namespace std;

int adjacentElementsProduct(vector<int> inputArray) {
    /*Find the maximum product obtained from multiplying 2 adjacent numbers in the array.*/

    int max_product = INT_MIN;
    int current_product;
    for (unsigned int i = 1; i < inputArray.size(); ++i) {
        current_product = inputArray[i - 1] * inputArray[i];
        if (current_product > max_product) {
            max_product = current_product;
        }
    }
    return max_product;
}

int main() {
    /*Tests.*/

    vector<int> test = {9, 5, 10, 2, 24, -1, -48};
    adjacentElementsProduct(test);
}