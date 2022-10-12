#include <vector>
#include <map>
#include <iostream>

//
// Created by zvgdb on 11.10.22.
//
static long findMissing(std::vector<long> list) {
    /* Receives a list, list size will always be at least 3 numbers.
     * The missing term will never be the first or last one.*/

    bool is_function_decreasing = list[0] - list[1] > 0;
    std::map<long, long> deltas_count;

    unsigned long missing_index;
    long delta = 0;
    long delta_x2 = 0;

    for (unsigned long i = 1; i < list.size(); ++i) {
        delta = list[i] - list[i - 1];
        delta = delta < 0 ? delta * -1 : delta;
        if (delta_x2 < delta) {
            std::swap(delta_x2, delta);
            missing_index = i;
            if (delta && delta_x2) {
                break;
            }
        }
    }
    return list[missing_index] - (is_function_decreasing ? delta * -1 : delta);

}

int main() {
    std::vector<long> l{-2, -5, -11};
    //std::vector<long> l {1, 2, 4};
    std::cout << findMissing(l);
}