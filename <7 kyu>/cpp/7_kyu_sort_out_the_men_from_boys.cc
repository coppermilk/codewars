// [Kata] https://www.codewars.com/kata/5af15a37de4c7f223e00012d/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Sort Out The Men From Boys.

#include <vector>
#include <algorithm>

using namespace std;

vector<int> menFromBoys(vector<int> values) {
    vector<int> odd;
    vector<int> even;

    for (auto value: values) {
        value % 2 ? odd.push_back(value) : even.push_back(value);
    }

    std::sort(odd.begin(), odd.end(), std::greater());
    std::sort(even.begin(), even.end(), std::less());

    odd.erase(std::unique(odd.begin(), odd.end()), odd.end());
    even.erase(std::unique(even.begin(), even.end()), even.end());

    // Concatenating two std::vectors.
    odd.insert(odd.begin(), even.begin(), even.end());
    return odd;
}

int main() {
    menFromBoys({49, 818, -282, 900, 928, 281, -282, -1});
    // -282,818,900,928,281,49,-1}
}