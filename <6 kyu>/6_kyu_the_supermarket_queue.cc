#include <vector>
#include <algorithm>


long queueTime(const std::vector<int>& customer_times, int checkout_tills) {
    /*Calculate the total time required for all the customers to check out!*/

    std::vector<int> checkout_till_total_times(checkout_tills);
    for (auto &time: customer_times) {
        *std::min_element(checkout_till_total_times.begin(), checkout_till_total_times.end()) += time;
    }
    return *std::max_element(checkout_till_total_times.begin(), checkout_till_total_times.end());
}

int main() {

    queueTime(std::vector<int>{10, 2, 3, 3}, 2);
}