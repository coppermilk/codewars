#include <vector>
#include <numeric>

double calcAverage(const std::vector<int> &values) {
    /*Calculate average.*/

    return std::accumulate(values.begin(), values.end(), 0.0) / (double) values.size();
}

int main() {
    /*Tests.*/

    calcAverage({4, 2, 1});
    return 0;
}
