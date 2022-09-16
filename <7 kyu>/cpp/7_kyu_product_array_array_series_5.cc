// [Kata] https://www.codewars.com/kata/5a905c2157c562994900009d/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Product Array (Array Series #5).

#include <vector>
#include <numeric>
#include <algorithm>

std::vector<int> productArray(std::vector<int> numbers) {
    /*Construct a product array Of same size Such That prod[i] is equal
      to The Product of all the elements of Arr[] except Arr[i].*/

    int total_product = std::accumulate(numbers.begin(), numbers.end(), 1, std::multiplies());
    std::vector<int> product_array;
    for (int &number: numbers) {
        product_array.push_back(total_product / number);
    }
    return product_array;
}

int main() {
    /*Tests.*/

    productArray({13, 10, 5, 2, 9});
    return 0;
}