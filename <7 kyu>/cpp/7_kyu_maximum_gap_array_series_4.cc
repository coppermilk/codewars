// [Kata] https://www.codewars.com/kata/5a7893ef0025e9eb50000013/train/cpp
// [User] https://www.codewars.com/users/coppermilk
// 7 kyu Maximum Gap (Array Series #4)

#include <vector>
using namespace std; 

int maxGap(vector <int> numbers)
{
    std::sort(numbers.begin(), numbers.end());
    int max_gap = 0;
    for (unsigned long i = 0; i < numbers.size() - 1; ++i) {
        max_gap = std::max(max_gap, numbers[i + 1] - numbers[i]);
    }
    return max_gap;
}
