#include <iostream>
#include <vector>

#define DEBUG

#ifdef DEBUG

#include <ctime>

#endif

int FindOutlier(const std::vector<int> &arr) {

#ifdef DEBUG
    unsigned int start_time =  clock();
#endif // DEBUG

    // odd number  - 1 3 5 7
    // even number - 2 4 6 8
    int result;
    std::vector<int> odd_numbers;
    std::vector<int> even_numbers;

    for (auto &i: arr) {
        if (i % 2) {
            odd_numbers.push_back(i);
        } else {
            even_numbers.push_back(i);
        }
        // If outlier find
        if (std::min(even_numbers.size(), odd_numbers.size()) == 1
            && std::max(even_numbers.size(), odd_numbers.size()) >= 2) {
            break;
        }
    }

    if (even_numbers.size() > odd_numbers.size()) {
        result = odd_numbers[0];
    } else {
        result = even_numbers[0];
    }
#ifdef DEBUG
    unsigned int end_time =  clock();
    std::cout << end_time - start_time << ": " ;
#endif // DEBUG
    return result;
}

int main() {
    std::cout << FindOutlier({2, 3, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3}) << std::endl;
    std::cout << FindOutlier({1, 2, 3}) << std::endl;
    std::cout << FindOutlier({4, 1, 3, 5, 9}) << std::endl;

    return 0;
}
