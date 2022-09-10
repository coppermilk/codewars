#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int count_sheep(vector<bool> arr) {
    return accumulate(arr.begin(), arr.end(), 0);
}

int count_sheep2(const vector<bool> &arr) {
    return count(arr.cbegin(), arr.cend(), true);
}

int main() {
    vector<bool> test1 = {true, true, true, false,
                          true, true, true, true,
                          true, false, true, false,
                          true, false, false, true,
                          true, true, true, true,
                          false, false, true, true};
    count_sheep(test1);
    count_sheep2(test1);
    return 0;
}