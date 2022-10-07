// [Kata] https://www.codewars.com/kata/54e6533c92449cc251001667/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 6 kyu Unique In Order.

#include <string>
#include <vector>
#include <algorithm>

// First solution.
template<typename T>
std::vector<T> uniqueInOrder(const std::vector<T> &iterable) {
    /* Returns a list of items without any elements with the same
     * value next to each other and preserving the original order of elements.*/
    std::vector<T> ans;
    if (iterable.empty()) {
        return ans;
    } else {
        // Insert first element.
        T before = (iterable[0]);
        ans.push_back(before);

        // Insert rest element.
        for (unsigned long i = 1; i < iterable.size(); ++i) {
            T current = iterable[i];
            if (before != current) {
                ans.push_back(current);
                before = current;
            }
        }
    }
    return ans;
}

std::vector<char> uniqueInOrder(const std::string &iterable) {

    /* Returns a list of items without any elements with the same
     * value next to each other and preserving the original order of elements.*/

    std::vector<char> ans;
    char before_ch = 0;
    for (auto current_ch: iterable) {
        if (before_ch != current_ch) {
            ans.push_back(current_ch);
            before_ch = current_ch;
        }
    }
    return ans;
}

//Second solution.
template<typename T>
std::vector<T> uniqueInOrder2(const std::vector<T> &iterable) {
    /* Returns a list of items without any elements with the same
     * value next to each other and preserving the original order of elements.*/
    std::vector<T> ans;
    std::unique_copy(iterable.begin(), iterable.end(), std::back_inserter(ans));
    return ans;
}

std::vector<char> uniqueInOrder2(const std::string &iterable) {

    /* Returns a list of items without any elements with the same
     * value next to each other and preserving the original order of elements.*/

    std::vector<char> ans;
    std::unique_copy(iterable.begin(), iterable.end(), std::back_inserter(ans));
    return ans;
}


int main() {
    using VI = std::vector<int>;
    using VC = std::vector<char>;
    uniqueInOrder(VI{1, 2, 3, 3});

    uniqueInOrder("AAAABBBCCDAABBB");
}