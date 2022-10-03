//
// Created by zvgdb on 29.09.22.
//
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> Pendulum(vector<int> values) {
// Your Code is Here .. Enjoy !!
    std::sort(values.begin(), values.end(), std::greater());
    vector<int> ans;
    for (int i = 0; i < values.size() / 2; ++i) {
        std::swap(values[i], values[values.size() - 1 - i]);
    }
    return values;
}

int main() {
    vector<int> vec = {27,27,19,21,22,28,24};
    auto v = Pendulum(vec);
    for(auto i : v){
        std::cout << i << " ";
    }
    std::cout << std::endl << "28,27,22,19,21,24,27";
}